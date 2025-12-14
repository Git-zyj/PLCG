/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= ((~(((var_3 != (((var_6 >> (var_10 + 5542)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = var_4;
                var_14 *= 1;
            }
        }
    }
    var_15 = (max(var_15, var_10));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {

                for (int i_4 = 1; i_4 < 21;i_4 += 1)
                {
                    arr_13 [i_2] [i_2] [23] [i_2] = (arr_9 [i_4 + 3] [i_4 - 1] [i_4 + 3] [i_4 + 3]);
                    var_16 = (arr_10 [16]);
                }
                var_17 = (max(var_17, (arr_9 [i_2] [i_2] [i_3] [i_2])));
                var_18 = (arr_8 [i_3]);
            }
        }
    }
    #pragma endscop
}
