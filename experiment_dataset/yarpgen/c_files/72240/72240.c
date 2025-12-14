/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_4 [8] [i_0] = (((((min((arr_1 [i_1] [i_0]), var_2)))) >= (max((1 % 3), 6488903347849780528))));

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                var_20 *= (((arr_0 [i_1]) ? (((((2962395209 ? (arr_5 [i_0] [i_0]) : (arr_2 [i_0] [i_1] [i_2])))) ? ((max((arr_8 [i_0]), 1))) : (var_19 > -5660))) : 42929));
                arr_9 [i_0] [i_1] [i_1] [i_2] = (arr_3 [i_2]);
                arr_10 [i_0] [i_1] [i_0] = ((+((min((arr_7 [i_0] [i_0] [i_0] [9]), (arr_7 [i_2] [i_1] [i_1] [i_0]))))));

                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    var_21 = (max(var_21, ((min(1, (-577 > 41277))))));
                    var_22 = (max(var_22, (((((((65535 & (arr_0 [13]))) >> (var_14 + 1480819150248666839))) | (arr_12 [i_0] [12] [i_0] [i_0]))))));
                }
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    arr_16 [i_0] [i_1] [i_2] [i_4] &= (arr_11 [i_1] [i_1] [i_1]);
                    var_23 = (((((1 ^ (arr_1 [i_1] [i_2])))) ? (((((126 ? (arr_8 [i_0]) : (arr_3 [4])))) ? 2147483640 : (max((arr_0 [i_0]), 0)))) : (arr_8 [i_4])));
                }
            }
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                var_24 += (((((arr_15 [i_0] [i_1]) || (arr_14 [i_5] [i_0] [i_1] [i_0] [i_0] [i_0]))) ? ((min((arr_2 [i_0] [i_1] [i_5]), 17))) : ((0 ? ((min(1, var_3))) : (arr_6 [i_5] [i_5] [i_1] [i_0])))));
                arr_19 [i_0] [i_1] [i_5] = ((-124333420 ? (((arr_6 [i_0] [i_1] [i_1] [i_5]) ? 4398045986816 : (arr_6 [i_1] [i_1] [i_1] [i_0]))) : (((arr_5 [i_1] [i_5]) ? (arr_6 [i_5] [i_1] [i_0] [i_0]) : (arr_0 [i_0])))));
            }
        }
        var_25 = ((-41 ? (min(((((arr_7 [1] [i_0] [i_0] [i_0]) ? 1927651633 : var_3))), (arr_0 [i_0]))) : ((((var_11 || (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
        arr_20 [i_0] = (min((((((1 ? (arr_1 [i_0] [10]) : (arr_3 [i_0])))) ? (arr_8 [i_0]) : (min(var_13, -29229)))), (((-(arr_11 [i_0] [i_0] [i_0]))))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_23 [i_6] = var_8;
        arr_24 [i_6] = 2014673268;
        arr_25 [i_6] = (max((((arr_13 [i_6] [i_6] [i_6]) ? (max(4062755530128314702, var_11)) : (((min(8214, var_4)))))), (((min((arr_12 [7] [i_6] [1] [i_6]), (arr_13 [i_6] [i_6] [i_6]))) / (((max(1, 1009))))))));
    }
    for (int i_7 = 3; i_7 < 6;i_7 += 1)
    {
        arr_28 [i_7] = ((((126 > (((31 > (arr_27 [i_7])))))) ? (((!1) ? (arr_27 [i_7]) : (((-1766653551439684483 ? 1 : (arr_8 [i_7])))))) : ((max((var_15 || -43), ((4299 ? (arr_2 [i_7] [5] [i_7]) : (arr_15 [i_7] [i_7]))))))));
        arr_29 [i_7] [4] &= (max((((125 == ((4112811487 | (arr_17 [i_7] [i_7])))))), -52));
    }
    var_26 = (min(15154, var_4));
    #pragma endscop
}
