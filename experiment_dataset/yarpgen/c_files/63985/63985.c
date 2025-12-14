/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_1] [i_2 + 3] [i_2 + 3] = (((arr_3 [i_2 + 1]) ? (((arr_3 [i_2 + 2]) ? var_1 : (arr_3 [i_2 + 1]))) : ((((!(arr_3 [i_2 + 1])))))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((~((~(((arr_0 [i_2] [i_3]) ? var_5 : var_9))))));
                    }
                    var_13 = ((var_7 ? (arr_5 [i_2 + 2] [i_2 - 1] [i_2 + 4]) : ((((!((min(var_7, 1023)))))))));
                    var_14 ^= (max(((((max(var_8, 0))) ? ((var_4 ? 1290166412404925773 : 0)) : var_1)), (max((((arr_5 [i_0] [i_1] [i_2]) - (arr_7 [i_0] [i_0] [i_0] [i_0]))), (((1290166412404925776 ? var_0 : var_9)))))));
                }
            }
        }
    }
    var_15 = (min((min(var_1, var_12)), (((((max(var_6, var_0))) ? var_4 : var_9)))));
    #pragma endscop
}
