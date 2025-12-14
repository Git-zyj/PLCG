/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_14 = (((arr_6 [i_1] [i_1]) ? (1694991058 >= var_11) : (!1)));

                    for (int i_3 = 1; i_3 < 13;i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_1] = 15863750952928778546;
                        var_15 = ((~(1694991048 * 1694991058)));
                    }
                    for (int i_4 = 1; i_4 < 13;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                        {
                            var_16 = (max(var_16, (((~((~(arr_1 [i_0 + 2] [i_0]))))))));
                            var_17 = (max(var_17, (arr_15 [i_5])));
                            arr_18 [i_0] [i_0] [i_2] [i_0] [i_1] = var_0;
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                        {
                            var_18 |= 0;
                            var_19 = ((((((arr_5 [i_4 - 1] [i_2]) && 1694991048))) ? ((~(((arr_13 [i_1] [i_4 - 1] [i_1] [i_1]) ? (arr_7 [i_0] [i_1] [i_1]) : var_0)))) : (((!(1 + var_1))))));
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                        {
                            arr_24 [i_0] [i_0] [i_0] [i_1] [i_0] = (((-32767 - 1) + ((-83 ? 55 : 27403))));
                            var_20 = (max(var_20, (((0 / (~1694991031))))));
                            var_21 = max(((1 ? 126 : 232)), (arr_8 [i_7] [i_4] [i_1] [5]));
                        }
                        var_22 |= (((((1694991025 * 1) ? 1 : var_9)) + ((((!954665470) <= ((-2066254104 ? 1 : 1)))))));
                        var_23 = ((var_10 ? (((arr_0 [i_0 + 2] [i_4 - 1]) ? 1 : ((~(arr_20 [i_0] [i_1] [i_2] [1] [i_4 - 1]))))) : ((~(!0)))));
                        var_24 = (min(var_24, 2582993120780773069));
                        arr_25 [i_1] = ((-(((7 ? 11 : -14270)))));
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_25 = ((!((((((var_9 ? 1 : (arr_4 [i_8] [i_1])))) ? (((arr_19 [i_8] [1] [13] [i_1] [i_8] [i_2] [i_1]) ? var_8 : var_5)) : var_9)))));
                        var_26 = (!var_7);
                    }
                    arr_28 [i_1] [i_1] = ((((!(((64466 ? -1308746607582811941 : 14544))))) ? (((-443 != ((2582993120780773070 ? 32751 : (arr_23 [i_0] [i_2] [i_1] [i_1] [i_0] [i_0])))))) : (arr_14 [1] [i_1] [i_1] [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
