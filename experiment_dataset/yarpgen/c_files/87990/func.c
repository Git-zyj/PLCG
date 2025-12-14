/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87990
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
    var_14 -= ((/* implicit */unsigned long long int) ((signed char) ((((16058767154392330809ULL) - (((/* implicit */unsigned long long int) var_12)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_13)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned short) (+(((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_1])) < (((/* implicit */int) var_13))))), (arr_5 [i_0] [i_1] [i_1]))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 2; i_2 < 18; i_2 += 1) 
                {
                    arr_9 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (unsigned short)65458)))) + (((/* implicit */int) arr_4 [i_2] [i_1] [i_0]))))) == (((unsigned long long int) (signed char)18))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_16 &= var_5;
                                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) max((((((/* implicit */int) (signed char)-18)) / (768357245))), (768357247))))));
                                var_18 = max((2387976919317220796ULL), (((/* implicit */unsigned long long int) -1454177649)));
                                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65481))) + (3175219797U)))) ? (((((/* implicit */int) arr_4 [i_0] [11] [i_2])) / (var_8))) : ((~(((/* implicit */int) (_Bool)0)))))), (min((-5384078), (((/* implicit */int) (unsigned char)95)))))))));
                            }
                        } 
                    } 
                }
                var_20 = min((5552754057676337153ULL), (3189191538447225986ULL));
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    arr_18 [i_0] [i_1] [(signed char)11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 16058767154392330809ULL)) && (((/* implicit */_Bool) 3189191538447225993ULL))));
                    var_21 = ((/* implicit */unsigned char) ((((unsigned long long int) arr_12 [i_1] [i_1] [i_0])) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-18)))));
                    arr_19 [i_1] = ((/* implicit */signed char) ((max(((!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [7ULL])))), (((((/* implicit */_Bool) arr_11 [i_0] [15] [i_1] [i_0])) || (((/* implicit */_Bool) arr_2 [4U])))))) && (((/* implicit */_Bool) arr_11 [i_5] [i_1] [i_0] [i_0]))));
                    arr_20 [i_0] [i_1] [i_5] &= max((((((/* implicit */int) arr_4 [i_5] [i_0] [i_0])) & (((/* implicit */int) arr_4 [i_5] [i_0] [i_0])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_5])) && (((/* implicit */_Bool) var_8))))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 4) 
                {
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_15 [i_0] [(unsigned short)0] [i_6 + 1] [i_7]))));
                            var_23 = ((/* implicit */int) ((max((((/* implicit */long long int) 2721289130U)), (max((((/* implicit */long long int) (signed char)35)), (arr_22 [i_7] [i_6] [i_1] [i_0]))))) & (((/* implicit */long long int) max((((/* implicit */int) max((arr_23 [i_0] [i_0] [i_0]), (arr_4 [i_0] [i_0] [13ULL])))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9)))))))));
                            /* LoopSeq 1 */
                            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                            {
                                var_24 |= max((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_13 [i_0] [i_1] [(short)16] [i_8] [i_8])), (var_12)))) && (((/* implicit */_Bool) -768357246))))), (((int) ((var_12) < (((/* implicit */long long int) ((/* implicit */int) arr_0 [12])))))));
                                var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) arr_3 [i_0]))))) != ((+(((/* implicit */int) (unsigned short)64607)))))))));
                            }
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) max((var_12), (((/* implicit */long long int) ((_Bool) arr_6 [(short)14] [i_1] [(short)14])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((1573678166U), (((/* implicit */unsigned int) var_13))))) && (((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_1))))))) : (((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-27)), ((unsigned char)141)))) >> (((((((((/* implicit */int) var_2)) + (2147483647))) << (((((/* implicit */int) arr_2 [i_6])) - (38))))) - (2147483523))))))))));
                            /* LoopSeq 1 */
                            for (unsigned long long int i_9 = 2; i_9 < 18; i_9 += 4) 
                            {
                                var_27 = ((/* implicit */unsigned int) min((((/* implicit */int) ((min((arr_28 [(unsigned char)9] [i_1] [i_6] [i_1] [(short)9] [i_9 - 2] [i_9]), (((/* implicit */unsigned long long int) arr_13 [i_1] [i_9] [i_6 + 1] [i_7] [i_9])))) != (((unsigned long long int) 1))))), (((((arr_26 [i_0]) ^ (((/* implicit */int) (signed char)-111)))) ^ (((/* implicit */int) max(((unsigned char)132), (((/* implicit */unsigned char) var_11)))))))));
                                arr_34 [i_0] [i_9] [i_7] &= ((/* implicit */short) max((((((/* implicit */int) arr_15 [12U] [i_6] [i_6 - 1] [i_7 - 1])) % (((/* implicit */int) arr_15 [(signed char)8] [(short)9] [i_6 + 3] [i_7 - 1])))), (((/* implicit */int) ((signed char) arr_15 [i_1] [i_1] [i_6 - 1] [i_7 - 1])))));
                                var_28 &= ((/* implicit */unsigned int) max((((((/* implicit */long long int) ((/* implicit */int) arr_33 [i_9 + 1] [i_9 + 1] [i_7 - 1] [i_7] [i_6 + 1] [i_0] [i_0]))) ^ (((((/* implicit */long long int) ((/* implicit */int) (signed char)-36))) ^ (arr_24 [i_7 - 1] [i_1] [i_0]))))), (min((((/* implicit */long long int) (+(((/* implicit */int) var_9))))), (((((/* implicit */long long int) 3427189385U)) & (arr_24 [i_1] [i_7] [i_9 - 2])))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
