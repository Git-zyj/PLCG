/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61341
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
    var_19 = ((/* implicit */unsigned char) var_10);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 3; i_3 < 21; i_3 += 4) 
                {
                    {
                        arr_9 [i_0] [i_2] [i_3 + 2] [i_0] [i_3] [(unsigned char)14] = ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (short)9)) : (((/* implicit */int) (short)-20)));
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-20)) ? (((/* implicit */unsigned int) -2104325434)) : (1508962259U)));
                    }
                } 
            } 
        } 
        var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(signed char)14] [(unsigned char)8])) ? (((/* implicit */int) arr_1 [(short)12] [i_0])) : (((/* implicit */int) arr_1 [10U] [i_0 - 1]))))) ? (((/* implicit */int) arr_8 [i_0 - 1] [2ULL] [i_0 - 1])) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (signed char)0))))));
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1])) ? (arr_6 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]) : (arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))))));
        var_23 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0 + 1] [(unsigned char)16] [(unsigned char)16])) ? (((/* implicit */int) arr_3 [(unsigned short)22] [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0]))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            for (unsigned char i_5 = 2; i_5 < 22; i_5 += 3) 
            {
                {
                    var_24 = ((/* implicit */long long int) arr_3 [i_0] [i_0]);
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_0 - 1] [i_5 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0 + 1] [i_0] [i_5 - 1]))) : (((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */unsigned int) 2147483647)) : (2786005050U)))));
                }
            } 
        } 
    }
    for (int i_6 = 1; i_6 < 14; i_6 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 1) 
        {
            for (signed char i_8 = 0; i_8 < 16; i_8 += 4) 
            {
                {
                    arr_23 [i_6] [i_7] = arr_21 [1] [1] [i_8] [i_8];
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_6 - 1] [i_6 + 1] [i_6 + 2])) ? (((/* implicit */int) arr_12 [i_6 + 2] [i_6 + 2] [i_6 + 2])) : (((/* implicit */int) arr_12 [i_6 - 1] [i_6 - 1] [i_6 + 2]))))) ? (((((/* implicit */_Bool) arr_12 [i_6 - 1] [i_6 - 1] [i_6 + 2])) ? (((/* implicit */int) arr_12 [i_6 - 1] [i_6 + 2] [i_6 + 2])) : (((/* implicit */int) arr_12 [i_6 + 1] [i_6 + 2] [i_6 - 1])))) : (((/* implicit */int) max((arr_12 [i_6 + 2] [i_6 + 2] [i_6 - 1]), (arr_12 [i_6 + 1] [i_6 + 1] [i_6 - 1]))))));
                }
            } 
        } 
        arr_24 [i_6] = ((/* implicit */short) max((((/* implicit */unsigned long long int) 8)), (17661720126347536916ULL)));
    }
    for (unsigned int i_9 = 2; i_9 < 13; i_9 += 3) 
    {
        arr_28 [i_9] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_5 [(unsigned short)12] [i_9 - 2] [i_9])) ? (((/* implicit */int) arr_5 [(signed char)10] [i_9 - 2] [i_9 - 2])) : (arr_19 [i_9 - 2] [i_9 - 2] [i_9 - 2] [6ULL]))), (arr_19 [(unsigned short)0] [i_9 - 2] [i_9] [(signed char)14])));
        /* LoopNest 2 */
        for (short i_10 = 1; i_10 < 13; i_10 += 4) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_12 = 0; i_12 < 14; i_12 += 4) 
                    {
                        arr_38 [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_12] [i_10 - 1] [i_10 - 1])) ? (arr_6 [i_9 - 2] [i_10 - 1] [(unsigned short)9] [i_10 - 1]) : (arr_6 [i_9 + 1] [i_10 - 1] [i_10] [i_10 + 1])))) ? (min((arr_6 [i_9 - 2] [i_10 + 1] [i_10 + 1] [i_10 + 1]), (((/* implicit */int) arr_5 [i_12] [i_10 - 1] [i_10])))) : (arr_6 [i_9 - 2] [i_10 + 1] [i_10 + 1] [i_10 + 1])));
                        arr_39 [i_9] [4] [i_10] [4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) (unsigned short)65518))));
                        var_27 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65521)) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) (short)25110))))) ? (((((/* implicit */_Bool) arr_5 [i_12] [i_9 - 1] [i_11])) ? (((/* implicit */int) arr_5 [i_12] [i_11] [i_11])) : (((/* implicit */int) arr_5 [i_12] [i_10] [i_11])))) : (((/* implicit */int) arr_5 [i_12] [i_10 - 1] [i_10]))));
                        var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */unsigned int) 325806671)) : (4144800068U)))))) ? (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_35 [i_11] [i_10 - 1] [(unsigned short)5] [i_9 + 1] [i_9 + 1])) : (((/* implicit */int) (signed char)-115)))) : (((((/* implicit */_Bool) -8)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)65509)))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_14 = 0; i_14 < 14; i_14 += 3) 
                        {
                            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)30395)) ? (((/* implicit */int) (short)5539)) : (((/* implicit */int) (unsigned char)202))));
                            var_30 = arr_2 [i_10];
                        }
                        for (int i_15 = 0; i_15 < 14; i_15 += 4) 
                        {
                            arr_47 [i_13] [i_10] = ((/* implicit */unsigned int) arr_34 [i_9] [(unsigned short)1] [(unsigned char)4] [(signed char)0] [i_13] [i_15]);
                            var_31 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_10 + 1] [i_9 - 1] [i_10 + 1] [i_11] [i_15])) ? (((/* implicit */int) arr_35 [i_10 + 1] [i_9 - 1] [i_13] [i_10 + 1] [i_10 + 1])) : (((/* implicit */int) arr_35 [i_10 + 1] [i_9 - 1] [i_11] [i_9 - 1] [i_15]))))) ? (((/* implicit */int) max((arr_29 [i_10 + 1] [i_9 - 1]), (((/* implicit */short) arr_35 [i_10 + 1] [i_9 - 1] [i_11] [i_9] [i_9]))))) : (((((/* implicit */_Bool) arr_29 [i_10 + 1] [i_9 - 1])) ? (((/* implicit */int) arr_35 [i_10 + 1] [i_9 - 1] [i_11] [3] [i_15])) : (((/* implicit */int) arr_35 [i_10 + 1] [i_9 - 1] [i_10 + 1] [(signed char)9] [i_15]))))));
                            arr_48 [i_9] [i_13] [i_9] [i_9 - 2] [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_9] [i_10] [i_9] [i_13])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_9 - 2])) ? (((/* implicit */int) arr_3 [i_13] [i_9 - 1])) : (arr_45 [i_10] [(unsigned short)12] [i_10 - 1] [i_10] [i_10] [9])))) : (((((/* implicit */_Bool) arr_7 [i_9] [i_9] [i_9] [i_9 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_9 - 2] [i_9] [i_9] [i_9 + 1]))) : (arr_21 [i_10 + 1] [i_10] [i_11] [i_9 + 1])))));
                        }
                        for (unsigned char i_16 = 0; i_16 < 14; i_16 += 3) 
                        {
                            var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((max((arr_15 [i_9]), (arr_8 [i_9] [i_13] [i_9 - 1]))), (((/* implicit */unsigned short) arr_29 [i_11] [i_11]))))) ? (max((arr_10 [i_13]), (((/* implicit */long long int) arr_52 [i_10 - 1] [i_10 - 1] [i_11] [i_13] [i_9 + 1])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_11])) ? (((/* implicit */int) arr_2 [i_9 + 1])) : (((/* implicit */int) arr_2 [i_10 - 1])))))));
                            var_33 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_0 [i_13] [i_10])) ? (((/* implicit */int) arr_0 [i_10] [13ULL])) : (((/* implicit */int) arr_14 [i_9 + 1])))), (max((((/* implicit */int) arr_35 [i_11] [i_11] [i_11] [i_11] [(_Bool)1])), (arr_19 [i_13] [i_10 + 1] [i_11] [i_13])))));
                            var_34 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_10])) ? (((/* implicit */int) (short)2627)) : (-325806674)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)154))))) ? (((((/* implicit */_Bool) arr_22 [i_9 + 1] [i_10 - 1] [i_16])) ? (arr_22 [i_9 + 1] [i_10 - 1] [2ULL]) : (arr_22 [i_9 - 2] [i_10 - 1] [4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_13] [(short)7] [i_13])))));
                            var_35 = ((/* implicit */unsigned char) arr_37 [i_9 - 2] [i_10] [i_13] [i_16]);
                        }
                        var_36 ^= ((/* implicit */unsigned int) arr_0 [i_9] [i_9]);
                        arr_53 [i_9] [13U] [i_13] [i_11] [(short)0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_9] [12] [(short)7] [12] [i_13])) ? (((((/* implicit */_Bool) arr_26 [i_9 - 1])) ? (((/* implicit */int) arr_26 [i_9 + 1])) : (((/* implicit */int) arr_34 [i_9 - 2] [i_13] [i_9 - 2] [i_9 - 2] [i_9] [i_9 - 2])))) : (((/* implicit */int) max((arr_42 [i_9 - 1] [i_10] [i_10 + 1] [4]), (arr_42 [i_9 + 1] [i_9 + 1] [i_10 + 1] [i_11]))))));
                        arr_54 [i_9] [i_10] [i_11] [i_13] [i_13] [i_9] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_50 [i_10 - 1] [i_13] [i_13] [i_13])) ? (((/* implicit */int) arr_8 [i_9 - 1] [i_13] [i_10 + 1])) : (((/* implicit */int) arr_34 [i_9] [i_10] [i_10 + 1] [i_10] [i_9] [i_13])))), (((/* implicit */int) arr_34 [i_13] [i_11] [(signed char)8] [i_10] [(signed char)8] [i_9]))));
                    }
                    for (unsigned long long int i_17 = 1; i_17 < 12; i_17 += 4) 
                    {
                        arr_57 [i_9] [2] [2] [i_17] [i_9] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_9] [i_9] [(signed char)8] [i_17] [(signed char)8] [i_17] [i_17])) ? (((/* implicit */int) arr_51 [7LL] [i_11] [i_11] [7LL] [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) arr_15 [8U]))))) ? (((/* implicit */unsigned long long int) arr_41 [i_17] [i_10 + 1] [i_10 + 1] [i_9 + 1] [i_17])) : (arr_25 [i_9 + 1]))), (((/* implicit */unsigned long long int) arr_29 [5U] [(signed char)4]))));
                        var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_9 - 2] [i_9 - 2] [i_10 + 1] [10LL] [i_17 + 1])) ? (arr_33 [i_17 - 1] [i_10 + 1] [i_9 + 1]) : (arr_33 [i_17 + 1] [i_10 - 1] [i_9 - 1])))) ? (((((/* implicit */_Bool) arr_42 [i_9 + 1] [i_17 + 2] [i_9 + 1] [i_17])) ? (((/* implicit */unsigned int) arr_43 [i_9 - 2] [(unsigned char)2] [i_10 + 1] [10ULL] [i_17 + 1])) : (arr_33 [i_17 - 1] [i_10 + 1] [i_9 - 2]))) : (((((/* implicit */_Bool) arr_43 [i_9 - 2] [(short)2] [i_10 - 1] [(unsigned short)0] [i_17 + 1])) ? (((/* implicit */unsigned int) arr_45 [i_10 + 1] [i_10] [i_9] [i_17] [i_17 + 1] [i_17])) : (arr_33 [i_17 + 1] [i_10 + 1] [i_9 + 1]))))))));
                    }
                    arr_58 [i_10] [i_10] [(_Bool)1] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_49 [i_11] [i_11] [i_10 + 1] [i_10 + 1])) ? (arr_49 [i_10] [i_10] [i_10 + 1] [i_10 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_9] [i_10] [i_9 + 1]))))), (((/* implicit */unsigned long long int) arr_50 [i_10 - 1] [i_10 + 1] [i_9 - 2] [i_9]))));
                    var_38 = ((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_9] [i_10] [i_9] [i_9 + 1])) ? (((((/* implicit */_Bool) arr_10 [(unsigned char)12])) ? (arr_10 [(unsigned char)20]) : (arr_10 [(unsigned short)2]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_11] [(unsigned char)7] [i_10 + 1] [i_9 - 1])) ? (((/* implicit */int) arr_7 [i_9 + 1] [(short)21] [(short)21] [i_11])) : (((/* implicit */int) arr_7 [i_9] [i_9] [i_9] [i_9])))))));
                    var_39 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)210)) ? (((/* implicit */int) (unsigned short)11)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_9 - 1] [i_9 - 1] [i_9] [i_9] [i_11])) ? (arr_19 [i_9] [(short)0] [i_10] [(short)4]) : (((/* implicit */int) arr_1 [(unsigned char)4] [(unsigned char)4]))))) : (((((/* implicit */_Bool) arr_49 [i_9] [i_9] [i_9] [(signed char)12])) ? (arr_17 [i_9]) : (((/* implicit */long long int) ((/* implicit */int) arr_30 [(unsigned short)12] [3LL])))))))) ? (min((arr_45 [i_9 - 1] [i_10] [i_9 - 1] [i_9 - 1] [i_9 + 1] [i_10]), (arr_45 [i_9] [i_10] [i_11] [11LL] [i_9 + 1] [i_11]))) : (((((/* implicit */_Bool) arr_20 [i_9 - 1] [i_9] [i_9 - 2] [i_9])) ? (((/* implicit */int) arr_20 [i_9] [i_10] [i_10] [i_11])) : (((/* implicit */int) arr_20 [i_9] [i_10] [i_10] [i_11]))))));
                }
            } 
        } 
    }
}
