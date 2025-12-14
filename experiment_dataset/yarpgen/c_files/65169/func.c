/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65169
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
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) ((_Bool) var_4))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((unsigned short) var_11))))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_16 = arr_0 [i_0];
        var_17 = ((/* implicit */unsigned short) max((max((((unsigned int) (_Bool)1)), (((/* implicit */unsigned int) arr_0 [i_0])))), (((/* implicit */unsigned int) (((!(arr_1 [i_0]))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) var_9)))))));
        var_18 = ((((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_12)))))))) > (((/* implicit */int) ((_Bool) (_Bool)1))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 4 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) var_13))));
            var_20 ^= var_11;
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                arr_12 [i_1] [i_2] = ((/* implicit */_Bool) ((0U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1])))));
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3 + 1])) ? (((/* implicit */int) arr_5 [i_1] [i_3 + 1] [i_3])) : (((/* implicit */int) arr_9 [i_1]))));
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_3 + 1])) ? ((+(((/* implicit */int) var_7)))) : ((+(((/* implicit */int) var_3))))));
                arr_13 [i_1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (_Bool)1);
            }
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_16 [i_1] [i_1] [i_4] = var_12;
            var_23 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [8U] [i_4] [8U])) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) arr_10 [i_1])) ? (((/* implicit */int) arr_14 [(signed char)10] [i_4])) : (((/* implicit */int) arr_14 [(_Bool)1] [i_4]))))));
            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) var_14))));
            var_25 = ((/* implicit */signed char) arr_3 [i_1]);
        }
        for (signed char i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    var_26 = ((/* implicit */unsigned int) ((var_3) ? (((((/* implicit */int) arr_6 [i_5] [i_6] [i_7])) << (((((/* implicit */int) (unsigned short)14762)) - (14733))))) : (((/* implicit */int) (_Bool)1))));
                    var_27 = ((/* implicit */unsigned char) var_3);
                    var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) * (((((/* implicit */_Bool) (unsigned short)5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)0)))))))));
                    arr_25 [i_1] [i_5] [i_7] [i_6] [i_7] [i_7] |= ((/* implicit */_Bool) (((!(arr_11 [i_1]))) ? (((/* implicit */int) arr_23 [i_7] [i_5] [i_6] [i_1])) : (((/* implicit */int) (signed char)7))));
                }
                var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_20 [i_1] [i_5] [i_6])) : (((/* implicit */int) var_10))));
            }
            arr_26 [i_1] [i_5] = ((/* implicit */unsigned char) (signed char)-7);
        }
        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_9 = 0; i_9 < 25; i_9 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_10 = 0; i_10 < 25; i_10 += 1) 
                {
                    arr_35 [i_1] [i_1] [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)34722)) ? (((/* implicit */int) (unsigned char)55)) : (((/* implicit */int) arr_11 [i_8]))));
                    var_30 = ((((/* implicit */int) arr_24 [i_1] [i_8] [i_1] [i_10])) > (((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */int) (unsigned char)117)) : (((/* implicit */int) (signed char)18)))));
                }
                arr_36 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (((~(((/* implicit */int) (signed char)45)))) & (((((/* implicit */_Bool) arr_15 [i_1] [i_8] [i_9])) ? (((/* implicit */int) arr_33 [i_1] [i_1] [i_1] [i_8] [i_9])) : (((/* implicit */int) (unsigned char)55))))));
                var_31 |= ((/* implicit */signed char) ((arr_32 [i_1] [i_9] [i_9] [i_9]) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
            }
            /* LoopSeq 1 */
            for (signed char i_11 = 0; i_11 < 25; i_11 += 1) 
            {
                arr_39 [i_1] [i_11] [i_8] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [i_1])) ? (((/* implicit */int) arr_30 [i_1])) : (((/* implicit */int) arr_30 [i_1]))));
                var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned short)4664)))))));
                var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_29 [i_11]))));
                arr_40 [i_1] = ((/* implicit */unsigned short) var_4);
            }
        }
        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) arr_7 [(_Bool)1]))));
    }
    for (unsigned int i_12 = 0; i_12 < 21; i_12 += 1) /* same iter space */
    {
        var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) min((((/* implicit */unsigned int) (unsigned char)0)), (arr_19 [i_12] [(unsigned short)20]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))));
        /* LoopSeq 2 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
        {
            arr_46 [i_12] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_9)))) ? (((((/* implicit */_Bool) arr_33 [i_13] [(_Bool)1] [i_13] [(_Bool)1] [i_12])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_33 [i_12] [(_Bool)1] [i_12] [i_12] [i_12])))) : (((((/* implicit */_Bool) arr_33 [i_12] [(unsigned char)0] [i_13] [i_13] [i_13])) ? (((/* implicit */int) arr_33 [i_12] [(_Bool)1] [i_12] [i_12] [i_12])) : (((/* implicit */int) (signed char)-88))))));
            /* LoopSeq 1 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_15 = 0; i_15 < 21; i_15 += 1) 
                {
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                    {
                        {
                            arr_53 [i_16] = ((/* implicit */unsigned char) var_11);
                            arr_54 [i_12] [i_12] [i_15] [i_12] [i_16] = ((/* implicit */_Bool) ((arr_45 [i_12] [i_13]) ? (((((/* implicit */_Bool) ((arr_6 [i_16] [i_13] [i_14]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_18 [i_13] [i_16]))))) ? (((/* implicit */int) ((_Bool) var_13))) : (((/* implicit */int) (signed char)0)))) : (((/* implicit */int) arr_48 [i_14] [i_15]))));
                        }
                    } 
                } 
                var_36 = ((/* implicit */_Bool) max((var_36), (arr_34 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12])));
                var_37 *= ((/* implicit */unsigned int) arr_38 [i_12] [(_Bool)1]);
            }
            arr_55 [i_12] [i_12] = ((/* implicit */signed char) arr_8 [i_12] [i_13] [i_12] [i_13]);
            var_38 *= ((/* implicit */unsigned short) min(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_33 [i_12] [(_Bool)1] [i_13] [i_12] [i_12])))), ((+(((/* implicit */int) arr_33 [i_12] [(_Bool)1] [i_12] [i_12] [i_12]))))));
        }
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
        {
            arr_60 [i_17] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)112)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)11)))))))) ? (((/* implicit */int) (_Bool)0)) : (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)31681)) : (((/* implicit */int) var_1)))) | (((((/* implicit */int) (unsigned char)0)) ^ (((/* implicit */int) (unsigned char)28))))))));
            var_39 *= ((/* implicit */unsigned short) var_11);
            var_40 = ((/* implicit */unsigned char) arr_21 [i_12] [i_17] [i_17] [i_17]);
            /* LoopNest 2 */
            for (unsigned int i_18 = 1; i_18 < 18; i_18 += 4) 
            {
                for (unsigned char i_19 = 0; i_19 < 21; i_19 += 1) 
                {
                    {
                        var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_45 [i_18 + 1] [i_18 + 1])))))));
                        var_42 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_17] [(signed char)8] [i_19]))) ^ (4294967295U)))) ? (((/* implicit */int) arr_18 [i_12] [i_17])) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_18 [i_17] [i_12])), (var_7))))));
                    }
                } 
            } 
            var_43 = ((/* implicit */unsigned short) arr_56 [i_12]);
        }
        arr_66 [i_12] [i_12] = ((/* implicit */signed char) arr_63 [i_12] [i_12]);
        arr_67 [i_12] [i_12] = ((/* implicit */_Bool) var_1);
    }
    for (unsigned int i_20 = 0; i_20 < 21; i_20 += 1) /* same iter space */
    {
        var_44 *= ((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)175)) < (((/* implicit */int) (unsigned short)50762))))), (max((((/* implicit */unsigned short) var_4)), (arr_24 [i_20] [i_20] [(_Bool)1] [i_20])))));
        var_45 = ((/* implicit */unsigned short) arr_62 [i_20] [i_20] [i_20]);
    }
}
