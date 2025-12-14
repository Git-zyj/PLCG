/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_15 &= (min(0, (((-1716467899 ? 3262141762 : 1)))));
                var_16 = (min(var_16, 2270872049));
                var_17 = -var_3;
                arr_7 [i_0] [18] [4] |= (1032825552 ? 3262141762 : 1032825552);

                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    var_18 = (min(var_18, (arr_11 [i_2] [i_1] [1] [i_0])));
                    var_19 -= ((1032825534 ? ((-(((var_14 + 2147483647) >> (3262141748 - 3262141717))))) : (min(((1032825534 ? var_11 : var_2)), (arr_8 [i_2] [i_2 + 2])))));
                    arr_12 [i_0] = ((var_10 | (~2900039532)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_20 = var_1;
                                arr_19 [i_0] [i_0] [i_2] [i_0] [i_0] |= (((arr_0 [i_2]) ? (max(1394927764, var_13)) : 4097573112));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        {
                            var_21 += 3262141762;
                            var_22 = (((((var_10 >= (arr_28 [i_8] [i_7] [i_5]))))) + (min((arr_28 [i_6] [i_7 - 1] [i_8]), (arr_28 [i_8] [i_6] [i_5]))));
                        }
                    }
                }
                var_23 = (!(((~((~(arr_0 [22])))))));
                var_24 = (((((1 ? 2900039532 : 3262141762))) ? -var_5 : ((min(var_5, (arr_18 [i_6] [22] [i_5] [i_5] [18]))))));
                arr_31 [i_5] [1] [i_5] = ((min(((1032825534 ? var_10 : 3262141744)), -1916423191)));
                var_25 = 2900039532;
            }
        }
    }
    #pragma endscop
}
