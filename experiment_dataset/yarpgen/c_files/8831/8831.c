/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_20 &= var_16;
                var_21 = ((~(((arr_3 [i_0] [i_1]) & (arr_0 [1])))));
                arr_5 [i_0] = (((((((~(arr_0 [i_0 + 1]))) + 2147483647)) >> ((((~(arr_2 [i_0]))) + 241)))));
            }
        }
    }
    var_22 *= (((((((max(var_7, 81))) ? (!6076989868114374368) : (1453279639 && 88)))) ? var_8 : (!1200636487)));

    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_8 [i_2] [9] = ((!(((+((((arr_6 [10]) < 120))))))));
        arr_9 [i_2] = (((73 >= var_17) ? (((59377082579857191 ? 8139269755205973545 : (min(var_13, 3614825196505472914))))) : -var_16));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 11;i_4 += 1)
            {
                {
                    var_23 = ((((min((max(var_6, var_7)), ((1 ? 1 : (arr_10 [i_2])))))) & (max(1911144078, (min((arr_7 [i_3]), var_11))))));
                    var_24 = -6058063224188612026;
                    var_25 = ((((((2 ? -32766 : (arr_7 [i_3]))))) ? (min((arr_6 [i_2]), (!1))) : ((((!(!0)))))));
                }
            }
        }

        /* vectorizable */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            arr_17 [6] [11] [i_5] = 28488312;
            var_26 = (max(var_26, (arr_6 [i_2])));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
        {
            arr_20 [i_2] [i_2] = -15704;
            arr_21 [i_2] [i_2] [i_6] = 60;
        }
        for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
        {
            arr_25 [i_7] [i_2] [i_2] = (((((-((min((arr_12 [i_2] [i_7]), (arr_22 [i_2] [8] [i_7]))))))) ? (arr_22 [i_7] [i_7] [i_2]) : (min((((-19554 ? 1 : 27))), (((arr_12 [i_2] [i_7]) / var_4))))));
            var_27 ^= ((((((!8637) ? 66 : ((1125899906842623 ? 2147483647 : (arr_12 [i_2] [i_2])))))) ? (((!(arr_12 [i_2] [i_7])))) : ((((((arr_7 [5]) ? 39 : 1))) ? (arr_18 [i_2] [i_7]) : ((((arr_15 [0] [i_7]) >= var_2)))))));
        }
    }

    /* vectorizable */
    for (int i_8 = 4; i_8 < 23;i_8 += 1)
    {
        var_28 = ((~(arr_27 [i_8 - 2])));
        var_29 = ((4113776119 ? 13 : (arr_26 [i_8 - 3])));
    }
    var_30 = ((-32737 ? 43880 : (((((3147699307098321498 << (18446744073709551615 - 18446744073709551614)))) ? 661 : 0))));
    #pragma endscop
}
