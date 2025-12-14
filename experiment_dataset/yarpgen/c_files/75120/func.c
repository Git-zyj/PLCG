/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75120
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
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))))) * ((((_Bool)0) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? ((((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10)))))) : (((/* implicit */int) (_Bool)1))));
    var_16 = ((/* implicit */short) (((((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) ((/* implicit */int) var_3))))) - (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : ((-(var_2)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] [i_0 - 1] = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (var_0))))) + (arr_4 [i_0 - 2] [i_0 + 1] [i_0 - 2]))) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)33126)))) ? (((/* implicit */int) ((var_1) != (arr_4 [i_0] [i_1] [i_2])))) : ((+(((/* implicit */int) (short)18887))))))) ? (((((/* implicit */_Bool) (short)16020)) ? (((/* implicit */int) (unsigned char)233)) : (((/* implicit */int) (short)18887)))) : (((/* implicit */int) arr_2 [i_0 - 2] [i_2]))));
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 3; i_3 < 13; i_3 += 4) 
                    {
                        arr_11 [i_0 + 1] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) ^ (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 2]))) ^ (var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))) : (var_11)))));
                        /* LoopSeq 4 */
                        for (short i_4 = 0; i_4 < 17; i_4 += 4) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_8 [i_3 + 2] [i_1] [i_0 + 1] [i_0])), (-608238092)))) ? (((((/* implicit */_Bool) ((var_6) << (((((((/* implicit */int) var_9)) + (27648))) - (23)))))) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_3 + 2])) ? (var_12) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_1 [i_0 - 1])))) : (min((((((/* implicit */_Bool) (short)12767)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [i_3] [i_1])))), (((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_4))))))));
                            arr_15 [i_4] [i_4] [i_3 - 3] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)15382))))) && (((/* implicit */_Bool) var_3)))) ? (((((var_8) + (9223372036854775807LL))) << ((((((~(((/* implicit */int) (_Bool)1)))) + (23))) - (21))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
                            arr_16 [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_4] = (unsigned short)44549;
                            var_19 += ((/* implicit */_Bool) arr_7 [i_0 + 1] [(short)16] [i_3]);
                        }
                        for (short i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
                        {
                            arr_19 [i_2] [i_3] [i_5] = var_14;
                            arr_20 [i_0] [i_0] [i_0 - 2] [i_0 - 2] [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])) & (((((/* implicit */int) (unsigned short)15382)) | (((/* implicit */int) (short)-12013))))))));
                            arr_21 [i_5] [i_1] [i_5] [i_3 + 3] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0 - 1]))) ^ (var_1)))) ? ((~(((/* implicit */int) (short)32766)))) : (((((/* implicit */int) arr_14 [i_0 + 1])) & (((/* implicit */int) arr_14 [i_5]))))));
                        }
                        for (short i_6 = 0; i_6 < 17; i_6 += 4) /* same iter space */
                        {
                            arr_24 [i_0] [i_0] [i_0] [12LL] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0 - 2]))))) != (((/* implicit */int) (unsigned char)255))));
                            var_20 = ((/* implicit */unsigned long long int) var_10);
                        }
                        for (long long int i_7 = 0; i_7 < 17; i_7 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) (short)12767);
                            var_22 = (unsigned char)3;
                            arr_27 [i_0] [i_2] [i_3 + 2] [i_3] [i_3] [(signed char)0] [i_1] = ((/* implicit */unsigned char) var_8);
                        }
                    }
                    for (short i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_10)))))))) ? (((/* implicit */int) arr_25 [i_8])) : (((/* implicit */int) (unsigned short)44560))));
                        /* LoopSeq 2 */
                        for (signed char i_9 = 1; i_9 < 14; i_9 += 4) /* same iter space */
                        {
                            var_24 = ((/* implicit */short) (unsigned short)50153);
                            arr_33 [i_0] [i_8] [i_0 - 1] [i_0] [i_0 + 1] [i_0 - 1] [i_0 + 1] = ((/* implicit */short) var_3);
                        }
                        for (signed char i_10 = 1; i_10 < 14; i_10 += 4) /* same iter space */
                        {
                            var_25 = ((/* implicit */long long int) ((((/* implicit */int) var_3)) < (((/* implicit */int) (((!(((/* implicit */_Bool) var_9)))) && ((_Bool)1))))));
                            var_26 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)85)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-18887))))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-95)), ((unsigned char)141)))) : (((/* implicit */int) arr_29 [i_0] [i_1]))));
                            var_27 = ((/* implicit */short) (+(((((/* implicit */int) var_3)) + (((/* implicit */int) var_14))))));
                        }
                    }
                    for (short i_11 = 2; i_11 < 15; i_11 += 4) 
                    {
                        var_28 = ((/* implicit */short) ((((((/* implicit */_Bool) -1990757878)) || (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)211))))))) ? (var_2) : ((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_0] [i_1]))) : (var_1)))))));
                        /* LoopSeq 2 */
                        for (signed char i_12 = 1; i_12 < 16; i_12 += 2) /* same iter space */
                        {
                            var_29 = arr_17 [i_0 - 1] [i_0 + 1] [i_0] [i_0];
                            var_30 = -6045362824514617897LL;
                            arr_43 [i_0 - 1] [i_11 + 2] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (short)-28945)) ? (-6909768829828520410LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                            arr_44 [i_11 - 1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)8297))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_0] [i_1] [i_0 - 2]))) : (max((6045362824514617896LL), (((/* implicit */long long int) (~(((/* implicit */int) arr_40 [i_0 - 1] [i_2] [i_11])))))))));
                        }
                        for (signed char i_13 = 1; i_13 < 16; i_13 += 2) /* same iter space */
                        {
                            arr_49 [(unsigned short)2] [i_1] [(unsigned short)2] [i_11] [i_11] = ((/* implicit */signed char) max((((((/* implicit */long long int) arr_45 [i_13] [i_13 + 1] [i_13 - 1] [i_13])) != (var_8))), (((arr_45 [14ULL] [i_13 - 1] [i_13 - 1] [i_13 - 1]) > (arr_45 [i_13 - 1] [i_13 + 1] [i_13 - 1] [i_13 - 1])))));
                            var_31 = ((/* implicit */long long int) arr_35 [i_0 - 2] [i_1] [i_1] [(_Bool)1] [(_Bool)0] [i_11 + 1] [0LL]);
                            var_32 = arr_9 [i_0] [i_0] [(_Bool)0] [i_0 + 1] [i_0];
                            arr_50 [3] [i_1] [i_1] [i_11] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)44549)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned short)0))));
                        }
                    }
                }
                arr_51 [i_0 + 1] [i_0] [i_1] = ((/* implicit */signed char) arr_29 [i_0 - 2] [i_0 + 1]);
            }
        } 
    } 
}
