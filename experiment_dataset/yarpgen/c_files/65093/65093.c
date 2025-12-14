/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1] = (max(-1579362337, 66584576));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_7 [i_1] = ((((min((arr_1 [i_0]), 8909262713269933662))) ? (((max((arr_6 [i_0] [i_1] [i_1] [i_2]), (arr_2 [i_1] [i_1] [i_2]))))) : (arr_0 [i_0] [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_18 *= (min(3960180296, (arr_9 [i_3 + 1] [4] [i_2] [i_2] [4] [i_2])));
                                var_19 = (min(var_19, ((((arr_6 [i_3 + 1] [i_3 - 1] [i_3 - 2] [i_3 + 1]) ? (((arr_6 [i_3 + 1] [i_3 - 1] [i_3 - 2] [i_3 + 1]) ? (arr_6 [i_3 + 1] [i_3 - 1] [i_3 - 2] [i_3 + 1]) : 12)) : ((((arr_6 [i_3 + 1] [i_3 - 1] [i_3 - 2] [i_3 + 1]) ? (arr_6 [i_3 + 1] [i_3 - 1] [i_3 - 2] [i_3 + 1]) : var_12))))))));
                            }
                        }
                    }
                    var_20 = 3960180310;
                    var_21 = (1665761455 ^ 1579362337);
                }
                for (int i_5 = 3; i_5 < 8;i_5 += 1)
                {
                    var_22 = ((((var_3 ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_5 [i_1] [2] [i_1] [i_5])))));
                    var_23 = 0;
                    arr_18 [i_0] [i_1] [i_1] [i_5] = (((((min((arr_17 [i_5 + 1] [i_5 - 3] [i_5 - 2]), (arr_2 [i_1] [i_5] [i_5 - 1]))))) % -2497045623542679517));
                    var_24 = (min(((3601782782 ? (arr_12 [i_5 - 2] [i_5 + 2] [i_5 - 1]) : 1579362337)), (((var_2 - (arr_13 [i_5 - 1] [i_5 + 3] [i_5]))))));
                }
                var_25 ^= ((((min((arr_1 [i_0]), (max(2629205841, 2629205841))))) ? (3849015207 ^ -1579362339) : (~var_2)));
            }
        }
    }
    var_26 = var_17;
    #pragma endscop
}
