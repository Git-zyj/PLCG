/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = ((-var_12 + (((((var_2 - (arr_1 [i_1])))) / 5314132565254497998))));
                var_20 = ((-44169 ? (min((arr_3 [i_0] [4] [i_1 - 1]), (arr_3 [i_1] [i_1] [i_1 - 1]))) : ((var_1 / (arr_3 [i_1] [i_1] [i_1 - 1])))));
                var_21 = (min(var_21, (((((((9224538017148197600 / (arr_1 [11]))))) / (min((arr_0 [i_0] [0]), (13132611508455053617 / 68))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 21;i_4 += 1)
            {
                {
                    arr_12 [i_2] [i_3] [i_4] [i_4] = ((((((arr_9 [i_3 + 2] [i_3 - 2]) ? (arr_9 [i_3 - 2] [i_3 - 4]) : -25533))) && (arr_4 [i_3])));
                    var_22 = (min(var_22, 1));
                }
            }
        }
    }
    #pragma endscop
}
