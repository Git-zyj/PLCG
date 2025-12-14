/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_19 = ((var_12 ^ ((max((arr_4 [i_1] [i_0]), 108)))));
                var_20 = (max(var_20, ((max((arr_4 [i_0] [i_0]), 26105)))));
                var_21 = (((((arr_0 [i_0]) + (((var_13 ? -4918986219514756143 : (arr_3 [i_1] [i_0])))))) + ((((var_12 + var_5) ? ((min((arr_1 [i_0] [i_0]), -11))) : (((arr_0 [14]) ? (arr_3 [i_0] [i_1]) : (arr_4 [i_1] [i_1]))))))));
                arr_5 [1] [i_1] [i_0] = (((((var_1 ? (arr_1 [20] [i_1]) : (~1)))) ? (((max(116020162676450710, -20)))) : (!3799548345)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    var_22 = (arr_6 [i_2 - 1]);
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_23 = (((~8469) < (26095 * 65535)));
                                var_24 &= (max((((arr_2 [i_6 + 2]) ? (arr_4 [i_6 + 2] [i_2 + 1]) : 14533022734450376440)), ((((arr_11 [i_5] [i_6 + 2] [i_2 - 1] [i_3]) > (max((arr_16 [i_3] [i_3]), -11)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 |= ((-1189 ? 255 : -399954689));
    var_26 = (~3068593999);
    var_27 = ((~((((var_14 % var_10) || (8466 >= var_16))))));
    #pragma endscop
}
