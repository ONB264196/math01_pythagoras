#include"libOne.h"
void gmain() {
    window(1000, 1000);
    let a, b, c;
    while (notQuit) {
        a = mathMouseX;
        b = mathMouseY;
        c = sqrt(a * a + b * b);

        clear(224, 225, 204);
        mathAxis(9.1);

        strokeWeight(3);
        stroke(31, 30, 51, 200);
        mathLine(0, 0, a, 0);
        mathLine(0, 0, a, b);
        mathLine(a, 0, a, b);

        textSize(50);
        fill(0, 0, 0, 60);
        text("íÍï” = " + a, 0, 60);
        text("çÇÇ≥ = " + b, 0, 120);
        text("éŒï” = " + c, 0, 180);
    }
}