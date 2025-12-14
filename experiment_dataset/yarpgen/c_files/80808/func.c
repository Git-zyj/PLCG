/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80808
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
    var_12 = var_7;
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                for (short i_3 = 2; i_3 < 11; i_3 += 3) 
                {
                    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_6)))) && (((/* implicit */_Bool) arr_12 [(unsigned char)7] [(unsigned char)7] [i_1 + 2] [i_0])))))));
                            arr_16 [i_0] [i_3] [i_3 + 2] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_2 [i_4])) | (((/* implicit */int) arr_0 [i_0] [i_0])))), (((((/* implicit */_Bool) arr_14 [i_0] [i_3] [i_2] [i_3] [i_0])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)128))))))) ? (min((((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */int) (short)32765)) : (((/* implicit */int) arr_4 [i_0] [i_2] [i_4])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))) : (((((/* implicit */int) (short)8191)) * (((/* implicit */int) (unsigned char)247))))));
                        }
                    } 
                } 
            } 
            var_14 *= ((/* implicit */unsigned char) (+(((/* implicit */int) var_0))));
            /* LoopNest 3 */
            for (short i_5 = 2; i_5 < 12; i_5 += 1) 
            {
                for (unsigned char i_6 = 0; i_6 < 14; i_6 += 4) 
                {
                    for (short i_7 = 1; i_7 < 10; i_7 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */short) ((((((((/* implicit */_Bool) (unsigned char)197)) ? (((/* implicit */int) (unsigned char)95)) : (((/* implicit */int) var_2)))) >= (((((/* implicit */_Bool) arr_18 [i_0] [i_5])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_5 - 2] [i_6] [i_6] [i_7 + 1] [(unsigned char)9])))))) ? (((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)59)))) : ((+(((/* implicit */int) var_10))))));
                            arr_25 [i_0] [i_0] [(short)7] [i_0] [i_0] [(unsigned char)0] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [(unsigned char)0])) << (((((/* implicit */int) (short)13127)) - (13117)))))) ? ((+(((((/* implicit */_Bool) arr_18 [i_1] [i_5])) ? (((/* implicit */int) (unsigned char)109)) : (((/* implicit */int) var_9)))))) : ((-(((/* implicit */int) min((((/* implicit */short) arr_5 [i_0] [i_1] [i_1])), ((short)0))))))));
                            var_16 = (short)20797;
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_6]))))) ? ((-(((/* implicit */int) (unsigned char)223)))) : (((/* implicit */int) var_2))));
                            arr_26 [i_0] [i_1] [i_5 + 2] [i_5] [i_7 + 4] = ((/* implicit */short) (unsigned char)128);
                        }
                    } 
                } 
            } 
        }
        for (short i_8 = 0; i_8 < 14; i_8 += 2) 
        {
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (short)24998)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)32465)) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_8]))))))) ? (((/* implicit */int) ((((((/* implicit */int) (unsigned char)167)) % (((/* implicit */int) var_5)))) > (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_17 [i_8] [i_8] [i_8] [i_0])) : (((/* implicit */int) arr_20 [i_8]))))))) : (((/* implicit */int) (short)32464))));
            /* LoopSeq 1 */
            for (unsigned char i_9 = 0; i_9 < 14; i_9 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_10 = 4; i_10 < 12; i_10 += 2) 
                {
                    for (short i_11 = 1; i_11 < 12; i_11 += 4) 
                    {
                        {
                            var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)58)) ? (((/* implicit */int) ((unsigned char) var_9))) : (((((/* implicit */_Bool) (short)-32466)) ? (((/* implicit */int) arr_5 [i_0] [(short)9] [i_0])) : (((/* implicit */int) (unsigned char)30))))))) ? (min((((((/* implicit */int) (unsigned char)125)) * (((/* implicit */int) arr_4 [i_0] [i_8] [i_9])))), (((/* implicit */int) (short)32760)))) : (min((((/* implicit */int) arr_29 [i_0] [(short)6] [i_10] [i_10])), ((~(((/* implicit */int) arr_17 [i_0] [i_8] [i_8] [i_11]))))))));
                            var_20 += arr_20 [i_8];
                            var_21 = ((/* implicit */unsigned char) min(((+(((/* implicit */int) (unsigned char)95)))), (((/* implicit */int) (short)32760))));
                            var_22 = ((/* implicit */unsigned char) max((min((((/* implicit */int) (unsigned char)151)), ((+(((/* implicit */int) (unsigned char)198)))))), (((/* implicit */int) arr_13 [i_0] [i_8] [i_8] [i_9] [i_8] [i_0] [i_8]))));
                            arr_36 [i_0] [i_0] [(short)10] [i_9] [i_0] = ((/* implicit */unsigned char) min((((short) ((((/* implicit */_Bool) (short)25001)) ? (((/* implicit */int) arr_12 [i_0] [i_9] [i_10] [i_9])) : (((/* implicit */int) var_1))))), (((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) (short)-32466)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)14034))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 14; i_12 += 2) 
                {
                    for (short i_13 = 0; i_13 < 14; i_13 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) min((((short) ((((/* implicit */int) (short)32767)) >= (((/* implicit */int) arr_39 [(unsigned char)11] [(unsigned char)11] [(unsigned char)11]))))), (((/* implicit */short) (unsigned char)0))));
                            var_24 = ((/* implicit */unsigned char) max(((-(((/* implicit */int) arr_41 [i_0] [i_8] [i_9] [i_12] [i_13])))), (((/* implicit */int) (unsigned char)161))));
                        }
                    } 
                } 
                arr_44 [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((short) (-(((/* implicit */int) var_8)))))) : (((((((/* implicit */int) (short)-1)) <= (((/* implicit */int) var_1)))) ? (((((/* implicit */int) arr_9 [i_0])) | (((/* implicit */int) (unsigned char)58)))) : (((/* implicit */int) var_1))))));
                arr_45 [i_0] [i_8] [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)120)))) & (((/* implicit */int) ((short) (unsigned char)253)))))) ? ((-(((((/* implicit */int) arr_38 [i_9] [i_8] [i_0])) / (((/* implicit */int) arr_23 [i_9] [i_9] [i_8] [i_8] [i_9] [(short)10] [(short)10])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-946))))))))));
            }
        }
        for (short i_14 = 2; i_14 < 10; i_14 += 2) 
        {
            var_25 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)0))));
            var_26 = ((/* implicit */unsigned char) var_8);
            /* LoopNest 2 */
            for (unsigned char i_15 = 0; i_15 < 14; i_15 += 3) 
            {
                for (unsigned char i_16 = 0; i_16 < 14; i_16 += 4) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_17 = 2; i_17 < 11; i_17 += 3) 
                        {
                            arr_59 [(short)10] [i_16] [i_15] [i_15] [i_0] [i_0] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) min((var_10), ((short)25001)))) ? ((-(((/* implicit */int) (unsigned char)114)))) : ((-(((/* implicit */int) (short)26071)))))));
                            arr_60 [i_0] [i_14] [i_15] [i_15] [i_17] [i_15] [i_17] = ((/* implicit */short) (unsigned char)158);
                            var_27 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (short)-32479)) ? (((((/* implicit */_Bool) (short)1335)) ? (((/* implicit */int) arr_19 [(short)1] [(short)6] [i_15] [(short)6] [(short)6])) : (((/* implicit */int) var_5)))) : (((/* implicit */int) arr_20 [i_15]))))));
                            var_28 = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)91))));
                        }
                        for (short i_18 = 3; i_18 < 13; i_18 += 4) 
                        {
                            var_29 = ((/* implicit */unsigned char) arr_35 [(unsigned char)3] [(short)5] [(unsigned char)4] [i_16] [i_16]);
                            arr_64 [i_15] [(unsigned char)0] [(short)6] [i_15] [i_18] = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)40))));
                            var_30 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)75))));
                            var_31 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)28864)))))));
                            var_32 = ((/* implicit */unsigned char) var_5);
                        }
                        for (unsigned char i_19 = 0; i_19 < 14; i_19 += 4) /* same iter space */
                        {
                            var_33 = ((/* implicit */short) (-((+(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
                            arr_69 [i_0] [i_14] [i_15] [i_14] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_9))) ? (((/* implicit */int) arr_10 [i_0] [(unsigned char)2] [i_14 + 1] [i_15] [i_16] [(unsigned char)2])) : (((/* implicit */int) min((var_2), ((unsigned char)255))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)-25002)) - (((/* implicit */int) (short)-32466))))) ? (((((/* implicit */int) (unsigned char)223)) + (((/* implicit */int) (unsigned char)52)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_52 [i_0] [i_16] [i_15] [i_16])) : (((/* implicit */int) (unsigned char)61)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)22830)) ? (((/* implicit */int) arr_54 [i_0] [i_0] [i_0] [i_0] [(unsigned char)7])) : (((/* implicit */int) arr_7 [i_15] [i_16] [i_19]))))) ? ((~(((/* implicit */int) (unsigned char)75)))) : (((((/* implicit */int) (unsigned char)67)) ^ (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_20 = 0; i_20 < 14; i_20 += 4) /* same iter space */
                        {
                            arr_74 [i_20] [i_15] [i_15] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_15])) ? (((/* implicit */int) (short)-23754)) : (((/* implicit */int) (unsigned char)7))));
                            var_34 = (short)15522;
                            var_35 = (short)4625;
                            var_36 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)5))))) ? (((((/* implicit */_Bool) arr_5 [i_15] [i_16] [i_20])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_10 [i_0] [i_14 - 1] [i_15] [i_0] [i_16] [i_20])))) : (((((/* implicit */_Bool) arr_30 [i_15])) ? (((/* implicit */int) (unsigned char)200)) : (((/* implicit */int) (short)(-32767 - 1)))))));
                        }
                        var_37 *= ((/* implicit */short) (-(((/* implicit */int) ((unsigned char) (-(((/* implicit */int) var_11))))))));
                    }
                } 
            } 
        }
        var_38 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_0] [i_0] [(short)6] [i_0]))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_43 [i_0] [i_0] [i_0] [(unsigned char)0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_47 [i_0] [i_0])))) : (((/* implicit */int) (short)32767))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)135)) : (((/* implicit */int) (unsigned char)152)))) : (((/* implicit */int) (unsigned char)255))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_21 = 0; i_21 < 19; i_21 += 3) 
    {
        var_39 = ((/* implicit */unsigned char) min((((/* implicit */int) arr_78 [i_21])), (max((((((/* implicit */_Bool) (unsigned char)217)) ? (((/* implicit */int) (short)-8793)) : (((/* implicit */int) var_11)))), (((/* implicit */int) ((short) arr_77 [i_21] [i_21])))))));
        arr_79 [i_21] |= ((/* implicit */short) arr_78 [i_21]);
        /* LoopNest 2 */
        for (unsigned char i_22 = 0; i_22 < 19; i_22 += 2) 
        {
            for (unsigned char i_23 = 0; i_23 < 19; i_23 += 2) 
            {
                {
                    var_40 = ((/* implicit */short) ((((/* implicit */int) arr_76 [i_23])) > ((((+(((/* implicit */int) arr_83 [i_21] [i_22] [i_23])))) - (((((/* implicit */int) (unsigned char)20)) + (((/* implicit */int) var_3))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_24 = 2; i_24 < 17; i_24 += 2) 
                    {
                        arr_87 [i_21] [i_22] [i_21] [i_21] [i_21] = ((/* implicit */unsigned char) (short)-32458);
                        arr_88 [i_23] [i_22] [i_21] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_86 [i_21] [i_21] [i_23] [i_24]))));
                        arr_89 [i_21] [i_22] [i_23] [i_23] = ((/* implicit */unsigned char) (short)-9513);
                    }
                    var_41 = ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)235)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)7700))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-32456))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_25 = 3; i_25 < 18; i_25 += 2) 
        {
            for (unsigned char i_26 = 4; i_26 < 18; i_26 += 4) 
            {
                {
                    arr_96 [i_26] &= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)0))));
                    var_42 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)48))));
                    arr_97 [i_25] [i_25] [(short)7] [i_25] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_10))));
                }
            } 
        } 
    }
    for (short i_27 = 1; i_27 < 10; i_27 += 2) 
    {
        var_43 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_48 [i_27]))));
        var_44 = arr_46 [i_27 - 1] [i_27 - 1] [i_27 - 1];
        var_45 = ((/* implicit */short) arr_31 [i_27] [i_27]);
    }
    var_46 = var_8;
}
