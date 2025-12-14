/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_10 ^= (((((137422176256 ? (((1 ? 1 : var_6))) : (arr_2 [i_1])))) ? (1 & 18446744073709551615) : ((((((var_7 - (arr_0 [i_0])))) ? (min(1, (arr_2 [i_1]))) : (arr_2 [i_1]))))));
                var_11 = (max(var_11, (arr_3 [i_0] [i_1] [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_12 *= var_7;
                            var_13 = ((((min((arr_10 [i_3] [i_0] [i_1] [i_0]), (arr_5 [i_2])))) ? (arr_5 [i_2]) : (((arr_1 [i_3]) ? (arr_5 [i_0]) : (arr_5 [i_0])))));
                            var_14 = (((((((min(1, 58))) ? (((max((arr_9 [i_3] [i_2] [i_2] [i_1] [i_1] [i_0]), (arr_8 [4] [i_2] [4] [i_0]))))) : ((198 ? (arr_5 [i_3]) : -18))))) ? (min(((var_2 * (arr_0 [i_0]))), (((var_3 ? 1 : var_6))))) : (((((((9223372036854775801 ? -8857271931716109909 : 91))) >= -7010307527835132202))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 11;i_5 += 1)
        {
            {
                var_15 += (((!var_2) * 805079472));
                var_16 += ((((!(arr_16 [i_5 + 1]))) ? 22207 : ((1 ? var_2 : (arr_16 [i_5 + 1])))));
                arr_18 [i_4] [i_5] [i_5] = (((arr_11 [i_4]) - ((-8069 ? var_3 : var_3))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                {
                    var_17 = (min(var_17, 0));
                    arr_27 [i_7] [i_7] [i_7] [i_8] = ((1 % ((65535 % (arr_25 [i_6] [i_6] [i_6])))));
                    arr_28 [i_6] [i_7] [i_8] = (max((((arr_24 [i_6]) ? (((1 ? 198 : (arr_22 [i_7])))) : (((arr_20 [i_6] [i_6]) ? 9223372036854775795 : (arr_22 [i_7]))))), ((((arr_21 [i_7] [i_7] [i_8]) && ((!(arr_21 [i_7] [14] [i_7]))))))));
                }
            }
        }
    }
    #pragma endscop
}
