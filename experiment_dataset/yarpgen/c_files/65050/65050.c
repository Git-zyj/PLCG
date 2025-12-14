/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (max((max((min(var_9, 2)), ((min(-1932700637, var_16))))), (((~(29592 > var_8))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        var_21 = ((~(3604284053 * 0)));
                        var_22 ^= (((var_13 / (max((arr_1 [i_0]), (arr_8 [i_0] [i_1] [i_2] [i_2 + 3] [i_3] [i_3 - 2]))))));
                        arr_10 [i_0] [i_1] [i_2] [i_3 + 1] = (max(969419304, ((var_10 & (((arr_5 [i_0] [i_0] [i_0]) ? 20 : 53054))))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 17;i_5 += 1)
                        {
                            {
                                arr_17 [i_5] [i_4] [7] [0] [i_0] = ((~(!0)));
                                arr_18 [i_0] [i_0] [18] [i_0] [i_0] = (max((arr_3 [i_2] [i_2 - 2] [i_2 - 2]), (((((var_1 ? 22803 : 8290412243518407845)) < 18446744073709551595)))));
                                var_23 = (max((arr_11 [i_5] [i_2] [0] [i_0]), (((1 ? 139 : 6618051046866913322)))));
                                var_24 = (max(var_24, ((min(((~((((arr_16 [7] [i_1] [1]) > (arr_14 [i_1] [i_1] [i_1 + 1] [i_1] [i_1] [i_1])))))), ((6618051046866913322 << ((((((~(arr_7 [i_0] [i_0] [i_0]))) + 28584)) - 26)))))))));
                                var_25 = var_10;
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = var_18;
    #pragma endscop
}
