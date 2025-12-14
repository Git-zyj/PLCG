/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71104
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
    var_20 *= ((/* implicit */unsigned char) (+(((((/* implicit */int) min(((unsigned short)56217), (var_17)))) * (((/* implicit */int) (!((_Bool)0))))))));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((var_0) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) arr_0 [i_0 + 1])))) : ((~(((/* implicit */int) arr_2 [i_0]))))));
            var_23 |= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_4 [i_0] [i_0]))));
        }
        var_24 ^= (_Bool)1;
        /* LoopNest 2 */
        for (unsigned short i_2 = 1; i_2 < 23; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                {
                    var_25 = ((/* implicit */_Bool) ((arr_6 [i_3]) ? (((/* implicit */int) arr_2 [i_3])) : (((/* implicit */int) arr_4 [i_2] [i_0]))));
                    arr_12 [i_0] [i_0] [i_3] = (_Bool)1;
                    /* LoopSeq 2 */
                    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_17 [(_Bool)1] [i_3] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_10 [i_2 - 1] [i_2 - 1] [i_2 + 1]))));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) ((unsigned short) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1]))) : (((((/* implicit */_Bool) arr_16 [i_0] [i_2 + 2] [i_0] [i_0] [i_3] [i_4] [i_5])) ? (((/* implicit */int) arr_10 [i_0 + 2] [i_2] [i_3])) : (((/* implicit */int) arr_13 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            arr_21 [i_4] [i_2] [i_3] [i_4] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_3] [i_4]))));
                            var_26 = ((/* implicit */unsigned short) (unsigned char)152);
                            var_27 |= (!(((/* implicit */_Bool) ((arr_14 [i_0] [i_2] [i_3] [i_6]) ? (((/* implicit */int) arr_3 [i_2] [i_6])) : (((/* implicit */int) arr_1 [i_0]))))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_28 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_2 [i_0]))));
                            arr_24 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) > (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_9 [i_0] [(_Bool)1])) : (((/* implicit */int) (_Bool)1))))));
                        }
                        /* LoopSeq 2 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_29 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65530)) ? (((/* implicit */int) arr_9 [i_0 + 1] [i_2])) : (((/* implicit */int) (unsigned short)43097))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)14336))))) : (((/* implicit */int) arr_10 [i_2] [i_2] [i_2]))));
                            arr_27 [i_0] [i_2] [i_4] [i_4] [i_2] = ((/* implicit */unsigned short) (((_Bool)1) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0 - 1] [i_0])))))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 25; i_9 += 2) 
                        {
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_8 [i_0] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)15))))));
                            var_30 *= ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_22 [i_0] [i_2 + 2] [i_3] [i_4] [i_9])) : (((/* implicit */int) ((unsigned char) arr_15 [i_0 + 1] [i_2 + 1] [i_2 + 1])))));
                            var_31 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) var_13)))) : (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1]))));
                            arr_33 [i_2 + 2] [i_4] [i_3] = arr_5 [i_0 + 1] [i_0] [i_0];
                        }
                        arr_34 [i_4] = ((/* implicit */_Bool) (~((-(((/* implicit */int) (unsigned short)1))))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_37 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 + 2] [i_0]))));
                        arr_38 [i_0 + 1] [i_10] [i_10] [i_0] [i_0] = ((/* implicit */_Bool) arr_2 [(unsigned short)8]);
                        /* LoopSeq 3 */
                        for (unsigned short i_11 = 0; i_11 < 25; i_11 += 2) /* same iter space */
                        {
                            arr_41 [i_0] [i_10] [i_10] = ((/* implicit */unsigned char) (((_Bool)0) ? (((((/* implicit */int) var_16)) + (((/* implicit */int) arr_7 [i_0] [i_2 + 2] [i_3])))) : ((+(((/* implicit */int) arr_36 [i_11] [i_3]))))));
                            var_32 = ((/* implicit */_Bool) (+(((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_6 [(unsigned char)23]))))));
                        }
                        for (unsigned short i_12 = 0; i_12 < 25; i_12 += 2) /* same iter space */
                        {
                            arr_44 [i_10] [i_10] [i_3] [(_Bool)1] [i_12] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (unsigned short)22439)) << (((((/* implicit */int) var_18)) - (181))))));
                            var_33 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_0))) ? (((/* implicit */int) ((unsigned char) arr_5 [i_0] [i_2 - 1] [i_3]))) : (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_10))))));
                        }
                        for (unsigned short i_13 = 0; i_13 < 25; i_13 += 2) /* same iter space */
                        {
                            var_34 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_0] [i_2] [i_10]))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_43 [i_0] [i_0] [i_2] [i_3] [i_10] [i_13]))));
                            arr_47 [i_0 - 1] [i_0] [i_0 + 1] [i_0 - 1] [i_0] [i_0] [i_10] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_26 [i_0] [i_0] [i_3] [i_0] [i_3]))));
                            var_35 = ((/* implicit */unsigned char) (_Bool)1);
                            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [(_Bool)1]))))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_15 [(unsigned char)15] [i_2 + 2] [i_3]))));
                        }
                    }
                }
            } 
        } 
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        var_37 &= ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)43097))));
        arr_50 [i_14] = ((/* implicit */unsigned char) arr_25 [i_14] [i_14] [i_14] [i_14] [i_14]);
        var_38 = ((/* implicit */_Bool) (-(((((((/* implicit */_Bool) arr_7 [i_14] [i_14] [i_14])) ? (((/* implicit */int) arr_26 [i_14] [i_14] [i_14] [i_14] [i_14])) : (((/* implicit */int) (_Bool)1)))) + (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned short)43093)) : (((/* implicit */int) arr_42 [i_14] [i_14]))))))));
        var_39 += ((/* implicit */_Bool) (((!((_Bool)0))) ? (((((/* implicit */_Bool) arr_2 [i_14])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_19)))) : ((-(((/* implicit */int) arr_1 [i_14]))))));
        arr_51 [(_Bool)1] &= (!(((/* implicit */_Bool) var_9)));
    }
    /* vectorizable */
    for (unsigned short i_15 = 3; i_15 < 15; i_15 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_16 = 2; i_16 < 15; i_16 += 3) 
        {
            for (unsigned short i_17 = 0; i_17 < 18; i_17 += 2) 
            {
                {
                    var_40 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) (unsigned short)15)) : (((/* implicit */int) (_Bool)0))));
                    /* LoopNest 2 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            {
                                var_41 = arr_46 [i_15] [i_15 - 1] [i_15] [i_15] [i_15] [i_15] [i_15];
                                arr_64 [i_15] = (!(((/* implicit */_Bool) arr_7 [i_16 - 1] [i_16 - 1] [i_19])));
                                var_42 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_23 [i_16 - 2] [i_15 - 3] [i_15 - 1] [i_15] [i_15 + 2]))));
                            }
                        } 
                    } 
                    var_43 = ((((/* implicit */int) arr_1 [i_16])) != (((var_8) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_3)))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                for (unsigned short i_22 = 0; i_22 < 18; i_22 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_23 = 0; i_23 < 18; i_23 += 1) 
                        {
                            var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)118)) << (((/* implicit */int) (_Bool)1))))) ? ((+(((/* implicit */int) arr_2 [i_22])))) : ((~(((/* implicit */int) arr_25 [i_23] [i_23] [i_23] [i_23] [i_23]))))));
                            var_45 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_11 [i_15] [i_20] [i_22] [i_23])) : (((/* implicit */int) arr_31 [i_23] [i_23] [i_23] [i_23] [i_23]))))) ? (((/* implicit */int) arr_8 [i_15] [i_15])) : (((/* implicit */int) (_Bool)1))));
                        }
                        var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_43 [i_15] [i_15] [i_15 - 1] [i_15 - 3] [i_15 + 1] [i_15])) && (((/* implicit */_Bool) arr_53 [i_20] [i_20]))))) : ((-(((/* implicit */int) var_9))))));
                        arr_75 [i_15] [i_15] [i_15] [i_22] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) (_Bool)1)))));
                    }
                } 
            } 
        } 
        var_47 = ((/* implicit */unsigned short) (!((_Bool)1)));
        var_48 *= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_52 [i_15])) ? (((/* implicit */int) arr_55 [i_15])) : (((/* implicit */int) arr_10 [i_15] [(unsigned short)24] [i_15 + 1]))))));
        arr_76 [i_15] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_62 [i_15] [i_15] [i_15] [i_15] [i_15])) < (((((/* implicit */_Bool) arr_40 [i_15] [i_15] [i_15 + 1] [i_15])) ? (((/* implicit */int) (unsigned short)22443)) : (((/* implicit */int) arr_65 [(_Bool)0] [i_15]))))));
    }
}
