/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_13 *= (min(((max((arr_3 [i_1]), -0))), var_12));
                arr_6 [i_0] = ((!(((var_3 - (var_7 || 3285260179))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        arr_16 [i_2] [i_3 + 2] [i_4] [i_5] = (((arr_14 [i_2]) ? var_10 : ((8123 ? var_6 : var_5))));
                        var_14 = (((arr_3 [i_2]) > var_3));
                        arr_17 [i_2] = var_10;

                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            arr_20 [i_2] [i_3] [i_4] [i_5 + 2] [i_6] [i_6] = 1009707124;
                            arr_21 [i_2] [i_2] [i_2] [i_2] [i_2] = var_6;
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_24 [i_7] = var_4;
                            var_15 -= var_2;
                            var_16 = ((~((-20655 ? var_3 : var_1))));
                            var_17 = (((var_6 << (arr_22 [i_2] [i_2] [i_2] [8]))) - (((~(arr_3 [i_7])))));
                            arr_25 [i_5] [i_3] [i_4] [i_5] [i_7] [i_3] [i_7] = (arr_0 [i_3 - 2] [i_5 - 2]);
                        }
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            var_18 = ((var_10 & (arr_11 [10] [i_4] [i_5] [i_8])));
                            arr_28 [i_8] [i_5 + 1] [i_4] [0] [i_8] = (!var_5);
                            var_19 = (((arr_1 [i_8]) ? (arr_1 [i_8]) : (arr_1 [i_8])));
                        }
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            var_20 ^= (arr_8 [i_3 - 1] [i_3 - 2]);
                            var_21 = (arr_8 [i_3 - 2] [i_3 - 2]);
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            {
                                var_22 = (((((((min(0, 0))) ? (!var_8) : var_6))) ? (arr_7 [i_3] [i_10]) : (max((~var_3), ((-1 ^ (arr_3 [i_2])))))));
                                var_23 = -2235170953126511871;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 17;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 20;i_13 += 1)
                        {
                            {
                                arr_42 [i_2] [i_3] [i_4] [i_12] [i_13] [i_13] [i_2] = var_1;
                                arr_43 [i_3] [i_4] [i_12] = ((var_9 == (min((arr_8 [i_3 - 1] [i_12 - 1]), var_5))));
                                var_24 = ((-(max(3285260188, (arr_11 [i_2] [i_3 - 2] [i_3 - 2] [i_3 - 2])))));
                                var_25 = (!(~14264824976316311229));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
