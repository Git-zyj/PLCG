/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59111
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
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (-(((var_8) - (((/* implicit */int) (short)18677)))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) /* same iter space */
    {
        var_13 *= ((/* implicit */short) var_11);
        var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) var_11))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            arr_5 [i_1] [(unsigned short)6] [i_0] = ((/* implicit */unsigned short) arr_4 [i_1] [i_1] [i_1]);
            var_15 = ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_9)) : (arr_1 [(short)16]));
            var_16 = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) arr_2 [i_0]))));
            var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (short i_3 = 3; i_3 < 18; i_3 += 1) 
                {
                    {
                        var_18 = ((((/* implicit */_Bool) arr_11 [i_3 + 1] [i_3] [i_3] [i_3])) ? (((/* implicit */int) (short)-2689)) : (arr_11 [i_3 + 1] [i_3] [i_3] [i_3 - 3]));
                        arr_12 [i_3] [i_3] [i_2] [i_2] [i_2] [i_2] = (short)18677;
                        arr_13 [i_2] [i_2] [(short)7] [i_2] [i_3] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1)) ? (((/* implicit */int) (unsigned short)785)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) arr_3 [i_3 - 1] [i_3 + 2])) : (((/* implicit */int) (short)-10151))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 1; i_4 < 16; i_4 += 4) 
                        {
                            arr_16 [i_0] [i_0] [i_4] [16] [i_3] = (+(((/* implicit */int) var_7)));
                            var_19 += ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_0 [(short)18])) ? (((/* implicit */int) (unsigned short)54131)) : (arr_11 [i_0] [i_0] [i_3] [i_0])))));
                        }
                    }
                } 
            } 
        }
        for (int i_5 = 0; i_5 < 20; i_5 += 2) 
        {
            arr_21 [i_0] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_5] [i_5])) ? (((/* implicit */int) (short)-18681)) : (1)));
            var_20 = ((/* implicit */short) ((unsigned short) arr_0 [i_5]));
        }
        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            arr_25 [i_6] [i_0] [i_6] = ((/* implicit */unsigned short) arr_15 [i_0] [i_6] [i_6] [i_0] [i_6] [i_0]);
            var_21 = ((/* implicit */short) (+(arr_18 [i_0] [i_6])));
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 20; i_7 += 3) 
        {
            for (unsigned short i_8 = 0; i_8 < 20; i_8 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_9 = 1; i_9 < 18; i_9 += 2) 
                    {
                        for (int i_10 = 2; i_10 < 19; i_10 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_0] [i_7])) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)30173)) || (((/* implicit */_Bool) (unsigned short)11953))))) : (((/* implicit */int) ((((/* implicit */int) arr_14 [i_0] [(short)7] [i_9] [i_9])) > (((/* implicit */int) arr_23 [i_9] [i_9 + 2])))))));
                                arr_34 [i_9] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0))));
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_7 [i_10 + 1] [i_10] [i_9 + 1]))));
                                arr_35 [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) arr_26 [i_7] [i_9 + 2])) ? (arr_26 [i_0] [i_10]) : (arr_26 [i_7] [i_0])));
                            }
                        } 
                    } 
                    arr_36 [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_0])) ? (((((/* implicit */_Bool) arr_8 [14] [i_7] [i_8] [i_8])) ? (((/* implicit */int) arr_17 [i_0])) : (((/* implicit */int) (short)-1)))) : ((+(var_0)))));
                    /* LoopSeq 2 */
                    for (unsigned short i_11 = 0; i_11 < 20; i_11 += 3) 
                    {
                        var_24 = arr_11 [i_7] [i_8] [i_7] [i_0];
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_15 [i_11] [i_8] [i_0] [i_7] [i_0] [i_0])) > (arr_1 [i_11])));
                        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (+(((/* implicit */int) arr_30 [i_11] [i_7] [i_8])))))));
                    }
                    for (unsigned short i_12 = 2; i_12 < 18; i_12 += 1) 
                    {
                        var_27 = ((/* implicit */short) ((((/* implicit */int) arr_10 [i_0] [i_12 + 2] [i_12 + 2] [i_12 + 2] [i_0] [i_12])) / (((/* implicit */int) arr_10 [i_0] [i_12 + 2] [i_12 + 2] [i_12] [i_12] [12]))));
                        arr_44 [i_0] [i_0] [13] [13] [13] = ((/* implicit */int) (short)-18);
                        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_8] [i_8])) ? (((/* implicit */int) (short)-18700)) : (((/* implicit */int) (short)14456))))) ? (((/* implicit */int) arr_14 [i_12 + 1] [(short)2] [(short)2] [i_8])) : (arr_11 [i_12 - 1] [i_12 + 2] [i_12 - 1] [i_12 - 1]))))));
                        var_29 = arr_8 [i_0] [i_7] [i_8] [i_0];
                    }
                }
            } 
        } 
    }
    for (unsigned short i_13 = 0; i_13 < 20; i_13 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_14 = 0; i_14 < 20; i_14 += 2) 
        {
            for (unsigned short i_15 = 2; i_15 < 18; i_15 += 4) 
            {
                {
                    var_30 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -8)) ? (((/* implicit */int) (short)18674)) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) -12)) ? (((/* implicit */int) arr_15 [i_13] [i_13] [i_13] [4] [i_13] [i_15])) : (var_10))) : (arr_11 [i_13] [i_13] [i_15] [i_15]))) & (((/* implicit */int) arr_46 [i_13])));
                    arr_54 [i_13] [i_13] [(short)12] = (~(min((arr_41 [i_13] [i_13] [i_15 + 1] [i_15 + 1]), (arr_41 [i_13] [i_14] [i_15 + 1] [i_14]))));
                }
            } 
        } 
        arr_55 [i_13] = min((((((/* implicit */_Bool) arr_33 [i_13] [19] [i_13] [18])) ? (var_10) : (((/* implicit */int) arr_33 [i_13] [i_13] [i_13] [i_13])))), (((/* implicit */int) var_9)));
        arr_56 [i_13] [i_13] = ((/* implicit */short) (!(((/* implicit */_Bool) min((arr_26 [i_13] [i_13]), (arr_26 [i_13] [i_13]))))));
        /* LoopNest 2 */
        for (short i_16 = 0; i_16 < 20; i_16 += 1) 
        {
            for (int i_17 = 0; i_17 < 20; i_17 += 1) 
            {
                {
                    var_31 = max((arr_20 [i_16] [i_16]), (((/* implicit */unsigned short) var_3)));
                    var_32 = ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) / (((/* implicit */int) min((arr_22 [(unsigned short)0] [(unsigned short)0]), (arr_9 [i_17] [i_17] [i_17] [i_17]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-14432))))) : (min((var_4), (((/* implicit */int) ((-1326973122) == (((/* implicit */int) arr_47 [i_13]))))))));
                }
            } 
        } 
    }
    for (unsigned short i_18 = 0; i_18 < 20; i_18 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_19 = 0; i_19 < 20; i_19 += 4) 
        {
            for (int i_20 = 4; i_20 < 16; i_20 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_21 = 2; i_21 < 19; i_21 += 1) 
                    {
                        arr_76 [i_18] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_24 [i_18] [i_19]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned short)59379), (((/* implicit */unsigned short) var_7)))))))) : ((~(arr_60 [i_20] [i_20] [i_20 - 1])))));
                        var_33 = ((/* implicit */short) (!((!(((/* implicit */_Bool) (~(((/* implicit */int) (short)504)))))))));
                        arr_77 [i_18] [i_19] [i_18] [i_18] = 100663296;
                        var_34 = ((/* implicit */short) max((((/* implicit */int) (short)18674)), (((arr_48 [i_20 + 1]) ^ (((/* implicit */int) (short)22))))));
                        var_35 -= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_68 [i_21])) ? (((/* implicit */int) arr_47 [i_19])) : ((-2147483647 - 1))))) ? (165274865) : (arr_60 [i_18] [i_20] [i_18]))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_18])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) arr_38 [i_21] [i_18] [(short)6] [i_18])) : (arr_11 [i_18] [i_18] [i_20] [i_21])))));
                    }
                    var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) arr_32 [(unsigned short)12] [i_20] [(unsigned short)12]))));
                    /* LoopNest 2 */
                    for (unsigned short i_22 = 0; i_22 < 20; i_22 += 3) 
                    {
                        for (short i_23 = 2; i_23 < 19; i_23 += 1) 
                        {
                            {
                                var_37 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_39 [i_23 - 2] [i_23 + 1] [i_23 + 1] [i_23] [i_23 - 2]))))) ? (((/* implicit */int) arr_39 [2] [i_23 + 1] [9] [i_23] [i_23 - 2])) : (((((/* implicit */_Bool) arr_39 [i_23] [i_23 + 1] [(unsigned short)6] [i_23] [i_23 - 2])) ? (((/* implicit */int) arr_39 [i_23] [i_23 + 1] [i_23 + 1] [i_23] [i_23 - 2])) : (((/* implicit */int) arr_39 [i_23] [i_23 + 1] [i_23 + 1] [i_23] [i_23 - 2]))))));
                                var_38 *= ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_18] [(unsigned short)11]))))))))));
                                arr_83 [(short)15] [i_19] [9] [5] [9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_65 [i_20 + 2]) << (((((((((/* implicit */int) var_7)) | (((/* implicit */int) arr_2 [i_19])))) + (26696))) - (6)))))) ? (((int) arr_71 [i_18] [i_18] [i_20])) : (((/* implicit */int) arr_71 [i_18] [i_18] [i_18]))));
                                arr_84 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22] = ((((/* implicit */_Bool) arr_15 [i_18] [i_20 + 2] [i_20 + 2] [i_20 + 2] [i_20 + 2] [(unsigned short)19])) ? (((/* implicit */int) min((arr_15 [i_18] [(short)12] [i_19] [i_20] [i_19] [i_23]), (arr_15 [i_18] [i_18] [i_20 + 2] [i_20 - 3] [i_22] [(short)15])))) : ((~(((/* implicit */int) var_6)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 2 */
        for (short i_24 = 0; i_24 < 20; i_24 += 1) /* same iter space */
        {
            arr_87 [i_18] [i_24] = ((/* implicit */int) min(((unsigned short)56991), ((unsigned short)27228)));
            var_39 = ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) & (arr_40 [i_18] [i_24])))) ? (max((((((/* implicit */_Bool) arr_30 [(unsigned short)0] [(unsigned short)0] [i_24])) ? (arr_40 [i_24] [i_18]) : (1631968177))), (((/* implicit */int) arr_9 [i_18] [i_18] [i_24] [i_24])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_18] [i_18] [i_24] [i_18])) || (((/* implicit */_Bool) (short)18644))))));
            var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) (!(((/* implicit */_Bool) (+(arr_64 [i_24] [i_24])))))))));
            /* LoopSeq 2 */
            for (short i_25 = 2; i_25 < 18; i_25 += 4) 
            {
                arr_90 [(unsigned short)8] [i_24] [i_25 - 2] = ((/* implicit */short) (+((+(((/* implicit */int) (short)-8649))))));
                var_41 -= ((((/* implicit */_Bool) min((((unsigned short) var_5)), (var_9)))) ? (((((/* implicit */_Bool) ((short) var_9))) ? (min((1590602354), (((/* implicit */int) (short)-6)))) : (((/* implicit */int) (short)-14456)))) : (min((((/* implicit */int) (short)-30060)), (((((/* implicit */int) var_5)) + (arr_79 [i_18]))))));
                var_42 = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_24 [i_24] [i_25])) > (((/* implicit */int) (short)5127))))) <= (((((/* implicit */_Bool) -198810937)) ? (((/* implicit */int) (short)-10649)) : (((/* implicit */int) (short)-10116))))))), (max((var_11), (((/* implicit */int) arr_23 [i_25 + 1] [i_24]))))));
            }
            for (short i_26 = 0; i_26 < 20; i_26 += 4) 
            {
                var_43 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_75 [i_26] [i_26])) ? (var_4) : (((((/* implicit */_Bool) arr_29 [i_18] [i_18])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)16239)))))) > (((((/* implicit */int) ((arr_40 [i_18] [i_18]) != (var_11)))) / (((/* implicit */int) max((var_9), (arr_20 [i_18] [i_26]))))))));
                var_44 = ((/* implicit */short) max((var_44), (arr_8 [i_18] [i_18] [(unsigned short)0] [i_26])));
            }
            var_45 = (((+(((/* implicit */int) arr_8 [i_18] [i_18] [12] [i_24])))) / (((/* implicit */int) arr_14 [i_24] [i_18] [i_24] [i_24])));
        }
        /* vectorizable */
        for (short i_27 = 0; i_27 < 20; i_27 += 1) /* same iter space */
        {
            var_46 = ((/* implicit */int) min((var_46), (((/* implicit */int) arr_58 [i_18] [i_27]))));
            var_47 = (+(((/* implicit */int) arr_53 [i_18] [12] [i_27])));
        }
        arr_97 [i_18] = ((((((((/* implicit */_Bool) arr_92 [i_18] [i_18] [i_18])) ? (var_8) : (((/* implicit */int) arr_92 [i_18] [i_18] [(short)14])))) + (2147483647))) << ((((((~(((/* implicit */int) arr_94 [i_18] [i_18])))) + (37321))) - (30))));
    }
    /* vectorizable */
    for (short i_28 = 0; i_28 < 23; i_28 += 1) 
    {
        arr_100 [i_28] = ((/* implicit */short) arr_98 [i_28] [i_28]);
        arr_101 [i_28] [i_28] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_99 [i_28] [i_28])) ? (((/* implicit */int) arr_98 [i_28] [i_28])) : (((/* implicit */int) (short)-10654))));
    }
}
