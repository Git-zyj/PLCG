/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, ((max(((26927 ? 1962746553 : (-72 ^ -23110))), ((max((max(-256, -50)), (max(235, 83))))))))));
                                arr_12 [i_0] [i_2] [i_2 - 2] [10] = ((960 ? -74 : -1));
                            }
                        }
                    }
                    arr_13 [i_1] [4] |= (-56 ? -32759 : ((-80 ? -587750902 : 256)));
                    var_21 |= (max((((257 | -7442) ? (~var_11) : (-48 ^ -17215))), ((1456 ? 26933 : 18662))));
                    var_22 = ((((max(-2127865407, -256))) ? ((-((6963 >> (var_10 + 4365))))) : (5776 | 7891)));
                    var_23 = 1535478283;
                }
            }
        }
    }
    var_24 |= (max((((!(((-15322 ? var_14 : 2147483647)))))), var_2));
    #pragma endscop
}
