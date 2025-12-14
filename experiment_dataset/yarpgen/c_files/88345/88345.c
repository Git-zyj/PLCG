/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (((((-(var_9 == var_17)))) ? ((((!(arr_3 [i_1] [i_1] [i_1]))))) : (arr_4 [i_0] [i_1])));
                arr_6 [16] [i_1] = ((2450804534 ? var_10 : (arr_3 [i_0] [i_0] [i_0])));
                var_21 &= ((((((min((arr_3 [i_0] [12] [i_1]), var_2))) && (((-(arr_0 [i_0])))))) ? (((~0) ? (arr_1 [i_0]) : ((331107711 ? var_5 : var_17)))) : var_6));
            }
        }
    }
    var_22 = var_7;
    #pragma endscop
}
