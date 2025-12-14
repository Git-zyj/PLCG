/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((var_1 ^ 4194303) ? (!var_0) : var_4))) ? 16777215 : (var_2 | var_9)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = ((~(arr_1 [i_0] [i_0])));
                    arr_10 [i_0] [11] [11] = (~2593727872932474512);

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_13 = (max(var_13, (((6240718030706928285 == (arr_5 [1] [i_1 + 1]))))));
                        arr_13 [1] &= (arr_11 [i_0] [i_2] [i_2] [i_2] [i_0] [i_0]);
                    }
                    var_14 ^= (48027 && 1023);
                }
            }
        }
        var_15 = (((arr_8 [i_0] [i_0] [i_0] [i_0]) ? (arr_7 [i_0] [0] [i_0] [i_0]) : 114));
        var_16 = (((4294967295 ^ -73) ? ((~(arr_2 [i_0]))) : ((~(arr_11 [5] [i_0] [i_0] [i_0] [i_0] [i_0])))));
    }
    #pragma endscop
}
