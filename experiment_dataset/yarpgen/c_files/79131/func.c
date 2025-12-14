/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79131
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    {
                        var_12 ^= ((/* implicit */short) max(((unsigned char)229), ((unsigned char)21)));
                        var_13 = ((/* implicit */short) ((unsigned char) arr_2 [i_0] [i_0]));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                {
                    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */int) (unsigned short)36845)) | (((/* implicit */int) arr_9 [i_0] [(short)6] [2ULL] [i_0] [(_Bool)1])))), (((/* implicit */int) var_2))))) ? (min((arr_1 [i_4]), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) arr_9 [i_0] [i_0] [(_Bool)1] [i_0] [(unsigned short)2])), (var_8)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(unsigned char)2]))))))));
                    var_15 = ((/* implicit */unsigned char) ((short) var_4));
                }
            } 
        } 
        var_16 = ((/* implicit */_Bool) 4194176ULL);
    }
    /* LoopNest 2 */
    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 1) 
    {
        for (unsigned char i_7 = 3; i_7 < 23; i_7 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 1) 
                {
                    arr_28 [(unsigned short)17] [i_7] [i_6] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) min(((unsigned char)69), ((unsigned char)11)))) << (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_24 [i_6] [i_7 - 2])) : (((/* implicit */int) arr_24 [i_6] [i_7 - 2]))))));
                    /* LoopSeq 2 */
                    for (short i_9 = 1; i_9 < 21; i_9 += 1) /* same iter space */
                    {
                        arr_32 [i_9] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) ((((((((/* implicit */int) arr_25 [i_6] [(_Bool)1] [(unsigned short)19] [i_9])) * (((/* implicit */int) arr_17 [i_7])))) << (((((((/* implicit */_Bool) arr_26 [i_6] [i_8])) ? (((/* implicit */unsigned long long int) var_4)) : (var_1))) - (962056222ULL))))) * (max((((/* implicit */int) (!((_Bool)1)))), (((((/* implicit */_Bool) 3U)) ? (((/* implicit */int) arr_26 [i_6] [i_7])) : (((/* implicit */int) var_11))))))));
                        var_17 = ((/* implicit */unsigned int) var_8);
                        var_18 = 0U;
                        arr_33 [i_6] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_31 [i_9 + 3] [14U] [i_7 + 1] [i_9] [i_9])) - (((/* implicit */int) max(((unsigned short)29855), (((/* implicit */unsigned short) (_Bool)1)))))))), (3810981939U)));
                        var_19 = ((/* implicit */signed char) ((unsigned int) max((((/* implicit */unsigned int) ((short) arr_18 [i_6] [i_9]))), (((((/* implicit */_Bool) (signed char)0)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                    }
                    for (short i_10 = 1; i_10 < 21; i_10 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */_Bool) max((arr_27 [i_6] [(unsigned char)7] [i_10 + 2]), (((/* implicit */unsigned short) min((var_8), (((/* implicit */unsigned char) ((_Bool) arr_30 [i_8] [i_10]))))))));
                        arr_36 [i_6] [(signed char)9] [i_8] = ((/* implicit */unsigned char) (_Bool)1);
                    }
                    var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)21)), (arr_26 [i_6] [i_7])))) * (((/* implicit */int) min((((/* implicit */short) var_9)), (arr_18 [i_6] [i_6])))))))));
                }
                for (signed char i_11 = 0; i_11 < 24; i_11 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_12 = 0; i_12 < 24; i_12 += 1) 
                    {
                        for (unsigned int i_13 = 0; i_13 < 24; i_13 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) arr_40 [(short)18] [i_12] [(unsigned char)23] [9ULL]))));
                                var_23 += ((/* implicit */unsigned long long int) (unsigned short)3524);
                                var_24 = ((/* implicit */unsigned char) ((signed char) (-(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)158)))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_35 [i_6] [i_7 - 2] [i_6] [i_6])) ? (((/* implicit */int) arr_38 [i_7 - 2] [i_7 - 3] [i_7 - 1] [i_7 - 1])) : (arr_35 [i_6] [i_7 - 2] [i_6] [i_6]))));
                    arr_46 [(signed char)16] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)62012)) ? (((((unsigned int) 4067445264U)) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_6] [i_7 - 1] [i_6] [i_11])))));
                    var_26 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) min((arr_26 [i_6] [i_7]), (((/* implicit */unsigned short) (signed char)-125)))))) * (min(((~(((/* implicit */int) arr_39 [i_6] [i_6] [(unsigned short)2])))), (((/* implicit */int) (_Bool)1))))));
                    arr_47 [i_6] [0U] [i_11] [i_11] = ((/* implicit */short) min(((-(((/* implicit */int) arr_44 [i_6])))), (((((/* implicit */int) (signed char)127)) * (((/* implicit */int) (unsigned short)29855))))));
                }
                arr_48 [i_6] = ((/* implicit */unsigned long long int) arr_31 [i_6] [i_6] [i_7] [i_7] [i_7]);
                /* LoopNest 2 */
                for (unsigned char i_14 = 2; i_14 < 23; i_14 += 1) 
                {
                    for (signed char i_15 = 0; i_15 < 24; i_15 += 1) 
                    {
                        {
                            var_27 |= ((/* implicit */signed char) min((((((/* implicit */int) min((((/* implicit */signed char) arr_37 [i_6] [i_7 - 2] [(short)7] [i_15])), (var_0)))) * (((/* implicit */int) var_7)))), (max((((/* implicit */int) (!(((/* implicit */_Bool) arr_42 [i_15] [(signed char)8] [i_6] [i_7] [i_7] [i_6]))))), ((((_Bool)1) ? (((/* implicit */int) arr_52 [i_14] [i_14] [i_14] [i_6] [i_6])) : (((/* implicit */int) var_0))))))));
                            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((arr_24 [i_7] [i_14]) ? (((/* implicit */int) min((arr_20 [i_6] [(unsigned short)12] [(short)0]), (arr_24 [i_7 - 1] [i_7 - 3])))) : (((arr_37 [i_7 + 1] [i_7] [i_7 + 1] [i_14 - 2]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (signed char i_16 = 1; i_16 < 20; i_16 += 1) 
                            {
                                arr_58 [i_6] [i_7] = ((/* implicit */signed char) arr_42 [i_6] [i_6] [i_7] [i_6] [i_6] [i_16 + 4]);
                                arr_59 [i_6] [i_16 + 3] [i_7] [i_16] [i_6] [i_6] [i_7] = ((/* implicit */_Bool) ((((var_6) - (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_6] [(unsigned char)22] [i_16]))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                                var_29 = ((/* implicit */unsigned int) ((short) arr_57 [i_7 + 1]));
                                arr_60 [i_6] [(short)4] [i_6] [(signed char)7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_53 [i_6])) ? (((((/* implicit */int) arr_22 [i_6] [i_7])) / (((/* implicit */int) arr_18 [i_6] [i_6])))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_18 [i_6] [i_16]))))));
                                var_30 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_6) - (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_16 + 2] [i_7] [i_7])))))) ? (((/* implicit */int) (_Bool)1)) : (arr_35 [18ULL] [i_14] [i_15] [i_16 + 1])));
                            }
                        }
                    } 
                } 
                var_31 += ((/* implicit */unsigned int) min((((_Bool) ((((/* implicit */_Bool) 3008935100816064632ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))), (arr_56 [i_6] [i_7 - 3] [i_7])));
            }
        } 
    } 
    var_32 = ((/* implicit */int) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (4279951690U)))))));
    var_33 = ((/* implicit */long long int) var_6);
}
