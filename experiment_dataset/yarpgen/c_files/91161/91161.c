/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            var_10 += (!var_4);
                            var_11 ^= (((((-(arr_0 [4])))) % ((7144684930993997793 ? (arr_10 [i_1] [i_3 + 1] [i_1 - 1] [i_0]) : var_8))));
                            var_12 = (min(var_12, (((+(min((arr_4 [i_3 + 1]), 548230591)))))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_13 = ((-(((~12) & ((((arr_13 [1] [i_1] [i_1] [1]) | 1)))))));

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_14 = (((((~(arr_0 [i_1 + 1])))) ? (!1) : 25));
                        var_15 = ((((min((min((arr_8 [i_5] [i_1] [i_1]), 12)), ((32767 ? 2877202126989570199 : 1))))) ? ((((((((!(arr_2 [i_0]))))) <= (max(-548230592, 16486623553087689029)))))) : (arr_4 [i_5])));
                        arr_17 [i_0] [i_0] [i_1] [i_0] [i_1] = ((-(((!var_8) + -var_4))));
                    }
                    var_16 = ((~((max((arr_3 [i_1 + 1] [i_1 - 1]), 1)))));
                }
                for (int i_6 = 3; i_6 < 9;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 11;i_8 += 1)
                        {
                            {
                                arr_25 [i_0] [2] [3] [i_6 + 3] [i_6 + 3] [i_1] [i_8] = (max(1, (min((arr_13 [6] [6] [i_1] [1]), (-548230575 + var_9)))));
                                arr_26 [i_1] [i_1] [i_6 + 2] [i_7] = 1;
                            }
                        }
                    }
                    var_17 -= (arr_22 [1] [1] [i_6] [i_6] [i_6] [4]);
                    var_18 = ((((((max(1, (arr_20 [i_6] [i_1] [i_1] [i_6])))) ? (~var_2) : ((min(1, (arr_5 [2] [2]))))))) ? -1 : (min(var_0, -29720)));
                }
                arr_27 [i_1] = ((!((((arr_24 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1] [i_1 + 2]) % ((1 ? 65510 : 2135053189)))))));
            }
        }
    }
    var_19 += ((((((!((min(1, 178))))))) <= (min(3639024842, 15122))));
    var_20 = (max(var_20, ((min((((!(85 != var_5)))), ((~(~13868416421577339101))))))));
    #pragma endscop
}
