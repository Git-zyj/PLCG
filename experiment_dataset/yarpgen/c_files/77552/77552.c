/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;
    var_17 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = ((!(((arr_4 [i_0] [i_0]) || ((max(var_15, (arr_4 [i_0] [i_0]))))))));
                var_19 = ((var_0 & (arr_0 [19])));
                var_20 = ((((max((var_1 | var_0), ((max((arr_3 [i_0] [i_1]), var_15)))))) == (min((((!(arr_4 [i_0] [i_0])))), (arr_0 [2])))));
                var_21 = (arr_5 [8] [i_1] [i_0]);
            }
        }
    }
    #pragma endscop
}
