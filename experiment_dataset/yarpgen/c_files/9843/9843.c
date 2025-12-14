/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (~var_7)));
                var_18 = (min(var_18, var_7));
                arr_6 [i_0] [8] [2] = ((((((arr_2 [i_0] [i_1]) >> var_4))) ? ((1323137350 ? ((((arr_3 [16] [i_1 - 1] [i_1]) ^ -1323137357))) : (arr_0 [i_0]))) : var_8));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 15;i_3 += 1)
        {
            {
                var_19 &= min((((-(arr_7 [i_3 - 1])))), (((var_12 ? var_4 : -1323137363))));
                arr_12 [i_3] = ((+(min(var_2, (((arr_1 [7]) ? (arr_2 [i_2] [1]) : (arr_10 [i_2])))))));
            }
        }
    }
    #pragma endscop
}
