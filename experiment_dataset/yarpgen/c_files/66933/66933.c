/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 354529534;
    var_20 = -90;
    var_21 = ((354529537 >> (86 - 84)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        var_22 -= var_6;
        var_23 = (((var_17 || 3864688246) % (arr_1 [i_0 + 3])));
        arr_2 [i_0 + 4] = (!3162121710);
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {
                    arr_8 [i_1] = ((~(arr_3 [i_1 - 1] [i_2 - 1])));
                    var_24 = (var_15 != var_11);

                    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                    {
                        var_25 = (!65442);
                        var_26 ^= var_6;

                        for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                        {
                            var_27 = (((arr_1 [i_1 - 3]) ? (arr_1 [i_1 - 1]) : var_0));
                            var_28 = var_8;
                        }
                        for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                        {
                            var_29 = var_3;
                            var_30 = ((var_14 | (arr_4 [i_3])));
                            arr_16 [5] [i_1] = ((1 >> (65442 - 65419)));
                            var_31 = ((~(arr_0 [i_0 + 3])));
                        }
                        for (int i_6 = 4; i_6 < 9;i_6 += 1)
                        {
                            var_32 = (min(var_32, (arr_9 [i_0 + 2] [i_2 + 2] [i_1 + 1])));
                            arr_19 [i_0 + 2] [i_1 + 1] [i_2] [i_6] = 868;
                            var_33 = (max(var_33, ((((-4467835517530508356 == 119) != 0)))));
                        }
                        arr_20 [i_0] [i_3] [i_2] [i_3] [i_3] = (arr_9 [i_1 - 1] [i_1 - 3] [i_1 + 1]);
                        var_34 *= ((var_9 ? (arr_5 [i_1 - 1] [i_2] [i_3]) : var_17));
                    }
                    for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
                    {
                        var_35 = (4467835517530508356 * 0);
                        var_36 = (arr_14 [i_0 + 2] [i_1] [i_1] [i_1 - 3] [i_2] [i_2 - 3]);
                    }
                    var_37 = (arr_12 [i_2] [i_2 - 1] [i_2 + 1] [i_2] [i_2 - 1]);
                    arr_24 [i_0] [i_1] [i_2] [i_2] = (!var_16);
                }
            }
        }
    }
    var_38 = ((var_6 ? 80 : -4467835517530508342));
    #pragma endscop
}
