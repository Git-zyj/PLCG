/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99491
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_2 [(unsigned char)4] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? ((-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))) : (-8784950)));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */unsigned short) min((var_10), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-9933)) : (-8784928))))))));
                    var_11 |= max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (1167852192) : (((/* implicit */int) (unsigned short)34308))))) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) (unsigned char)246)));
                    var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) min((arr_6 [i_2] [i_1] [i_0] [i_2]), (arr_6 [i_2] [i_1] [i_0] [i_2]))))));
                    var_13 = min(((unsigned short)55087), (((/* implicit */unsigned short) arr_5 [i_2] [i_1] [i_2])));
                    arr_7 [i_2] [i_1] [(short)2] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((var_5), (var_3)))))))));
                }
            } 
        } 
        var_14 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [(short)8] [i_0] [(short)8]))))) ? (max((((((/* implicit */int) arr_6 [(unsigned char)12] [i_0] [i_0] [(unsigned char)12])) + (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)61871)) && (((/* implicit */_Bool) (short)32767))))))) : (((/* implicit */int) ((arr_0 [i_0]) == (((/* implicit */int) arr_1 [i_0])))))));
    }
    for (int i_3 = 0; i_3 < 14; i_3 += 2) 
    {
        var_15 += ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_9 [i_3])), (var_9)))) && (((/* implicit */_Bool) min((arr_9 [i_3]), (arr_9 [i_3]))))));
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_3])) ? ((+(((/* implicit */int) arr_9 [i_3])))) : (min((((/* implicit */int) arr_8 [i_3])), (arr_10 [i_3] [i_3])))));
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            for (unsigned char i_5 = 0; i_5 < 14; i_5 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_6 = 1; i_6 < 10; i_6 += 1) 
                    {
                        arr_20 [i_5] [i_6] [(unsigned char)9] [i_6] = 171977637;
                        /* LoopSeq 1 */
                        for (int i_7 = 0; i_7 < 14; i_7 += 2) 
                        {
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_15 [i_6 + 2] [i_6 + 2] [i_6] [i_6 + 1]))));
                            var_18 = ((((/* implicit */_Bool) arr_17 [i_3] [i_4] [i_6 - 1] [i_6])) ? (((/* implicit */int) arr_17 [i_3] [i_4] [i_6 - 1] [i_6 + 4])) : (-1135706933));
                        }
                    }
                    for (unsigned short i_8 = 0; i_8 < 14; i_8 += 2) 
                    {
                        arr_26 [i_3] [7] [i_3] = ((/* implicit */short) (+(((/* implicit */int) min((arr_19 [i_3] [i_5] [i_4] [i_3] [i_3]), (arr_19 [i_3] [(unsigned char)6] [i_4] [i_5] [i_8]))))));
                        var_19 = ((/* implicit */short) ((int) (unsigned char)255));
                    }
                    for (unsigned char i_9 = 0; i_9 < 14; i_9 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 0; i_10 < 14; i_10 += 1) 
                        {
                            var_20 += ((/* implicit */short) ((((/* implicit */_Bool) min((max((((/* implicit */int) arr_25 [i_4] [i_4] [i_4] [i_4] [i_4])), (arr_23 [i_10]))), (((((/* implicit */_Bool) arr_16 [i_3] [i_4] [i_5] [i_5])) ? (((/* implicit */int) (unsigned char)75)) : (((/* implicit */int) (unsigned short)65514))))))) ? (-1768932839) : ((+(arr_18 [i_10] [i_5] [i_4] [i_3])))));
                            var_21 += (-(((/* implicit */int) ((((/* implicit */int) arr_30 [i_3] [i_4] [i_5] [i_10])) > (((/* implicit */int) arr_30 [i_3] [i_4] [i_5] [i_9]))))));
                            var_22 = (~((+(833830585))));
                        }
                        var_23 = ((/* implicit */int) min((var_23), (125098852)));
                    }
                    arr_33 [(short)8] [i_4] [i_4] [i_4] = (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (unsigned short)96)) : (((/* implicit */int) (unsigned char)79)))))))));
                }
            } 
        } 
    }
    for (unsigned short i_11 = 0; i_11 < 10; i_11 += 2) 
    {
        var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) 2135578124)) ? (((/* implicit */int) arr_32 [i_11] [i_11] [i_11] [i_11] [i_11])) : (((/* implicit */int) arr_28 [i_11] [i_11] [i_11] [i_11] [(unsigned char)8] [i_11])))) & (min((arr_10 [i_11] [i_11]), (var_8))))))));
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) max((min((((/* implicit */int) arr_36 [i_11] [i_11])), (((((/* implicit */int) (short)9592)) & (-668322997))))), (((/* implicit */int) max((((/* implicit */short) (unsigned char)250)), ((short)-32754)))))))));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 19; i_12 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_13 = 0; i_13 < 19; i_13 += 2) 
        {
            var_26 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)255))));
            var_27 = ((/* implicit */unsigned char) (+(((var_4) << (((((/* implicit */int) arr_39 [i_12] [i_13] [i_12])) - (25019)))))));
        }
        for (int i_14 = 0; i_14 < 19; i_14 += 2) 
        {
            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((((/* implicit */int) arr_43 [i_12] [i_14] [i_14])) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1)))))))))));
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 19; i_15 += 2) 
            {
                for (unsigned short i_16 = 0; i_16 < 19; i_16 += 1) 
                {
                    for (short i_17 = 0; i_17 < 19; i_17 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */int) arr_39 [i_16] [i_15] [i_12]);
                            var_30 = ((/* implicit */int) var_7);
                            arr_52 [i_17] [i_16] [0] [8] [i_14] [i_12] |= ((/* implicit */unsigned char) (short)-14748);
                            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_39 [(unsigned char)11] [i_12] [i_12])) ? (((/* implicit */int) arr_39 [i_17] [i_14] [i_12])) : (((/* implicit */int) var_6))));
                            arr_53 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] |= ((/* implicit */int) ((((/* implicit */_Bool) arr_38 [i_12])) && (((/* implicit */_Bool) (unsigned char)255))));
                        }
                    } 
                } 
            } 
        }
        arr_54 [i_12] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65519)) >> (((((/* implicit */int) arr_41 [(unsigned char)6] [i_12] [i_12])) - (150)))));
    }
    var_32 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)22763)) / (368829580)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) min((((/* implicit */unsigned short) (short)(-32767 - 1))), ((unsigned short)34552)))) : (((/* implicit */int) (short)32767)))) : (var_8));
    var_33 = ((/* implicit */unsigned short) var_4);
}
