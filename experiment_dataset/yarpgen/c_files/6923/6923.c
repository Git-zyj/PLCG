/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = ((((6 >> (arr_0 [i_0])))));
                    var_18 = (arr_0 [2]);
                    var_19 ^= ((!((min((58812 >> 1), (arr_2 [i_1 - 1] [i_1 - 4] [i_1 + 3]))))));
                }
            }
        }
    }
    var_20 = ((var_9 ? ((min((var_7 - var_2), var_10))) : ((var_9 ? var_4 : (var_12 - 18446744073709551601)))));
    var_21 = (((((var_3 << (32747 == var_8)))) ? ((min(var_9, (max(var_5, var_0))))) : ((((var_12 ? -24717 : var_2))))));
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 9;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            {
                var_22 = (((arr_9 [1]) ? -var_3 : (arr_2 [i_4] [i_4] [i_4])));
                arr_11 [i_3 - 2] = (((arr_8 [i_3 + 1]) ? var_16 : ((((max(58812, var_14))) ? 1 : ((-(arr_0 [i_4])))))));
            }
        }
    }
    #pragma endscop
}
