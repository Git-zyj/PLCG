/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96051
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
    var_13 = var_12;
    var_14 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (signed char)78)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9187343239835811840LL)) ? (((/* implicit */int) (short)-28393)) : (-2018502276)))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)-51)) & (((/* implicit */int) (signed char)6))))) : (9223372036854775807LL)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (short)-32762)) / (min((((((/* implicit */int) arr_1 [i_1])) * (((/* implicit */int) arr_2 [i_0])))), ((-(((/* implicit */int) (short)-28393))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 1; i_2 < 11; i_2 += 3) 
                {
                    var_15 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)28400)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (unsigned short)46907))))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0])))))));
                    var_16 = ((/* implicit */int) min((var_16), (((int) arr_5 [7LL]))));
                }
                arr_10 [(unsigned short)12] &= ((/* implicit */signed char) arr_8 [i_0] [i_1] [i_1]);
                /* LoopSeq 3 */
                for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    arr_15 [i_3] [i_0] [i_0] = ((/* implicit */signed char) (~((+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)78)))))))));
                    /* LoopSeq 2 */
                    for (long long int i_4 = 1; i_4 < 12; i_4 += 1) 
                    {
                        var_17 = ((/* implicit */short) (((~(((/* implicit */int) (signed char)-82)))) >> ((((~(((/* implicit */int) ((((/* implicit */int) (unsigned short)50792)) <= (((/* implicit */int) (unsigned short)54207))))))) + (11)))));
                        var_18 = ((/* implicit */signed char) (-(((/* implicit */int) (short)-28373))));
                        /* LoopSeq 4 */
                        for (signed char i_5 = 1; i_5 < 11; i_5 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (((-((-(((/* implicit */int) arr_1 [i_4])))))) & (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned short)14749)) ? (((/* implicit */int) (signed char)127)) : (2097120))))))))));
                            arr_21 [i_4] [i_4 - 1] = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_14 [i_4 + 1]))))));
                        }
                        for (signed char i_6 = 4; i_6 < 12; i_6 += 4) 
                        {
                            var_20 &= ((/* implicit */unsigned short) arr_24 [i_0] [i_0] [i_3] [i_4] [i_3]);
                            var_21 = ((/* implicit */short) arr_19 [i_0] [i_0] [i_4] [i_3] [(signed char)3] [(signed char)3]);
                            arr_25 [i_0] [8] [i_4] [i_4] [i_6] = min((-2097120), (((/* implicit */int) arr_1 [(signed char)3])));
                        }
                        for (short i_7 = 0; i_7 < 13; i_7 += 4) 
                        {
                            var_22 = max(((+(((/* implicit */int) arr_14 [i_0])))), (((/* implicit */int) ((signed char) (unsigned short)4737))));
                            var_23 ^= ((/* implicit */short) ((8728987293925915855LL) >> ((((~(((/* implicit */int) min((arr_18 [i_7] [i_7] [i_4] [i_7]), (arr_22 [i_0] [(signed char)8] [i_3] [i_4] [i_7])))))) + (72)))));
                        }
                        for (signed char i_8 = 0; i_8 < 13; i_8 += 1) 
                        {
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (((+(((/* implicit */int) (unsigned short)6960)))) * ((-((-(((/* implicit */int) (short)-30599)))))))))));
                            arr_31 [i_0] [i_0] [i_0] [i_4] [(signed char)8] = ((/* implicit */unsigned short) min(((signed char)-109), (((signed char) (unsigned short)54218))));
                            var_25 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1] [i_4])) | (arr_26 [i_4 + 1] [i_3] [i_4] [i_4 - 1] [i_4] [i_3] [9LL])))) || (((/* implicit */_Bool) (-(1085331245))))));
                        }
                    }
                    for (long long int i_9 = 2; i_9 < 12; i_9 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_10 = 2; i_10 < 11; i_10 += 1) 
                        {
                            arr_37 [4] [i_1] [i_10] = (i_10 % 2 == zero) ? (((/* implicit */signed char) (((~(((/* implicit */int) arr_24 [i_10] [(short)5] [i_0] [i_9] [i_9 + 1])))) << ((((~(((/* implicit */int) ((signed char) (unsigned short)14738))))) - (97)))))) : (((/* implicit */signed char) (((((~(((/* implicit */int) arr_24 [i_10] [(short)5] [i_0] [i_9] [i_9 + 1])))) + (2147483647))) << ((((((~(((/* implicit */int) ((signed char) (unsigned short)14738))))) - (97))) - (12))))));
                            arr_38 [i_1] [i_3] [i_1] [i_9] &= ((/* implicit */signed char) (~(min((((/* implicit */long long int) arr_5 [i_0])), (max((arr_23 [(signed char)2] [i_9 - 2] [i_0]), (((/* implicit */long long int) (signed char)-73))))))));
                            var_26 = max(((+(((/* implicit */int) arr_9 [i_1] [i_1] [i_9 + 1] [i_10 + 1])))), ((-(1073741824))));
                        }
                        var_27 *= ((/* implicit */signed char) (~((-(((((/* implicit */int) (signed char)16)) * (((/* implicit */int) arr_1 [i_0]))))))));
                    }
                    var_28 = ((/* implicit */short) (unsigned short)0);
                    var_29 ^= ((/* implicit */signed char) (-((-(((((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_3])) / (((/* implicit */int) arr_3 [i_3]))))))));
                    arr_39 [i_3] [i_1] [i_0] = (~((~(((/* implicit */int) (short)6813)))));
                }
                for (signed char i_11 = 0; i_11 < 13; i_11 += 2) /* same iter space */
                {
                    arr_42 [(short)11] [(short)11] [i_0] = ((/* implicit */short) (-((-(((/* implicit */int) max((((/* implicit */short) (signed char)17)), ((short)28400))))))));
                    var_30 = ((/* implicit */signed char) min((((/* implicit */int) max((arr_22 [4LL] [4LL] [i_1] [i_0] [i_0]), ((signed char)-110)))), ((-(((/* implicit */int) (signed char)-38))))));
                }
                for (signed char i_12 = 0; i_12 < 13; i_12 += 2) /* same iter space */
                {
                    var_31 = ((/* implicit */long long int) (~(((/* implicit */int) ((((((/* implicit */_Bool) (signed char)80)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16383))) : (arr_33 [i_12] [i_12] [i_1] [i_0]))) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16383))))))));
                    var_32 = ((((/* implicit */long long int) ((/* implicit */int) (signed char)56))) * (((((long long int) (short)-4158)) * (((/* implicit */long long int) (-(((/* implicit */int) (short)4158))))))));
                    arr_45 [i_1] [i_1] = ((/* implicit */signed char) max(((unsigned short)14743), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (signed char)42)))))))));
                    arr_46 [i_0] [i_0] [(signed char)1] = ((/* implicit */signed char) (short)32767);
                }
            }
        } 
    } 
}
