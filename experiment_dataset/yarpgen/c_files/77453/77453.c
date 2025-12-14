/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= ((((((((18446744073709551610 ? 11 : 147))) ? 44943 : 2653831835))) ? (18446744073709551611 == var_6) : 0));
    var_20 = max((max(5276155134001583628, 65535)), (1 <= var_12));
    var_21 ^= ((!(((-5637 ? 244 : 6329673122660282932)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_22 = 65535;
        var_23 = (((arr_1 [6]) ? (arr_1 [i_0]) : ((min((arr_1 [2]), (arr_1 [i_0]))))));
    }
    for (int i_1 = 2; i_1 < 7;i_1 += 1)
    {
        var_24 *= (!var_0);
        var_25 = var_6;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_26 = (min(var_26, 3861));
                            var_27 = (min((arr_5 [7] [i_1 - 2] [i_1]), 2380916756153496944));
                        }
                        var_28 = var_0;
                        var_29 = (max(var_29, (arr_5 [i_1] [i_2] [i_1])));
                        var_30 |= var_16;
                        var_31 = (max(var_31, (((-32372 + (arr_8 [i_1] [i_1] [i_1 + 1] [i_1]))))));
                    }
                }
            }
        }
        var_32 = (((778377108 + 39) != (max((arr_9 [i_1 - 1] [i_1] [i_1 - 1] [i_1]), (min(-28002, 16777215))))));
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        var_33 = ((((arr_14 [i_6]) ? (arr_14 [i_6]) : (arr_14 [i_6]))));
        var_34 = ((156 ? (!-837272323212566075) : (((arr_14 [i_6]) ? -2078146871517297204 : (arr_14 [i_6])))));
    }
    #pragma endscop
}
