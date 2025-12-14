/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                var_21 = (((((arr_3 [i_1 - 1] [i_1 - 2]) ? ((min((arr_2 [i_0] [i_0 + 3] [i_0]), 1))) : 181)) >> (((((((arr_3 [i_0 + 1] [1]) ? var_12 : (arr_2 [i_0 - 2] [i_1] [i_0])))) || (((~(arr_3 [i_0 - 1] [3])))))))));
                arr_5 [i_0 + 1] [i_0] = 16558887773057293152;
                var_22 *= ((1206911888 + ((+(min((arr_4 [0] [i_0]), -1269029791561485771))))));
            }
        }
    }
    #pragma endscop
}
