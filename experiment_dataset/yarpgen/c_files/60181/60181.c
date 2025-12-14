/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_10 ^= (!60);
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_11 ^= (arr_6 [i_1] [i_1]);
                        var_12 = (min(var_12, -867972346));
                    }
                }
            }
        }
        var_13 = ((18446744073709551615 ? (arr_8 [i_0] [8] [i_0] [i_0] [8] [8]) : (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
    }
    var_14 = (max(var_2, var_9));
    var_15 = (max(var_15, (~var_9)));
    var_16 = (max(var_4, 2941488960980218305));
    #pragma endscop
}
