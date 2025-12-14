/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_10 = (max(var_10, ((max((arr_3 [i_0]), ((~(arr_3 [i_1 - 2]))))))));
                var_11 = (~((max((arr_2 [3]), var_8))));
                arr_5 [1] [i_1] [i_1] = (max((max(41137, 104)), 104));
                var_12 = ((~((min(104, 110)))));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 -= ((+(((!((((arr_1 [i_3]) - 108))))))));
                                var_14 = max((min(((123799769 ? (arr_8 [i_3] [i_2] [i_0]) : -107)), ((5757 ? 48307 : (arr_11 [i_2] [i_1] [i_2]))))), ((17311 + (-2147483647 - 1))));
                            }
                        }
                    }

                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        var_15 = (max(18446744073709551615, 57993));
                        var_16 = (min((arr_12 [i_0] [i_0] [i_5 - 1] [i_5 - 2] [15]), (17311 & 1)));
                        var_17 &= (((1 ^ 83473164) != 32764));
                        var_18 *= (max(1, -123799782));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_19 |= (arr_10 [i_0] [i_1 - 2] [i_2] [i_0] [i_6]);
                        var_20 = var_7;
                        var_21 -= (arr_16 [i_0] [3] [i_1 - 1] [i_1 + 1]);
                    }
                    for (int i_7 = 3; i_7 < 20;i_7 += 1)
                    {
                        var_22 = -1001732810;
                        arr_22 [i_0] [i_2] [i_0] [i_0] = (max(((((arr_15 [i_2] [i_2] [12] [i_7] [i_2]) == (arr_15 [i_2] [i_2] [1] [i_1 - 1] [i_1 - 1])))), (((arr_18 [i_2]) ^ (arr_18 [i_2])))));
                    }
                    var_23 = (min(4582083901968362382, -123799806));
                    var_24 &= (arr_4 [i_2]);
                }
            }
        }
    }
    var_25 = (max(var_25, (4291 == 33757)));
    #pragma endscop
}
