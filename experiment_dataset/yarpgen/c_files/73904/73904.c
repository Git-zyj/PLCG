/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((((-2088037093 / 11373007719154019379) ? 11373007719154019379 : -7364750123403560691)), 2147483625));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_10 [i_0 - 2] [i_1] [i_0] = (((arr_0 [i_1 - 1]) ? ((min((arr_8 [i_0 - 2] [i_2] [i_2]), 65))) : (max(-var_15, (!71)))));
                    var_19 = (((((~(arr_4 [i_1 + 1] [i_0])))) ? (max((arr_4 [i_1 - 1] [i_0]), (arr_4 [i_1 + 1] [i_0]))) : (arr_4 [i_1 - 1] [i_0])));
                }
            }
        }
    }
    var_20 = var_5;
    var_21 = (min(7073736354555532224, 97));
    #pragma endscop
}
