/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_11 = (((arr_1 [i_0]) >= var_8));
        var_12 |= (((arr_2 [12]) / (((arr_0 [10]) ? 32748 : var_6))));

        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            var_13 = var_5;
            arr_6 [i_0] [i_1] = ((158 ? (arr_0 [i_0]) : ((((arr_2 [4]) != (arr_0 [i_0]))))));
            var_14 = (((arr_5 [i_0] [i_1 - 1]) / var_4));
        }
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_15 = ((((((-32765 + 12762435042129169316) != (((arr_8 [i_2]) ? (arr_7 [i_2]) : 5684309031580382299)))))) < ((-536870912 ? var_5 : -1048575)));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_16 = ((5684309031580382299 ? 1702935037 : (arr_7 [i_2])));
            arr_11 [i_2] [i_3] = (((arr_7 [i_2]) % ((-(arr_7 [i_2])))));
            var_17 = (((1702935037 >> (32745 - 32714))));
            var_18 = var_7;
            var_19 = (((arr_9 [i_3] [i_3] [i_2]) ? var_0 : (arr_8 [i_3])));
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        {
                            var_20 = (1048575 < ((+(((arr_7 [i_4]) | 151070287017037416)))));
                            var_21 = (arr_15 [i_4]);
                        }
                    }
                }
            }
            var_22 |= ((+(((arr_9 [i_2] [i_4] [i_4]) * 1048575))));

            for (int i_8 = 2; i_8 < 18;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    var_23 = 536870886;
                    var_24 = (11603 != 17541860936893737506);
                    var_25 = (((max((((arr_15 [i_2]) ? -1 : var_6)), var_3)) | 764206219));
                }
                for (int i_10 = 1; i_10 < 19;i_10 += 1)
                {
                    var_26 = (max(65535, (max((arr_12 [i_10] [i_10 + 1]), var_6))));
                    var_27 = (((((((var_8 < (arr_23 [i_2] [i_4] [i_10]))) ? 12 : 4312050829619815652))) ? 65521 : -4444403884855054714));
                }

                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    var_28 = (max(((((((arr_18 [i_2] [i_4] [i_4] [i_4]) ? var_6 : -1))) ? 3587159811 : 5684309031580382299)), (arr_22 [i_2] [i_2] [i_2])));
                    var_29 = ((!(((var_2 ? (arr_30 [i_2] [i_4] [i_4] [i_2]) : (-1702935038 | 127))))));
                }
                arr_37 [i_2] [i_4] [i_4] [10] = (max(var_3, 10));
                var_30 = 298405722;
            }
            var_31 = 1702935042;
        }
        for (int i_12 = 2; i_12 < 19;i_12 += 1)
        {
            /* LoopNest 3 */
            for (int i_13 = 3; i_13 < 19;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 19;i_14 += 1)
                {
                    for (int i_15 = 3; i_15 < 19;i_15 += 1)
                    {
                        {
                            var_32 *= 12762435042129169299;
                            var_33 = (max(var_33, 236));
                        }
                    }
                }
            }
            var_34 = ((~(arr_29 [i_2] [i_12] [1] [i_12 - 2])));

            for (int i_16 = 0; i_16 < 20;i_16 += 1)
            {
                arr_52 [i_2] &= ((707807484 != (arr_18 [i_2] [i_2] [i_12 - 2] [i_2])));
                var_35 = (arr_8 [i_12]);
            }
            var_36 = var_4;
        }
        var_37 = (var_5 | -1373114972);
    }

    for (int i_17 = 4; i_17 < 12;i_17 += 1)
    {
        var_38 = ((+(max((((arr_24 [i_17 - 1] [i_17 - 1] [i_17] [i_17]) ? (arr_12 [i_17] [i_17]) : (arr_44 [i_17]))), var_9))));
        var_39 *= (max(((min(-3437, 22913))), -5684309031580382292));
    }
    #pragma endscop
}
