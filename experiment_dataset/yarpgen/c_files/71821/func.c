/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71821
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                var_11 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) var_0))));
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_2 [(short)9]);
                arr_7 [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned char) (signed char)122));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    arr_11 [i_1] = (+(2147483647));
                    var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) max((var_6), ((signed char)126)))) || (arr_4 [0] [i_1] [(unsigned char)5])))) >= (((/* implicit */int) (_Bool)1))));
                    var_13 = ((/* implicit */unsigned short) max((var_1), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_1 + 3] [i_1])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1 + 2] [i_1]))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_3 = 2; i_3 < 15; i_3 += 3) 
                    {
                        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (unsigned char)104))));
                        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) var_9)) / (var_3)))))))));
                    }
                    for (short i_4 = 2; i_4 < 16; i_4 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 3) 
                        {
                            arr_19 [i_1] [i_4] [i_4 + 1] [i_2] [i_1 + 1] [i_1] = ((/* implicit */int) var_1);
                            var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) var_8))));
                            arr_20 [(unsigned char)6] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */short) ((((/* implicit */int) var_6)) >= (var_10)))), (var_0)))) && (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
                            var_17 = max((min((((/* implicit */unsigned long long int) (+(var_10)))), (var_1))), (((/* implicit */unsigned long long int) (unsigned char)0)));
                        }
                        for (int i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            arr_23 [i_6] [i_1] [i_4 - 1] [i_2] [i_1] [i_0] = ((/* implicit */short) (~(max((((((/* implicit */int) (unsigned char)102)) - (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) max(((unsigned char)154), ((unsigned char)245))))))));
                            arr_24 [i_1] [i_4 - 1] [i_2] [i_2] [(short)4] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -3866176417084863025LL)) || ((_Bool)1))) ? ((~(((/* implicit */int) (unsigned char)243)))) : (((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) var_7)))))))) ? (((/* implicit */long long int) -380632615)) : (max((((/* implicit */long long int) arr_22 [i_1] [(_Bool)1] [i_0] [i_2] [i_1] [i_1])), (var_3)))));
                        }
                        arr_25 [i_2] [i_1] = ((/* implicit */long long int) min((min((((/* implicit */unsigned int) var_4)), (max((var_9), (((/* implicit */unsigned int) (unsigned char)255)))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_1] [i_2] [i_0] [i_0])))))));
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_1 [i_1 + 2] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)107)), (arr_8 [i_1 + 3] [i_1 + 2]))))) : (max((var_1), (((/* implicit */unsigned long long int) var_9))))));
                        arr_26 [i_0] [i_1 - 2] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (~((~(-171269254)))))), (((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */long long int) arr_13 [i_0] [i_1] [i_4]))))));
                        var_19 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) 3534288277U)), (max((((/* implicit */unsigned long long int) max((var_0), (((/* implicit */short) arr_0 [(short)1]))))), (min((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (18446744073709551606ULL)))))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        arr_29 [i_7] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (~((~((+(((/* implicit */int) (short)32752))))))));
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) max((((/* implicit */unsigned long long int) var_7)), (max((18446744073709551601ULL), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)187)), (var_5)))))))))));
                        arr_30 [i_0] [i_1] [(_Bool)1] [i_0] [(unsigned short)16] [i_0] = ((/* implicit */unsigned int) var_0);
                    }
                }
                var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (arr_27 [(unsigned char)10] [i_1] [i_1 - 1]) : (((/* implicit */unsigned long long int) var_3))))) ? (min(((-(((/* implicit */int) (unsigned short)1)))), (((/* implicit */int) (unsigned short)1)))) : ((~(((/* implicit */int) (unsigned short)11540))))));
            }
        } 
    } 
    var_22 ^= ((/* implicit */short) var_4);
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (max((2633589945U), (((/* implicit */unsigned int) var_0)))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), ((signed char)-21)))))));
}
