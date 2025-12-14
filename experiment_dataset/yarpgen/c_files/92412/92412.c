/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((max(((var_3 ? var_5 : var_0)), (min(var_8, var_0)))), var_7));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_12 = (max(var_12, (((((min((max((arr_2 [1] [i_1] [14]), (arr_0 [0]))), (arr_3 [1] [i_1 - 1] [i_1 - 1])))) ? (min((max((arr_2 [i_0] [i_1] [12]), (arr_2 [i_0] [i_1 + 1] [6]))), (min((arr_3 [2] [i_1] [i_1 - 1]), (arr_3 [10] [i_0] [16]))))) : ((((!(arr_0 [2]))))))))));
                var_13 = ((-(max((arr_2 [i_0 + 1] [i_1] [i_0]), (min((arr_1 [i_0] [i_0]), (arr_2 [i_0 - 2] [i_0] [i_0])))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 14;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    var_14 = (max(var_14, (((!(((((max((arr_12 [7] [7]), (arr_4 [i_2])))) & (min((arr_2 [i_2] [14] [i_4]), (arr_2 [i_2] [i_3] [i_4])))))))))));
                    arr_14 [i_4] [1] [i_2] = arr_3 [i_4] [i_3 + 1] [i_4];
                }
                var_15 = (min(var_15, ((((((arr_8 [i_2] [i_3] [i_3]) ? ((((arr_1 [i_2] [i_2]) ? (arr_0 [i_2]) : (arr_8 [i_2] [i_2] [i_3 + 2])))) : (min((arr_11 [2] [1] [i_3] [i_3]), (arr_9 [i_2 + 1] [i_2 + 1]))))) - (max((((!(arr_6 [i_2])))), (arr_9 [i_2] [i_3]))))))));
            }
        }
    }
    #pragma endscop
}
