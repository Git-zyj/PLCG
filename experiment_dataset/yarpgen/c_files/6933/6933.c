/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((!var_6) && ((max(-83, 3916909064))))));
    var_14 ^= (var_3 - var_3);

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_1 [i_0]) < (((-3738717282824608147 || (arr_1 [i_0]))))));
        var_15 ^= ((!(arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_16 -= (((arr_6 [i_2] [i_1]) | (arr_3 [i_2])));
            arr_7 [i_1] [i_1] [i_1] |= ((+(((arr_5 [i_1]) ? 378058231 : var_11))));
            var_17 = 378058229;
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            arr_11 [i_3] [i_1] [i_1] = 9223372036854775807;
            arr_12 [i_1] [i_1] [i_1] = (((81084539780593447 / 83) ? (((-6056670817916039212 ? -1 : 7695))) : 272496746154294781));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    {
                        var_18 = (max(var_18, (((~(((arr_14 [0] [i_4] [i_3] [i_1]) ? 1851563091 : 81084539780593434)))))));

                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            arr_20 [i_5] [i_3] [i_3] [i_3] [i_5] [i_3] = (((-6369 ? -9223372036854775807 : 1)));
                            arr_21 [i_5] [i_5] [i_4] [i_5] [i_5] = ((!(arr_14 [i_1] [i_3] [i_5] [i_6])));
                            arr_22 [3] [i_3] [i_5] [i_5] [i_6] = (((-27213 + 2147483647) >> (((arr_3 [i_4]) - 3165451818521707375))));
                        }
                        var_19 = ((-(arr_10 [i_1])));
                    }
                }
            }
            var_20 = (arr_9 [i_3] [i_3] [i_1]);
            arr_23 [i_1] [i_1] = ((3147867806 ? 42812 : 24097));
        }
        var_21 = var_9;
    }
    var_22 = 0;
    #pragma endscop
}
