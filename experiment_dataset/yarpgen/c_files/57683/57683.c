/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 4294967289;
        var_13 = (((+(((arr_2 [i_0] [i_0]) ? (arr_1 [i_0]) : var_1)))));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_14 = ((-23 || (arr_5 [i_1])));
        arr_7 [i_1] = (--23);

        for (int i_2 = 3; i_2 < 11;i_2 += 1)
        {
            var_15 = (arr_9 [i_1] [i_1] [i_2 - 1]);
            var_16 = (((!((max(var_8, (arr_5 [i_1])))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    {
                        arr_18 [i_1] [i_2 - 2] [i_3] [i_1] = ((-18 * ((((((arr_12 [i_1] [i_4 + 1]) ? 1516531015 : 0)) <= (163 <= 127))))));
                        arr_19 [i_1] = var_5;
                        var_17 = ((((max((1516531015 | 15), (((15 ? var_9 : 0)))))) ? (((max(28427, (arr_15 [i_1 + 2] [9] [i_1] [i_1]))))) : (max((((arr_16 [i_1] [i_2] [i_4]) ^ var_6)), (35756 / 42)))));
                        arr_20 [i_1] = ((((((((31 ? var_2 : (arr_10 [i_1] [i_1])))) - (max(56, var_8))))) ? (((max(1216032300, (arr_8 [i_1] [i_2]))) >> (281457796841472 && 3951981809))) : ((max((11269 & var_11), ((((arr_9 [1] [i_3] [i_3]) == (arr_9 [i_4 + 1] [i_3] [i_1])))))))));
                        var_18 = (6 == var_11);
                    }
                }
            }
            var_19 = (max((((arr_9 [i_2] [i_2 + 1] [i_2 - 1]) ? var_4 : (arr_15 [i_1] [i_1] [i_1] [10]))), (((arr_12 [i_1] [i_2 + 1]) ? 61577 : 0))));
            var_20 = (max(1218481242160271413, ((max((224 | var_0), (((arr_6 [i_1 + 3]) ? 126 : (arr_5 [i_1]))))))));
        }

        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            var_21 = (((~255) ? (((((arr_16 [i_5] [i_5] [i_1]) <= var_3)))) : (((var_5 <= 1622178537) / -2713823748373132842))));

            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                var_22 = ((max((arr_8 [i_1] [i_1]), 17515603608832664080)));
                var_23 = ((38241 / (((126 ? 65037 : 27)))));
                arr_26 [i_1] [i_1] [i_5] [i_1] = 99;
            }
        }
    }
    #pragma endscop
}
