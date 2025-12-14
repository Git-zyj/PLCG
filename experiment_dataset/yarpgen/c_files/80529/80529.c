/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -1119142936;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_11 *= (min(((((((var_1 + 2147483647) << (((arr_1 [13]) - 11728924201662718258))))) ? var_9 : (((var_0 ? 57153 : var_2))))), (min(57143, var_9))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_12 &= ((max(((max(8379, var_8)), (max(var_3, var_7))))));
                    var_13 = (!var_9);
                }
            }
        }
    }
    var_14 *= (((((((var_8 / var_7) == var_0)))) % ((var_2 ? var_9 : var_3))));
    #pragma endscop
}
