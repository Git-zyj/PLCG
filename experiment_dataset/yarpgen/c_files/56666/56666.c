/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_10 = 0;
                    var_11 = (min(var_11, 19126));

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {

                        for (int i_4 = 4; i_4 < 12;i_4 += 1)
                        {
                            arr_11 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = 156;
                            var_12 = 187;
                            var_13 = 0;
                        }
                        /* vectorizable */
                        for (int i_5 = 4; i_5 < 10;i_5 += 1)
                        {
                            var_14 = (min(var_14, -1621541561));
                            arr_16 [i_0] [i_0] [i_0] [i_1] [i_0] = 9556;
                            var_15 = 156;
                            arr_17 [1] [1] [i_1] = 187;
                            arr_18 [i_0] [i_0] [i_0] [0] [i_0] [i_1] = 100;
                        }
                        var_16 ^= 52556;
                        arr_19 [i_2] [i_1] [i_0] = 1;
                    }
                    for (int i_6 = 4; i_6 < 10;i_6 += 1)
                    {
                        var_17 = 100;
                        var_18 = (min(var_18, 615013213));
                        arr_24 [i_0] [i_1] [i_2] [i_6] [i_0] [i_1] = 3;
                    }
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        arr_29 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = 156;
                        var_19 = 252;
                        arr_30 [i_1] [i_2] [i_1] [i_1] = 3604;
                        var_20 = 151;
                    }
                    arr_31 [i_1] [i_1] [i_1] [i_2] = 0;
                }
            }
        }
    }
    var_21 = -18239;
    var_22 = 511;
    var_23 -= 248;
    #pragma endscop
}
