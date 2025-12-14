/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79023
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */int) max((8602234026132178504LL), (((/* implicit */long long int) (_Bool)0))));
                    arr_10 [i_0] [i_1] [(short)4] |= ((/* implicit */int) (!(((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_6))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) var_6);
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        for (unsigned char i_4 = 2; i_4 < 16; i_4 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) max((var_16), ((-((-((-(2290283916645294214ULL)))))))));
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)(-127 - 1))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_3])))))));
                arr_16 [i_3] [i_3] = ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-16)) | (((/* implicit */int) (unsigned char)13))))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) arr_15 [i_3] [i_4] [i_3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)13)))))) ^ (((/* implicit */int) arr_12 [i_3])));
                /* LoopSeq 4 */
                for (short i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 17; i_7 += 2) 
                        {
                            {
                                var_18 ^= ((/* implicit */unsigned int) min((((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)15)) | (((/* implicit */int) arr_12 [i_7]))))) ^ (arr_22 [(unsigned short)0] [i_4 - 2] [i_4] [i_5] [i_5] [i_7]))), (((/* implicit */long long int) var_3))));
                                arr_25 [(signed char)9] [i_3] [i_5] [i_6] [i_7] = ((/* implicit */_Bool) arr_15 [i_3] [i_5] [i_3]);
                            }
                        } 
                    } 
                    arr_26 [i_3] [i_4] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (arr_19 [i_3] [i_3] [i_3] [i_3])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)15)) >> (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)13)))) : (((((/* implicit */int) arr_14 [i_5] [i_4])) | (((/* implicit */int) arr_12 [(_Bool)1]))))))) : (((((/* implicit */_Bool) (unsigned char)240)) ? (921176215623035621LL) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_3] [i_4 - 2] [i_3])))))));
                    var_19 = ((/* implicit */signed char) ((int) arr_18 [i_3] [i_5] [i_3] [i_3]));
                    /* LoopSeq 3 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_20 = ((min((arr_21 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_3]), (arr_21 [i_3] [i_4 - 1] [i_4 + 1] [i_3]))) || (((((/* implicit */int) arr_21 [i_3] [i_4 - 1] [i_4 - 1] [i_3])) <= (((/* implicit */int) arr_21 [i_4] [i_4 - 2] [i_4 - 2] [i_3])))));
                        arr_29 [i_3] [i_4 - 2] [i_5] [i_8] = (i_3 % 2 == 0) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)215)) << (((((((-6210976739767314715LL) | (((/* implicit */long long int) (-(((/* implicit */int) arr_21 [i_3] [i_4] [i_5] [i_3]))))))) + (25LL))) - (16LL)))))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)215)) << (((((((((-6210976739767314715LL) | (((/* implicit */long long int) (-(((/* implicit */int) arr_21 [i_3] [i_4] [i_5] [i_3]))))))) + (25LL))) - (16LL))) + (6210976739767314719LL))))));
                        arr_30 [i_3] [i_3] = ((/* implicit */int) ((unsigned int) ((((/* implicit */int) arr_14 [i_3] [i_3])) | ((~(((/* implicit */int) arr_20 [i_3])))))));
                    }
                    for (long long int i_9 = 2; i_9 < 14; i_9 += 3) 
                    {
                        arr_33 [i_9] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) var_5);
                        var_21 = (i_3 % 2 == zero) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_13 [i_9 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)26))) : (4503599560261632ULL))) >> (((((/* implicit */int) arr_31 [i_3] [i_4 - 2] [i_5] [i_9 + 3] [i_9])) - (31460)))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_13 [i_9 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)26))) : (4503599560261632ULL))) >> (((((((/* implicit */int) arr_31 [i_3] [i_4 - 2] [i_5] [i_9 + 3] [i_9])) - (31460))) + (29030))))));
                        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) arr_19 [7] [i_4 - 1] [i_5] [i_9 - 2])) + (((((/* implicit */_Bool) (unsigned char)222)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10653))) : (140737488355264ULL))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_5] [i_5] [i_5])) + (((/* implicit */int) arr_31 [i_5] [i_4] [i_5] [i_5] [i_5])))))))))))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_23 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_3] [i_3])))))) > (((576460752303423487ULL) >> (((((/* implicit */int) var_6)) - (27286)))))))) >> (((((/* implicit */int) var_11)) + (1314)))));
                        var_24 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((1945104223U) >> (((((/* implicit */int) (short)17034)) - (17018)))))) + (576460752303423506ULL)));
                    }
                    var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((((arr_19 [i_3] [i_3] [i_3] [i_5]) + (9223372036854775807LL))) >> (((/* implicit */int) arr_14 [i_4] [i_5])))), (((/* implicit */long long int) ((((-1120512941) + (2147483647))) >> (((arr_32 [i_3] [i_3] [i_3]) - (62012143)))))))))));
                }
                for (long long int i_11 = 0; i_11 < 17; i_11 += 2) 
                {
                    arr_42 [i_3] [i_4] = ((/* implicit */int) min((var_8), (arr_31 [i_3] [i_4] [i_4 - 2] [i_11] [i_11])));
                    var_26 = ((/* implicit */long long int) arr_35 [i_3] [i_4] [i_11] [i_11] [i_4 + 1] [i_4 + 1]);
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    var_27 = ((/* implicit */int) (short)10642);
                    /* LoopSeq 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_47 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_37 [i_4] [i_4] [i_4 - 1] [i_4 + 1])) : (((/* implicit */int) arr_34 [i_4] [i_4]))))) ? (((((/* implicit */_Bool) arr_31 [i_3] [i_3] [i_4 + 1] [i_4 + 1] [i_4 + 1])) ? (((/* implicit */int) (short)10653)) : (((/* implicit */int) arr_31 [i_3] [i_4] [i_4 + 1] [i_4 - 1] [i_4 - 2])))) : ((-(((/* implicit */int) arr_34 [i_4] [i_4]))))));
                        var_28 = ((/* implicit */_Bool) (signed char)(-127 - 1));
                        arr_48 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) (short)-10654);
                        var_29 -= ((/* implicit */unsigned short) 2628499106212568643ULL);
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 17; i_14 += 1) 
                    {
                        arr_52 [i_3] [i_4 + 1] [i_3] [i_14] = ((/* implicit */long long int) arr_40 [i_3] [i_3]);
                        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) ((((/* implicit */int) (short)3072)) >> (((((/* implicit */int) (unsigned char)216)) - (195)))))))) ? (((((/* implicit */_Bool) arr_50 [i_14] [i_12] [i_4] [i_3])) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) arr_11 [i_4])) << (((((((/* implicit */int) (short)-17035)) + (17066))) - (28))))))) : (arr_23 [i_4] [i_4 + 1] [i_12]))))));
                    }
                }
                for (unsigned short i_15 = 3; i_15 < 16; i_15 += 2) 
                {
                    var_31 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */long long int) ((/* implicit */int) var_10))) ^ (arr_39 [i_4 - 1])))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_37 [i_3] [i_3] [i_3] [i_3]))));
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((unsigned int) -7343653140017532811LL))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_3] [i_4 + 1] [i_4 + 1] [i_15 + 1] [i_4 + 1] [i_15 - 2]))) : (((((/* implicit */_Bool) (~(arr_43 [i_15] [i_3] [i_4 - 2] [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_0), ((unsigned char)15))))) : (((long long int) var_5))))));
                    arr_57 [i_3] [i_3] = ((/* implicit */int) (short)-32757);
                }
            }
        } 
    } 
}
