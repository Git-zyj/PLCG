/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        var_14 = -76;
        var_15 = (min(var_15, 24));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = 1;
        var_16 = -16;

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_8 [i_1] = 1;
            var_17 += -12;
            var_18 = (max(var_18, 1));
        }
        for (int i_3 = 2; i_3 < 18;i_3 += 1) /* same iter space */
        {
            arr_13 [i_1 - 1] [i_1] [i_1] = 21;
            var_19 = 127;
        }
        for (int i_4 = 2; i_4 < 18;i_4 += 1) /* same iter space */
        {
            arr_16 [i_1] [i_1] = -68;
            var_20 = 14274;
            arr_17 [i_1] [i_4 - 2] = -18113;
        }
        arr_18 [i_1] [i_1] = -30;
    }
    for (int i_5 = 3; i_5 < 22;i_5 += 1)
    {
        var_21 = 1;
        arr_21 [5] = 9223372036854775807;
        arr_22 [i_5 + 1] = 4032;
        var_22 -= 65520;
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        arr_25 [i_6] = -2767405544643544186;
        var_23 = -2767405544643544158;
        var_24 = 88;
    }
    var_25 = var_3;
    var_26 = var_0;
    #pragma endscop
}
