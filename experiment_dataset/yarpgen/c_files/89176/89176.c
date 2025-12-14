/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0 - 1] = (min((!18446744073709551603), 898541087));
        arr_3 [i_0] = (-((4051077195 ? (((-25736 ? (arr_1 [i_0]) : (arr_0 [i_0])))) : ((9375 ? 18446744073709551589 : (arr_0 [i_0]))))));
        var_19 = ((((min((min((arr_0 [7]), 2504873376856508747)), -1952724182))) ? (((min((arr_0 [i_0]), (arr_0 [i_0]))))) : (arr_1 [11])));
        var_20 = ((((!(arr_1 [i_0 - 1]))) ? ((((min(123, (arr_1 [i_0]))) < (min((arr_1 [i_0]), -124))))) : ((((-532870387 ? 825221565 : 2341244003))))));
        var_21 = ((!(((arr_0 [i_0 + 1]) <= 33554431))));
    }

    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                var_22 = (arr_4 [i_3 - 1] [i_3 + 1]);
                var_23 = (((arr_8 [i_3 + 1]) * 226));
            }
            arr_13 [i_1] = 25262;
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 14;i_5 += 1)
                {
                    {
                        var_24 = (min((((!((max(6273791838711023785, 257413244)))))), (min(((min((arr_9 [i_1]), 25262))), (arr_11 [i_1] [i_2] [i_5 - 1])))));
                        var_25 = (min(-4294967295, (!14)));
                    }
                }
            }
        }
        var_26 = 3196250580;
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        arr_21 [i_6] [i_6] = -991552172;

        for (int i_7 = 2; i_7 < 18;i_7 += 1)
        {
            arr_24 [i_6] = (127 % 13072);
            arr_25 [i_6] [i_6] = ((!((!(arr_23 [i_6] [7] [i_7 - 2])))));
        }
        var_27 = (((arr_19 [2]) & (((-((38895 ? 140 : -127)))))));
    }
    var_28 = var_6;
    #pragma endscop
}
