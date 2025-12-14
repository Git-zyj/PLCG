/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_0 ? var_8 : var_4));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (min(var_10, ((((arr_0 [i_0]) ? (38415 | var_5) : (~0))))));

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            var_14 = var_5;
            var_15 ^= ((!((((~var_2) ? (~var_4) : (~var_8))))));
            var_16 = (((!((min(var_11, (arr_1 [i_0] [i_0])))))));
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                arr_11 [i_0] [i_2 - 2] [i_3] = (!270277009);
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_17 |= ((~(arr_7 [i_3] [i_5])));
                            arr_18 [i_0] [i_3] [i_5] = ((127 ? 8813112363470001320 : 242067449));
                            arr_19 [i_3] = 125;
                        }
                    }
                }
                arr_20 [i_2] [i_2 + 1] [i_2] |= (((arr_15 [i_0] [i_0] [i_0] [i_0]) - -1448631617));
                var_18 = -var_5;
            }
            for (int i_6 = 2; i_6 < 18;i_6 += 1)
            {
                arr_23 [1] [i_2] [i_6] [i_2] = ((var_5 * (arr_9 [i_6 - 1] [i_6 - 2] [i_6 - 1])));
                var_19 = (((arr_17 [i_6] [i_6 + 1] [i_2] [i_6] [i_2] [i_2] [i_2]) ? 1976027612973832324 : (-2147483647 - 1)));
                var_20 ^= var_2;
            }
            arr_24 [i_0] = ((var_0 << (((arr_21 [i_0] [i_2 - 2]) - 1208508477))));
            var_21 = 3848;
        }
        var_22 = (max(var_22, (((+(min((arr_1 [i_0] [i_0]), (var_2 % var_5))))))));
    }
    /* vectorizable */
    for (int i_7 = 4; i_7 < 10;i_7 += 1)
    {
        var_23 += 255;
        var_24 = (max(var_24, (var_11 + var_5)));
    }
    var_25 &= ((-((((0 ? 3318276176 : var_6))))));
    #pragma endscop
}
