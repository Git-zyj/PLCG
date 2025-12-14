/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87463
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (524160U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [6ULL])))))));
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [4LL])) : (((/* implicit */int) var_0)))))))));
    }
    /* LoopNest 3 */
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        for (unsigned short i_2 = 1; i_2 < 10; i_2 += 3) 
        {
            for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                {
                    arr_10 [i_3] = ((/* implicit */unsigned short) (((~(arr_8 [i_3]))) + (((/* implicit */unsigned int) ((/* implicit */int) ((arr_8 [i_3]) >= (arr_8 [i_3])))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_4 = 1; i_4 < 10; i_4 += 1) 
                    {
                        arr_14 [5ULL] [i_2] [i_3] [i_3] [i_2] [i_4 + 1] = ((/* implicit */short) var_2);
                        arr_15 [i_1] [i_1] [i_3] [i_3] = ((/* implicit */unsigned long long int) max((((var_4) % (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_4]))))), (arr_8 [i_3])));
                        var_15 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) min((var_6), (((/* implicit */int) arr_1 [i_3]))))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (signed char)13))))), (((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_5 [i_2 + 1])))) ? (arr_5 [i_1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_1] [7] [i_3])) ? (-2147483621) : (((/* implicit */int) (unsigned char)36))))))))));
                        var_16 = ((/* implicit */long long int) arr_8 [i_3]);
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_18 [i_1] [i_2] [i_3] [i_5] = ((/* implicit */unsigned char) arr_7 [i_5]);
                        arr_19 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) var_9);
                        arr_20 [i_1] [i_2] [i_3] [i_3] [i_3] [i_5] = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) arr_13 [i_2 - 1] [i_3] [(signed char)4] [i_5] [(unsigned short)1])), (arr_9 [i_2 + 1] [i_2] [i_3]))), (((/* implicit */unsigned long long int) ((short) arr_9 [i_2 - 1] [i_2 - 1] [i_3])))));
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_2 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1]))) : ((-(((unsigned int) (_Bool)1))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            arr_23 [i_3] [i_2 - 1] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) ((2841240927U) == (32736U)))) << (((((((/* implicit */unsigned int) -954907487)) ^ (4239752277U))) - (1000356082U)))));
                            var_18 = ((/* implicit */unsigned short) ((short) arr_1 [i_3]));
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (arr_3 [i_3]) : (arr_9 [i_3] [i_3] [i_3])));
                        }
                        for (unsigned short i_7 = 1; i_7 < 10; i_7 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned short) ((_Bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) | (arr_9 [i_3] [i_3] [i_3]))))));
                            arr_26 [(unsigned char)3] [i_2] [i_3] [i_5] [i_3] = ((/* implicit */int) arr_2 [i_7 + 1]);
                            arr_27 [i_1] [i_3] = ((/* implicit */int) var_12);
                            arr_28 [i_1] [i_2] [i_3] [i_2] [i_7] = ((/* implicit */unsigned char) 3877817729U);
                            arr_29 [i_1] [i_2 + 1] [i_3] [i_2 + 1] [i_7] = ((/* implicit */unsigned char) (_Bool)0);
                        }
                    }
                    /* vectorizable */
                    for (unsigned int i_8 = 1; i_8 < 8; i_8 += 4) 
                    {
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_3] [i_2] [i_2] [i_8] [i_3] [i_1])) && (((/* implicit */_Bool) arr_25 [5ULL] [i_2 - 1] [5ULL] [i_3] [i_8] [i_8 - 1])))))));
                        var_22 = ((((/* implicit */int) arr_13 [i_3] [i_3] [i_2 + 1] [i_8 - 1] [i_2 + 1])) << (((/* implicit */int) arr_13 [i_1] [i_2 + 1] [i_2 + 1] [i_8 - 1] [i_1])));
                    }
                    arr_32 [i_1] [i_1] [i_3] [i_3] = ((/* implicit */_Bool) arr_22 [i_3] [i_2] [i_2 + 1] [i_3]);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) var_8))));
    var_24 = ((/* implicit */unsigned long long int) var_0);
    var_25 = ((/* implicit */unsigned char) var_9);
}
