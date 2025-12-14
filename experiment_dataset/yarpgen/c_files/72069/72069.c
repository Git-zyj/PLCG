/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (0 << var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_14 = (-(max(((198 ? 11 : 16057020911906984673)), (((var_8 ? (arr_1 [i_0] [i_1]) : (arr_2 [6])))))));
                var_15 = ((((min((min(11, (arr_6 [i_0] [i_1] [i_0]))), (var_0 * -1)))) ? (((((var_4 & (arr_1 [i_0] [i_1]))) << (((max((arr_5 [i_0] [i_1]), (arr_7 [9]))) - 2777307415289112067))))) : ((~((15619 ? 2389723161802566945 : 3528300402))))));
            }
        }
    }
    var_16 = var_0;
    #pragma endscop
}
