/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= ((4069485217 ? -1131231867 : 225482068));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = (arr_2 [i_0]);
                arr_5 [i_0] [i_0] [i_1 - 2] = ((225482081 ? ((-(var_0 + 39771))) : ((max(225482068, var_15)))));
                arr_6 [1] [i_0] [i_1] = (arr_4 [i_0] [i_0] [i_1]);
                var_20 = ((var_11 >= (((arr_4 [i_0] [i_0] [i_1]) ^ 4069485230))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        var_21 ^= (arr_7 [4]);
        arr_9 [i_2] = ((var_11 ? (arr_4 [i_2] [i_2] [i_2]) : (((!(arr_2 [i_2]))))));
    }
    #pragma endscop
}
