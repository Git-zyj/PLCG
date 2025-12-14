/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92280
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 1; i_3 < 16; i_3 += 1) /* same iter space */
                    {
                        var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(arr_8 [i_2] [i_2 + 2] [i_3 + 4])))) - (12706668938296587177ULL)));
                        var_17 = (!((_Bool)1));
                        /* LoopSeq 4 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                        {
                            arr_13 [i_4] [i_1 - 2] [i_3] [i_1 - 2] [i_0] = ((/* implicit */long long int) (((+(arr_3 [i_2 - 2] [i_4]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            arr_14 [3LL] [i_3 + 3] [i_3 + 1] [i_3] [i_3 + 3] = ((/* implicit */long long int) (~(((unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1 - 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_2] [i_3 - 1] [i_4])))))));
                            arr_15 [6U] [6U] [i_2 + 2] [(_Bool)1] [i_4] |= (((_Bool)1) ? (((((_Bool) arr_4 [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1 - 1] [i_1] [i_4] [i_4] [i_4]))) : (((unsigned int) arr_1 [i_2])))) : ((((~(arr_0 [i_1 - 1]))) * (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_15)))))));
                            arr_16 [i_3] [(_Bool)1] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) max((arr_9 [i_0] [i_3 + 4] [(_Bool)1] [i_0] [i_1 - 2]), (arr_9 [10LL] [i_3 + 4] [10LL] [i_2 + 2] [i_2 - 3])))) == (((var_6) ? (((/* implicit */int) arr_9 [i_0] [i_3 + 4] [i_0] [i_3 + 2] [i_3])) : (((/* implicit */int) arr_9 [i_4] [i_3 + 3] [i_2] [i_3 + 4] [i_0]))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2232405970177505668LL)) ? (7468682614830344621ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_2 - 2] [i_3 + 1])))))) ? ((~(max((((/* implicit */unsigned int) arr_2 [i_1] [i_1] [i_1])), (arr_7 [(_Bool)0] [i_3] [i_1 - 1] [i_1 - 1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [i_1]))))))));
                            arr_19 [i_0] [i_1] [i_1] [i_3] [i_3] = ((((/* implicit */_Bool) (+(arr_10 [i_2] [i_2 + 2] [i_2 - 3] [i_2 + 2] [19ULL] [i_2])))) ? (((/* implicit */long long int) 2686712155U)) : (((long long int) ((arr_12 [i_1] [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(_Bool)1] [i_1] [i_2]))) : (5824755967295188233ULL)))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_0] [i_1 + 2] [0ULL] [i_3 + 2] [i_6] [0ULL] &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) 4611686018410610688LL)) || (((/* implicit */_Bool) 5927803551893751730ULL)))) ? (((arr_3 [i_1 + 2] [i_2 + 1]) >> (((arr_3 [i_2] [i_1 - 2]) - (4625942229901607042ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_9 [i_0] [i_1] [i_2] [i_3] [i_2]), ((_Bool)0)))))));
                            arr_23 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (3734644100506952946ULL) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))) ? (((/* implicit */unsigned long long int) ((((1046528U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) % (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_0 [i_0]))))))) : (max((var_14), (((/* implicit */unsigned long long int) arr_7 [i_3 + 4] [i_1 + 1] [i_2] [i_2 - 1]))))));
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) max((((/* implicit */unsigned int) min((var_11), (arr_18 [i_1 + 1] [i_1 + 2] [i_1 + 1] [i_2 + 2] [i_2 + 1] [i_3] [i_3 + 3])))), (max((((arr_1 [i_0]) ? (arr_7 [i_2 - 3] [i_2 - 3] [i_2 - 3] [i_2 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) (_Bool)1)))))))));
                            var_20 = ((/* implicit */unsigned int) -6246279525577031975LL);
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (134217720U)))) ? (3734644100506952946ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_2 + 2] [i_2] [i_1 + 1])) ? (((/* implicit */int) ((_Bool) var_1))) : (((/* implicit */int) arr_12 [i_2 + 1] [i_3 - 1])))))));
                            arr_27 [i_0] [i_0] [i_3] [17ULL] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_17 [i_2] [i_3 + 3] [i_2 - 1] [i_2] [i_2] [i_2])), ((-9223372036854775807LL - 1LL))))) && (((/* implicit */_Bool) ((arr_17 [12U] [i_3 + 3] [i_2 - 1] [i_2 + 1] [i_2] [i_2]) ? (3324575784U) : (1057905272U))))));
                        }
                        var_22 = ((/* implicit */_Bool) (+(((((((/* implicit */_Bool) var_0)) ? (-2232405970177505669LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) - (-2232405970177505660LL)))));
                    }
                    for (unsigned int i_8 = 1; i_8 < 16; i_8 += 1) /* same iter space */
                    {
                        arr_30 [1U] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_17 [i_1 - 2] [i_1] [i_1 - 2] [i_1] [i_8 + 2] [i_8])) : (((/* implicit */int) arr_17 [i_0] [18LL] [i_1 - 1] [i_2] [18LL] [i_2])))), ((~(((/* implicit */int) arr_26 [i_8 - 1] [i_8 - 1] [i_8] [i_8 + 3]))))));
                        var_23 |= ((/* implicit */_Bool) (-(min((var_15), (((/* implicit */unsigned long long int) arr_26 [i_0] [i_0] [i_1 - 1] [i_1 - 1]))))));
                    }
                    for (unsigned int i_9 = 1; i_9 < 16; i_9 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned long long int) max(((+((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_1 + 1] [i_1 + 2] [i_2 - 3] [i_9 + 3])) ? (((/* implicit */int) arr_12 [i_2] [i_2 + 1])) : (((/* implicit */int) arr_12 [i_2] [i_2 + 1])))))));
                        var_25 = ((((((/* implicit */int) ((((/* implicit */unsigned long long int) 540214618U)) != (16597079652218606429ULL)))) < (((/* implicit */int) (_Bool)1)))) ? (((long long int) arr_18 [i_9] [i_9] [i_9] [i_9 - 1] [i_2 - 1] [i_1 - 1] [4ULL])) : (((/* implicit */long long int) 3754752678U)));
                    }
                    arr_33 [i_0] [i_1 + 2] [i_2 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_11 [i_1 + 1] [(_Bool)1] [i_1] [(_Bool)1])), (arr_31 [i_1 + 2] [i_2 - 2] [i_2 - 1] [i_2 - 1])))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_0] [18LL] [i_1] [18LL] [18LL] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_7)))) | (max((6456015050471175239ULL), (((/* implicit */unsigned long long int) 3237062024U)))))) : (((unsigned long long int) (_Bool)1))));
                }
            } 
        } 
        arr_34 [i_0] [i_0] = -1LL;
        var_26 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (arr_7 [i_0] [i_0] [i_0] [i_0])))));
    }
    for (unsigned int i_10 = 0; i_10 < 20; i_10 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_11 = 4; i_11 < 19; i_11 += 1) 
        {
            var_27 = ((/* implicit */long long int) ((unsigned long long int) 1078682689U));
            var_28 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? ((-(var_7))) : (arr_39 [i_10] [i_11 + 1] [i_11 - 2])));
            var_29 -= ((/* implicit */_Bool) (((((-(9223372036854775807LL))) + (9223372036854775807LL))) << (((/* implicit */int) arr_28 [i_10] [i_11 - 4] [i_11] [i_11 + 1] [i_11 - 4] [i_11 - 2]))));
            arr_40 [i_10] = ((/* implicit */long long int) ((unsigned int) (_Bool)1));
        }
        arr_41 [i_10] = ((/* implicit */unsigned long long int) (-((~(((((/* implicit */unsigned int) ((/* implicit */int) var_6))) + (var_5)))))));
    }
    var_30 -= ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_15) : (((/* implicit */unsigned long long int) 9223372036854775807LL))))) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) >= (var_10)))))));
    /* LoopNest 3 */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 2) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                {
                    var_31 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) var_15)) ? (8585064650867617394LL) : (8585064650867617419LL))) : (((/* implicit */long long int) ((540214618U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                    var_32 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) -2974861768761247123LL)), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) (_Bool)1))));
                }
            } 
        } 
    } 
    var_33 = ((max((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) > (2686712171U))), (var_6))) ? (var_2) : (var_1));
}
