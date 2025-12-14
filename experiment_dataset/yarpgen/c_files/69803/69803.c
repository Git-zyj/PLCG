/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_1] = (~(((arr_0 [i_0 + 2]) % -68)));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_14 *= max((-9223372036854775790 <= var_10), ((255 ? (arr_12 [1] [1] [i_1] [2] [i_2 - 1] [i_2] [i_4]) : (arr_12 [i_2] [i_2] [i_2] [0] [i_2 - 1] [i_2 - 1] [i_2]))));
                                arr_14 [i_0] [i_1] [i_1] = var_1;
                                arr_15 [i_3 + 3] [i_1] [i_2] [i_1] [i_2] [i_0 - 1] = (--1);
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_15 = (min(var_15, ((max((arr_22 [i_0] [i_0] [i_0] [8] [i_7]), var_2)))));
                                arr_24 [15] [15] [15] [i_1] [i_7] = var_11;
                                arr_25 [i_1] [0] = (~(min((arr_22 [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 3] [i_0 + 1]), ((var_6 ? 30 : 253)))));
                            }
                        }
                    }
                }
                var_16 = (min(var_16, (arr_12 [i_0] [i_0] [i_0] [8] [i_0 + 3] [i_0] [i_0])));
                var_17 = (min(var_17, (((-1707233946 ? -662136872508564881 : 42010)))));
            }
        }
    }
    #pragma endscop
}
