/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_1 + 4] [i_2 + 3] [i_3] = ((!(((arr_3 [i_0 - 1]) || 127))));
                        var_15 = (127 ? var_3 : (123 == -1584622478));
                        var_16 = (((arr_4 [i_2 + 4] [i_1 - 1] [i_0 + 1]) == (arr_4 [i_2 + 2] [i_1 + 1] [i_0 - 1])));
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                    {
                        arr_15 [20] [10] [i_4] [i_4] [i_1] [i_0 - 1] = ((((1584622500 || -8287) ? (arr_10 [i_0 - 1] [i_1 + 1] [i_2 + 3] [i_4]) : (0 || var_4))));
                        arr_16 [i_4] [i_1] [i_1] [i_1 + 4] = 18446744073709551492;
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                    {
                        var_17 += -1584622478;
                        var_18 = 63;
                        arr_19 [i_0] [i_1] [i_2 - 3] [i_5] = (((arr_2 [i_2 - 2] [i_2 + 2] [i_1]) ? (arr_2 [i_2 - 1] [i_2 - 3] [i_2 - 2]) : var_13));
                    }
                    var_19 = (min(var_19, 123));
                }
            }
        }
        var_20 &= (max(var_8, var_9));
    }
    var_21 = ((var_6 ? (1 ^ var_12) : ((((var_10 ? var_3 : 1584622477)) & ((max(59, 127)))))));
    var_22 = 72;
    var_23 |= (((var_9 ? var_13 : var_0)));
    var_24 += (min(((((var_14 ? 0 : 1584622482)))), ((~(~2147483645)))));
    #pragma endscop
}
