/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!((((-1 - var_3) ? ((max(-850666059, 29617))) : -var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = (((max(1, (arr_4 [i_0 + 1])))) ? var_0 : (((arr_4 [i_0 + 1]) ? 11443609141820276212 : var_4)));
                arr_7 [i_0] [i_1] [1] = ((1 ? ((1 << (29613 - 29588))) : 2145386496));
            }
        }
    }
    var_12 = var_8;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 21;i_3 += 1)
        {
            {
                arr_15 [i_2] = (((~(((!(arr_12 [i_2])))))));
                arr_16 [i_2] [i_2] [i_2] = (((arr_11 [i_3 + 2]) ? (max((((62 ? 1 : 29620))), ((var_3 ? (arr_12 [i_2]) : (arr_14 [i_2]))))) : (((~((min(var_1, var_3))))))));
                var_13 = ((23718 ? (min((max((arr_14 [i_2]), var_2)), var_9)) : (((-8300973979132362506 ? ((var_8 | (arr_0 [i_2]))) : var_3)))));
                arr_17 [i_2] [i_2] = (arr_8 [i_2]);
            }
        }
    }
    #pragma endscop
}
