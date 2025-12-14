/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61251
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) arr_1 [i_0] [i_0]);
        var_20 &= ((/* implicit */unsigned char) (!(max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))));
        var_21 ^= ((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)188)), (((((((((/* implicit */int) (unsigned char)0)) | (-17))) + (2147483647))) << (((/* implicit */int) min((arr_1 [i_0] [i_0]), (var_3))))))));
        var_22 = ((/* implicit */unsigned char) max((var_22), (var_19)));
        var_23 = ((/* implicit */int) max((arr_0 [i_0]), (((_Bool) arr_1 [i_0] [i_0]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] = var_15;
        arr_6 [i_1] = ((/* implicit */int) (unsigned char)30);
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_15), (arr_4 [i_1])))) ? (((/* implicit */int) arr_1 [10] [10])) : (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1])) == (((/* implicit */int) arr_4 [(unsigned char)4])))))));
        var_25 ^= (unsigned char)193;
        /* LoopNest 2 */
        for (unsigned char i_2 = 2; i_2 < 11; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) 
                        {
                            {
                                arr_16 [i_1] [i_1] [i_1] [(_Bool)1] [i_1] [i_1] = ((/* implicit */unsigned char) var_12);
                                var_26 *= (_Bool)1;
                                var_27 ^= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned char)188)) ? (-674109701) : (((/* implicit */int) (unsigned char)200)))), ((+(((((/* implicit */_Bool) (unsigned char)62)) ? (((/* implicit */int) (unsigned char)208)) : (9)))))));
                                var_28 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)192)) << (((/* implicit */int) (_Bool)0))))) && (((/* implicit */_Bool) ((3840) ^ (((/* implicit */int) var_1))))));
                                var_29 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [i_3]))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_3] [i_3] [i_3] [i_2 - 2] [i_2 - 2])) / (((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */int) var_9)))))))));
                }
            } 
        } 
    }
    for (unsigned char i_6 = 0; i_6 < 18; i_6 += 2) 
    {
        var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((arr_18 [i_6]) ? (((((/* implicit */int) arr_18 [i_6])) >> (((((/* implicit */int) (unsigned char)62)) - (35))))) : (((/* implicit */int) min((var_15), (((/* implicit */unsigned char) (_Bool)0))))))))));
        /* LoopSeq 2 */
        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 2) 
        {
            arr_22 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(-3863)))) ? (((/* implicit */int) max(((unsigned char)39), (((/* implicit */unsigned char) arr_18 [i_6]))))) : ((-(((/* implicit */int) arr_18 [i_7]))))));
            arr_23 [i_6] = ((/* implicit */unsigned char) (((!(arr_1 [i_6] [i_6]))) ? (((32) ^ (((/* implicit */int) var_10)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)226)) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) (unsigned char)30))))))))));
        }
        for (unsigned char i_8 = 1; i_8 < 16; i_8 += 4) 
        {
            var_32 = ((/* implicit */unsigned char) min((var_32), ((unsigned char)190)));
            arr_26 [(_Bool)1] [i_8] = ((/* implicit */int) var_0);
            /* LoopSeq 3 */
            for (unsigned char i_9 = 1; i_9 < 15; i_9 += 1) 
            {
                var_33 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (unsigned char)110)))), (max(((-2147483647 - 1)), (((((/* implicit */int) var_15)) << (((/* implicit */int) arr_18 [i_6]))))))));
                arr_30 [i_8] [i_9] = ((/* implicit */unsigned char) max(((-(((/* implicit */int) (unsigned char)108)))), (((/* implicit */int) arr_1 [i_8 + 2] [i_8 + 1]))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                {
                    arr_33 [i_6] [i_6] [i_8] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)216))))) >= ((~(((/* implicit */int) (unsigned char)135))))));
                    var_34 = (_Bool)1;
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 0; i_11 < 18; i_11 += 4) 
                    {
                        var_35 = (unsigned char)9;
                        var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)105)) ? (arr_28 [i_9 - 1] [i_9 - 1]) : ((+(((/* implicit */int) (_Bool)0))))));
                        arr_36 [14] [i_8] [i_8] [i_8] [i_11] = ((((/* implicit */_Bool) var_2)) ? (arr_28 [i_10 + 1] [i_10]) : ((~(((/* implicit */int) (unsigned char)204)))));
                    }
                }
                for (int i_12 = 2; i_12 < 16; i_12 += 1) 
                {
                    var_37 += ((/* implicit */_Bool) arr_39 [i_9] [i_9 - 1] [i_9] [i_9 + 2]);
                    var_38 = ((((/* implicit */_Bool) (unsigned char)79)) ? ((~(((/* implicit */int) var_14)))) : (((((/* implicit */int) (unsigned char)248)) * (((/* implicit */int) var_12)))));
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_39 = ((/* implicit */unsigned char) max((var_39), (arr_38 [8] [i_6])));
                    arr_42 [i_9] [i_9] [i_9] [i_9 + 3] [i_8] [i_9] = ((/* implicit */_Bool) min(((unsigned char)13), ((unsigned char)192)));
                    arr_43 [i_13] [i_8] [i_8] [(_Bool)1] = ((unsigned char) arr_28 [i_6] [i_6]);
                    var_40 = ((/* implicit */unsigned char) var_3);
                }
            }
            /* vectorizable */
            for (unsigned char i_14 = 4; i_14 < 14; i_14 += 4) 
            {
                var_41 = ((/* implicit */int) arr_21 [i_8] [i_8] [i_14 + 2]);
                var_42 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2136384175))));
                arr_46 [i_8] [i_8] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned char)97)))) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) ((arr_28 [i_6] [i_14]) <= (((/* implicit */int) arr_29 [i_8] [i_8] [i_8] [i_6])))))));
            }
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                arr_51 [i_6] [i_8] [i_6] [i_6] = (-(((/* implicit */int) (unsigned char)160)));
                var_43 *= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)188))));
            }
            var_44 *= (unsigned char)224;
        }
    }
    for (int i_16 = 0; i_16 < 16; i_16 += 4) 
    {
        arr_55 [i_16] [i_16] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) arr_21 [i_16] [i_16] [i_16]))) / ((-(((/* implicit */int) (unsigned char)140))))));
        var_45 = ((/* implicit */int) var_4);
        var_46 -= arr_48 [(unsigned char)4] [i_16];
        arr_56 [i_16] = ((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */int) arr_50 [i_16])) : (arr_44 [i_16] [i_16])))));
    }
    var_47 = ((/* implicit */unsigned char) (_Bool)1);
    var_48 = ((/* implicit */unsigned char) var_18);
    var_49 = ((/* implicit */unsigned char) var_7);
}
