/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((min((var_0 - 3800083748448977605), (4026531840 + -3800083748448977613))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 = ((((var_3 ? 5984652335329766375 : (arr_5 [i_0] [i_0] [3])))));
                    var_17 = (min(var_17, 5984652335329766375));
                    var_18 = arr_4 [i_0] [5] [i_2];
                }
            }
        }
    }
    var_19 &= var_0;
    #pragma endscop
}
