/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67460
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
    var_14 += ((/* implicit */short) (((!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-32614))))))) || (((/* implicit */_Bool) max((((/* implicit */int) var_10)), (((int) var_3)))))));
    var_15 = (unsigned short)65529;
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) max((((/* implicit */unsigned short) (short)32763)), ((unsigned short)65510))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_17 = max((((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (((arr_2 [i_0]) / (arr_1 [i_0]))) : (((((/* implicit */_Bool) (unsigned short)65529)) ? (((/* implicit */int) (unsigned short)511)) : (((/* implicit */int) (short)2047)))))), (((((/* implicit */_Bool) ((((/* implicit */int) (short)-22950)) / (arr_2 [i_0])))) ? (((/* implicit */int) var_4)) : (var_5))));
            var_18 = ((/* implicit */int) ((-246011336) != (((/* implicit */int) (short)-1))));
        }
        var_19 = (+(max((((/* implicit */int) var_10)), ((-(((/* implicit */int) arr_0 [i_0])))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 1; i_2 < 15; i_2 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            var_20 += ((/* implicit */short) var_2);
            var_21 = (short)16882;
        }
        for (short i_4 = 0; i_4 < 16; i_4 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned short i_5 = 0; i_5 < 16; i_5 += 2) 
            {
                for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) 
                {
                    for (int i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        {
                            arr_20 [i_7] [i_6] [i_6] [i_2 + 1] [i_6] [(short)6] [i_2 + 1] = ((/* implicit */int) ((unsigned short) arr_12 [i_2 - 1] [i_2]));
                            var_22 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)32767)) ? (((/* implicit */int) arr_18 [i_2] [i_2] [i_2] [i_5] [i_2] [i_2 + 1])) : (((/* implicit */int) arr_15 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_5]))));
                            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) var_9))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_8 = 0; i_8 < 16; i_8 += 2) 
            {
                var_24 = arr_11 [i_2] [i_2];
                var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)63)) ? (-880815940) : (((/* implicit */int) (short)-17893)))))));
                /* LoopSeq 3 */
                for (int i_9 = 1; i_9 < 15; i_9 += 3) 
                {
                    /* LoopSeq 1 */
                    for (int i_10 = 0; i_10 < 16; i_10 += 3) 
                    {
                        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) arr_10 [i_2] [i_4] [i_8]))));
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_10 [i_9 + 1] [i_9 - 1] [i_9 - 1])) : (var_8)));
                    }
                    /* LoopSeq 3 */
                    for (short i_11 = 2; i_11 < 15; i_11 += 2) 
                    {
                        arr_30 [i_9] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_2 - 1] [i_2] [i_2 + 1] [i_9])) ? (arr_27 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_9]) : (arr_23 [i_2 - 1] [i_9] [i_4] [i_11 - 1] [i_11])));
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)8191)) % (((/* implicit */int) arr_15 [i_2] [i_2] [i_2] [i_9]))))) ? ((~(((/* implicit */int) var_9)))) : ((+(((/* implicit */int) (unsigned short)61756))))));
                        var_29 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_21 [i_2] [i_9]))));
                        var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_2] [i_2] [i_2 - 1] [i_11])))))));
                    }
                    for (unsigned short i_12 = 3; i_12 < 15; i_12 += 3) 
                    {
                        arr_35 [(unsigned short)11] [i_9] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_32 [i_2 - 1] [(short)12] [i_9] [7])) ? (var_5) : (arr_28 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [(unsigned short)1] [i_2])))));
                        var_31 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))));
                        var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((arr_13 [i_2] [i_2] [i_2] [i_2 - 1]) <= (((((/* implicit */int) (short)3)) % (((/* implicit */int) var_6)))))))));
                        var_33 += ((/* implicit */short) ((((/* implicit */int) (unsigned short)15252)) >> (((-1531159706) + (1531159707)))));
                    }
                    for (int i_13 = 0; i_13 < 16; i_13 += 3) 
                    {
                        var_34 = ((/* implicit */short) 614017558);
                        var_35 = ((/* implicit */int) min((var_35), (((var_7) / (((/* implicit */int) var_2))))));
                        var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) (~(((/* implicit */int) (short)-2047)))))));
                    }
                }
                for (unsigned short i_14 = 3; i_14 < 14; i_14 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_15 = 0; i_15 < 16; i_15 += 2) 
                    {
                        var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) ((((((/* implicit */int) arr_10 [(unsigned short)11] [10] [i_8])) != (var_7))) ? (((/* implicit */int) var_9)) : ((+(((/* implicit */int) var_9)))))))));
                        var_38 ^= ((/* implicit */int) (!(((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_13))))));
                    }
                    arr_44 [(unsigned short)2] [i_8] [i_4] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65535)) - (arr_40 [i_2] [i_14 + 2])));
                    var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)29076)) || (((/* implicit */_Bool) (unsigned short)29073))))))))));
                    var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)58998)) || (((/* implicit */_Bool) (unsigned short)32768))));
                    var_41 += ((/* implicit */short) (unsigned short)46182);
                }
                for (short i_16 = 0; i_16 < 16; i_16 += 2) 
                {
                    var_42 = ((/* implicit */unsigned short) (short)-26);
                    var_43 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)6)) << (((1250350669) - (1250350664)))));
                    var_44 = ((/* implicit */int) max((var_44), (((/* implicit */int) ((unsigned short) arr_26 [i_2] [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_8] [i_16])))));
                    arr_49 [i_4] [i_4] [i_8] [i_4] [i_4] [i_4] = ((/* implicit */short) arr_17 [i_2] [i_4] [i_4] [i_4]);
                    var_45 |= (~((~(var_12))));
                }
            }
        }
        for (short i_17 = 0; i_17 < 16; i_17 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_18 = 2; i_18 < 14; i_18 += 3) 
            {
                arr_54 [i_2] [i_18] [i_2 + 1] = ((/* implicit */short) (((+(-348226163))) <= (arr_25 [i_2 - 1] [i_2 + 1] [9] [i_2] [i_2] [i_2 - 1] [i_2])));
                var_46 = ((/* implicit */short) min((var_46), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_2] [i_17] [1])) << (((((/* implicit */int) var_9)) - (20093)))))) ? (((/* implicit */int) (short)19)) : (((((/* implicit */int) var_4)) / (((/* implicit */int) (short)32767)))))))));
                arr_55 [i_18] = 793383194;
            }
            /* LoopNest 2 */
            for (short i_19 = 0; i_19 < 16; i_19 += 2) 
            {
                for (short i_20 = 2; i_20 < 12; i_20 += 3) 
                {
                    {
                        arr_60 [i_19] [i_19] [i_20] [i_20] = ((/* implicit */int) ((((/* implicit */int) (short)8900)) >= (((/* implicit */int) (short)18757))));
                        arr_61 [i_20] [i_17] [i_17] [i_20] [i_17] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_7)))) ? (((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */int) arr_7 [i_19])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)50068)))))));
                        var_47 += ((/* implicit */short) (+(arr_23 [i_20] [i_19] [i_19] [i_19] [i_20 + 3])));
                    }
                } 
            } 
        }
        var_48 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_25 [i_2 + 1] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) ? (arr_34 [i_2] [i_2] [i_2 - 1] [4] [(short)2] [i_2] [i_2]) : (((/* implicit */int) var_10))))));
    }
    for (unsigned short i_21 = 0; i_21 < 20; i_21 += 3) 
    {
        arr_64 [i_21] = ((/* implicit */unsigned short) ((max((max((((/* implicit */int) arr_62 [i_21])), (arr_63 [i_21]))), (((/* implicit */int) ((short) (short)-7))))) + (((((/* implicit */int) (unsigned short)32769)) - ((~(((/* implicit */int) (unsigned short)1))))))));
        var_49 -= ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
    }
}
