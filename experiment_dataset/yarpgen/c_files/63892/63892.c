/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_19 += ((((max((max(712138724850247575, (arr_3 [i_0] [14]))), ((16384 ? var_5 : var_5))))) ? ((~(min((arr_4 [i_0] [i_0] [18]), 14)))) : var_11));
                arr_5 [i_1] [i_1] [i_1] = (((((arr_3 [i_0] [i_1]) ? 255 : (arr_3 [i_0] [i_1]))) + (arr_1 [i_0])));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_20 *= (((((((arr_0 [21]) / 1)))) ? 0 : ((1 - ((8796092760064 ? -10372 : (arr_4 [8] [i_2] [i_2])))))));

                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        var_21 = (min(var_21, ((max(45, (max((arr_7 [i_3 + 4] [i_3 - 1] [i_2] [i_3 + 4]), (arr_7 [i_3 + 4] [i_3 + 3] [i_2] [i_3 + 2]))))))));
                        var_22 = ((-(arr_8 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3 - 1])));
                        var_23 = ((~((var_15 ? 1 : (arr_7 [i_3 + 1] [24] [i_2] [i_0 + 1])))));
                    }
                    var_24 = ((((arr_7 [i_0] [i_0] [i_1] [i_0 + 1]) ? (arr_1 [i_0]) : 2836669749692355561)));
                }
                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    var_25 += ((((min((arr_6 [4] [14]), 1))) ? ((min(0, 1))) : (((arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? -15296 : ((8442126247944404270 ? (arr_0 [i_0 - 1]) : var_17))))));
                    arr_12 [i_0] [i_1] = (-(((!(arr_4 [i_0] [i_0] [i_4 + 3])))));
                    arr_13 [i_0 - 1] [i_0 - 1] [i_0] [i_1] = (min((max(6214244484099414669, var_18)), ((max(268427264, (arr_6 [i_1] [i_1]))))));
                }
                var_26 = (arr_2 [i_0]);
            }
        }
    }
    var_27 -= ((var_10 ? ((((~-1679688325) ^ (((-32767 - 1) ? -31 : var_16))))) : var_14));
    var_28 = (max(((~(var_9 ^ var_2))), 1));
    #pragma endscop
}
