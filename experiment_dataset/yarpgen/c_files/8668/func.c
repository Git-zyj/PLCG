/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8668
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((_Bool) (+(var_11))))) : (((/* implicit */int) ((unsigned short) (~(((/* implicit */int) var_16))))))));
    var_18 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        var_19 = ((/* implicit */_Bool) arr_0 [i_0] [i_0 - 1]);
        arr_2 [i_0] [i_0] = ((/* implicit */int) arr_1 [i_0] [i_0]);
        var_20 = ((/* implicit */int) ((unsigned long long int) arr_1 [i_0 - 2] [i_0]));
        var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0] [(unsigned char)3]))));
    }
    for (unsigned char i_1 = 1; i_1 < 15; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_4 = 2; i_4 < 13; i_4 += 2) 
                    {
                        arr_13 [i_2] [i_3] [i_2] [i_4 - 1] = ((/* implicit */short) arr_5 [i_1] [i_1]);
                        var_22 &= ((/* implicit */signed char) (+(((/* implicit */int) arr_10 [i_2] [i_2] [i_2]))));
                        var_23 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_10 [i_1] [16U] [i_1]))))))));
                        arr_14 [i_1] [i_1] [i_1] [14] [i_1] [i_1] = ((/* implicit */unsigned int) arr_5 [(signed char)1] [(signed char)1]);
                        var_24 = ((/* implicit */signed char) max((var_24), (arr_1 [i_1] [i_1])));
                    }
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_6 = 2; i_6 < 13; i_6 += 2) 
                        {
                            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [15U] [i_6] [i_6])) ? (((/* implicit */int) arr_0 [i_1] [7LL])) : (((/* implicit */int) arr_10 [(short)11] [(short)11] [i_3]))))) ? (((int) arr_7 [i_2] [i_2] [10ULL])) : (((/* implicit */int) arr_11 [12LL] [i_3] [i_3] [i_3] [i_3] [i_3]))));
                            var_26 = ((/* implicit */_Bool) (-(arr_12 [i_1] [i_1 - 1] [i_6 - 2] [i_3])));
                            arr_21 [i_2] [i_5] [(signed char)6] [i_2] [i_1] &= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_11 [8LL] [(unsigned short)7] [(signed char)5] [(signed char)5] [i_2] [(signed char)5]))));
                            var_27 = ((/* implicit */long long int) ((signed char) arr_7 [i_1] [i_1] [i_1 + 2]));
                        }
                        var_28 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_18 [i_1] [i_1 + 2] [i_1] [14LL] [i_1 - 1] [i_1 - 1]))));
                        /* LoopSeq 3 */
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            arr_24 [8U] [i_1] [i_2] [8U] [i_3] [i_1] [i_7] &= ((/* implicit */unsigned char) arr_18 [i_1] [i_1 + 1] [i_7 + 1] [i_1 + 1] [i_7] [i_7 + 1]);
                            var_29 *= ((/* implicit */unsigned long long int) arr_11 [10ULL] [i_2] [(_Bool)1] [i_2] [i_2] [i_2]);
                            arr_25 [i_1] [i_1] |= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [12] [i_2] [i_3] [i_2] [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_1] [i_1] [15]))) : (((((/* implicit */_Bool) arr_12 [i_5] [i_3] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [6U] [16U]))) : (arr_17 [(unsigned short)10])))));
                            arr_26 [i_1] [i_2] [i_2] [i_5] [11LL] [i_7 + 1] [i_1] = ((/* implicit */unsigned int) ((unsigned char) arr_1 [i_7] [i_1]));
                            var_30 = ((/* implicit */int) min((var_30), (((((/* implicit */_Bool) arr_3 [i_3])) ? ((+(((/* implicit */int) arr_0 [i_7] [i_2])))) : (((/* implicit */int) arr_5 [i_1 + 1] [i_2]))))));
                        }
                        for (signed char i_8 = 2; i_8 < 15; i_8 += 2) 
                        {
                            arr_29 [i_5] = ((/* implicit */unsigned int) ((int) arr_11 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1] [i_1 - 1]));
                            var_31 &= ((/* implicit */unsigned char) arr_11 [i_1] [i_2] [i_3] [i_5] [i_8 - 2] [i_5]);
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_34 [i_9] [(signed char)0] [i_3] [i_3] [i_3] [i_9] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_1 + 2] [i_9] [i_1] [i_5] [i_1 - 1] [i_1])) ? (((/* implicit */int) arr_18 [i_9] [i_1 + 2] [i_3] [i_3] [i_1 + 1] [(_Bool)1])) : (((/* implicit */int) arr_18 [(signed char)5] [(signed char)5] [i_1 - 1] [i_5] [i_1 + 2] [i_1]))));
                            var_32 = ((/* implicit */unsigned short) arr_19 [i_1] [i_1] [i_3] [i_3] [i_9]);
                        }
                    }
                    /* LoopSeq 3 */
                    for (int i_10 = 0; i_10 < 17; i_10 += 2) 
                    {
                        var_33 *= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_31 [i_2] [i_2])) ? (((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_1 + 2] [i_2] [8LL] [i_1] [i_2] [9LL]))) / (arr_35 [i_1] [i_1] [i_1] [i_1]))) : (((/* implicit */long long int) ((int) arr_18 [i_1] [13ULL] [i_2] [i_1] [i_10] [4]))))));
                        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_1] [i_1 + 2] [16LL] [12])) ? (arr_12 [9ULL] [i_1 + 1] [i_3] [9ULL]) : (arr_12 [i_1 + 1] [i_1 + 2] [i_3] [i_3])))) - (((long long int) arr_12 [i_1] [i_1 + 2] [i_1 + 2] [i_10]))));
                    }
                    for (long long int i_11 = 3; i_11 < 16; i_11 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned short) arr_11 [i_11] [(unsigned short)9] [0U] [i_1] [i_2] [i_1]);
                        var_36 |= ((/* implicit */unsigned char) arr_3 [i_1]);
                        arr_39 [14LL] [i_1 + 1] [i_1] [i_1 + 2] [i_11] = ((/* implicit */_Bool) ((int) ((signed char) arr_20 [(short)16] [i_1 - 1])));
                    }
                    for (long long int i_12 = 0; i_12 < 17; i_12 += 3) 
                    {
                        var_37 = ((/* implicit */long long int) ((((((/* implicit */int) ((signed char) arr_5 [i_1] [i_1]))) == (((/* implicit */int) ((short) arr_35 [i_3] [(unsigned short)16] [i_3] [i_3]))))) ? (((/* implicit */int) ((signed char) (+(((/* implicit */int) arr_31 [i_2] [i_2])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_1] [i_1] [i_2] [i_1]))) * (arr_40 [5] [5] [i_12] [i_12] [i_12])))))))));
                        var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) (~(((/* implicit */int) ((short) arr_5 [i_12] [i_12]))))))));
                        arr_42 [13] [i_2] [(signed char)4] [i_12] [i_12] [i_12] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_18 [i_1] [(_Bool)1] [(_Bool)1] [i_1 - 1] [i_1 + 1] [(signed char)2]))))));
                    }
                }
            } 
        } 
        /* LoopSeq 2 */
        for (short i_13 = 3; i_13 < 16; i_13 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_14 = 0; i_14 < 17; i_14 += 1) 
            {
                for (unsigned int i_15 = 3; i_15 < 15; i_15 += 1) 
                {
                    {
                        arr_52 [i_1] [i_1] [i_1] [(signed char)11] [i_1] = arr_12 [i_1] [i_1] [i_1] [i_1];
                        /* LoopSeq 2 */
                        for (unsigned short i_16 = 0; i_16 < 17; i_16 += 2) 
                        {
                            arr_56 [i_14] [i_15] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) arr_38 [i_15] [i_16]))) ? (((long long int) arr_43 [i_16] [10LL])) : (((/* implicit */long long int) arr_30 [i_1] [i_1] [i_1] [i_1 - 1] [i_16] [i_1 - 1] [i_1 + 2]))));
                            arr_57 [(signed char)15] [i_15 - 3] [(short)14] [i_1] [i_1] |= ((/* implicit */unsigned short) arr_5 [8LL] [i_13]);
                        }
                        for (signed char i_17 = 1; i_17 < 14; i_17 += 1) 
                        {
                            var_39 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_7 [i_17] [i_13] [i_13])) ? (arr_49 [i_1] [(short)14]) : (arr_49 [i_1] [i_13 - 2])))))));
                            arr_61 [i_1] [i_17] [(signed char)6] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_1 + 1] [i_13] [i_14] [i_15] [i_17] [i_14] [i_17])) ? (((((/* implicit */_Bool) arr_11 [i_1] [(signed char)4] [i_14] [2] [i_17] [i_1])) ? (((unsigned long long int) arr_19 [i_13] [i_13 + 1] [(unsigned short)12] [12ULL] [i_13])) : (((/* implicit */unsigned long long int) ((long long int) arr_8 [i_1] [(unsigned short)0] [i_1]))))) : (((/* implicit */unsigned long long int) arr_48 [(unsigned short)10]))));
                            var_40 = (+(((((/* implicit */_Bool) arr_41 [i_1] [i_13] [i_13] [i_15 - 2])) ? ((+(arr_15 [7U] [(_Bool)1] [11ULL] [i_15]))) : (((/* implicit */unsigned long long int) arr_17 [i_1])))));
                        }
                    }
                } 
            } 
            arr_62 [i_13 - 3] = ((/* implicit */int) (!(((/* implicit */_Bool) (~((-(((/* implicit */int) arr_20 [i_1] [i_1])))))))));
        }
        for (short i_18 = 3; i_18 < 16; i_18 += 4) /* same iter space */
        {
            var_41 = ((/* implicit */short) arr_20 [i_18] [16]);
            /* LoopSeq 2 */
            for (int i_19 = 1; i_19 < 16; i_19 += 2) /* same iter space */
            {
                arr_68 [i_1] [i_19] [i_18] [i_1 - 1] = ((/* implicit */long long int) arr_19 [i_1] [i_1] [i_1] [i_1 + 1] [i_1]);
                var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) arr_50 [15] [i_1] [(_Bool)1] [(_Bool)1] [i_1]))));
                var_43 = ((/* implicit */unsigned short) arr_11 [i_1] [(signed char)14] [i_19] [i_18] [i_1 + 1] [i_1]);
            }
            for (int i_20 = 1; i_20 < 16; i_20 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_21 = 2; i_21 < 14; i_21 += 2) 
                {
                    for (long long int i_22 = 0; i_22 < 17; i_22 += 2) 
                    {
                        {
                            var_44 -= ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_46 [i_20 - 1])) ? (((/* implicit */int) arr_44 [i_18 - 1] [i_18 - 2])) : (((/* implicit */int) arr_46 [i_20 - 1])))));
                            var_45 = arr_60 [i_20] [i_18];
                        }
                    } 
                } 
                arr_77 [i_18] [i_18] [i_20] [i_20] = ((/* implicit */unsigned int) ((int) ((unsigned long long int) (+(arr_35 [i_20] [i_18 - 1] [i_1] [i_1])))));
                var_46 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_1] [i_20 - 1] [i_20 - 1] [i_1] [i_1] [i_1 + 1])) ? (((/* implicit */int) arr_54 [(signed char)7] [i_20 - 1] [(signed char)7] [i_1] [(signed char)7] [i_20])) : (((/* implicit */int) arr_54 [i_20] [i_20 - 1] [(signed char)5] [i_18] [i_18] [i_1]))))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_20 + 1] [i_1])))))));
                var_47 = ((/* implicit */unsigned char) (+((+((+(arr_74 [i_18] [i_18] [i_18] [i_18] [i_1] [i_18])))))));
            }
            /* LoopSeq 1 */
            for (signed char i_23 = 0; i_23 < 17; i_23 += 3) 
            {
                var_48 *= ((/* implicit */_Bool) (~(((((long long int) arr_47 [i_18])) | (((/* implicit */long long int) ((arr_17 [i_1]) ^ (((/* implicit */unsigned int) arr_69 [0] [0] [0])))))))));
                var_49 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_1 - 1] [i_1 - 1] [i_23])) ? (((/* implicit */int) arr_44 [i_1 - 1] [i_1])) : (((/* implicit */int) arr_60 [i_1 - 1] [i_1 - 1]))))) ? (((/* implicit */int) ((_Bool) arr_19 [7] [i_18 - 2] [7] [i_18] [i_18]))) : (((/* implicit */int) ((unsigned char) arr_48 [i_23])))))));
            }
        }
    }
}
