/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((((var_5 / 6520846663112642777) ? (((!(((32767 ? 1 : 32747)))))) : var_1)))));
    var_19 = (((min((!var_14), (min(var_5, var_12))))) ? ((-(32756 && 97))) : var_3);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_20 = ((~(-32767 - 1)));
                var_21 *= ((-(((((-24 ? (arr_1 [i_1]) : -4961))) ? (max(149, -1)) : (arr_0 [11])))));
            }
        }
    }
    #pragma endscop
}
