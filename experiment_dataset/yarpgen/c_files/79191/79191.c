/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((max((((1474627853 ? var_1 : -1474627853))), -1474627853)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] = (((-1474627860 ? ((min(var_12, var_12)) : (arr_10 [i_1])))));
                                arr_16 [i_0] [i_1] [0] [i_3] [i_1] [i_1] = ((-(42 & 0)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_21 = (((((~((-1145101900419435797 ? 3891 : -1145101900419435771))))) ? 1145101900419435797 : -23));
                            var_22 = (min(var_22, ((((((var_14 ? 0 : (arr_21 [i_6] [6] [6] [i_6] [i_6] [6])))) < (((((min(var_3, (arr_17 [i_0] [i_0] [1])))) ? -var_15 : (arr_6 [i_6] [i_6])))))))));
                        }
                    }
                }
            }
        }
    }
    var_23 = ((((~var_3) == var_5)));
    var_24 |= var_7;
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            {
                var_25 = (min(var_25, (arr_28 [i_7 - 1])));
                var_26 = (max((!18680), 1));
                var_27 = -var_7;
            }
        }
    }
    #pragma endscop
}
