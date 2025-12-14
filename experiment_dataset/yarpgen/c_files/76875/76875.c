/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [1] = ((((max((((arr_4 [i_0] [i_1]) ? (arr_2 [7] [2] [7]) : (arr_0 [i_1] [i_0]))), ((((arr_0 [i_0] [i_1]) ? (arr_1 [i_0] [i_0]) : (arr_4 [i_0 - 1] [i_1]))))))) ? (((arr_1 [i_0] [1]) ? (min((arr_2 [4] [i_0 + 1] [i_0]), (arr_4 [i_0] [i_1]))) : (arr_0 [i_1 - 1] [i_1 + 2]))) : (arr_3 [i_0] [8] [3])));
                var_20 = (((((((((arr_3 [1] [i_1] [7]) ? (arr_2 [i_0] [i_1 - 1] [i_0]) : (arr_2 [i_0] [4] [1])))) ? (((arr_3 [i_0] [i_1] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_2 [i_1] [i_1] [0]))) : (max((arr_2 [10] [i_1] [i_0]), (arr_4 [i_0] [i_1])))))) ? (((arr_2 [i_1] [i_1 + 3] [i_0 - 1]) ? (arr_1 [i_1] [i_0]) : (((arr_1 [i_1 - 1] [i_1]) ? (arr_2 [i_0] [i_1] [i_1]) : (arr_4 [i_0] [0]))))) : (arr_2 [i_1 - 1] [i_1 - 1] [i_0 + 1])));
                arr_6 [i_0] [i_0] [i_0] = (((arr_4 [i_1] [i_0]) ? ((min((arr_4 [i_0 + 1] [i_1 + 1]), (arr_4 [i_0 + 1] [i_1 - 1])))) : (arr_4 [i_0 + 1] [i_0 + 1])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    arr_14 [i_4] [i_4] [i_3] [9] = arr_7 [i_2];
                    var_21 ^= (min(((((((arr_13 [i_3]) ? (arr_11 [i_2] [i_2] [i_2] [2]) : (arr_13 [i_3])))) ? (((arr_13 [i_2]) ? (arr_8 [i_2]) : (arr_13 [i_2]))) : (((arr_9 [i_4] [i_2]) ? (arr_13 [5]) : (arr_11 [i_2] [i_3] [i_3] [5]))))), (((arr_2 [i_2] [i_3] [i_4]) ? (arr_0 [i_2] [i_2]) : (((arr_9 [i_3] [1]) ? (arr_13 [i_4]) : (arr_8 [i_4])))))));
                    var_22 = ((((min((arr_11 [i_4] [5] [i_2] [i_2]), (arr_11 [i_2] [i_2] [i_3] [i_3])))) ? (arr_0 [i_2] [i_3]) : (((arr_2 [4] [i_4] [i_4]) ? (arr_2 [i_2] [5] [i_4]) : (arr_2 [i_2] [i_2] [i_2])))));
                }
            }
        }
    }
    #pragma endscop
}
