/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= 60153353;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_1] [i_0] = (max(0, (((max(1, 4234813943)) & var_11))));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 15;i_3 += 1)
                {
                    {
                        var_17 = (arr_12 [i_3 - 2] [i_3] [i_3 + 1] [i_2 + 2]);
                        var_18 = 25387;
                        arr_14 [i_2] [i_2] [13] [i_0] = ((((min(((28004 ? 25369 : (arr_3 [i_0] [i_0] [i_1]))), (arr_8 [i_0])))) ? (max((min(var_12, (arr_6 [7]))), -28004)) : var_13));
                    }
                }
            }
            arr_15 [i_0] [i_0] [i_0] |= ((max(var_12, (-28004 & 1505030222))));
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 12;i_5 += 1)
                {
                    {
                        arr_20 [i_5] [i_5] [i_4] [i_5 - 2] = ((75 & (arr_2 [i_0] [i_0])));
                        var_19 = (((((0 & 19485) ? -2015599634 : 0))) ? ((0 ? 0 : ((max(428844638, 19485))))) : (!4234813929));
                        var_20 = (max(var_20, ((((~22) ? (max(3428133230, 28021)) : -19495)))));
                        var_21 = ((60153353 & (max((max(var_10, (arr_6 [14]))), 16))));
                    }
                }
            }
        }
        var_22 = ((~((var_9 & (arr_19 [i_0] [i_0] [i_0] [i_0])))));
    }
    var_23 = (max(((1505030222 ? -19505 : ((var_7 ? 127 : var_1)))), 19482));
    #pragma endscop
}
