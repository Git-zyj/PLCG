/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, ((((max(var_12, var_13)) < ((((1262021722 <= var_0) ? (min(2032210317, var_7)) : var_11))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_2] [i_2] [i_2] = (((min((arr_0 [i_0]), (arr_0 [i_1]))) > (((min((arr_5 [i_2] [i_1] [1]), var_14))))));
                    var_18 ^= -var_13;
                    var_19 *= (4236754579 * ((2032210317 & (32 == 14351891523520344654))));
                    arr_7 [i_2] [i_0] = ((11444847916925258535 * (((arr_3 [i_0] [i_0] [i_0]) / -var_2))));
                }
            }
        }
    }
    #pragma endscop
}
