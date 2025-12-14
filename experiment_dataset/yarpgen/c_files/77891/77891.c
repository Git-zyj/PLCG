/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((min(var_7, var_2))));
    var_11 = (max(var_11, (((-(min(((var_0 ? var_6 : var_6)), ((min(32753, 1))))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_12 ^= ((!(arr_4 [i_0] [i_0 - 2])));
                var_13 = (max(var_13, (arr_0 [i_1] [i_1])));
                var_14 = (min((min((arr_3 [i_1] [i_1]), ((-(arr_2 [2] [2]))))), (((((!(arr_4 [7] [i_1])))) / ((~(arr_5 [i_0] [i_0 - 3] [2])))))));
                var_15 = ((!(((~(arr_1 [i_0 - 1]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {
                var_16 ^= (arr_7 [i_2]);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            arr_16 [i_2] [6] [i_3] [i_4] [i_5] = ((~(min((arr_11 [i_3]), (arr_11 [i_2])))));
                            arr_17 [i_2] [i_2] = (min((min((min(1, 1048575)), (arr_12 [i_2] [i_2] [i_2] [i_2]))), ((min((((!(arr_14 [i_5] [i_5] [i_4] [8] [i_2] [i_2])))), (arr_12 [i_5] [i_4] [i_3] [i_2]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
