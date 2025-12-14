/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73999
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
    for (signed char i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0]))) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (signed char)112)) : (1378739944))) : (((/* implicit */int) max((arr_1 [i_0 - 1]), (((/* implicit */unsigned short) var_9))))))))));
        var_16 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) (_Bool)1))))))));
        var_17 = ((/* implicit */unsigned short) min((max((arr_0 [i_0 - 1]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))), (arr_0 [i_0])));
        var_18 &= ((/* implicit */long long int) (!((!((!(((/* implicit */_Bool) var_8))))))));
    }
    /* LoopNest 3 */
    for (signed char i_1 = 1; i_1 < 7; i_1 += 4) 
    {
        for (int i_2 = 2; i_2 < 9; i_2 += 4) 
        {
            for (signed char i_3 = 1; i_3 < 8; i_3 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) var_7);
                    var_20 = ((/* implicit */_Bool) arr_1 [i_2]);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (2147479552))) : (((/* implicit */int) var_5))));
    var_22 = ((((/* implicit */_Bool) ((signed char) (unsigned short)55975))) ? ((((!(((/* implicit */_Bool) (unsigned char)16)))) ? (((((/* implicit */_Bool) (signed char)-65)) ? (var_7) : (((/* implicit */int) var_8)))) : (((/* implicit */int) (!((_Bool)1)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((var_2), (var_0))))))));
    /* LoopNest 2 */
    for (signed char i_4 = 1; i_4 < 21; i_4 += 1) 
    {
        for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_6 = 0; i_6 < 25; i_6 += 4) 
                {
                    arr_18 [i_4] [i_4 + 1] [i_4] = ((/* implicit */unsigned short) var_4);
                    arr_19 [i_5] [i_5] [i_4] = ((/* implicit */unsigned char) (!((_Bool)1)));
                    var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_14 [i_4] [i_4] [i_4])), (arr_16 [i_4] [i_5] [i_5] [i_6]))))));
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)81)) ^ ((((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))))) && (((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (unsigned short)32768)) ? (var_6) : (((/* implicit */int) arr_12 [i_4]))))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned char i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        arr_22 [i_4] [i_5] [i_6] [i_4] = ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) (signed char)127)))));
                        /* LoopSeq 3 */
                        for (long long int i_8 = 0; i_8 < 25; i_8 += 4) 
                        {
                            var_25 = ((/* implicit */short) ((int) ((((/* implicit */int) (unsigned short)55975)) == (-611073020))));
                            var_26 = (!(((/* implicit */_Bool) (signed char)0)));
                        }
                        for (long long int i_9 = 0; i_9 < 25; i_9 += 4) 
                        {
                            arr_27 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((arr_25 [i_4] [i_5] [i_4 + 3] [i_7] [i_6]) && (((/* implicit */_Bool) 4488080197544941643ULL))));
                            arr_28 [i_4] [i_5] [i_4] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_6)))) ? (((/* implicit */int) (short)-31046)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_9] [i_7] [i_6] [i_5] [i_4 + 1] [i_4])))))));
                            var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_21 [i_4] [i_4] [i_4] [i_4] [i_4]))));
                        }
                        for (unsigned char i_10 = 4; i_10 < 24; i_10 += 4) 
                        {
                            var_28 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) | (((/* implicit */int) arr_25 [i_4] [i_5] [i_6] [i_7] [i_6]))))) : (arr_11 [i_4])));
                            var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)49))));
                            arr_31 [i_4] [i_4] [i_7] [i_7] [i_10] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) arr_21 [i_4] [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) (unsigned char)147)) : (((/* implicit */int) arr_23 [i_4] [i_5] [i_6] [i_7] [i_10] [i_4])))));
                            arr_32 [i_4] [i_5] [i_6] [i_4] [i_10] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)66)))) ? (((int) 7U)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_7] [i_4])))))));
                        }
                        arr_33 [i_4] [i_5] [i_6] [i_4] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_4 - 1] [i_4] [i_4 + 1] [i_4 + 3])) || (((/* implicit */_Bool) ((long long int) arr_13 [i_4])))));
                    }
                    for (unsigned char i_11 = 0; i_11 < 25; i_11 += 1) /* same iter space */
                    {
                        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) arr_15 [i_4] [i_4] [i_4 - 1] [i_6])) : (((/* implicit */int) arr_15 [i_5] [i_5] [i_4 + 1] [i_4]))))) || (((/* implicit */_Bool) min((((/* implicit */signed char) arr_13 [i_6])), (arr_30 [i_4 + 1] [i_5] [i_4 + 3] [i_4])))))))));
                        var_31 = ((/* implicit */unsigned short) var_7);
                        arr_37 [i_4 + 1] [i_4] [i_6] [i_6] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((4488080197544941643ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4] [i_5]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((1356902699) <= (((((/* implicit */_Bool) arr_26 [i_4])) ? (((/* implicit */int) arr_26 [i_4])) : (2147479552))))))) : (((long long int) max((13958663876164609967ULL), (((/* implicit */unsigned long long int) var_13)))))));
                        arr_38 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) var_3);
                        var_32 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_13)) : (-417166866))), (((((/* implicit */int) var_11)) ^ (var_6))))))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 25; i_12 += 1) /* same iter space */
                    {
                        var_33 = ((/* implicit */unsigned char) ((((((((/* implicit */int) arr_14 [i_4 + 3] [i_5] [i_4])) != (((/* implicit */int) arr_34 [i_12] [i_6] [i_5] [i_4])))) ? (min((arr_39 [i_4] [i_6] [i_5] [i_4]), (((/* implicit */long long int) (_Bool)0)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_3)))))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)32)) * (((/* implicit */int) (signed char)15))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))) : (((int) arr_40 [i_4 + 2] [i_5] [i_5] [i_5] [i_6] [i_12])))))));
                        var_34 = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */unsigned short) (short)21278)), (arr_36 [i_4] [i_4 + 2] [i_6] [i_12])))) & (((((/* implicit */int) arr_36 [i_4] [i_4 - 1] [i_6] [i_12])) ^ (((/* implicit */int) (signed char)-15))))));
                        var_35 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)3840)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) (signed char)63)) ? (arr_20 [i_4] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) - (((/* implicit */unsigned long long int) (-(1065353216))))));
                        var_36 *= ((/* implicit */_Bool) min((((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0))))) >= (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_26 [i_6])) : (((/* implicit */int) arr_21 [i_4 + 1] [i_6] [i_12] [i_5] [i_6]))))))), ((signed char)-49)));
                        var_37 = ((/* implicit */_Bool) arr_36 [i_12] [i_6] [i_4] [i_4]);
                    }
                    for (unsigned char i_13 = 0; i_13 < 25; i_13 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (long long int i_14 = 0; i_14 < 25; i_14 += 4) /* same iter space */
                        {
                            var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 12598341694158957093ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) ((arr_24 [i_4 + 2] [i_4] [i_4 + 2] [i_5]) - (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (max((((/* implicit */unsigned int) arr_10 [i_4] [i_14])), (3602295999U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) arr_16 [i_4 + 1] [i_4 + 1] [i_4] [i_4]))))))))));
                            var_39 = ((/* implicit */_Bool) arr_40 [i_6] [i_6] [i_5] [i_13] [i_14] [i_5]);
                        }
                        for (long long int i_15 = 0; i_15 < 25; i_15 += 4) /* same iter space */
                        {
                            var_40 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [i_4] [i_4]))));
                            arr_47 [i_6] [i_5] [i_6] [i_15] [i_4] [i_5] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_6] [i_5] [i_6] [i_4 + 2])) ? (((/* implicit */int) arr_13 [i_4])) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) arr_20 [i_4] [i_4])) ? (((/* implicit */int) arr_15 [i_4 + 4] [i_5] [i_6] [i_4])) : (((/* implicit */int) arr_15 [i_4 + 3] [i_4 + 4] [i_4 - 1] [i_4])))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)185)) < (((/* implicit */int) (short)32767))))))))));
                        }
                        var_41 = ((/* implicit */signed char) var_0);
                        var_42 = (((!(((/* implicit */_Bool) arr_12 [i_4])))) ? (((/* implicit */int) min((arr_12 [i_4]), (((/* implicit */unsigned char) (signed char)1))))) : (((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) arr_12 [i_4]))))));
                        arr_48 [i_4] [i_6] [i_4] = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) arr_36 [i_13] [i_5] [i_6] [i_13])) || (((/* implicit */_Bool) arr_36 [i_4 + 3] [i_4 - 1] [i_4 + 4] [i_4 + 2]))))));
                    }
                }
                var_43 = ((/* implicit */unsigned char) (!(((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 13958663876164609972ULL)))))) != (-8210654325376248206LL)))));
            }
        } 
    } 
}
