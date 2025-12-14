/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -var_13;
    var_15 = (!var_13);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_16 = 1897136983;
                    var_17 = arr_3 [i_2] [i_1];
                    var_18 = (min(var_18, ((((((~(arr_5 [i_2 - 1] [i_0 - 1])))) ? (max(196, ((var_1 >> (196 - 176))))) : (43 & 196))))));
                }
            }
        }
    }
    #pragma endscop
}
