/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((15451 ? (-32767 - 1) : 25)))) ? ((var_10 * (min(var_7, 0)))) : (min(3030635830, -var_10))));
    var_17 = var_3;
    var_18 = 230;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_10 [i_1] [1] [i_0 + 1] [i_3] = ((((!(arr_3 [i_0]))) ? (arr_0 [12] [i_3]) : 18446744073709551615));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_13 [i_4] [2] [i_2] [2] [2] [1] = -6620;
                            arr_14 [i_0] [i_1] [i_1] [i_0] = (((arr_1 [i_0] [i_0]) ? (arr_4 [i_0 - 1]) : ((230 ? 6619 : 122))));
                            arr_15 [i_1] [i_3] [i_0] [i_3] [i_4] [i_2] [7] = (((arr_7 [i_0] [i_0] [i_2 - 1] [i_2 - 2] [i_3] [10]) - (max(((((arr_5 [i_0] [i_0] [i_0] [i_0]) ? (arr_4 [i_1]) : (arr_8 [i_0] [i_1] [i_2] [i_4])))), (max((arr_2 [i_3]), 2685747780))))));
                            arr_16 [i_0] [0] [i_0 - 1] [0] [i_0 + 1] [i_0 + 1] [2] = 1918031701;
                            arr_17 [i_0 + 1] [i_0 + 1] [i_1] [i_0] [i_3] [i_4] = (!0);
                        }
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            arr_20 [i_5] [i_5] [4] [4] [i_1] [i_0] = ((((~(arr_18 [i_0 + 1] [i_0 + 1] [i_1] [7] [i_3] [i_5 - 1])))) ? -18446744073709551608 : ((((arr_11 [i_0 + 1] [i_1] [i_2 + 1] [2] [1]) ? 0 : -21902))));
                            arr_21 [i_1] [2] [i_0] [i_1] = (((((arr_18 [i_0] [i_1] [i_1] [i_2] [i_3] [i_5 - 1]) - (arr_8 [i_0] [i_0 - 1] [4] [i_0])))) ? (arr_9 [i_2 - 2] [1] [1] [10]) : ((-(arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))));
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] = -10040;
                            arr_23 [0] [i_1] [i_1] [4] [i_5] &= (((arr_7 [i_0 - 1] [i_1] [i_1] [i_5 - 1] [i_5 - 1] [i_5 - 1]) ? 1 : (((330907540299912202 ? (arr_9 [i_0] [i_0] [i_2 - 1] [i_5]) : 1256378460)))));
                        }
                    }
                    arr_24 [i_0 + 1] [i_1] [2] = ((-(min((-64 || 287835962), ((18446744073709551598 ? 127 : -108))))));
                }
            }
        }
    }
    #pragma endscop
}
