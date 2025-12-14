/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    var_15 = ((((max(var_5, (max(-19452, 194))))) ? (((-7041 == (~var_12)))) : (max(23088, ((var_8 ? var_11 : var_2))))));
    var_16 = ((!(((var_2 ? 8907836531875287815 : var_11)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [i_0] = (max((max(var_0, (arr_7 [i_1 - 1] [i_1 - 2] [i_1 - 2] [i_1 - 1]))), (~var_13)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_4] [10] [1] = (((~((var_0 ? var_8 : 2587094607)))));
                                var_17 = (max((((arr_13 [i_0] [i_1] [i_1] [i_3] [i_0]) ^ ((var_2 ? (arr_8 [i_0]) : 32753)))), ((((((~(arr_12 [10] [10] [i_1] [i_0])))) ? var_0 : (((arr_11 [i_0] [i_2] [7] [5]) ? var_7 : var_12)))))));
                                arr_17 [i_4] [i_0] [i_4] = (((((((((arr_7 [i_4] [i_3] [2] [i_0]) == (arr_13 [i_4] [9] [i_2] [9] [9])))) - (arr_4 [i_4])))) ? (arr_0 [i_3] [1]) : (max(3874726333, var_3))));
                                arr_18 [i_0] [i_1] [i_4] [i_3] [10] = var_13;
                            }
                        }
                    }
                    var_18 = 21;
                }
            }
        }
    }
    #pragma endscop
}
