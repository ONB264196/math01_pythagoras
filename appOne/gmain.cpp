#define _キー操作_

#ifdef _マウス操作_
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
        text("底辺 = " + a, 0, 60);
        text("高さ = " + b, 0, 120);
        text("斜辺 = " + c, 0, 180);
    }
}
#endif

#ifdef _キー操作_
#include"libOne.h"
    let a, b, c;
void gmain() {
    window(1000, 1000);
    a = 0;
    b = 0;
    c = sqrt(a * a + b * b);
    while (notQuit) {
        if (a <= 8) {
            if (isTrigger(KEY_D)) {
                ++a;
            }
        }
        if (a >= -8) {
            if (isTrigger(KEY_A)) {
                --a;
            }
        }
        if (b <= 8) {
            if (isTrigger(KEY_W)) {
                ++b;
            }
        }
        if (b >= -8) {
            if (isTrigger(KEY_S)) {
                --b;
            }
        }

        if (a <= 8.9) {
            if (isTrigger(KEY_RIGHT)) {
                a += 0.1;
            }
        }
        if (a >= -8.9) {
            if (isTrigger(KEY_LEFT)) {
                a += -0.1;
            }
        }
        if (b <= 8.9) {
            if (isTrigger(KEY_UP)) {
                b += 0.1;
            }
        }
        if (b >= -8.9) {
            if (isTrigger(KEY_DOWN)) {
                b += -0.1;
            }
        }


        clear(224, 225, 204);
        mathAxis(9.1);

        strokeWeight(3);
        stroke(31, 30, 51, 200);
        mathLine(0, 0, a, 0);
        mathLine(0, 0, a, b);
        mathLine(a, 0, a, b);

        textSize(50);
        fill(0, 0, 0, 60);
        text("底辺 = " + a, 0, 60);
        text("高さ = " + b, 0, 120);
        text("斜辺 = " + c, 0, 180);
    }
}
#endif