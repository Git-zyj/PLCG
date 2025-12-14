/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86369
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
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_5 [i_0] [10ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_3 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (17559413564909424822ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (max((((887330508800126793ULL) >> (((/* implicit */int) (_Bool)1)))), (((/* implicit */unsigned long long int) ((unsigned int) arr_2 [i_1] [i_1] [i_0])))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_0])) / (((/* implicit */int) arr_3 [i_0])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 *= ((/* implicit */unsigned char) ((arr_10 [i_4] [i_4] [(signed char)12] [(signed char)12] [i_1] [i_0]) % (((((/* implicit */_Bool) 2305843009213693888ULL)) ? (((/* implicit */int) arr_8 [i_2] [i_4] [(unsigned char)8] [i_3])) : (((/* implicit */int) (_Bool)1))))));
                                var_20 += ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [14U] [i_3] [i_1])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) % (17559413564909424822ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [(unsigned char)12]))));
                                arr_14 [i_1] [i_1] [i_2] [i_2] [i_4] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((17559413564909424843ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_2])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)3840)) ? (((/* implicit */int) arr_7 [i_2] [i_3])) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3]))))) : (((((/* implicit */_Bool) arr_2 [i_4] [i_4] [i_4])) ? (17862658432401278549ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)12)))))));
                                var_21 *= ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) <= (arr_6 [i_4] [(unsigned char)8] [(unsigned char)8] [i_0]))) ? (((887330508800126789ULL) | (((/* implicit */unsigned long long int) 262080U)))) : (((/* implicit */unsigned long long int) arr_10 [i_2] [i_2] [i_2] [0ULL] [i_4] [i_1]))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)-60)) ? (-7475114303584163006LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) % (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2] [i_4] [i_3] [i_2] [i_1] [i_2])))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    var_22 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) 11932588581946346931ULL)) ? (arr_6 [i_0] [i_5] [i_5] [i_5]) : (arr_4 [i_0]))) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_5] [i_5] [i_0] [i_1])) && (((/* implicit */_Bool) var_5))));
                    var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-123)) || (((/* implicit */_Bool) var_9))))) > (((/* implicit */int) var_0)))))));
                    var_25 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 1505225070U)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1])))))));
                }
            }
        } 
    } 
    var_26 *= ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) <= ((~(((/* implicit */int) var_6))))));
    var_27 += ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
    var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((/* implicit */int) (signed char)60)) : (((/* implicit */int) var_6)))))));
    var_29 = var_13;
}
