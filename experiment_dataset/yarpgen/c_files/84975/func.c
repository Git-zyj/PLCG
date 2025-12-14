/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84975
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
    var_13 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */long long int) var_9)) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4508793885710016937LL)))))) : (var_10)))));
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (~(((/* implicit */int) arr_0 [i_0])))))));
        arr_2 [i_0] [(unsigned char)6] = ((/* implicit */unsigned int) arr_1 [i_0]);
        arr_3 [i_0] [i_0] |= ((((/* implicit */_Bool) (unsigned short)9596)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40758))) : (var_3));
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
    {
        arr_6 [15LL] [i_1] = ((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) (~(4508793885710016937LL)))))));
        var_16 |= ((/* implicit */unsigned int) 4508793885710016937LL);
    }
    for (signed char i_2 = 0; i_2 < 17; i_2 += 2) /* same iter space */
    {
        arr_11 [i_2] |= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) var_6))) ? (min((min((6024794060572677943LL), (((/* implicit */long long int) arr_8 [i_2] [i_2])))), (((/* implicit */long long int) arr_0 [i_2])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)60088)) : (((/* implicit */int) arr_1 [i_2])))))));
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_3])) ? (var_9) : (arr_15 [i_5] [i_2] [i_2]))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) 
                        {
                            var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_14 [i_2] [i_4] [i_5])))) ? ((~(arr_16 [i_5]))) : (((/* implicit */long long int) arr_17 [i_4] [i_4]))));
                            arr_22 [i_5] = ((/* implicit */unsigned short) arr_9 [i_2]);
                        }
                        for (unsigned int i_7 = 0; i_7 < 17; i_7 += 1) 
                        {
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (+(-4508793885710016937LL))))));
                            arr_26 [(unsigned short)9] [i_5] [(unsigned short)9] [i_5] [(unsigned short)9] = ((/* implicit */unsigned int) 6024794060572677943LL);
                        }
                        var_20 = ((/* implicit */signed char) 576460752303415296ULL);
                        var_21 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_5 [i_4] [i_5]))));
                    }
                    for (unsigned int i_8 = 3; i_8 < 14; i_8 += 4) 
                    {
                        var_22 = ((/* implicit */_Bool) max((max((((long long int) var_8)), ((-(4508793885710016936LL))))), (min((((/* implicit */long long int) arr_25 [i_2] [i_8 - 2] [i_8 - 3] [i_8] [i_8 + 2])), (var_10)))));
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned int) var_1))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)24166)), ((unsigned short)5448)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_8] [i_3] [i_8] [i_4] [i_8 + 1] [i_2]))))) : (max((((/* implicit */int) (unsigned short)12746)), (((((/* implicit */int) (unsigned char)171)) - (-1)))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_9 = 0; i_9 < 17; i_9 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-85))))) ? (((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21))))) : (((((/* implicit */_Bool) -712319807673120135LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (576460752303415296ULL)))));
                        var_25 = ((/* implicit */int) max((var_25), (((((((/* implicit */int) ((signed char) arr_19 [(short)10] [i_3] [i_4] [i_4] [5LL] [(unsigned short)6] [(unsigned char)16]))) + (2147483647))) << (((((unsigned int) arr_10 [i_4] [(signed char)0])) - (4294965852U)))))));
                        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 17; i_10 += 1) 
                    {
                        arr_38 [i_10] [i_10] [i_10] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) >> (((((/* implicit */int) ((unsigned char) var_10))) - (37)))))) ? (((/* implicit */unsigned long long int) max((4179725950353930939LL), (((/* implicit */long long int) (unsigned short)34))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (max((((/* implicit */unsigned long long int) 4508793885710016935LL)), (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)179)))))));
                        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)10)) ^ (((/* implicit */int) arr_29 [i_2]))))) ? (min((576460752303415296ULL), (((/* implicit */unsigned long long int) arr_15 [i_4] [i_3] [i_2])))) : (((/* implicit */unsigned long long int) (-(6024794060572677943LL)))))))));
                    }
                    var_28 = ((/* implicit */int) max((((((/* implicit */_Bool) max((arr_4 [i_3]), (((/* implicit */unsigned long long int) var_9))))) ? (max((((/* implicit */long long int) var_1)), (-4508793885710016958LL))) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (-4508793885710016941LL)));
                    arr_39 [i_2] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_9 [i_2])), (-4508793885710016920LL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)77)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (unsigned short)65515)))))));
                    var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */int) (unsigned short)23707)) : (((/* implicit */int) (unsigned short)896))))))));
                    var_30 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)78)) ? (((/* implicit */int) arr_31 [i_4] [i_3] [i_2])) : (((/* implicit */int) arr_31 [i_2] [i_3] [i_4]))))) ? (((((/* implicit */_Bool) (unsigned short)5298)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_2] [i_2] [i_4]))) : (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21))));
                }
            } 
        } 
    }
    for (signed char i_11 = 0; i_11 < 17; i_11 += 2) /* same iter space */
    {
        var_31 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)5448)), (min((var_4), (((/* implicit */unsigned int) arr_12 [i_11]))))));
        arr_42 [i_11] [i_11] = ((/* implicit */unsigned short) min((((unsigned long long int) var_10)), (((/* implicit */unsigned long long int) (unsigned short)5462))));
        arr_43 [i_11] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_29 [i_11])) ? (((/* implicit */long long int) ((var_4) >> (((arr_36 [10LL] [i_11] [i_11] [i_11] [i_11] [i_11]) - (99666114U)))))) : (((((/* implicit */_Bool) (unsigned short)15032)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (4508793885710016942LL))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_19 [i_11] [i_11] [8ULL] [i_11] [i_11] [i_11] [i_11])))) | (var_12))))));
        arr_44 [i_11] = ((((((_Bool) var_0)) ? (((/* implicit */long long int) var_4)) : (min((-4508793885710016925LL), (((/* implicit */long long int) var_7)))))) ^ (((/* implicit */long long int) ((/* implicit */int) max((((((/* implicit */int) var_11)) <= (((/* implicit */int) arr_18 [i_11])))), ((!(((/* implicit */_Bool) 4508793885710016935LL)))))))));
    }
    var_32 = ((/* implicit */int) ((unsigned short) ((((var_9) != (var_12))) ? (((((/* implicit */_Bool) (unsigned short)15037)) ? (((/* implicit */unsigned long long int) 2951023260174923332LL)) : (17870283321406136322ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23))) : (var_0)))))));
    var_33 = ((/* implicit */signed char) var_5);
}
