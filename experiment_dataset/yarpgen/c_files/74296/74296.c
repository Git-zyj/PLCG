/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (((((!4) ? -13 : var_1)) <= ((((19 ? 1 : 4))))));
        arr_3 [i_0] [i_0] = ((!((!((max(var_9, (arr_0 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (max((max((arr_7 [17]), (arr_7 [i_1]))), (max((arr_7 [i_1]), (arr_7 [i_1])))));
        var_11 = ((((var_9 ? (arr_5 [i_1]) : (arr_5 [i_1])))) ? 32757 : ((-32752 ? (max((arr_7 [i_1]), 65535)) : (((502023029 ? 14 : 32762))))));
        var_12 = (arr_6 [i_1]);
    }
    var_13 = ((min(var_3, ((var_6 ? var_1 : 6453913857208268591)))) <= ((((min(18446744073709551615, var_5))))));
    var_14 = (!1);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {

                for (int i_4 = 2; i_4 < 17;i_4 += 1)
                {
                    var_15 = (arr_4 [i_2]);
                    var_16 = ((~(arr_12 [i_4 - 2] [i_4] [i_4 + 2])));

                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        var_17 = (+(((((11054210204157140561 ? (arr_14 [i_2] [i_2] [i_4] [i_5]) : (arr_13 [i_2] [i_3])))) ? (arr_11 [i_3] [i_2]) : ((1 ? (arr_10 [i_2] [14]) : -32743)))));

                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_18 = ((2951188526469336074 ? 3539197332616568300 : (((-(~920806060))))));
                            var_19 = (((-(((arr_9 [17]) ? 0 : -17437)))));
                        }
                    }
                    arr_20 [i_2] [i_2] [i_2] = (!6900933680146469227);
                    var_20 = (~(max((arr_19 [i_4 - 1] [i_4] [i_4] [i_4 - 2] [i_4 + 2] [i_4 + 1]), 18330582487859811496)));
                }
                var_21 = (min(((((((var_2 < (arr_14 [12] [i_3] [i_3] [i_3])))) < (((arr_16 [i_3] [i_3]) ? (arr_4 [12]) : 32762))))), (arr_15 [i_2] [i_2] [1])));
                var_22 = (max(var_22, (((((max(var_7, (arr_14 [i_2] [i_2] [i_2] [i_3])))) ? var_3 : ((~(arr_13 [i_2] [i_3]))))))));
            }
        }
    }
    #pragma endscop
}
