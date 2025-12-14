/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((max(((1873716081 ? var_9 : 3037142596906321288)), 15409601476803230340)));
    var_11 += 54;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((7218229843190368404 ? -54 : (((((-57 ? 73 : 15409601476803230340)) <= 0)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_11 [i_3] [i_2] [i_2] [i_0] [i_0] &= ((max(15409601476803230340, (7218229843190368404 | 15409601476803230323))));
                        arr_12 [i_0] [i_1] [8] [i_1] = var_2;
                        var_12 = ((~(min(22033, (arr_1 [i_0] [i_3])))));
                        var_13 *= (max((((2251799813685247 ? (((max(40, -73)))) : (max((arr_4 [14] [i_2] [6]), 192))))), (max((arr_8 [i_2] [i_2]), (((arr_3 [i_2] [i_1] [i_2]) * 69))))));
                    }
                }
            }
        }
        var_14 *= 10752377010103524620;
        var_15 ^= (min(((max((arr_5 [i_0] [i_0] [20] [i_0]), 2338))), (min((arr_1 [i_0] [i_0]), 69))));
    }
    var_16 = ((((((511 ? 74 : -73)))) ? ((((!(var_5 == var_8))))) : (max(((-54 ? 10230618152777880479 : 25582)), (min(var_2, var_7))))));
    #pragma endscop
}
