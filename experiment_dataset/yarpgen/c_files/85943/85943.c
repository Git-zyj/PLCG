/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((((((arr_3 [i_0 + 1]) ? (arr_3 [i_0 + 1]) : var_0))) ? ((var_6 ? (arr_3 [i_0 + 4]) : (arr_3 [i_0 + 2]))) : (((arr_3 [i_0 + 1]) % (arr_3 [i_0 + 1])))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 8;i_3 += 1)
                    {
                        {
                            var_19 += var_17;
                            var_20 ^= var_5;

                            for (int i_4 = 2; i_4 < 8;i_4 += 1)
                            {
                                var_21 = (var_5 << var_3);
                                arr_14 [i_0] [1] [i_2] [i_3] [5] [5] [i_0] = ((((((arr_12 [i_2] [i_3 + 1] [i_2] [i_1] [i_0 + 4]) % (((arr_13 [i_0 - 1] [i_1] [i_2 + 1] [i_0] [i_4 - 1]) ? 24075 : (arr_13 [i_0] [i_1] [i_1] [i_0] [i_1])))))) ? (~var_3) : var_5));
                            }
                            for (int i_5 = 4; i_5 < 10;i_5 += 1)
                            {
                                arr_18 [i_0 + 3] [i_1] [i_0] [i_2] [i_3] [i_3] [1] = (arr_10 [i_0] [i_0] [i_0] [i_3]);
                                var_22 = (min(var_22, (((+((max((arr_9 [i_3 + 1] [10] [i_3 + 1] [i_3 + 2] [i_0 - 2]), (arr_4 [i_0] [i_5 - 3] [i_5])))))))));
                                var_23 = (-6775512492141256342 % (((max(56, 61152)))));
                            }
                            for (int i_6 = 1; i_6 < 8;i_6 += 1)
                            {
                                arr_22 [i_0] [i_1] [i_1] [i_1] [i_2] [i_0] [i_6] = (max((!0), (((arr_8 [i_6 + 3] [i_2 - 1] [i_2] [i_0 + 1]) > (arr_13 [i_0 - 2] [i_3 + 3] [1] [i_0] [i_6 + 2])))));
                                var_24 = ((~(((arr_10 [i_0 + 3] [i_2 + 1] [i_0] [i_6 - 1]) ? (arr_3 [i_0 + 1]) : (arr_10 [i_0 + 3] [i_2 + 1] [i_0] [i_6 + 1])))));
                                var_25 = var_0;
                                arr_23 [8] [i_0] [8] [i_3 - 3] [i_3] = 68719472640;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 7;i_9 += 1)
                        {
                            {
                                var_26 = (min(var_26, ((max(((68719472640 ? 7485606434020610492 : 30659)), (((max(var_13, var_12)) % var_12)))))));
                                var_27 = (min((((1967008555 ? 1 : 34876))), ((1687238268 ? 2607729042 : 127))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_10 = 0; i_10 < 20;i_10 += 1)
    {
        var_28 += (min((((-(((!(arr_32 [i_10] [i_10]))))))), (max((((arr_33 [i_10]) * (arr_34 [i_10]))), var_7))));
        var_29 ^= max((max((((21 ? 61152 : 738312409))), (arr_33 [i_10]))), (((((var_3 ? var_17 : 41473)) - ((max(var_5, var_6)))))));
    }
    var_30 = var_1;
    var_31 = var_18;
    #pragma endscop
}
