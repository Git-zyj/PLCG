/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((max(7324249874070048771, 524437527))) ? 7500154363528825582 : 11122494199639502845)) / 11122494199639502844));
    var_18 = ((~((2536979410 >> (((var_15 & 4095) - 4078))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((max((arr_1 [i_0] [i_0]), 11122494199639502859)));
        var_19 -= 11122494199639502859;
        arr_3 [i_0] = (min(7324249874070048771, 1757987885));
        arr_4 [i_0] = ((((((((-(arr_0 [i_0])))) % 4294963188))) ? (((((arr_1 [i_0] [i_0]) ? 4294963197 : 12813683336505168061)))) : (arr_0 [i_0])));
        arr_5 [i_0] = ((!(arr_0 [i_0])));
    }
    #pragma endscop
}
