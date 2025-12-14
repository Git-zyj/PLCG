/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_17 -= (var_8 - 64085);
                    var_18 &= ((((arr_1 [i_2 + 2] [i_1]) >> (var_2 - 4265891475219699148))) | (((((65535 << (((arr_5 [i_0] [i_0]) - 30)))) ^ ((max(var_13, var_16)))))));
                }
            }
        }
    }
    var_19 = (max(((~(var_13 / var_3))), (((((min(15111, var_13))) < var_16)))));
    #pragma endscop
}
