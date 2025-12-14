/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;
    var_18 = var_2;

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (min((((arr_1 [i_0 + 1]) > (arr_0 [i_0 - 4]))), ((!(arr_0 [i_0 - 4])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_2] [i_2] [i_1] = (~var_7);
                    var_19 = (min(var_19, ((((26328 | 10415) ? ((min((((!(arr_4 [9] [7])))), (arr_0 [i_0])))) : ((((214737645 | 49184) != (max(var_1, (arr_9 [i_0] [i_1] [i_0])))))))))));
                    var_20 -= (((((((arr_5 [i_2 - 2] [i_2 - 3] [i_2 - 3]) > (arr_5 [i_2 - 2] [i_2 + 1] [i_2 - 1]))))) % (((arr_7 [i_2 + 1] [i_0] [i_2 + 2]) * var_5))));
                }
            }
        }
    }
    #pragma endscop
}
