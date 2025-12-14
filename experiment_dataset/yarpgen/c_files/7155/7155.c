/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_12 = -4221824808775460589;
        var_13 = 5643398356565821179;
        var_14 ^= ((((max(var_7, 1))) ^ (var_1 & 0)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_15 = ((-5643398356565821211 & -10) * (5643398356565821179 % -5643398356565821179));
        var_16 ^= (0 * var_8);
        arr_6 [i_1] [i_1] = var_8;
    }
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        arr_9 [i_2 + 1] [i_2] = (((~5115023086161806426) ^ ((max(2270525987, -30)))));

        for (int i_3 = 3; i_3 < 20;i_3 += 1)
        {
            var_17 = var_4;
            arr_12 [i_2] [i_2] [i_2] = 19;
            var_18 *= (-var_11 % var_6);
            var_19 += (((-89 / -5643398356565821179) / ((max(2270525987, var_2)))));
            var_20 = (min(45, 0));
        }
        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_21 += (min(var_5, var_6));
                arr_19 [i_2 + 1] [i_4] [i_5] [i_5] = ((!((min(41286987, -16)))));
            }
            arr_20 [i_2] [i_2] [i_4 - 1] = ((405416679032662820 >> (((min(var_7, -5643398356565821171)) + 5643398356565821207))));
            arr_21 [i_4] = ((+(min((1 >> var_11), (max(-4747, var_8))))));
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 19;i_7 += 1)
                {
                    {
                        var_22 = (!2024441325);
                        arr_27 [13] [i_6 - 1] [i_6] [i_6] [i_2] [i_2] = ((2270525970 + (-5643398356565821179 || 1)));
                        var_23 += 24;
                    }
                }
            }
        }
        var_24 = (max(2680078618459506450, 15377484871696119600));
        var_25 = (((max(-5643398356565821193, 1)) <= (((min(10353, 62540))))));
        arr_28 [i_2 - 1] [i_2 - 1] = (((0 * -32233) * var_8));
    }
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        var_26 += 3404403153880241221;
        var_27 = (2270525987 - var_8);
        arr_31 [i_8] = var_7;
        arr_32 [i_8] = ((-(-127 - 1)));
    }
    var_28 = (!(((~var_6) || var_1)));
    var_29 = (!-7467450244230299239);
    #pragma endscop
}
