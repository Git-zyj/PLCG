/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83036
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
    var_15 = ((/* implicit */int) 7U);
    var_16 = ((((/* implicit */long long int) -983372225)) / (261735666937980006LL));
    var_17 += ((/* implicit */unsigned int) (~(max((var_5), (4876743376423113701ULL)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                var_18 -= ((/* implicit */_Bool) (((~(((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))))) & (((/* implicit */unsigned long long int) ((((arr_2 [3LL] [3LL]) >= (arr_2 [i_0] [i_0]))) ? (((unsigned int) arr_0 [i_1 - 1])) : (((/* implicit */unsigned int) 1128059244)))))));
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (max((arr_2 [i_1 - 1] [i_1 + 2]), (arr_2 [i_1 + 1] [i_1 + 2]))) : (var_14)));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned char i_3 = 3; i_3 < 8; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                            {
                                arr_15 [i_0] [i_1 + 1] [i_3] [i_3] [i_4] = ((/* implicit */unsigned char) arr_4 [i_1 + 1] [i_1] [i_1 - 1] [i_3 - 3]);
                                var_20 -= ((/* implicit */_Bool) (+(max((((/* implicit */long long int) ((4294967289U) <= (((/* implicit */unsigned int) -1))))), ((~(-1152921504606846976LL)))))));
                                var_21 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)144)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)177))) : (arr_12 [i_0] [i_1 + 1] [i_2] [i_2] [i_2] [i_3 + 2] [1ULL]))) & (arr_12 [i_1 - 1] [i_1 + 1] [9LL] [(unsigned char)0] [i_3] [i_3 + 2] [i_3])));
                                arr_16 [i_3] [i_3] [i_2] [i_3] = (((!(((/* implicit */_Bool) (unsigned char)254)))) ? (((/* implicit */int) ((arr_1 [i_0]) == (arr_1 [i_2])))) : (((/* implicit */int) arr_7 [i_0])));
                            }
                            arr_17 [i_3 + 1] [i_3] [i_3] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1152921504606846975LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-8538)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    for (long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        {
                            arr_24 [6LL] [i_5] [5] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (short)0))) / (1152921504606846960LL)));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (long long int i_7 = 0; i_7 < 10; i_7 += 4) 
                            {
                                var_22 = ((/* implicit */unsigned char) ((arr_7 [i_1 - 1]) ? (((/* implicit */int) arr_7 [i_1 - 1])) : (((/* implicit */int) arr_7 [i_1 + 1]))));
                                var_23 ^= ((/* implicit */unsigned int) (signed char)7);
                                arr_27 [i_0] [i_0] [i_0] [i_5] [i_6] [i_7] |= ((/* implicit */unsigned char) ((8792763198701682660LL) & (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1 + 2] [i_1] [6LL])))));
                                arr_28 [i_5] [i_1] [i_5] [i_5] [i_7] = ((/* implicit */_Bool) (short)0);
                                var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 3157461008U)) ^ (var_0))))));
                            }
                            var_25 = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) max((arr_11 [i_0] [i_5]), (((/* implicit */int) (short)8538))))), (arr_5 [i_0] [i_1 - 1] [i_5]))), (((/* implicit */long long int) ((((/* implicit */unsigned int) -146314577)) ^ (3613595351U))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_8 = 4; i_8 < 15; i_8 += 3) 
    {
        for (long long int i_9 = 3; i_9 < 15; i_9 += 2) 
        {
            {
                var_26 -= ((/* implicit */unsigned char) min((0ULL), (((/* implicit */unsigned long long int) 8792763198701682648LL))));
                var_27 -= ((/* implicit */unsigned long long int) min((min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_14)) : (5972849662048103569LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_9])) ? (((/* implicit */int) (short)-17575)) : (((/* implicit */int) arr_29 [i_8 - 2] [i_8]))))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8)))) >= (((/* implicit */int) var_1)))))));
            }
        } 
    } 
}
