/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((var_9 >= var_16) * 1450646685)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_18 = ((((max(40, 65523)))));
                    var_19 = ((~((var_14 ? ((var_11 ? 13598292792922635034 : 168190501734622244)) : ((min((arr_5 [i_0] [i_0] [i_1] [i_2]), (arr_4 [i_0] [7]))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            {
                arr_12 [i_3] [i_4] = ((var_13 ? (-10 != 16) : ((((arr_4 [i_3] [i_4]) && var_13)))));
                var_20 = ((min((arr_11 [i_3] [i_3]), 0)) >> (((((arr_11 [i_3] [i_3]) ? (arr_11 [i_3] [i_4]) : (arr_11 [i_3] [i_4]))) - 730491995)));
            }
        }
    }
    var_21 = ((((max(18278553571974929352, var_7))) || var_4));
    #pragma endscop
}
