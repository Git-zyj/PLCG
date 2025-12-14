/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58468
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_3 [i_0] [(signed char)23] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) ? (((/* implicit */int) (unsigned short)8192)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) && (((((/* implicit */_Bool) (unsigned short)55233)) && (((/* implicit */_Bool) (short)6582)))));
        arr_4 [i_0] [i_0] = arr_1 [i_0];
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                var_20 &= ((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2]);
                var_21 = ((/* implicit */_Bool) arr_1 [i_2]);
            }
            for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                arr_13 [i_0] [i_1] [i_3] = ((/* implicit */int) (unsigned short)25805);
                arr_14 [i_3] [(unsigned char)22] [15] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_3] [(short)15])))))))), ((unsigned short)25805)));
                arr_15 [(short)16] = ((/* implicit */unsigned short) ((arr_11 [i_1] [i_1] [i_1]) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_0])))) : ((~(((/* implicit */int) arr_9 [(unsigned char)16] [i_1] [i_1]))))));
            }
            arr_16 [(unsigned short)22] = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_2 [i_1] [i_0]))))));
            arr_17 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)249)), (2147483647)))) && (((/* implicit */_Bool) var_17)))))));
        }
        /* vectorizable */
        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            arr_20 [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
            arr_21 [i_4] [i_4] = ((/* implicit */unsigned short) arr_18 [i_0] [i_4]);
        }
        for (int i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_6 = 0; i_6 < 25; i_6 += 1) 
            {
                arr_27 [i_5] [i_5] [i_5] = ((/* implicit */_Bool) arr_25 [i_5] [i_5] [i_6]);
                arr_28 [i_5] [i_5] [i_6] = ((/* implicit */unsigned char) 4194303ULL);
            }
            /* vectorizable */
            for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 4) 
            {
                arr_31 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [(_Bool)1] [(_Bool)1] [(_Bool)1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_5] [i_5] [i_5]))) : (var_2)));
                /* LoopSeq 1 */
                for (unsigned char i_8 = 0; i_8 < 25; i_8 += 2) 
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 2) 
                    {
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */int) var_8)) * (((/* implicit */int) arr_26 [i_7])))))));
                        arr_38 [i_0] [i_5] [i_7] [i_0] [i_7] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_33 [i_9] [i_7])) ? (arr_19 [i_0] [i_0]) : (((/* implicit */int) (unsigned short)906))))));
                        var_23 = (~(((/* implicit */int) arr_7 [i_8])));
                        arr_39 [i_5] [i_5] [i_7] [i_8] [i_7] = ((/* implicit */unsigned char) var_1);
                    }
                    for (signed char i_10 = 0; i_10 < 25; i_10 += 3) 
                    {
                        arr_43 [i_5] [i_8] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)39731))))) ? (((((/* implicit */int) arr_9 [i_0] [i_5] [i_8])) * (((/* implicit */int) (unsigned char)14)))) : (((((/* implicit */_Bool) (unsigned char)67)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)1))))));
                        var_24 += ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)489)) == (((/* implicit */int) (unsigned short)63176))));
                        var_25 = ((/* implicit */unsigned char) ((arr_11 [i_5] [i_7] [i_10]) ? (((/* implicit */int) arr_11 [i_7] [i_7] [i_10])) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0]))));
                        var_26 = ((/* implicit */unsigned short) ((arr_0 [i_0] [i_8]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5] [i_5]))) : (var_9)));
                        var_27 *= ((/* implicit */int) arr_8 [i_0] [i_0]);
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 3) /* same iter space */
                    {
                        arr_47 [i_5] [i_5] [i_7] [14] [i_7] = ((/* implicit */short) arr_32 [i_5] [i_7] [10] [i_5]);
                        arr_48 [i_8] [i_8] [i_8] [i_5] [i_8] [i_5] [i_5] = ((/* implicit */short) ((arr_8 [i_0] [i_0]) ? (((/* implicit */int) (unsigned char)189)) : (((/* implicit */int) arr_8 [i_5] [i_11]))));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 3) /* same iter space */
                    {
                        arr_52 [i_0] [i_0] [i_7] [i_5] [i_12] = ((/* implicit */unsigned short) var_6);
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_5] [i_5] [i_8] [i_12])) || (((/* implicit */_Bool) arr_24 [i_0] [(unsigned short)21] [i_5] [i_0]))));
                    }
                    /* LoopSeq 4 */
                    for (unsigned short i_13 = 0; i_13 < 25; i_13 += 4) 
                    {
                        var_29 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_25 [i_5] [i_5] [i_5])))))));
                        arr_56 [i_5] [i_5] [i_0] [i_5] [i_5] [i_0] = ((/* implicit */signed char) (unsigned short)39735);
                        var_30 = (((_Bool)1) ? (((/* implicit */int) arr_55 [i_0] [i_5] [i_7] [i_7] [i_7] [i_13] [i_7])) : (((/* implicit */int) (short)30027)));
                        arr_57 [i_5] [(unsigned short)17] [i_5] [i_5] [i_5] [i_5] = var_7;
                    }
                    for (unsigned char i_14 = 0; i_14 < 25; i_14 += 3) 
                    {
                        arr_61 [i_0] [i_0] [i_7] [i_0] [i_5] = ((/* implicit */unsigned short) arr_18 [i_5] [i_14]);
                        arr_62 [i_0] [i_5] [i_5] [i_0] [(signed char)23] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) || ((!(((/* implicit */_Bool) arr_34 [i_5]))))));
                        var_31 = ((((/* implicit */_Bool) ((1018576570) | (arr_30 [(unsigned short)23] [i_5] [i_5] [(unsigned char)13])))) ? (((/* implicit */int) arr_42 [i_8] [i_0] [i_0])) : (((/* implicit */int) ((var_9) <= (var_3)))));
                    }
                    for (unsigned char i_15 = 0; i_15 < 25; i_15 += 3) 
                    {
                        arr_67 [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_23 [i_0] [i_5]))));
                        var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_35 [i_0] [i_0] [i_7] [i_0] [i_8] [i_15] [i_15])) ? (((/* implicit */int) arr_49 [i_15] [i_8] [i_7] [i_0] [i_0])) : (((/* implicit */int) arr_49 [i_0] [i_0] [i_7] [i_0] [i_15])))))));
                    }
                    for (int i_16 = 0; i_16 < 25; i_16 += 3) 
                    {
                        var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_49 [i_0] [i_0] [i_5] [i_5] [i_0])) : (((/* implicit */int) arr_46 [i_0] [i_7] [i_0] [i_8] [i_0]))))) ? (((/* implicit */int) arr_12 [i_5])) : (((((/* implicit */_Bool) arr_68 [i_8] [i_8] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_49 [i_0] [i_5] [i_7] [i_8] [i_16])) : (((/* implicit */int) arr_0 [i_8] [i_5])))))))));
                        arr_70 [(unsigned short)7] [(unsigned short)7] [i_7] [(unsigned short)7] [i_5] [(unsigned short)7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-116)) ^ (((((/* implicit */_Bool) arr_23 [i_0] [i_0])) ? (((/* implicit */int) arr_36 [i_5] [i_8] [i_8] [i_7] [i_0] [i_5])) : (((/* implicit */int) var_18))))));
                        var_34 = ((/* implicit */signed char) ((((/* implicit */int) arr_65 [i_5] [i_5])) % (var_10)));
                        arr_71 [(unsigned char)15] [(unsigned short)11] [i_7] [13] [i_16] [i_5] [i_5] = ((/* implicit */int) arr_6 [i_0] [i_5] [3]);
                        arr_72 [i_0] [i_0] [i_7] [i_5] [i_5] = ((/* implicit */_Bool) arr_65 [i_5] [i_5]);
                    }
                    arr_73 [i_0] [i_5] [i_8] [i_5] [i_8] = ((/* implicit */unsigned long long int) (unsigned char)145);
                    arr_74 [i_0] [i_0] [i_7] [i_0] [i_5] [i_7] &= ((unsigned char) ((((/* implicit */_Bool) arr_68 [i_0] [i_0] [12] [(unsigned char)5] [i_8])) && (((/* implicit */_Bool) var_1))));
                    arr_75 [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)53249)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_11))))) ? ((~(((/* implicit */int) (unsigned char)193)))) : ((~(((/* implicit */int) (_Bool)1)))));
                }
                var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) ((arr_19 [i_0] [i_7]) | (((/* implicit */int) (unsigned short)12290)))))));
            }
            var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((-(((/* implicit */int) var_18)))), (((/* implicit */int) (unsigned short)25800))))) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) arr_69 [(unsigned char)4] [i_0] [i_5] [i_5] [i_0]))));
            /* LoopNest 3 */
            for (unsigned short i_17 = 0; i_17 < 25; i_17 += 3) 
            {
                for (signed char i_18 = 0; i_18 < 25; i_18 += 1) 
                {
                    for (unsigned short i_19 = 0; i_19 < 25; i_19 += 2) 
                    {
                        {
                            var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) arr_26 [i_18]))));
                            var_38 |= ((/* implicit */unsigned short) (short)14542);
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (int i_20 = 0; i_20 < 25; i_20 += 3) 
            {
                var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_50 [i_20] [i_20] [(signed char)14] [i_20] [i_20])) || (((/* implicit */_Bool) arr_50 [i_0] [(unsigned short)2] [(short)12] [i_20] [i_20])))) ? (((((/* implicit */_Bool) (unsigned short)58927)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64638))) : (10787770614855287860ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_77 [i_0] [i_0] [i_0] [i_0])) * ((-(((/* implicit */int) var_16))))))))))));
                arr_86 [i_20] [i_5] [i_5] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) max((arr_9 [(_Bool)1] [(_Bool)1] [(_Bool)1]), (((/* implicit */unsigned short) arr_77 [(short)24] [(_Bool)1] [i_5] [(unsigned short)13]))))), (((((/* implicit */int) arr_41 [(unsigned char)9] [(unsigned char)9] [(_Bool)0])) ^ (((/* implicit */int) arr_12 [(unsigned char)0]))))))) ? (((((/* implicit */_Bool) 570201220149318525ULL)) ? (((/* implicit */int) arr_58 [18] [i_5] [18] [i_5] [i_5] [(short)14] [i_5])) : (((/* implicit */int) max((arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_20]), (var_4)))))) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) 7658973458854263756ULL)))))))));
            }
            arr_87 [i_5] [i_5] = min((((int) arr_69 [i_5] [i_5] [i_5] [i_0] [i_0])), (((/* implicit */int) arr_54 [i_5] [i_0] [i_0] [i_0] [i_5])));
        }
    }
    var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) var_5))));
}
