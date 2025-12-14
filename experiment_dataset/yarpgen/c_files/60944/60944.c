/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((40837 >> (((var_0 > 244) % var_1))));
    var_12 = (min(var_12, ((max(((min(var_0, var_8))), (min((min(var_9, 8822894669832671441)), (var_6 <= var_4))))))));
    var_13 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] [i_2] = (min(var_3, ((min(-32758, 13039)))));
                    var_14 = ((~((min(13054, -109)))));
                }
            }
        }
    }
    var_15 ^= -var_10;
    #pragma endscop
}
