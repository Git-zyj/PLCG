/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;
    var_17 = (max((!var_13), ((!(!var_13)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = (min(var_18, (((((((!(arr_4 [i_1] [i_0]))) || ((((arr_1 [i_0] [i_0]) ? 31 : (arr_5 [i_1] [i_1])))))) ? (arr_6 [i_0] [i_0] [i_0]) : 248)))));
                var_19 |= -6;
                var_20 = ((+((((arr_3 [i_1]) > 7198)))));
                var_21 |= (arr_4 [i_0] [i_0]);
            }
        }
    }
    var_22 = var_13;
    var_23 = var_8;
    #pragma endscop
}
