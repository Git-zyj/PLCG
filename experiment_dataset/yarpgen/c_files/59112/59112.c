/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59112
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

                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    var_16 *= arr_1 [i_0];

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_17 += (min((((((((arr_6 [i_1] [i_1] [i_2] [i_2]) / var_2))) ? (var_6 >= var_9) : (arr_6 [i_1] [i_1] [i_1] [0])))), (min((arr_0 [i_3]), (arr_8 [i_1] [i_1])))));
                        var_18 = 21;
                        var_19 = (arr_5 [i_0]);
                        var_20 &= (((arr_5 [i_1]) && ((min((((arr_7 [16] [i_1]) ? var_1 : var_5)), ((14407 ? -909140547 : (arr_9 [i_0] [i_0] [i_1]))))))));
                        var_21 = (min(var_21, ((min(((((14336 + 0) ? ((min(var_3, (arr_9 [i_0] [i_1] [i_1])))) : 31414))), (((min(14321, (arr_8 [i_1] [i_1]))) + (arr_3 [i_0] [i_0]))))))));
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_22 = ((+(((arr_10 [i_1] [i_1] [i_1] [i_2 + 1]) ? ((~(arr_5 [i_0]))) : (arr_5 [i_0])))));
                        var_23 -= (min((arr_12 [i_2] [i_4] [i_0] [i_0] [i_4] [i_0]), ((max(25, (arr_9 [i_4] [i_1] [i_4]))))));
                        var_24 *= ((((min(77344380, var_9)))));
                        var_25 = (arr_1 [19]);
                        var_26 |= (((arr_2 [i_0] [i_1] [i_4]) ? (((arr_1 [i_0]) & (min((arr_12 [i_0] [i_4] [8] [8] [i_2] [i_4]), (arr_4 [i_1] [i_1]))))) : (~31414)));
                    }
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_27 = ((+(((((53060 ? (arr_3 [i_0] [i_2 + 3]) : var_3)) < var_1)))));
                            var_28 = (min(var_28, (((65509 && ((min(((6129238144935623027 >> (var_4 - 55))), 53064))))))));
                            var_29 = (((1008603453089331898 < var_11) ? (arr_15 [7] [i_0] [i_5 - 1] [i_5 - 1]) : ((var_1 ? (arr_15 [6] [i_0] [i_5 - 1] [i_5 - 1]) : -117))));
                            arr_20 [i_0] [i_0] [i_0] [i_0] = (((((arr_9 [1] [i_5 - 1] [i_0]) ? 27021597764222976 : 1)) + -27021597764222957));
                        }
                        var_30 = (1 <= 1073741822);
                    }
                }
                arr_21 [i_0] [i_0] [i_0] = ((((min(37, (arr_7 [i_0] [i_0]))))));
            }
        }
    }
    var_31 |= var_9;
    #pragma endscop
}
