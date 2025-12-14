/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63123
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
    var_12 = ((/* implicit */int) min((((/* implicit */unsigned long long int) 4001136767U)), (max((((/* implicit */unsigned long long int) (unsigned char)91)), (8737621660904814097ULL)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_10 [i_1] [i_1] [i_2] [i_0] = ((/* implicit */int) max((((/* implicit */short) min(((unsigned char)41), ((unsigned char)90)))), ((short)15)));
                    var_13 = ((/* implicit */_Bool) max(((unsigned char)41), (((/* implicit */unsigned char) ((arr_7 [i_0] [i_1] [i_1] [i_2]) >= (((/* implicit */long long int) -1185478092)))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_14 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65522))) == (-826517115343625758LL)));
                                arr_17 [i_0] [i_1] [i_0] [i_1] [i_4] [i_3] [i_1] &= ((/* implicit */short) arr_14 [i_0] [i_1] [i_2 + 2] [i_3] [i_4] [i_2 + 2]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((arr_14 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [0LL] [0LL]) << (((arr_14 [i_0 - 1] [i_0 + 1] [i_0] [4U] [(_Bool)0] [i_0]) - (1953965488))))) < (((((/* implicit */_Bool) arr_14 [i_0 - 1] [i_0] [i_0] [i_0] [(short)12] [i_0])) ? (arr_14 [i_0 + 1] [i_0 - 1] [10] [i_0] [4ULL] [i_0]) : (arr_14 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [(signed char)6] [i_0]))))))));
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_16 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0 - 1]))))), (arr_2 [(unsigned short)8]))))));
        /* LoopSeq 1 */
        for (int i_5 = 4; i_5 < 15; i_5 += 3) 
        {
            var_17 |= ((/* implicit */signed char) ((min((((/* implicit */long long int) (unsigned char)41)), (-826517115343625760LL))) % (((/* implicit */long long int) arr_15 [3] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0]))));
            var_18 *= ((/* implicit */unsigned short) arr_13 [i_0] [(unsigned char)4] [4]);
            arr_21 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */long long int) 884244520)) / (var_5)))))) || (((/* implicit */_Bool) (+(arr_9 [i_0 - 1] [i_0]))))));
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0 + 1]))))) ? (((((/* implicit */_Bool) 8834576404600171921LL)) ? (((/* implicit */int) arr_6 [i_0] [i_0 + 1])) : (((/* implicit */int) arr_6 [i_0] [i_0 - 1])))) : (((/* implicit */int) arr_6 [(unsigned short)4] [i_0 - 1]))));
            arr_22 [i_0] = ((/* implicit */short) min((((/* implicit */long long int) ((short) min((((/* implicit */unsigned short) (short)6502)), (var_10))))), (arr_7 [i_0] [i_0 + 1] [i_0] [i_0])));
        }
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)9391))))) / (((((/* implicit */_Bool) arr_9 [i_0 + 1] [8U])) ? (arr_7 [(signed char)2] [i_0 - 1] [i_0 + 1] [i_0 + 1]) : (arr_7 [(unsigned short)6] [i_0 + 1] [i_0 + 1] [i_0 + 1]))))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_6 = 1; i_6 < 21; i_6 += 4) 
    {
        for (short i_7 = 1; i_7 < 19; i_7 += 4) 
        {
            {
                var_21 = ((/* implicit */int) min((var_21), ((-(min((arr_28 [12ULL] [12ULL]), (arr_28 [(unsigned short)10] [(unsigned short)10])))))));
                /* LoopNest 3 */
                for (unsigned int i_8 = 0; i_8 < 23; i_8 += 4) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 4) 
                    {
                        for (unsigned char i_10 = 4; i_10 < 22; i_10 += 3) 
                        {
                            {
                                arr_35 [i_6] [i_7] [i_8] [i_9] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-34))))) || (((/* implicit */_Bool) ((arr_30 [i_6] [i_7]) + (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)-58)), (arr_28 [i_6] [i_7])))))))));
                                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (unsigned short)41192))));
                                var_23 = ((/* implicit */unsigned int) max((max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (short)32765)))), (((((/* implicit */_Bool) min((arr_27 [i_7] [i_9]), (((/* implicit */short) (signed char)105))))) ? ((+(-826517115343625758LL))) : (((-8834576404600171922LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-126)))))))));
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */long long int) (short)-1);
            }
        } 
    } 
    var_25 ^= ((/* implicit */int) max((min((var_2), (var_8))), (((/* implicit */long long int) var_11))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_11 = 2; i_11 < 15; i_11 += 4) 
    {
        var_26 = ((/* implicit */signed char) (-(arr_28 [i_11] [i_11])));
        /* LoopSeq 2 */
        for (short i_12 = 1; i_12 < 16; i_12 += 4) 
        {
            var_27 = ((/* implicit */int) ((unsigned char) arr_31 [i_11] [i_11 - 1] [(_Bool)1] [i_11]));
            arr_40 [i_11] [i_11 - 1] [i_11 - 1] |= ((/* implicit */signed char) arr_33 [i_11] [i_11] [i_11] [i_11] [i_12 - 1] [i_12]);
        }
        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
        {
            arr_43 [i_13] [i_11 + 2] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))) <= (7960451496031430426ULL));
            var_28 ^= ((/* implicit */unsigned int) ((-587912905) < (((/* implicit */int) arr_25 [i_13 - 1]))));
        }
    }
    for (signed char i_14 = 1; i_14 < 18; i_14 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_15 = 0; i_15 < 20; i_15 += 1) 
        {
            for (signed char i_16 = 2; i_16 < 19; i_16 += 1) 
            {
                {
                    arr_53 [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1185478091)) ? (((/* implicit */int) (short)-4)) : (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)165)))))))));
                    arr_54 [i_14] = ((/* implicit */long long int) (((((~(((/* implicit */int) arr_47 [i_14] [(unsigned short)16] [i_14])))) | (((/* implicit */int) min((arr_33 [i_14] [i_14] [i_14] [i_14] [11LL] [i_14]), (arr_26 [i_14] [i_14] [i_16 - 1])))))) * (((/* implicit */int) ((arr_30 [i_14] [i_14]) == (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_50 [i_16])), (-1092905429313874265LL)))))))));
                }
            } 
        } 
        var_29 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) (unsigned char)255)) && (var_6))) || (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_14] [i_14] [i_14 + 1] [i_14]))) == (7735338836124412292ULL))))) ? ((((_Bool)0) ? (arr_29 [3] [i_14] [i_14 + 2]) : (((/* implicit */int) arr_23 [i_14 - 1] [i_14])))) : (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (short)-9774))) == (var_2))) && (((/* implicit */_Bool) (-(arr_49 [i_14] [i_14] [i_14] [i_14 - 1])))))))));
        var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) 1134923559)) / (arr_52 [i_14 + 1] [i_14] [i_14 - 1])))) ? ((+(((/* implicit */int) arr_32 [i_14 - 1] [i_14 + 2])))) : (((((/* implicit */int) arr_25 [i_14 - 1])) + (((/* implicit */int) arr_25 [i_14 - 1])))))))));
        /* LoopNest 2 */
        for (unsigned char i_17 = 1; i_17 < 19; i_17 += 2) 
        {
            for (unsigned short i_18 = 1; i_18 < 17; i_18 += 3) 
            {
                {
                    arr_60 [i_14] = ((/* implicit */unsigned char) min((arr_30 [i_17 - 1] [i_14]), ((+(arr_30 [i_17 - 1] [i_14])))));
                    /* LoopNest 2 */
                    for (long long int i_19 = 0; i_19 < 20; i_19 += 4) 
                    {
                        for (unsigned char i_20 = 2; i_20 < 19; i_20 += 3) 
                        {
                            {
                                arr_67 [i_14] [i_14] [i_14] [i_14] [i_20] = ((/* implicit */long long int) arr_49 [i_14] [i_14] [i_19] [(short)9]);
                                var_31 -= ((/* implicit */signed char) 4294967289U);
                            }
                        } 
                    } 
                    arr_68 [(unsigned char)10] [i_14] [i_14] [i_18] = -1134923577;
                    arr_69 [i_14] [i_14] = ((/* implicit */int) 4294967260U);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_21 = 0; i_21 < 20; i_21 += 4) 
    {
        arr_72 [i_21] = ((/* implicit */unsigned short) 4294967281U);
        /* LoopNest 2 */
        for (unsigned short i_22 = 0; i_22 < 20; i_22 += 2) 
        {
            for (unsigned int i_23 = 2; i_23 < 19; i_23 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_24 = 1; i_24 < 18; i_24 += 4) 
                    {
                        for (unsigned int i_25 = 4; i_25 < 19; i_25 += 2) 
                        {
                            {
                                var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) (_Bool)1))));
                                arr_84 [(short)0] [i_25 - 2] [i_24] [i_25] [i_25 - 4] = ((/* implicit */unsigned int) ((((_Bool) (unsigned char)85)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((((/* implicit */int) (short)3)) | (((/* implicit */int) arr_26 [i_24 + 2] [i_24] [i_22])))))));
                            }
                        } 
                    } 
                    var_33 ^= ((((/* implicit */_Bool) (short)-9)) && (((/* implicit */_Bool) arr_27 [i_23 + 1] [9])));
                    arr_85 [i_22] [i_22] [(short)6] [i_22] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)3)) > (((/* implicit */int) (unsigned char)188))));
                    arr_86 [i_21] [i_21] [i_21] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_71 [i_21])) ? (((/* implicit */int) (_Bool)1)) : (arr_48 [i_21])))));
                }
            } 
        } 
        var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) ((unsigned short) var_6)))));
        var_35 += ((/* implicit */unsigned short) ((arr_30 [i_21] [i_21]) == (((/* implicit */unsigned long long int) arr_80 [i_21] [i_21] [8LL] [i_21] [i_21] [19LL]))));
    }
    for (short i_26 = 1; i_26 < 13; i_26 += 2) 
    {
        arr_90 [i_26] = ((/* implicit */signed char) (short)1);
        var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) min((((/* implicit */int) arr_58 [i_26] [i_26] [(unsigned char)14])), (arr_15 [i_26] [i_26] [i_26] [i_26] [i_26]))))));
        arr_91 [i_26 + 1] = ((/* implicit */unsigned short) var_11);
    }
}
