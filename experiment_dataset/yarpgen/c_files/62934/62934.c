/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1 + 3] [i_2 - 1] [i_3] = (((min((arr_8 [i_2] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2] [1]), (arr_13 [i_2 - 1] [i_2 - 4] [i_2 - 2]))) * ((((!(arr_8 [i_2] [i_2 + 2] [i_2 - 3] [i_2 - 2] [8] [i_2 - 2])))))));
                                var_15 = ((177945407657120872 - ((((arr_2 [i_0]) + (arr_8 [i_0] [i_0] [i_0] [1] [i_0 + 1] [i_0]))))));
                                var_16 = (min(var_16, (arr_1 [i_3])));
                                var_17 = (!var_6);
                            }
                        }
                    }
                    var_18 = (min((min(var_8, (arr_13 [i_0] [i_1 + 1] [i_2 - 3]))), ((-177945407657120873 % (arr_13 [i_1] [i_1 + 1] [i_2 - 4])))));
                    arr_15 [i_0 + 1] [i_0] [i_0] [i_0] = (((((((min(var_12, -177945407657120884))) ? (min((arr_13 [i_0 + 1] [i_0 + 1] [i_2]), (arr_8 [i_2 + 1] [i_0] [i_1] [i_1] [i_0] [i_0 - 2]))) : (min((arr_11 [i_0]), 177945407657120872))))) ? (((((var_10 ? 59727 : 255))) ? (((-(arr_3 [i_2 + 2] [i_2])))) : (arr_7 [i_2 - 1] [i_2 + 1]))) : var_2));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 12;i_6 += 1)
        {
            {
                var_19 = ((((((arr_6 [i_6 + 1]) << ((((177945407657120875 ? (arr_17 [i_5]) : (arr_8 [i_6] [i_6 + 2] [i_6] [8] [i_5] [2]))) - 2347138377396610335))))) ? -124 : ((var_8 ? (((var_4 ? 242 : var_1))) : (max(var_13, var_7))))));
                var_20 = ((((((((var_6 ? var_2 : (arr_7 [i_5] [i_5])))) ? (arr_11 [i_5]) : ((min((arr_7 [i_6 + 2] [i_5]), (arr_8 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))))))) && var_13));
            }
        }
    }
    #pragma endscop
}
