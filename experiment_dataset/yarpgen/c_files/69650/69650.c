/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_11 = ((((-4101294663418662647 + 1916) ? (arr_2 [i_0]) : ((65523 ? -4101294663418662647 : 1)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_12 |= (((arr_8 [i_0] [1] [i_1 - 1] [i_1 - 2]) < (((arr_8 [i_0] [i_0] [i_1 - 2] [i_1 - 3]) / (arr_8 [i_1] [i_1] [i_1 + 1] [i_1 - 1])))));
                                var_13 = (((arr_11 [4] [i_0] [i_0]) < (((arr_11 [i_0] [i_1 - 3] [2]) ? (arr_0 [2]) : (-9223372036854775807 - 1)))));
                                arr_14 [i_0] = (arr_6 [9] [i_1]);
                                var_14 = ((((65520 ? (((((-2147483647 - 1) <= (-9223372036854775807 - 1))))) : (arr_7 [i_0] [i_1] [i_2])))) || (((4101294663418662647 || 4101294663418662630) <= ((9223372036854775807 ? (arr_2 [i_3]) : 2432807360)))));
                                var_15 = (min(0, (min((min(3793736315, 1)), (arr_7 [i_1 - 2] [i_1 - 3] [i_1 + 1])))));
                            }
                        }
                    }
                    arr_15 [i_0] [i_1] [i_2] = ((((((32760 / 1) <= -8927603186999296288))) >= (((3793736336 <= ((max(4, 2147483633))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 24;i_6 += 1)
        {
            {
                var_16 = (arr_18 [i_6 - 2] [i_6]);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        {
                            arr_26 [i_6] [1] [i_7] [i_8] [i_6] [i_5] = ((max((arr_25 [i_6] [i_6] [22] [i_6] [i_6 - 1] [i_6 + 1]), 198)));
                            var_17 = 30;
                            var_18 = 3245816990;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
