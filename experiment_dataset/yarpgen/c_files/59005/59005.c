/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    var_15 ^= ((((max((((193 >> (var_11 - 14)))), 417080690948643142))) != var_2));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_1] &= (!(83 / 193));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_16 = var_5;
                        var_17 = 63;
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] = var_0;
                    }
                    arr_13 [i_0] [i_0] [i_0] [i_2] = 53;
                    var_18 = (((arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) % 255));
                }
            }
        }
    }
    #pragma endscop
}
