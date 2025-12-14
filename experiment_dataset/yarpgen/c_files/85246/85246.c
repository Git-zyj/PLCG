/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    var_18 = ((!((!(arr_1 [i_0])))));
                    var_19 = ((!(arr_6 [i_0] [12] [i_2 + 1] [i_2])));
                    var_20 = ((!((var_14 >= (min((arr_0 [i_0] [1]), (arr_7 [i_0] [i_1] [6])))))));
                    var_21 = ((((((((arr_7 [i_0] [i_1 + 1] [i_2]) < (arr_1 [i_0]))) ? (arr_7 [i_1] [i_1] [13]) : ((7 | (arr_7 [i_2] [i_2] [i_2 - 1])))))) ? ((-(min((arr_7 [i_2 - 3] [i_1] [10]), var_12)))) : (((((((arr_6 [i_0 + 1] [i_1 + 1] [i_0 + 1] [i_0]) - var_0))) ? (arr_1 [i_0]) : ((min((arr_6 [i_0] [10] [i_0] [i_0]), (arr_6 [i_0] [i_0] [i_0] [i_2 - 2])))))))));
                }
            }
        }
    }
    #pragma endscop
}
