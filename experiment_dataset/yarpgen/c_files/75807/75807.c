/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_11 ^ (min((((var_4 ? 55 : 127))), (min(123, 13978117939435498456))))));
    var_21 -= var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = 12528757528495230273;
                    var_22 = 8471721543981616407;
                }
                /* vectorizable */
                for (int i_3 = 2; i_3 < 9;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                arr_16 [i_5] [i_4] [i_0] [i_1] [i_0] = ((-90 >= (((arr_9 [i_0]) ? (arr_14 [i_5] [i_4] [i_3] [i_1 - 1] [i_1] [i_0] [i_0]) : (arr_7 [i_1])))));
                                arr_17 [i_0] = (~120);
                            }
                        }
                    }
                    var_23 = (((arr_2 [i_0] [i_0] [i_0]) ? (arr_15 [i_3] [i_3 - 2] [i_0] [i_0] [i_1] [i_1 - 2]) : 83));
                    var_24 = 17256140708140173218;
                    var_25 = ((~(((arr_4 [i_0] [i_1] [i_0]) ? 114 : (arr_14 [i_0] [i_0] [i_0] [i_1] [i_3] [i_3] [i_3 - 2])))));
                }
                var_26 = (((arr_14 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1 + 1] [i_1]) != -80));
            }
        }
    }
    var_27 = var_8;
    #pragma endscop
}
