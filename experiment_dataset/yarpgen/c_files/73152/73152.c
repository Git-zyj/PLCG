/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((((((var_3 ? 2035401719 : 528572958))) * (~9554880831774425723))), (~8183)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((((min((arr_2 [i_0]), (arr_2 [i_0])))) ? 0 : (arr_2 [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                arr_15 [i_0] [i_0] [i_1] [i_0] [7] = ((7 ? 15 : 114));
                                var_14 = 2259565577;
                                arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (7 < 2147482624);
                                var_15 = (((var_6 < -923807853) & (arr_14 [i_1] [i_2 + 2] [i_2 + 1] [13] [13] [i_2] [i_2 + 2])));
                            }
                            for (int i_5 = 0; i_5 < 16;i_5 += 1)
                            {
                                arr_21 [i_5] [i_1] [6] [i_1] [i_0] = (max((((((min(11150, 8323072))) || var_9))), (((-15 >= 1) ^ (min(726650662, 116))))));
                                arr_22 [i_3] [0] [i_1] = ((max(16241, 63)));
                                arr_23 [i_0] [i_0] [i_1] [i_0] [i_0] = var_4;
                                var_16 = ((((-2743831323926672684 ^ var_10) & var_3)));
                                arr_24 [i_0] [i_0] [i_1] [i_0] = var_4;
                            }
                            var_17 ^= ((((1508239676 ? -854845771 : (arr_6 [i_0] [i_2 + 3]))) >= (((-20 > (arr_6 [i_1] [i_3]))))));
                            arr_25 [i_0] [i_1] [11] [i_3] = -1552786240;
                        }
                    }
                }
                var_18 += ((((((arr_11 [i_0]) ? var_11 : 7999448754778378931))) && (~var_3)));
            }
        }
    }
    #pragma endscop
}
