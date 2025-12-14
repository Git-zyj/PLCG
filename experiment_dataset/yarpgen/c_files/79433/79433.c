/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((((((29995 ? 69 : 6883159629345978704))) ? 28645 : var_1)))));
    var_16 += (max((!-1), (max(9, 2190433320960))));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    var_17 = ((!((max((arr_0 [i_2]), 25)))));
                    arr_8 [i_0 - 2] [i_1] [i_2] [i_2] = (24 && 36890);
                    var_18 = (arr_3 [i_0]);
                }
            }
        }

        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            arr_11 [i_0 + 1] [i_3] = var_0;
            var_19 -= 36909;
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            arr_14 [i_0] [i_4] [i_4] = ((~(max((((~(arr_9 [i_0 - 2] [i_4] [i_4])))), var_5))));
            var_20 = 171;
        }
        for (int i_5 = 1; i_5 < 21;i_5 += 1)
        {
            var_21 = ((((16177922353163101178 || var_10) > (((arr_16 [i_0] [i_5 - 1]) - (arr_3 [i_5]))))));
            var_22 = (arr_12 [i_0]);
        }
        arr_17 [i_0 - 2] = (max((~-91), (min(0, var_8))));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 22;i_7 += 1)
            {
                {
                    arr_24 [1] [i_6 + 2] [i_6] [i_7] = (min((((380392536 != ((16177922353163101178 ? 36028797018963967 : 13084272169584842029))))), (min((((580679301268095178 ? -7578875594957462099 : 14))), 16177922353163101178))));
                    var_23 = ((1028715200388814951 ? ((((arr_18 [i_0 + 1] [i_6 + 2] [i_7 - 2]) + (arr_18 [i_0 + 1] [i_6 + 1] [i_7 - 2])))) : (((arr_18 [i_0 - 1] [i_6 + 2] [i_7 - 3]) ? 15121545460399832394 : (arr_18 [i_0 - 1] [i_6 + 3] [i_7 - 3])))));
                    var_24 = (max(var_24, ((!(18410715276690587648 * var_5)))));
                    arr_25 [22] = (!-9);
                }
            }
        }
    }
    var_25 += (((max(-var_3, var_13)) / var_10));
    #pragma endscop
}
