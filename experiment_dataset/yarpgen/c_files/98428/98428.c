/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (max(var_12, (((max(var_12, var_10)) * var_11))));
    var_16 = ((-var_7 ? (((((171 ? 186 : var_8))) ? ((var_13 ? var_13 : var_3)) : var_14)) : (((32 <= 1479451054178438920) ? 0 : ((var_11 ? var_3 : var_2))))));
    var_17 = ((+(((~190) ? (1479451054178438900 || var_6) : ((0 ? 201 : 171))))));
    var_18 = 1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 += (max(1, ((1900290609 != (((min(var_11, 32))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_20 = (((((53196 || -1553890352) || (var_12 || var_0))) ? (((arr_10 [i_1 + 1] [i_1 - 1] [i_3 + 4] [i_3 + 1]) ? (arr_10 [i_1 + 1] [i_1 - 1] [i_3 + 4] [i_3 + 1]) : var_5)) : ((max((!var_2), var_4)))));
                                var_21 = (min(var_21, (arr_5 [i_2] [i_1 - 1])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_0] [i_2] [i_5] [i_6] = ((-1945683842 + ((min(5, var_6)))));
                                arr_22 [i_0] [i_0] [i_0] [i_5] [i_6] [i_5] = (((max(((-1945683842 ? 4294967290 : 1)), 62)) != var_2));
                            }
                        }
                    }
                    var_22 = (((((arr_2 [i_0] [i_1 - 1]) ? (max(var_8, var_5)) : ((1945683841 ? var_4 : 65535)))) - (max(65535, (arr_1 [i_1 - 1] [i_1])))));
                }
            }
        }
    }
    #pragma endscop
}
