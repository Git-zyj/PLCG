/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = (!var_7);
                arr_5 [i_1] [i_1] [i_1] = (~3552463501608531871);
            }
        }
    }
    var_20 = var_1;
    var_21 = 0;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                var_22 += (min(9223372036854775807, (((min(9223372036854775807, (arr_4 [i_2] [i_2] [i_2])))))));
                arr_11 [i_2] = (((((arr_7 [i_2]) >= (arr_10 [i_2] [i_3] [i_2]))) ? (arr_10 [i_2] [i_3] [i_2]) : ((min((arr_10 [i_2] [i_2] [i_2]), (arr_10 [i_2] [9] [1]))))));
                var_23 = (min((min((arr_10 [i_2] [i_2] [i_3]), var_12)), 293264743));
            }
        }
    }
    #pragma endscop
}
