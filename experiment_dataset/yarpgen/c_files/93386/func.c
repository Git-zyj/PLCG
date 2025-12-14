/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93386
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
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) max(((((~(var_16))) & ((-(var_16))))), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_15))) % (var_12)))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_5)) : (var_6))) : (((/* implicit */int) ((_Bool) var_13))))))))));
    var_21 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) ((var_6) % (var_16)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) max((((/* implicit */short) var_11)), (var_15)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 2; i_2 < 14; i_2 += 2) 
            {
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1073217536)) ? (((/* implicit */int) (unsigned short)48539)) : (((/* implicit */int) (short)31438))));
                arr_6 [i_0] [i_1 - 1] [i_2 - 2] [i_2] = ((/* implicit */signed char) ((unsigned int) arr_3 [i_2 - 2] [(signed char)0] [i_2 + 2]));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */int) min((var_23), ((+(((/* implicit */int) arr_12 [i_2 + 4] [i_2 + 4] [i_2 - 2] [i_2 + 4] [i_2 + 4] [i_2 + 1]))))));
                            arr_14 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_2] [i_0] [i_2] [i_0])) ? (arr_7 [i_0 + 3] [(unsigned char)12] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 1])))))) : (((((/* implicit */_Bool) arr_13 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 3]))) : (arr_8 [(signed char)17] [i_0] [(signed char)17] [i_3])))));
                            var_24 = ((/* implicit */signed char) ((arr_9 [i_0 - 1]) << (((((/* implicit */int) ((unsigned char) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0]))) - (147)))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0 + 2] [i_0 - 1])) << (((((/* implicit */int) arr_1 [i_2])) - (55)))))) ? (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_2 + 2])) : (((/* implicit */int) arr_2 [i_0] [i_1])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_1 + 1] [i_2] [13] [i_2 - 1])) || (((/* implicit */_Bool) arr_4 [i_0] [i_0])))))));
                arr_15 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_7 [i_2] [i_1 + 1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2] [i_1 - 1]))) : (arr_7 [i_0 - 1] [i_0 - 1] [i_2]))) % (((/* implicit */unsigned int) arr_5 [i_0] [i_0]))));
            }
            arr_16 [i_0 - 1] = ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) arr_12 [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_0])))));
            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_11 [i_0] [(_Bool)1] [i_0 + 3] [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_13 [i_1 + 1])) ? (arr_10 [i_0] [i_0] [i_0] [i_0 - 2] [i_0] [i_1]) : (arr_10 [i_0] [i_1] [i_1] [(short)11] [i_0] [i_1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_0 + 3] [i_0] [i_0])) ? (arr_7 [i_0 + 1] [i_0] [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0 + 1])))))))))));
        }
        for (short i_5 = 2; i_5 < 16; i_5 += 2) /* same iter space */
        {
            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_10 [i_0] [i_0] [i_0] [i_5 + 1] [i_5 + 2] [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_2 [i_0] [i_5 + 1])))) : (arr_8 [i_0 + 3] [i_0 + 2] [i_0 + 3] [i_5 + 2])));
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 18; i_6 += 4) 
            {
                for (signed char i_7 = 1; i_7 < 16; i_7 += 3) 
                {
                    {
                        var_28 &= ((/* implicit */unsigned char) ((unsigned long long int) arr_0 [i_0 + 1]));
                        arr_25 [i_7] [i_6] [i_5] [i_0 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0 + 3])) ? (((((/* implicit */long long int) arr_5 [i_0 - 1] [i_5])) - (arr_20 [(short)9]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_22 [i_0] [i_5 + 2] [i_6]))))));
                        arr_26 [17U] [5LL] [i_5] [i_6] [17U] [i_6] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) arr_19 [i_7 + 1] [i_5 + 2])) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_5 + 2] [i_6] [i_6] [15U])) : (arr_5 [i_7] [i_6]))));
                        /* LoopSeq 1 */
                        for (int i_8 = 0; i_8 < 18; i_8 += 2) 
                        {
                            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_5] [i_6])) ? (((/* implicit */int) arr_12 [i_8] [i_8] [i_6] [i_7] [i_8] [i_7])) : (arr_18 [i_5] [i_5])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_6] [i_6] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_8] [i_6]))) : (arr_28 [i_0] [(unsigned short)8] [(unsigned short)8] [i_0] [i_8] [i_8]))))));
                            arr_29 [i_0 + 3] [i_0 + 2] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [2] [i_5])) ? (((/* implicit */int) arr_23 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) arr_0 [i_6])))))));
                            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((long long int) arr_21 [i_7 - 1] [i_5 - 2] [i_0 + 1])))));
                        }
                        var_31 = ((/* implicit */_Bool) ((long long int) (_Bool)1));
                    }
                } 
            } 
        }
        for (short i_9 = 2; i_9 < 16; i_9 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned int i_10 = 0; i_10 < 18; i_10 += 1) 
            {
                arr_37 [i_0 - 2] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1)))) ? (arr_20 [i_9 - 1]) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
                arr_38 [i_10] [i_0] [i_0] = ((/* implicit */unsigned int) ((signed char) arr_33 [i_0] [i_10]));
            }
            for (short i_11 = 1; i_11 < 14; i_11 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_12 = 0; i_12 < 18; i_12 += 1) /* same iter space */
                {
                    arr_44 [(unsigned short)9] [i_9 - 2] [(unsigned short)9] [i_11] = ((/* implicit */unsigned long long int) arr_17 [i_12]);
                    var_32 = ((unsigned long long int) ((((/* implicit */int) arr_23 [i_0] [(short)10] [i_11] [i_12])) << (((arr_28 [i_9 + 2] [i_11 + 2] [i_9 + 2] [i_12] [i_11 + 2] [i_11]) - (3439046843U)))));
                    var_33 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_0] [i_9] [i_9] [i_9] [i_11])) ? (arr_28 [13ULL] [13ULL] [i_0] [i_12] [i_0 + 2] [i_9 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0 - 1] [i_0 - 1]))))))));
                }
                for (unsigned short i_13 = 0; i_13 < 18; i_13 += 1) /* same iter space */
                {
                    var_34 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_47 [i_0] [i_0] [i_0] [i_0 + 3])))))));
                    var_35 = ((/* implicit */signed char) ((int) arr_39 [i_0 + 3] [i_11] [i_9 + 1]));
                }
                for (unsigned short i_14 = 0; i_14 < 18; i_14 += 1) /* same iter space */
                {
                    var_36 = ((/* implicit */int) (~(arr_20 [(signed char)7])));
                    arr_52 [i_0] [i_11] [i_11 - 1] [i_11] = ((/* implicit */signed char) arr_12 [i_0] [i_9 + 2] [i_11] [i_14] [i_0 - 1] [i_0]);
                    arr_53 [i_0] [i_11] [i_11] [i_14] = ((/* implicit */signed char) ((short) ((((/* implicit */long long int) ((/* implicit */int) arr_22 [13LL] [i_0] [i_11 + 2]))) < (arr_17 [i_0]))));
                    var_37 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_14] [(_Bool)1] [i_11 - 1] [i_0] [i_0] [i_0]))) * (arr_30 [i_0] [i_0] [i_0])))) ? (((/* implicit */long long int) arr_21 [i_9 - 2] [i_11] [i_11 + 2])) : (arr_10 [i_0] [i_9] [i_11] [i_9] [i_9] [i_11 + 1])));
                }
                /* LoopNest 2 */
                for (long long int i_15 = 2; i_15 < 16; i_15 += 3) 
                {
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                    {
                        {
                            arr_58 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */signed char) ((unsigned char) arr_49 [i_0] [i_9] [i_11] [i_15 + 2]));
                            arr_59 [i_0] [i_0] [i_11] [i_15] [i_16] = ((/* implicit */unsigned char) (+(((arr_43 [i_0] [i_9] [i_11] [i_0] [i_11]) & (((/* implicit */int) arr_1 [i_0 - 1]))))));
                            arr_60 [i_0] [(signed char)0] [i_11 + 1] [i_15 - 2] [i_11] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0])) ? (arr_17 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0] [i_9] [i_11] [i_9] [i_0] [(short)11])))))) ? (((/* implicit */int) ((unsigned char) arr_12 [i_9 - 2] [i_15] [i_15] [i_9 - 2] [i_9 - 2] [i_0 + 1]))) : (((((/* implicit */_Bool) arr_21 [i_16 - 1] [i_15] [i_9])) ? (((/* implicit */int) arr_39 [i_11] [i_11] [i_11])) : (((/* implicit */int) arr_31 [i_16 - 1]))))));
                            var_38 = ((/* implicit */unsigned short) ((long long int) ((arr_23 [i_0 - 2] [i_0 - 2] [i_15 + 2] [i_16]) ? (((/* implicit */int) arr_54 [i_11] [i_9] [i_9] [i_15])) : (arr_36 [i_9] [i_11] [i_11]))));
                            var_39 &= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_27 [i_9 - 2]))));
                        }
                    } 
                } 
            }
            for (unsigned int i_17 = 1; i_17 < 17; i_17 += 4) 
            {
                var_40 = ((/* implicit */long long int) ((arr_5 [i_9 - 1] [i_17 + 1]) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(signed char)2] [i_9 + 2] [16])))))));
                var_41 = ((/* implicit */unsigned int) arr_49 [i_0] [i_0] [i_0] [i_9]);
                arr_63 [i_0] [i_9] [i_17] [i_9] = ((/* implicit */signed char) ((((/* implicit */int) (short)32767)) % (((/* implicit */int) (_Bool)1))));
                var_42 -= ((/* implicit */unsigned short) ((long long int) arr_22 [i_9 + 2] [i_17 + 1] [i_17 + 1]));
            }
            arr_64 [i_0] [i_0] [i_9 - 1] = ((/* implicit */unsigned char) ((signed char) arr_24 [i_0] [i_0 - 2] [i_0 - 2] [i_0] [i_0 - 1] [i_0 - 1]));
            var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) ((arr_48 [i_0]) < (arr_13 [i_0 - 2]))))));
            arr_65 [i_0 - 2] = ((/* implicit */unsigned short) ((long long int) (-(((/* implicit */int) arr_39 [i_0] [i_0] [i_9])))));
            var_44 = (-(((/* implicit */int) ((short) arr_57 [i_0] [i_0] [i_0] [i_9] [i_9] [i_9 - 1]))));
        }
        var_45 = (-(1907725582));
        var_46 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_20 [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_3 [(unsigned short)16] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : (arr_7 [i_0 + 3] [i_0 + 3] [i_0 - 2])))));
        arr_66 [i_0 + 3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_13 [i_0 - 1]) % (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_0])) ? (((/* implicit */int) (unsigned short)8025)) : (((/* implicit */int) (_Bool)1))))) : (((long long int) arr_7 [i_0] [i_0] [i_0]))));
    }
    var_47 = var_14;
}
