/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90856
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
    var_11 += ((/* implicit */unsigned char) (-(((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) << (((((/* implicit */int) ((unsigned char) var_6))) - (120)))))));
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) (unsigned short)1792)) <= (((/* implicit */int) var_2)))))) ? (((/* implicit */int) (unsigned short)39846)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)38892)))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)38906))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) min((var_9), (arr_1 [i_0])))) || (((/* implicit */_Bool) (unsigned short)39846)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) var_4);
        var_14 += ((/* implicit */unsigned short) arr_3 [i_1]);
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_4 [i_1])) >= (((/* implicit */int) arr_5 [(unsigned char)4]))))) <= (((/* implicit */int) ((unsigned short) (unsigned char)67)))));
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) arr_3 [i_1]))))))));
    }
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned short) max((var_17), (((unsigned short) arr_10 [i_3] [i_3] [i_2]))));
            arr_12 [i_2] [i_3] = ((/* implicit */unsigned short) (unsigned char)104);
        }
        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) 
            {
                for (unsigned short i_6 = 1; i_6 < 13; i_6 += 1) 
                {
                    {
                        var_18 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) arr_15 [i_6 - 1] [i_6 - 1] [i_5] [i_6 - 1]))) * (((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned short)11076)) >= (((/* implicit */int) (unsigned short)21328))))))));
                        arr_20 [i_4] [i_4] [i_4] [(unsigned short)9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)22)) ? (((/* implicit */int) (unsigned short)30419)) : (((/* implicit */int) (unsigned short)38911))));
                        arr_21 [(unsigned char)1] [i_4] [(unsigned char)13] [(unsigned char)1] = (unsigned short)7162;
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) (unsigned char)93))) % (((/* implicit */int) min(((unsigned short)57583), (((/* implicit */unsigned short) var_8)))))))) && (((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_2]))));
                        var_20 = var_0;
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned char i_7 = 1; i_7 < 13; i_7 += 1) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_8 = 0; i_8 < 15; i_8 += 3) 
                {
                    arr_28 [i_7] [i_4] [i_4] [i_8] [i_4] = (unsigned short)65519;
                    arr_29 [i_2] [i_2] [i_7 - 1] [i_7] [i_2] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)48)) > (((/* implicit */int) arr_23 [i_2] [i_7] [i_7 - 1]))));
                }
                /* vectorizable */
                for (unsigned char i_9 = 2; i_9 < 14; i_9 += 1) 
                {
                    arr_32 [i_4] [i_4] [i_7] [i_9] [(unsigned char)11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_5 [i_9 + 1]))));
                    arr_33 [i_9 - 2] [i_7] [i_9 - 2] [i_9] [(unsigned short)13] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)206)) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_4] [i_4] [i_4] [i_4])))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 1; i_10 < 14; i_10 += 2) 
                    {
                        var_21 = var_0;
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)201)) / ((~(((/* implicit */int) arr_9 [i_2]))))));
                        arr_36 [i_2] [i_4] [i_4] [(unsigned short)4] [i_10] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_34 [i_2] [i_9 + 1] [i_10 - 1] [i_10] [i_10])) >= (((/* implicit */int) (unsigned short)57583))));
                        arr_37 [i_2] [i_9] [i_2] [i_2] &= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_24 [i_2] [i_9 + 1] [i_10 - 1]))));
                        var_23 += ((unsigned char) (!(((/* implicit */_Bool) var_5))));
                    }
                }
                arr_38 [i_7] [i_7] = (unsigned char)86;
            }
            /* vectorizable */
            for (unsigned short i_11 = 0; i_11 < 15; i_11 += 4) 
            {
                arr_42 [i_2] [i_2] [i_11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_8)))))));
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 15; i_12 += 2) 
                {
                    for (unsigned short i_13 = 2; i_13 < 14; i_13 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) >> ((((-(((/* implicit */int) var_0)))) + (167))))))));
                            arr_50 [i_11] [i_13] = (unsigned char)81;
                            var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned short) arr_3 [i_2])))));
                        }
                    } 
                } 
            }
        }
        var_26 -= arr_27 [i_2] [i_2];
        /* LoopSeq 3 */
        for (unsigned short i_14 = 0; i_14 < 15; i_14 += 3) 
        {
            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) ? ((+(((/* implicit */int) arr_48 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))) : (((/* implicit */int) (unsigned char)48)))))));
            var_28 = ((/* implicit */unsigned short) min((var_28), (arr_31 [i_2])));
            var_29 = ((unsigned char) ((((/* implicit */int) arr_26 [i_2] [i_2] [i_2] [i_2])) != ((~(((/* implicit */int) var_7))))));
            /* LoopSeq 3 */
            for (unsigned short i_15 = 1; i_15 < 14; i_15 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned char i_16 = 0; i_16 < 15; i_16 += 1) 
                {
                    var_30 = var_4;
                    arr_58 [i_2] [i_14] [i_2] [i_15 - 1] [i_16] = ((/* implicit */unsigned char) max((max((((/* implicit */int) min((((/* implicit */unsigned short) arr_22 [i_14] [i_14] [(unsigned short)7])), (arr_56 [i_2])))), ((~(((/* implicit */int) arr_10 [i_2] [i_2] [i_2])))))), (min((((((/* implicit */_Bool) arr_46 [i_16] [i_15] [i_2] [i_2] [i_2])) ? (((/* implicit */int) (unsigned short)57827)) : (((/* implicit */int) arr_4 [i_2])))), ((~(((/* implicit */int) (unsigned char)124))))))));
                    var_31 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_2] [i_15] [i_16])) ? (((/* implicit */int) arr_27 [i_16] [i_2])) : (((/* implicit */int) (unsigned short)9540))))) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) (unsigned short)112)))));
                }
                /* vectorizable */
                for (unsigned short i_17 = 0; i_17 < 15; i_17 += 3) 
                {
                    var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((unsigned short) (+(((/* implicit */int) (unsigned short)39218))))))));
                    arr_62 [i_17] [i_14] [i_2] [i_14] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_16 [i_2] [i_15 + 1] [i_15 - 1] [i_17]))));
                }
                arr_63 [(unsigned char)5] [i_2] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) ((unsigned short) (unsigned short)65535))) >= (((/* implicit */int) min((arr_55 [i_15] [i_14] [i_14] [i_2]), (((/* implicit */unsigned short) (unsigned char)112))))))))));
                arr_64 [i_2] [i_2] [(unsigned char)6] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_13 [(unsigned char)6] [i_14] [(unsigned char)14])), ((unsigned short)54477)))) ? (((/* implicit */int) (unsigned short)57826)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) == (((/* implicit */int) (unsigned short)57827))))))), (((/* implicit */int) arr_35 [i_2] [i_2] [i_2] [i_2] [(unsigned char)2]))));
            }
            for (unsigned short i_18 = 1; i_18 < 14; i_18 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_19 = 0; i_19 < 15; i_19 += 1) 
                {
                    for (unsigned short i_20 = 0; i_20 < 15; i_20 += 3) 
                    {
                        {
                            arr_74 [i_2] [i_14] [i_2] [i_19] [i_19] [(unsigned char)14] [i_18 + 1] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_56 [i_2]))));
                            arr_75 [i_19] [i_19] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned char) (unsigned char)0)))));
                            var_33 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) ((unsigned short) (unsigned char)65))))));
                        }
                    } 
                } 
                arr_76 [i_2] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_13 [i_18 + 1] [i_18 - 1] [i_18 + 1]))) ? (((/* implicit */int) (unsigned short)9218)) : (((/* implicit */int) (unsigned char)81))));
                var_34 = ((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) arr_53 [i_18])) : (((/* implicit */int) var_4)))))) > (((/* implicit */int) ((unsigned short) arr_60 [(unsigned char)7] [(unsigned char)7] [i_14] [i_14] [(unsigned short)11])))));
            }
            for (unsigned short i_21 = 1; i_21 < 14; i_21 += 3) /* same iter space */
            {
                arr_79 [i_14] = ((/* implicit */unsigned char) ((unsigned short) (unsigned char)196));
                arr_80 [i_2] [i_14] [i_14] = ((/* implicit */unsigned char) (unsigned short)54452);
            }
        }
        for (unsigned short i_22 = 0; i_22 < 15; i_22 += 2) 
        {
            var_35 = ((/* implicit */unsigned char) max((min((((/* implicit */int) ((unsigned short) var_6))), (((((/* implicit */int) (unsigned short)46401)) >> (((((/* implicit */int) (unsigned short)54459)) - (54431))))))), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)94)) ? (((/* implicit */int) (unsigned char)143)) : (((/* implicit */int) (unsigned short)38383))))))));
            arr_85 [i_2] [(unsigned short)11] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_22] [i_22])) ? (((/* implicit */int) (unsigned short)34815)) : (((/* implicit */int) (unsigned short)677))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)65535)))))));
        }
        for (unsigned char i_23 = 1; i_23 < 13; i_23 += 4) 
        {
            arr_88 [i_2] [i_23] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_81 [i_2] [i_23] [i_23 - 1]))))) ? ((+(((/* implicit */int) arr_81 [i_2] [i_23] [i_23 + 2])))) : ((-(((/* implicit */int) arr_81 [i_2] [i_23] [i_23 + 1]))))));
            arr_89 [i_2] [i_23 + 2] [i_23] = arr_48 [(unsigned short)7] [(unsigned short)7] [(unsigned short)7] [i_23] [i_23] [i_23];
        }
        var_36 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_81 [i_2] [i_2] [i_2]))))) && (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65532))))))));
    }
}
