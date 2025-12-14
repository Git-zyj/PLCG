/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56758
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */int) (!((!(((/* implicit */_Bool) (-(arr_1 [i_1] [8]))))))));
                    arr_8 [i_1] [i_1] = min((((((/* implicit */_Bool) (~(var_8)))) ? (arr_5 [i_1] [i_1]) : (max((var_1), (1504195897))))), (max((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [10] [i_1] [i_0]))))), (max((arr_1 [i_0] [2]), (var_14))))));
                }
            } 
        } 
        var_16 = ((((/* implicit */_Bool) max((((((var_9) + (2147483647))) >> (((arr_1 [i_0] [10]) + (1338550733))))), (((/* implicit */int) ((53430522) >= (arr_6 [0] [i_0] [i_0]))))))) ? ((+(((((/* implicit */_Bool) var_12)) ? (arr_4 [i_0] [i_0] [i_0]) : (-53430517))))) : (arr_5 [i_0] [i_0]));
        /* LoopSeq 3 */
        for (int i_3 = 1; i_3 < 13; i_3 += 1) 
        {
            arr_12 [11] = ((/* implicit */int) (((~(((arr_10 [i_0] [i_0]) / (arr_6 [i_0] [5] [11]))))) < (var_14)));
            arr_13 [i_3 - 1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(-53430539))))));
            var_17 = max((53430522), (-67419220));
        }
        for (int i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            arr_16 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_5 [i_0] [i_4]))) ? (min(((-2147483647 - 1)), (53430516))) : (min((var_3), (var_0))))))));
            var_18 = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) -53430522)) ? (arr_14 [i_0] [i_0] [5]) : (var_5)))) ? (((int) -1541044436)) : (arr_5 [i_0] [i_4]))));
            var_19 = ((/* implicit */int) min((var_19), (67419208)));
            /* LoopSeq 1 */
            for (int i_5 = 2; i_5 < 11; i_5 += 4) 
            {
                var_20 |= arr_10 [i_0] [2];
                var_21 = max((max((arr_9 [i_5 + 1] [11] [0]), (min((var_5), (arr_9 [11] [11] [i_5]))))), (((((int) var_1)) + ((-(-434147416))))));
                /* LoopSeq 2 */
                for (int i_6 = 0; i_6 < 14; i_6 += 1) 
                {
                    var_22 |= ((((((/* implicit */_Bool) arr_21 [i_5] [i_5] [i_5 + 1] [i_5 + 1] [i_5] [12])) || (((/* implicit */_Bool) arr_21 [1] [i_5] [i_5 + 1] [i_5 + 1] [i_5 + 1] [2])))) ? ((-(arr_21 [i_5] [1] [i_5 + 1] [i_5 + 1] [i_5 + 3] [i_5]))) : (((arr_21 [3] [0] [i_5 + 1] [i_5 + 1] [i_5] [i_5 + 2]) + (var_6))));
                    var_23 = ((/* implicit */int) min((var_23), (((((/* implicit */_Bool) ((((((/* implicit */_Bool) (-2147483647 - 1))) ? (53430516) : (-53430517))) ^ (((var_3) ^ (-53430516)))))) ? (((((((/* implicit */_Bool) -1348962241)) ? (var_6) : (var_11))) + (min((arr_20 [i_0] [i_4] [7] [i_4] [7]), (-53430507))))) : (((((/* implicit */_Bool) arr_4 [i_6] [i_6] [i_5 - 1])) ? (max((-67419220), (var_2))) : (arr_14 [i_5] [i_5 + 3] [i_5])))))));
                }
                for (int i_7 = 0; i_7 < 14; i_7 += 4) 
                {
                    var_24 = ((((/* implicit */_Bool) (-(var_12)))) ? ((-(-53430523))) : (max(((-(1843819695))), (((var_3) - (var_3))))));
                    /* LoopSeq 1 */
                    for (int i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        arr_28 [i_0] [8] [i_5] [i_7] [i_7] [i_8] [i_5] = ((int) 53430516);
                        arr_29 [7] [i_7] [1] [i_4] [1] = (+(((/* implicit */int) (!(((/* implicit */_Bool) min((var_12), (var_1))))))));
                    }
                    /* LoopSeq 3 */
                    for (int i_9 = 1; i_9 < 12; i_9 += 3) 
                    {
                        arr_32 [i_9] [i_9] [0] [i_5] [i_9] [i_0] = ((((/* implicit */_Bool) ((-53430517) / (var_10)))) ? (max(((+(arr_31 [5] [5] [2] [i_7] [1]))), ((+(67419220))))) : (((((/* implicit */_Bool) -1393856203)) ? (1891436462) : (1891436462))));
                        arr_33 [i_0] [i_4] [i_9] [i_5 - 1] [i_7] [i_9] = ((((/* implicit */_Bool) ((int) arr_19 [i_5 - 2]))) ? (min((6), ((-2147483647 - 1)))) : (min((-558808333), (-1843819711))));
                    }
                    for (int i_10 = 0; i_10 < 14; i_10 += 1) 
                    {
                        var_25 = ((((/* implicit */int) ((((((/* implicit */_Bool) arr_31 [i_10] [i_4] [i_7] [i_7] [i_10])) ? (-53430530) : (arr_4 [6] [i_4] [i_4]))) == ((+(arr_20 [i_10] [i_10] [3] [i_10] [i_10])))))) | (max((((((var_3) + (2147483647))) << (((((var_5) + (2125581616))) - (21))))), (min((arr_22 [i_0] [7] [i_5] [i_7]), (var_10))))));
                        var_26 = (-(-53430523));
                        arr_37 [10] [10] [i_5 + 1] [i_7] [i_10] = (~(var_0));
                    }
                    for (int i_11 = 1; i_11 < 12; i_11 += 3) 
                    {
                        arr_40 [i_4] [i_4] [i_5 - 1] [2] [i_4] = ((((/* implicit */_Bool) var_5)) ? ((~(53430517))) : ((~(arr_5 [i_5] [i_5]))));
                        var_27 = (-((-((~(arr_19 [i_0]))))));
                        arr_41 [i_0] [i_0] [i_11] [7] [7] = (~(((((/* implicit */_Bool) 2047)) ? (958368087) : (2147483629))));
                        var_28 = min((arr_35 [i_0] [i_4] [i_5 - 2] [i_0] [i_11 + 1]), ((-((+(var_4))))));
                        var_29 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) -53430523)) ? (arr_17 [i_7] [13] [i_7] [i_7]) : (var_9)))) ? (min((130337819), (-1))) : (((((/* implicit */_Bool) arr_19 [i_0])) ? (arr_23 [11] [12] [13] [i_7]) : (-1441733390))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_8) : (arr_3 [i_0] [i_4] [i_5]))))))));
                    }
                }
                arr_42 [i_5] = ((((/* implicit */_Bool) -53430509)) ? (-87878417) : (-67419220));
                var_30 = ((/* implicit */int) max((var_30), (((((/* implicit */_Bool) 2147483647)) ? (var_6) : (((((/* implicit */_Bool) -2047)) ? (53430522) : (-53430517)))))));
            }
        }
        for (int i_12 = 1; i_12 < 13; i_12 += 3) 
        {
            arr_46 [i_12] [i_12] = ((/* implicit */int) (!(((/* implicit */_Bool) min((-53430522), (var_13))))));
            var_31 = ((((max((var_2), (arr_3 [i_0] [4] [i_12]))) != (-53430515))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_13))))))) : ((-(-53430506))));
        }
        var_32 = ((/* implicit */int) min((var_32), (max((arr_39 [i_0] [i_0] [i_0]), (((((/* implicit */_Bool) arr_39 [i_0] [i_0] [i_0])) ? (min((4192256), (var_12))) : (var_8)))))));
    }
    for (int i_13 = 0; i_13 < 14; i_13 += 4) /* same iter space */
    {
        var_33 = ((/* implicit */int) min((var_33), (((((/* implicit */_Bool) (~(min((arr_39 [i_13] [3] [7]), (775931986)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((268435456) ^ (131071))))))) : (max((max(((-2147483647 - 1)), (131071))), (var_6)))))));
        var_34 = (~(-2147483640));
    }
    var_35 = ((/* implicit */int) max(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_2) : (53430522)))))), ((!(((/* implicit */_Bool) ((var_10) - (2147483637))))))));
    /* LoopNest 3 */
    for (int i_14 = 0; i_14 < 18; i_14 += 3) 
    {
        for (int i_15 = 3; i_15 < 17; i_15 += 3) 
        {
            for (int i_16 = 3; i_16 < 16; i_16 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_17 = 0; i_17 < 18; i_17 += 3) 
                    {
                        arr_62 [i_14] [i_14] = (+(((/* implicit */int) ((131099) >= (130337819)))));
                        var_36 = min((-205383685), (67419212));
                    }
                    var_37 = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) -67419209)) ? (-268435456) : (1414440092)))) ? (min((arr_52 [i_14]), (arr_51 [i_14]))) : ((-(131099))))));
                }
            } 
        } 
    } 
    var_38 = min((-67419212), (2147483623));
}
