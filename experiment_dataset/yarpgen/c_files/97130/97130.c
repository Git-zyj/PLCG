/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_16 = ((var_4 == ((min((arr_2 [4] [i_0]), (arr_2 [i_0] [i_0]))))));
                var_17 += min(29161, 0);
                var_18 *= ((((((-917843084 & 1061129625) ? ((min((arr_2 [5] [i_1]), 121))) : ((((arr_3 [i_0] [i_0]) < 105)))))) < ((-917843070 ? 11138202565854446174 : -917843060))));
            }
        }
    }
    var_19 = var_12;
    var_20 = (min(((var_5 ? (var_2 && var_10) : var_5)), ((max(((max(119, 105))), var_4)))));
    var_21 = var_5;
    #pragma endscop
}
