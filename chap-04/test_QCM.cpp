class A {
public:
    virtual int  fcn1(int p1, int p2) const { return p1 * p2; }
    virtual void fcn2(const char* str) = 0;
    virtual void fcn3(bool) {}
    const char*  fcn4() { return "artichaut"; }
};

class B : A {
public:
    int fcn1(int p1, int p2) { return p1 + p2; }

    void fcn2(const char*) override {}

    void fcn3(bool b) {
        if (b) {
            A::fcn3(b);
        }
    }

    const char* fcn4() { return "sopalin"; }
};

int main() {
    A* a = new B();

    a->fcn1(1, 3);
    a->fcn2("la la la");
    a->fcn3(false);
    a->fcn4();

    return 0;
}

// question 4:
// On ne peut pas convertir B au type A car A a été mis sans le mot-clef
// "public" dans la classe B. la classe B redéfinira donc les
// fonctions-membres de la classe A en tant que fonction-membre privée qui
// seront une redéfinition des fonctions-membres publique de la classe B.
// Pour corriger ce problème, il faut ajouter "public" devant "A" et derrière "class B".

// question 5:
// Si on veut que fcn4() affiche bien sopalin lorsqu'on utilise un type B il faudra ajouter:
//- dans la classe A:
// le mot-clef "virtual" pour la fonction-membre fcn4().

//- dans la classe B:
// le mot-clef "override" pour la fonction-membre fcn4().
// Cela fait, nous aurons bien "sopalin" si on utilise un B et "artichaut" si on utilise un A.

// question 6:
// Si on veut obtenir le calcul "+" de B au lieu de "*" avec le A il
// faut ajouter dans B::fcn1() le mot-clef "override".
// Cela fait, pour a->fcn1(1,3) on aura 4 au lieu de 3.
