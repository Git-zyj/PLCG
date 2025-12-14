/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    arr_9 [2] [i_1 + 1] [i_0] [i_1 - 1] = (((arr_2 [i_1 + 1]) > (arr_5 [i_1 - 1] [i_2 + 3] [i_0])));
                    var_17 = (max(var_17, -var_10));
                    arr_10 [i_0] [10] [i_0] = ((~(arr_6 [i_0] [i_0] [i_0] [i_2 + 1])));
                }
                arr_11 [i_0] [3] = ((min(50580, 2957321406)));
            }
        }
    }
    var_18 = ((!((max(var_12, (var_6 * 185))))));
    var_19 += (max(var_16, var_3));
    var_20 = var_4;
    #pragma endscop
}
