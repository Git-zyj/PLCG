/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_14 = (max(83111243, -1026415111714549035));
                    var_15 ^= ((arr_3 [i_0] [i_1]) - (min(1002527993, ((-1026415111714549035 ? 6566252077370239081 : -7581199540223141819)))));
                    arr_11 [i_1] [i_2] [i_1] [i_1] = (((!-1026415111714549035) ? var_11 : (max(1026415111714549029, var_8))));
                    var_16 = (((arr_7 [i_1] [i_1] [18]) ? ((((min(0, var_6))) ? (((1 ? (arr_0 [i_0]) : 10))) : (min(-1026415111714549035, (arr_0 [0]))))) : ((min(1, 132)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 19;i_4 += 1)
        {
            {
                arr_18 [i_4] [i_4] = (max(0, (max((min((arr_3 [i_4] [i_4]), -2758937182118664996)), -2914652831))));
                var_17 = (((var_6 != (((-4181186621338453576 + 9223372036854775807) << (((arr_1 [i_3]) - 1)))))));
                arr_19 [i_4] [i_4] = (((max((arr_2 [i_4 - 1]), (arr_12 [i_4] [19])))) ? (!-1) : ((((max(11880491996339312535, 49583)) > 1))));
            }
        }
    }
    #pragma endscop
}
