/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_11 [6] [i_1 - 2] [i_2] [i_1 - 2] = (5326037051857086949 + -21391);
                        var_15 = (arr_2 [i_1 - 3] [i_1 - 4]);
                    }
                    arr_12 [i_2] [i_1] [i_0] = ((-(arr_4 [i_2] [i_1 - 4])));
                    var_16 = (max(var_16, (((~(-1489162895 | var_7))))));

                    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        var_17 = var_8;
                        arr_16 [12] [i_1] [i_2] [i_2] [i_2] [i_4] = ((~(-1489162903 | 255)));
                        var_18 -= (var_12 > 1);
                    }
                    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                    {
                        arr_19 [1] [1] [i_1] [i_5] [1] = var_8;
                        arr_20 [i_5] [i_1] = (((!var_14) - (arr_7 [i_1 - 4] [i_1 - 2] [7] [i_5])));
                    }
                }

                for (int i_6 = 4; i_6 < 11;i_6 += 1)
                {
                    var_19 = var_11;
                    var_20 -= max(((((1 ? (arr_8 [i_0]) : (arr_15 [i_0] [5]))))), ((((134217728 ? var_7 : var_5)) >> (((4160749575 ^ var_0) - 134189596)))));
                }
                for (int i_7 = 3; i_7 < 9;i_7 += 1)
                {

                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        arr_29 [i_8] [i_8] [i_8] [i_0] = (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        var_21 = (min(var_21, (-1338871252715153159 && 0)));

                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            arr_32 [i_8] [i_1] [i_7] [i_7] [i_8] = ((~(var_13 - var_4)));
                            var_22 = ((-16470 >= (~var_13)));
                            arr_33 [i_0] [i_0] [3] [i_8] [2] [i_7] = ((((9223372036846387200 >> (16470 - 16433))) & (((var_12 % (arr_30 [i_0] [i_8 - 1] [i_8] [i_1 - 1] [i_0]))))));
                        }
                    }
                    var_23 = 0;
                }
                arr_34 [i_0] = (((((-var_9 ^ (!1716856991)))) ? ((((arr_24 [i_0] [i_0] [i_1]) > 3569044722988986322))) : (((-1489162895 | var_10) % var_14))));
            }
        }
    }
    var_24 = var_10;
    #pragma endscop
}
