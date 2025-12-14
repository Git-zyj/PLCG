/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;
    var_14 = (max(var_4, var_7));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_2 [6] [i_0] = ((var_9 != (1108760507 % 21581)));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_5 [17] [i_1] = var_7;
            arr_6 [i_1] [i_1] [i_0] = 21585;
            arr_7 [i_0] [i_1] = 43978;
            var_15 = (max(var_15, 668143095));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_16 = var_0;
                        var_17 = 141;
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            arr_16 [i_4] [i_4] = (var_12 >> (1546321398 - 1546321373));

            for (int i_5 = 2; i_5 < 20;i_5 += 1)
            {
                var_18 = 17492828781520665892;
                arr_20 [i_0] [i_4] [i_5] = var_3;
            }
            var_19 += 1;
            arr_21 [i_0] [i_4] [i_4] = (((-2147483647 - 1) ^ 953915292188885723));
        }
        /* vectorizable */
        for (int i_6 = 4; i_6 < 23;i_6 += 1)
        {
            var_20 = 465760105;

            for (int i_7 = 1; i_7 < 23;i_7 += 1)
            {
                var_21 = var_10;
                var_22 = (min(var_22, var_6));
            }
            for (int i_8 = 1; i_8 < 22;i_8 += 1)
            {
                arr_30 [i_6] [i_6] [i_0 - 1] [i_6] = 7023545408595643918;
                var_23 = var_7;
            }
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                var_24 = 2748645865;
                arr_33 [i_6] [i_0] [10] [i_9] = 2560256544;
            }
            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                arr_36 [i_0] [i_6] [i_6] [i_6] = (-2147483632 / -2113691733);
                var_25 -= 0;
                arr_37 [i_0] [i_0] [i_6] [i_10] = 260046848;
                var_26 = 21581;
            }
            arr_38 [i_6] [i_0] [i_6] = 65523;
            var_27 += 3;
            arr_39 [i_0] [i_0] [i_6] = (9223372036854775807 / var_2);
        }
        arr_40 [i_0] = ((min(384, var_8)));
    }
    #pragma endscop
}
