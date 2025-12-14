/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_7 [i_2] [i_1] [i_0] = var_9;
                    var_10 = (min(var_10, ((max((var_7 / 1), (min((arr_5 [i_0] [i_0] [i_0] [i_2]), var_3)))))));
                    var_11 ^= var_7;
                    var_12 = max(((max((max(var_0, (arr_6 [i_1] [14]))), var_9))), (((-20041 + -246690058) & (((arr_2 [i_0] [i_2]) ? (arr_3 [i_0] [i_1]) : (arr_6 [i_1 - 3] [i_2]))))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_13 = (((arr_3 [i_0] [i_0 + 2]) ? (arr_2 [i_1 + 1] [i_0 + 1]) : (arr_2 [i_1 - 2] [i_0 + 1])));
                    var_14 = (((arr_3 [i_0 + 4] [i_1 + 1]) % (arr_3 [i_0 + 4] [i_1 + 1])));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            {
                                arr_16 [i_5] [i_1] [i_1] [i_1] [i_1] [i_1] = ((((arr_8 [i_4] [i_1]) ? (arr_10 [i_0] [3] [i_3] [i_4]) : var_5)));
                                var_15 += (((arr_1 [i_1 - 3] [i_0 + 3]) > (arr_5 [i_4] [i_1] [i_1 - 1] [13])));
                                arr_17 [15] [6] [i_3] [i_4] [i_0] [i_0] [i_1] = (((185 - 1) | (((arr_13 [5] [5] [i_1] [i_1] [i_1] [18]) ? 83 : (arr_13 [i_5] [i_5] [i_1 - 4] [5] [i_1 - 4] [i_0 + 3])))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_6 = 3; i_6 < 22;i_6 += 1)
                {
                    var_16 = (((arr_9 [i_0] [i_1] [i_1 - 3] [i_1]) ? (arr_18 [23] [23]) : (arr_9 [i_0] [i_6] [i_1 - 3] [i_0 + 3])));
                    var_17 = ((182 ? 9381385667971034508 : 2062024740));
                    arr_21 [i_6] = (arr_3 [i_1] [i_6]);

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_18 = ((-((16764 ? 9065358405738517118 : 107))));
                        var_19 = ((2232942569 ? 37 : 68));
                    }
                }
                var_20 = (((min(1985080117, ((min(var_1, (arr_10 [i_0] [i_0] [i_0] [i_0]))))))) ? (((((var_5 + (arr_20 [i_0] [i_1] [i_1] [i_0])))))) : (max((((arr_0 [i_0 + 2]) / var_7)), ((var_3 ? var_4 : (arr_22 [i_0 - 2] [i_1 - 1] [i_0 - 2] [i_1 - 1] [i_0] [i_1 - 1]))))));
            }
        }
    }
    var_21 = (max(var_21, ((var_5 ? (((min(188, 1052)))) : (~var_1)))));
    #pragma endscop
}
