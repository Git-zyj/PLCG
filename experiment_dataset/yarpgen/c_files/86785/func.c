/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86785
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
    for (unsigned int i_0 = 4; i_0 < 6; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_9 [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (11LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1])))))) & (min((var_8), (((/* implicit */unsigned long long int) 1152921504606838784LL))))))));
                    var_12 += ((/* implicit */_Bool) ((arr_5 [(signed char)6]) ? (((((/* implicit */long long int) -544178760)) / ((+(arr_6 [i_0] [i_0 - 1] [i_1] [6LL]))))) : (min((-2226746385983800299LL), (((/* implicit */long long int) arr_4 [i_0 - 2] [i_1 - 2] [i_1 - 2]))))));
                    arr_10 [(_Bool)1] [i_1] [(short)4] [i_2] |= ((/* implicit */_Bool) (short)-16802);
                }
                for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_4 = 1; i_4 < 9; i_4 += 1) /* same iter space */
                    {
                        var_13 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1 + 1] [i_1 + 1]))) : (arr_6 [i_0] [i_3] [i_1] [i_0])));
                        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) arr_3 [i_4 + 1]))));
                    }
                    /* vectorizable */
                    for (signed char i_5 = 1; i_5 < 9; i_5 += 1) /* same iter space */
                    {
                        var_15 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) -9223372036854775801LL)) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) arr_7 [i_5] [i_3] [i_1] [7U])) ^ (((/* implicit */int) var_4))))));
                        /* LoopSeq 4 */
                        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            arr_22 [i_0] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */unsigned char) -4856256526285363603LL);
                            arr_23 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) -9223372036854775801LL)) < (arr_17 [i_1 - 1])));
                            var_16 = arr_19 [i_6] [i_5] [i_1 - 2] [i_0];
                        }
                        for (unsigned int i_7 = 1; i_7 < 9; i_7 += 1) /* same iter space */
                        {
                            arr_26 [6U] [i_5] [i_3] [6U] [6U] |= ((/* implicit */unsigned short) (((_Bool)1) ? (-3589622952059536212LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)123)))));
                            var_17 -= ((/* implicit */short) (!(((((/* implicit */int) (unsigned char)179)) >= (((/* implicit */int) (short)5960))))));
                            var_18 += ((/* implicit */unsigned long long int) (+(arr_20 [i_0 + 2] [i_7] [i_7 - 1] [i_0 + 2] [5U])));
                        }
                        for (unsigned int i_8 = 1; i_8 < 9; i_8 += 1) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_1 - 2] [i_3] [i_5 + 1] [i_5 + 1])) % (((/* implicit */int) ((arr_17 [i_3]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-23))))))));
                            arr_30 [i_0] [i_0] [i_1] [i_0] [i_0] [i_5 + 1] [i_8] = ((/* implicit */int) ((unsigned long long int) arr_29 [i_1 - 2] [i_5 + 1] [i_0] [i_5 + 1]));
                            var_20 -= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)84)) ? (((/* implicit */int) arr_4 [i_0] [i_3] [i_5])) : (((/* implicit */int) (unsigned char)181))))));
                            arr_31 [i_0] [(short)0] [(_Bool)1] [(short)8] = ((/* implicit */unsigned int) (+(544178760)));
                        }
                        for (unsigned char i_9 = 0; i_9 < 10; i_9 += 1) 
                        {
                            var_21 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)26)) ? (((/* implicit */unsigned long long int) 5003008270792669641LL)) : (17780982196635016157ULL)));
                            var_22 = ((/* implicit */signed char) 544178760);
                            arr_35 [i_0] [i_5] [i_3] [i_1] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))));
                        }
                        var_23 = ((/* implicit */_Bool) max((var_23), (((_Bool) arr_20 [(_Bool)1] [i_5 + 1] [i_5] [i_5] [i_5]))));
                        arr_36 [i_0] [i_3] [i_0] [i_0] = ((/* implicit */short) ((unsigned long long int) arr_33 [(unsigned short)7] [(unsigned short)7] [i_0] [i_0] [i_0 - 4]));
                    }
                    for (signed char i_10 = 1; i_10 < 9; i_10 += 1) /* same iter space */
                    {
                        var_24 = max((((/* implicit */unsigned long long int) ((((12737823494579980668ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-75))))) ? (((var_4) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))), (max((((/* implicit */unsigned long long int) 2226746385983800297LL)), (min((17159132587652851188ULL), (((/* implicit */unsigned long long int) -544178750)))))));
                        arr_39 [i_0] [(signed char)9] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */signed char) arr_13 [i_10 + 1] [i_1 + 1] [i_0 + 2])), (var_3)))) & (((/* implicit */int) min((arr_13 [i_10 + 1] [i_0 + 2] [i_0 + 2]), (arr_13 [i_10 + 1] [i_3] [i_0 + 2]))))));
                    }
                    arr_40 [i_0] [(short)4] [i_1] [i_0] = (unsigned short)24159;
                }
                var_25 |= ((/* implicit */_Bool) (+(((((/* implicit */long long int) 1)) - (arr_38 [i_1] [(unsigned short)0] [i_1 + 1] [i_0 - 4] [(unsigned short)0] [i_0])))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */int) var_0)) / (((/* implicit */int) var_0))))))) >= (min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) + (var_8))), (var_8)))));
}
