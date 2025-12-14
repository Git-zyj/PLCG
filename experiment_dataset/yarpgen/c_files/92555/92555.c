/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = ((~(max((((arr_2 [i_1] [i_0]) ? 8866461766385664 : var_18)), 1))));

                for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
                {
                    var_21 = (((((((var_19 ? (arr_4 [i_2] [i_0]) : 35183298347008))) ? var_2 : (arr_6 [i_2] [i_1] [i_0]))) == (((-1031143655 ? 2197689478 : 2097277818)))));
                    arr_9 [i_0] [i_0] [i_2] [i_1] = max(((((((arr_7 [i_1] [i_0]) ? 127 : 2197689478))) ? (arr_8 [i_0] [i_0] [i_2]) : ((var_3 ? var_14 : var_9)))), var_18);
                    arr_10 [i_0] [i_0] [i_0] = (((~23075) < var_10));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            var_22 -= var_6;
                            arr_17 [i_0] [i_3] [i_0] [i_0] [i_4] = -1122920001;
                        }
                        arr_18 [i_3] [i_1] [i_1] [i_0] = (arr_14 [i_0] [i_1] [i_2] [i_3]);
                        var_23 += 0;
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        var_24 = (min((max((arr_19 [i_1]), ((var_8 ? var_2 : 0)))), var_17));
                        arr_22 [i_2] = (arr_7 [i_0] [i_1]);
                    }
                }
                for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                {
                    var_25 = ((arr_8 [i_6] [i_1] [i_0]) ? ((~(min(805306368, (arr_1 [i_6] [i_1]))))) : (((~1) ? (~var_19) : (arr_0 [i_6]))));

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            arr_31 [i_8] [i_7] [i_1] [i_1] [i_1] [i_1] [i_0] = var_19;
                            arr_32 [i_1] [i_1] [i_1] = (((max(var_0, (arr_20 [i_6] [i_1] [i_6] [i_7]))) / (((!(arr_27 [i_0] [i_1] [i_6] [i_1] [i_8]))))));
                            var_26 *= ((((arr_5 [i_7]) ? (arr_5 [i_7]) : (arr_5 [i_7]))));
                            var_27 = 2097277822;
                        }
                        var_28 = arr_4 [i_1] [i_0];
                        arr_33 [i_7] [i_6] [i_0] [i_0] = (9493309362024165896 ? -2 : -27626);
                    }
                }
            }
        }
    }
    var_29 &= var_19;
    #pragma endscop
}
