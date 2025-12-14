/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_8 + ((~(-6 / 47687)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_0 - 1] [i_1] [i_2] = (((((~(arr_0 [i_0 - 2])))) + (max((~69), var_5))));
                    var_21 = (max(var_21, var_14));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_11 [i_4] [i_3] [i_2] [i_3] [i_0] |= ((-42467762 ? (((((((arr_0 [i_0]) ? (arr_10 [i_4] [i_3] [i_2] [i_0] [4] [i_3] [i_0]) : 65534))) ? (var_10 <= var_2) : 6))) : (arr_4 [i_1] [i_3])));
                                var_22 += (var_14 + (((arr_8 [i_0] [i_1] [i_4] [i_3] [i_4]) ? (arr_5 [i_4] [i_1 - 2] [i_4] [i_1 - 2]) : (((-(arr_0 [i_0])))))));
                                arr_12 [i_0 - 1] [i_0 - 1] [i_1] [i_2] [i_3 - 2] [i_2] = ((((((((arr_10 [10] [i_2] [i_3] [i_2] [i_2] [i_2] [i_0]) ? var_10 : (arr_4 [i_2] [i_2])))) ? (255 ^ var_19) : ((max((arr_3 [i_4] [i_0] [i_0]), 254))))) ^ ((~(4095 / -1)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
