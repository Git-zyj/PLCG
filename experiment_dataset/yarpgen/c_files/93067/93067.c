/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_16 = (max(var_16, -var_10));
        var_17 = (((((~((max((arr_1 [6] [i_0]), var_11)))))) ? (((arr_2 [i_0]) ? (arr_1 [i_0] [i_0]) : var_15)) : (max((((arr_1 [i_0] [i_0]) >> (96 - 89))), (((!(arr_0 [i_0] [i_0]))))))));
        arr_4 [i_0] [i_0] |= (min((~2083636345749890591), 16241723691038370696));
        var_18 = (arr_2 [i_0]);
        var_19 = (((((-(((arr_2 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_3 [i_0])))))) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_20 = (max(var_20, (((-(~-588257545))))));
        var_21 -= (max((arr_6 [i_1] [i_1]), (((arr_1 [i_1] [i_1]) ? (((arr_6 [i_1] [i_1]) ? (arr_5 [i_1] [1]) : 371650649)) : (min(var_12, (arr_8 [i_1] [i_1])))))));
        var_22 -= ((((min(93, 1717352072))) ? (((!(~868)))) : (max((max((arr_3 [i_1]), (arr_6 [i_1] [i_1]))), ((~(arr_7 [0] [i_1])))))));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 11;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_23 = (max(((((max(21670, -1925810181))) ? (arr_8 [i_5 + 1] [i_3]) : var_14)), (max((((arr_6 [i_2] [i_3]) / 252)), ((min(11, (arr_6 [i_2] [10]))))))));
                                var_24 = (min(var_24, var_14));
                                arr_22 [i_4] [i_4] [i_2] [i_4] [i_6] [i_6] [i_6] |= ((var_0 || (arr_5 [i_2] [i_2])));
                            }
                        }
                    }
                    var_25 ^= (min((((arr_11 [i_4]) * ((((arr_16 [i_2] [i_2] [i_4] [i_4]) ? var_7 : (arr_18 [i_4 - 3] [i_2])))))), (((((var_11 ? (arr_0 [i_2] [i_2]) : (arr_14 [i_2] [i_2] [i_2]))) == (((arr_11 [i_2]) ? var_2 : var_6)))))));
                    var_26 *= (max(41, -1616932173));
                    var_27 = (min((-1447239916 && -5549665223400723108), (((max(38, -10353))))));
                    var_28 = (min(var_28, (max((((arr_10 [i_4]) % (arr_3 [i_3 + 2]))), (((((-(arr_15 [i_2])))) ? (((!(arr_15 [i_2])))) : ((max((arr_10 [i_3]), (arr_7 [i_2] [i_2]))))))))));
                }
            }
        }
    }
    #pragma endscop
}
