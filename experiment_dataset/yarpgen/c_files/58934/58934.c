/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= (min((((((min(var_8, var_5))) ? var_12 : var_8))), (((((var_9 ? var_17 : var_10))) ? var_13 : (max(35129, var_14))))));
    var_19 = (min(((min(var_0, (max(var_9, var_8))))), ((var_7 ? (((var_13 ? 30380 : 2140))) : (max(var_15, -1))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_20 = (max((max(30406, 1700400781701954933)), ((min((arr_1 [i_0]), (arr_1 [i_0]))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {

                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            arr_11 [i_0] [i_0] [i_0] [i_3] [9] [i_4] = (((((24 ? (max(var_15, 1)) : ((max((arr_10 [i_0] [4] [i_2] [i_0] [i_4] [8]), var_4)))))) ? (((max((min(0, 10)), (arr_5 [i_1 - 1] [i_1 - 1] [i_1 + 1]))))) : (max(((((arr_0 [i_0]) ? (arr_3 [i_0]) : 0))), ((var_17 ? (arr_9 [1] [i_1] [3] [0] [i_1 - 1]) : var_17))))));
                            var_21 = ((((max(11250, var_10))) ? (((min((arr_5 [i_2 + 2] [i_1 - 1] [i_2]), (arr_8 [i_2 + 3] [i_1 + 1] [i_2 + 2]))))) : (min(var_14, 1281416101846448655))));
                        }
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            var_22 = ((((max((max(2636318217, (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))), ((((arr_12 [i_0] [i_0] [i_1 - 1] [i_2] [i_2] [i_3] [i_5]) ? (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : var_4)))))) ? (((1767106574 ? (arr_13 [i_1 + 1] [i_1] [i_1 + 1] [i_1 - 1] [i_1 - 1] [1]) : ((min(var_12, (arr_8 [i_1] [5] [i_5]))))))) : ((((max((arr_10 [i_0] [1] [i_2] [i_3] [i_5] [i_5]), 1739790296907356610))) ? -29954 : ((-29 ? var_4 : 17521776102824571126))))));
                            arr_14 [i_5] [i_1 - 1] = (max(((min((arr_13 [i_2 - 1] [7] [i_2 - 2] [i_2 - 2] [i_2 - 1] [i_2 + 3]), 52618))), (min(((max(var_17, (arr_13 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))), (min(var_15, 1))))));
                        }
                        var_23 = ((((min(((1767106574 ? var_3 : var_4)), (arr_8 [i_1 - 1] [i_2 - 2] [i_2])))) ? ((min((((arr_2 [1]) ? var_2 : (arr_0 [i_2]))), (((-114 ? var_9 : 2527860707)))))) : (min((max((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]), var_14)), (arr_4 [i_0] [i_1 - 1] [i_1 + 1] [i_2 - 2])))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 4; i_6 < 13;i_6 += 1)
    {
        var_24 += ((var_8 ? 165691707 : 31));

        for (int i_7 = 0; i_7 < 0;i_7 += 1)
        {
            arr_21 [i_6] [11] [i_6] = ((36 ? (arr_8 [i_7 + 1] [i_7] [i_7 + 1]) : (arr_2 [i_6 - 2])));
            arr_22 [6] [i_7] [i_7] = ((var_7 ? (arr_2 [i_7 + 1]) : 671494603));
        }
        var_25 = (max(var_25, (((var_2 ? 1 : var_17)))));
    }
    var_26 = var_8;
    #pragma endscop
}
