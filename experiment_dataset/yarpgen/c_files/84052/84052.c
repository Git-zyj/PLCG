/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (((((-((var_0 ? 52 : 9262941584446230936))))) ? var_13 : 6891530620519417782));

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_18 += var_14;
                                arr_16 [i_0] [i_4] [i_2] [i_3] [i_0] [i_0] = -30258;
                            }
                        }
                    }
                    var_19 = 17078096563729786818;
                }
                for (int i_5 = 2; i_5 < 13;i_5 += 1)
                {
                    var_20 = (max(var_20, (((var_16 ? (arr_8 [i_5 - 2] [i_0 + 1] [i_0 + 1] [i_0 - 4]) : (((max(252, (arr_14 [i_0 + 1]))))))))));

                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        var_21 += ((!((30270 <= (arr_7 [i_1] [i_1] [7] [i_1])))));

                        for (int i_7 = 1; i_7 < 12;i_7 += 1)
                        {
                            var_22 += ((((max((arr_10 [i_0] [i_6] [5]), var_7))) ? (arr_8 [13] [i_5] [i_6] [i_7]) : 21));
                            arr_24 [i_7] [i_6] [i_6] [i_1] [i_1] [i_0] = (((19790 <= 3988023693572221855) ? ((7181545110669878444 ? 3886183085 : 2047)) : 510));
                        }
                        arr_25 [i_0] [11] [i_5] [i_6] = (((((~(arr_19 [i_0] [i_0] [i_0] [i_0])))) | (var_4 ^ var_0)));
                    }
                    var_23 = 115897738;
                    var_24 &= (max((((arr_3 [i_0 - 1] [i_0 - 1] [i_0]) ? 86 : (arr_3 [i_0 + 1] [i_0 + 1] [i_0 - 1]))), (arr_3 [i_0 - 2] [i_0 - 2] [i_0])));
                    arr_26 [i_0 - 1] [i_0] [i_1] [i_5 - 1] = ((((arr_21 [i_0] [i_1]) ? (arr_21 [i_0 + 2] [i_0 - 3]) : 8869492532977916185)));
                }
                var_25 = (((((((max(33554400, 9532152726413911700))) ? (arr_10 [i_0] [i_0 - 1] [i_0 - 1]) : 249))) ? var_7 : 127));
            }
        }
    }
    #pragma endscop
}
