/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~(((!(var_2 ^ 118))))));
    var_19 = (((((var_16 ? ((137 ? var_7 : 118)) : (var_16 != 6013551292522515203)))) ? var_3 : var_8));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                var_20 = -10319437321176353925;
                arr_4 [i_0] = ((((((!(arr_0 [i_0] [i_1]))) || ((min((arr_0 [i_1] [5]), 118))))) ? ((((min((arr_3 [i_0 - 3] [i_0]), 255))))) : (((max(4642665539657210395, 251)) << ((((((-(arr_1 [i_0]))) + 43865)) - 7))))));
                var_21 -= ((var_11 ? var_8 : (min((arr_1 [10]), 537852268))));
                var_22 = (min(1445941370, (arr_3 [i_0] [i_1 + 3])));
            }
        }
    }
    #pragma endscop
}
