/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = min((((((min(var_2, var_0))) != ((var_4 ? var_9 : var_6))))), (min((var_11 < var_5), (~var_12))));
    var_16 = (((((((var_2 ? var_11 : var_0))) ? (min(var_0, var_11)) : ((1 ? 0 : -40593535)))) <= (((var_9 <= ((min(var_6, 1))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_1 + 2] = ((arr_3 [1] [i_1] [i_1 + 1]) ? (((min((arr_3 [2] [i_1 - 2] [1]), (arr_0 [i_0]))) + (~-1741168764))) : (((max((arr_0 [i_0 + 2]), (((arr_2 [i_0 - 1]) < (arr_3 [i_1 + 1] [9] [9]))))))));
                arr_5 [1] = (arr_1 [i_1 + 2] [i_0 - 1]);

                for (int i_2 = 3; i_2 < 12;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_2] [i_1 - 2] [i_2] = (min((arr_1 [i_0 + 1] [i_1 + 2]), (arr_1 [7] [i_1 - 1])));
                    var_17 = (min(var_17, (((-(((min(var_13, (arr_1 [1] [7]))) - ((var_7 ? var_7 : var_8)))))))));
                }
                for (int i_3 = 3; i_3 < 12;i_3 += 1) /* same iter space */
                {
                    arr_13 [i_3] [i_1] [5] [i_3] = (((arr_7 [i_3 + 2] [i_1 - 2] [i_1 - 2]) ? (((arr_11 [i_0 + 2] [9] [i_3]) ? 721991518 : -var_13)) : (min((arr_7 [i_1 + 2] [i_1 + 2] [1]), 0))));
                    arr_14 [0] [i_1] [i_3] = 1;
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            {
                                arr_20 [0] [i_5] [i_5] [i_3] [i_5] [i_5] = ((1 ? (arr_3 [3] [i_1] [3]) : (((((arr_3 [i_5] [i_4 - 1] [i_1]) != (arr_12 [i_0 + 2] [i_3 + 2] [i_4 - 1] [i_5])))))));
                                arr_21 [i_3] [i_1] [i_3] [0] [0] [i_3] [11] = var_2;
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (var_8 - (((var_5 || var_5) >> var_8)));
    var_19 = (((((max(1, (max(0, 1)))))) / 2482148696));
    #pragma endscop
}
