/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_11 += (((arr_1 [i_0]) % var_4));
        arr_2 [0] = var_5;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [i_3] = var_9;
                        arr_11 [7] [i_2] [i_3] = 998847037;
                    }
                }
            }
        }
    }
    var_12 = (0 <= 3296120258);
    var_13 = ((((!var_5) << (var_2 - 147))));
    var_14 = (var_7 << (998847024 - 998846989));
    #pragma endscop
}
