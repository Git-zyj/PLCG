/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~(((!(var_2 && var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_11 |= (((((-1955134321244233438 ? (((arr_1 [i_0 - 1]) / -1955134321244233438)) : -124))) ? (arr_3 [i_0 + 1] [3]) : (max(((((arr_2 [4] [i_1]) && var_2))), (arr_3 [i_0 - 1] [i_0 - 1])))));
                var_12 = (((((!(arr_2 [i_1] [i_1 + 2])))) + ((((arr_3 [i_0 + 1] [8]) || (arr_0 [i_1] [i_1 - 1]))))));
                var_13 = ((arr_2 [i_1] [i_1]) >= (arr_3 [i_0 - 1] [i_0 - 1]));
                var_14 = ((max((arr_2 [i_1] [0]), -1627118982)));
                var_15 = 1;
            }
        }
    }
    #pragma endscop
}
