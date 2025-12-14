/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((~((var_9 ? 60 : var_15))))) ? var_3 : ((max(var_12, 47)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = ((~(arr_7 [i_0] [i_0] [i_1] [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_0] [i_4] = ((var_6 ? (((32763 > var_4) ? (((arr_13 [i_0] [i_1] [i_2] [1] [i_0] [1]) ? (arr_1 [i_2] [i_3]) : (arr_0 [i_0]))) : (!var_6))) : (((((40522 | (arr_7 [i_0] [i_0] [i_2] [i_0])))) ? (((var_8 ? var_11 : (arr_0 [i_2])))) : ((2097144 ? var_1 : (arr_1 [i_1] [i_4])))))));
                                arr_15 [i_0] [i_1] [i_2] [i_2] [i_3] [11] [i_4] = ((arr_8 [i_0] [i_0] [i_4]) ^ 0);
                                arr_16 [i_0] [i_0] [6] [i_3] [6] = (((((max(66, (arr_1 [i_1] [i_2]))) ? (!1409856708) : (((var_14 < (arr_13 [i_0] [i_1] [7] [i_3] [4] [i_4]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
