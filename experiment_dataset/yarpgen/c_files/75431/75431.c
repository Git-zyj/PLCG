/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = (~31967);
                var_14 = 31963;
                arr_5 [i_0] [12] [i_0] = (((((31965 ? var_11 : (arr_4 [i_0] [i_0] [i_1]))))) && (arr_0 [18] [17]));
                var_15 = ((((var_4 ? var_1 : var_6)) - (33593 / 2189099248)));
                arr_6 [i_0] = (!239);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                var_16 ^= var_5;
                var_17 = (max(var_17, (((!(!0))))));

                for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_18 ^= ((var_9 / ((((((var_1 ? var_8 : var_7))) ? ((min(var_1, 1))) : var_10)))));
                                var_19 = var_1;
                            }
                        }
                    }
                    var_20 = min((!var_3), 27752);
                    var_21 = (max(var_21, 118));
                    var_22 -= 1477928033023072829;
                }
                for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                {
                    arr_24 [i_3] [i_7] = 1;
                    var_23 ^= ((((var_0 && ((!(-32767 - 1))))) ? var_0 : ((~(arr_11 [i_2] [i_2])))));
                    var_24 = ((10 ? 0 : ((33588 ? 9345972222724127402 : 65532))));
                }
                var_25 = var_2;
                var_26 = ((((((max(1, (arr_9 [i_2] [3])))) * (!2972341806))) | var_12));
            }
        }
    }
    var_27 ^= var_7;
    var_28 = (min(var_28, ((max(var_5, (((-var_8 <= ((33573 ? 1704384706 : var_4))))))))));
    #pragma endscop
}
