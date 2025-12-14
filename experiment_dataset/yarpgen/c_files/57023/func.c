/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57023
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_18 = ((/* implicit */short) ((unsigned long long int) arr_1 [i_0]));
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 10; i_1 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */int) min((var_19), (var_5)));
            var_20 = ((/* implicit */int) ((_Bool) ((-274746920) | (-274746943))));
            arr_4 [i_0] [i_0] [i_1] = ((unsigned int) ((var_7) * (((/* implicit */unsigned long long int) 1125899906842623LL))));
            arr_5 [5U] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 889831965109117537LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)14069))) : (var_6)));
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 11; i_2 += 3) /* same iter space */
            {
                var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? ((~(-459993791))) : ((~(((/* implicit */int) var_0))))));
                arr_9 [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) -274746949)) | (1125899906842623LL)))) ? (arr_3 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1])))));
                arr_10 [0ULL] [i_1] [i_2] = ((/* implicit */int) var_0);
            }
            for (long long int i_3 = 0; i_3 < 11; i_3 += 3) /* same iter space */
            {
                arr_13 [i_0] [i_1] [i_1 - 1] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) 274746920))))));
                var_22 = ((/* implicit */_Bool) ((((-889831965109117537LL) > (((/* implicit */long long int) 466920451U)))) ? (((/* implicit */int) ((_Bool) var_5))) : (((/* implicit */int) ((short) (short)-1)))));
            }
        }
        for (long long int i_4 = 1; i_4 < 10; i_4 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_5 = 1; i_5 < 7; i_5 += 1) 
            {
                arr_19 [i_0] [i_0] [1LL] = ((/* implicit */short) ((466920451U) / (arr_11 [i_0] [i_4 - 1] [i_4 - 1] [i_5 + 1])));
                var_23 = ((/* implicit */short) (~(arr_8 [i_0] [i_0])));
                var_24 ^= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)49386))))) < (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)56)))))));
                var_25 &= ((((/* implicit */_Bool) -1125899906842652LL)) ? ((+(((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) (short)8585)));
            }
            for (short i_6 = 3; i_6 < 8; i_6 += 1) /* same iter space */
            {
                arr_24 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_4] [i_4 - 1] [i_4] [i_4])) ? (var_5) : (-274746915)));
                var_26 -= ((/* implicit */int) (short)5692);
            }
            for (short i_7 = 3; i_7 < 8; i_7 += 1) /* same iter space */
            {
                var_27 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_8))));
                arr_29 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 820199185)) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (281474959933440LL)));
                var_28 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_11)))) << (((((/* implicit */int) arr_20 [i_4 - 1] [i_7])) - (10)))));
                arr_30 [i_4] [i_4] &= ((((/* implicit */_Bool) arr_22 [i_0] [i_4 - 1] [i_7] [i_0])) ? (716562195U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))));
                arr_31 [i_0] = ((/* implicit */long long int) 3578405084U);
            }
            /* LoopSeq 1 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                arr_36 [i_0] [i_4 - 1] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_0] [i_4 + 1] [i_4 + 1] [i_0])) >= (((/* implicit */int) var_1))));
                /* LoopSeq 2 */
                for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 4) 
                {
                    var_29 &= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) (signed char)50)) <= (((/* implicit */int) var_2)))))));
                    arr_41 [i_0] [1LL] [1LL] [i_9] = ((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) ((var_4) <= (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_0] [i_4 + 1] [i_0] [i_9])))))) : (((((/* implicit */_Bool) arr_11 [(_Bool)1] [(unsigned short)10] [(_Bool)1] [i_9])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_14))))));
                }
                for (unsigned short i_10 = 2; i_10 < 10; i_10 += 2) 
                {
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_27 [i_4 + 1] [i_10 + 1])) ? (((((/* implicit */_Bool) (unsigned char)199)) ? (var_7) : (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) -2147483646))))))));
                    arr_45 [(_Bool)1] [i_4] = ((/* implicit */int) ((((466920451U) & (3578405084U))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)-52)) : (var_9))))));
                }
                /* LoopSeq 4 */
                for (unsigned long long int i_11 = 3; i_11 < 8; i_11 += 3) 
                {
                    arr_50 [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3578405085U)) ? (-467793476) : (-274746929)));
                    var_31 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 382177878218146667LL)) : (((((/* implicit */_Bool) arr_43 [6ULL] [i_4 + 1] [i_8] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [(unsigned char)9]))) : (15975007332525104748ULL)))));
                    var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) 466920462U))));
                    var_33 = ((/* implicit */int) var_12);
                    arr_51 [i_0] [i_11] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551610ULL)) ? (((/* implicit */long long int) 3828046844U)) : ((-9223372036854775807LL - 1LL))))) ? (716562212U) : (716562212U)));
                }
                for (unsigned long long int i_12 = 4; i_12 < 9; i_12 += 1) /* same iter space */
                {
                    var_34 = ((/* implicit */short) ((((/* implicit */_Bool) 0U)) ? (4294967295U) : (((/* implicit */unsigned int) 274746920))));
                    /* LoopSeq 1 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_57 [i_13] [i_8] [i_8] [i_4 + 1] [2LL] = arr_22 [i_0] [i_4] [i_4 + 1] [i_12];
                        var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [(signed char)0] [i_0] [8LL])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 133955584LL)) ? (-1125899906842623LL) : (((/* implicit */long long int) -274746914))))) : (((((/* implicit */_Bool) arr_0 [i_12])) ? (var_7) : (arr_12 [i_0] [i_0] [i_0])))));
                    }
                    var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_44 [i_4 - 1] [i_8] [i_12] [i_12 + 2])) ? (2471736741184446868ULL) : (((/* implicit */unsigned long long int) 6442450944LL))));
                }
                for (unsigned long long int i_14 = 4; i_14 < 9; i_14 += 1) /* same iter space */
                {
                    var_37 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) 15975007332525104748ULL))) >> (((((/* implicit */_Bool) arr_12 [i_14] [i_14] [i_14])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_16))))));
                    arr_60 [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32767))))) == (((/* implicit */int) arr_48 [i_0]))));
                    var_38 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (2038184551U)));
                    /* LoopSeq 1 */
                    for (short i_15 = 0; i_15 < 11; i_15 += 1) 
                    {
                        var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1125899906842647LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_8] [i_14]))) : (arr_38 [i_0]))) ^ (((/* implicit */long long int) arr_59 [i_0] [i_4 - 1] [i_4] [i_4 - 1] [i_8] [i_14 - 4])))))));
                        var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2060725220)) ? (-274746914) : (((/* implicit */int) (unsigned short)46111))));
                    }
                    var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_35 [i_4] [i_4 + 1] [(unsigned short)3] [i_4 - 1])) ? (arr_42 [i_4] [i_4 + 1] [i_4] [i_4 + 1] [i_4 - 1] [i_4 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_4] [i_4 - 1] [i_4] [i_4 - 1])))));
                }
                for (unsigned long long int i_16 = 4; i_16 < 9; i_16 += 1) /* same iter space */
                {
                    arr_69 [i_4 - 1] [i_4 - 1] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65528)) * (((/* implicit */int) (short)-513))));
                    arr_70 [4] [i_16 + 2] [i_16] [i_16 + 2] = ((/* implicit */_Bool) arr_15 [i_8]);
                }
                var_42 += ((/* implicit */unsigned long long int) ((arr_48 [i_4 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8))) : (5735876170256821769LL)));
            }
            var_43 &= ((/* implicit */int) ((((/* implicit */int) (signed char)127)) < (((/* implicit */int) (unsigned short)22217))));
        }
    }
    /* vectorizable */
    for (short i_17 = 1; i_17 < 19; i_17 += 2) 
    {
        arr_73 [i_17 - 1] [i_17] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_72 [i_17 + 1]))) > (((unsigned long long int) 133955607LL))));
        var_44 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)26957))))) ? (((((/* implicit */_Bool) (unsigned short)1162)) ? (((/* implicit */int) (unsigned short)22219)) : (((/* implicit */int) arr_72 [19LL])))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)63)) && (((/* implicit */_Bool) var_10)))))));
        arr_74 [i_17] [i_17 - 1] = ((/* implicit */unsigned short) ((133955584LL) != (133955632LL)));
    }
    var_45 = ((/* implicit */short) max(((unsigned short)0), (((/* implicit */unsigned short) (short)32444))));
}
