/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~var_4);
    var_17 = ((!(((-var_13 ? var_12 : var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((max((~10724521580589396412), var_7)) != (min((min(48, 10724521580589396401)), (arr_3 [i_0] [i_1])))));
                arr_6 [i_1] [i_0] = ((!((max(var_1, var_3)))));
                arr_7 [i_0] &= (((((7722222493120155210 ? (arr_0 [i_0] [i_1]) : var_15))) ? ((11972 ? -9223372036854775796 : 57821)) : ((max(var_0, (arr_4 [11] [i_1]))))));
            }
        }
    }
    #pragma endscop
}
