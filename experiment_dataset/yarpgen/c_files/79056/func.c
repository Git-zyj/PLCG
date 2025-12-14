/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79056
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
    var_17 = ((/* implicit */signed char) ((unsigned short) var_1));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_2 [i_2 + 2]))) ? (min((arr_2 [i_2 - 1]), (arr_2 [i_2 + 1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2 - 1])))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        var_19 = ((/* implicit */signed char) ((unsigned int) min(((unsigned short)14004), (((/* implicit */unsigned short) (short)26845)))));
                        arr_11 [i_0] [7ULL] [(short)10] = ((/* implicit */unsigned short) arr_8 [i_1] [(signed char)16] [i_3]);
                        var_20 = ((/* implicit */unsigned char) ((signed char) max((var_6), (((/* implicit */unsigned long long int) (short)-26846)))));
                        /* LoopSeq 4 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
                        {
                            arr_16 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((arr_10 [i_3] [i_1] [(signed char)10] [i_3]) ? (((/* implicit */int) (short)26845)) : (((/* implicit */int) (short)-26845)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_4] [i_3 + 3] [i_0] [i_0])) || (((/* implicit */_Bool) var_7)))))))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) 1U)))) && (arr_14 [i_0] [i_0] [i_0] [i_0])))) : (arr_4 [i_4] [i_4] [i_4 - 1])));
                            arr_17 [(short)3] [i_1] [(short)3] = ((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (short)-26845)))), (((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) arr_13 [i_3])))))) || (((/* implicit */_Bool) min((((/* implicit */int) arr_7 [i_0] [i_2 - 1] [i_0] [i_3 + 1])), (((int) var_15)))))));
                        }
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned long long int) (~(((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_20 [i_5] [i_3] [i_2] [i_1] [i_5])))) | (((/* implicit */int) (_Bool)1))))));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) max((var_13), (0ULL))))) ? (((/* implicit */int) ((unsigned char) (signed char)6))) : (((/* implicit */int) ((unsigned char) var_12)))));
                            var_23 = ((/* implicit */unsigned short) (((+(arr_2 [i_2 + 2]))) / (((/* implicit */int) min((((/* implicit */short) var_7)), (arr_3 [i_0]))))));
                        }
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_24 = ((/* implicit */_Bool) arr_1 [i_0] [i_1]);
                            arr_23 [i_6] [i_1] = ((/* implicit */unsigned int) ((short) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [4ULL] [i_1] [i_2 + 1] [i_3] [i_3 + 2] [i_6 - 1]))) + (2937207741U)))));
                            var_25 = min(((!(arr_14 [i_0] [i_0] [i_0] [i_3]))), ((!(((/* implicit */_Bool) var_12)))));
                        }
                        /* vectorizable */
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            var_26 += ((/* implicit */long long int) 3196906369U);
                            arr_26 [i_3] [(signed char)15] [i_1] [i_0] = arr_21 [i_2 + 2] [i_2] [i_1] [i_3 + 1] [i_3] [i_3 + 1] [i_7 - 1];
                        }
                        arr_27 [5] [(unsigned char)9] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) (short)-26846)))))) ? (((max((((/* implicit */long long int) (unsigned char)252)), (var_15))) ^ (((/* implicit */long long int) var_12)))) : (((long long int) ((arr_15 [i_0]) ^ (((/* implicit */unsigned long long int) var_16)))))));
                    }
                    var_27 = ((/* implicit */signed char) (-(((/* implicit */int) var_9))));
                }
            } 
        } 
        var_28 = ((((((((/* implicit */_Bool) 0LL)) && (((/* implicit */_Bool) var_6)))) || ((!((_Bool)1))))) || (((/* implicit */_Bool) min((min((((/* implicit */short) (_Bool)1)), ((short)4064))), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)127)) && ((_Bool)0))))))));
    }
    /* LoopSeq 2 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_29 = max((((/* implicit */unsigned int) ((_Bool) ((arr_5 [i_8]) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_4))))), ((~(((unsigned int) var_9)))));
        var_30 = ((/* implicit */unsigned short) var_11);
        var_31 = ((/* implicit */signed char) arr_22 [7] [i_8] [7] [i_8] [(_Bool)1] [i_8]);
    }
    for (unsigned short i_9 = 0; i_9 < 20; i_9 += 4) 
    {
        var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) max((var_14), (((((/* implicit */_Bool) min((var_16), (((/* implicit */unsigned int) arr_4 [18LL] [i_9] [(short)12]))))) ? ((~(var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_8 [i_9] [i_9] [1U])))))))))));
        var_33 = ((/* implicit */short) min((((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_9] [5ULL] [i_9] [i_9] [i_9] [i_9]))) / (var_4)))), (min((((/* implicit */unsigned long long int) arr_33 [i_9] [18])), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_9]))) / (var_13)))))));
    }
    var_34 = ((/* implicit */short) var_5);
}
