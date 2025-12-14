/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-(!var_17)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_20 += ((+((-8126078556570409816 | (((arr_5 [i_0]) ? 1 : -1532248763221198666))))));
                var_21 = (((((var_18 * (((!(arr_4 [i_0] [6] [i_1]))))))) ? -245 : (((((-(arr_2 [i_1])))) ? (~var_8) : 470919980266332327))));
            }
        }
    }
    #pragma endscop
}
