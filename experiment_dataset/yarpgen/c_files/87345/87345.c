/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 ^= (max(-14598, var_13));
                    arr_7 [i_2] [i_1] [i_2] = (((!-14579) << (((~14614) + 14616))));
                    arr_8 [i_0] [i_2] [i_2] = ((~(max(14598, (arr_3 [i_0] [i_1] [4])))));
                    arr_9 [i_2] [i_2] [i_2] [i_2] = (arr_1 [i_0]);
                }
            }
        }
    }
    var_18 = var_3;
    #pragma endscop
}
