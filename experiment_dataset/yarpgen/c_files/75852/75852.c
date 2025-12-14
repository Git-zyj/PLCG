/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 7;i_2 += 1)
            {
                {
                    var_12 = ((((-53 ? (((arr_4 [i_0] [i_1] [i_2]) ? (arr_0 [i_0]) : (arr_7 [3]))) : (arr_3 [i_1 - 2] [i_2 + 2]))) - (((((arr_6 [i_0] [3]) && ((((arr_4 [i_0] [10] [i_2]) ? (arr_4 [2] [2] [2]) : (arr_0 [6]))))))))));
                    var_13 = ((((arr_1 [i_0]) == (arr_4 [1] [8] [i_2 - 1]))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 4; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    var_14 = (((((-53 ? 1 : -1))) && ((min((((arr_8 [i_3]) ? var_2 : (arr_12 [i_3]))), 53)))));
                    var_15 = (arr_13 [i_4]);
                    var_16 = (((((0 ? 3 : 2147483647))) <= (arr_9 [i_4 + 1] [i_4 + 1])));
                    var_17 = (((((((62 ? 0 : 105)) / ((min(1023, 83)))))) ? (min((((arr_13 [i_5]) ? (arr_9 [i_3] [1]) : (arr_13 [i_5]))), ((var_0 ? var_3 : (arr_9 [i_3] [i_3]))))) : (min((arr_13 [i_5]), -118))));
                }
            }
        }
    }
    #pragma endscop
}
