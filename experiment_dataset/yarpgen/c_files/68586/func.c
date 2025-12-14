/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68586
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
    var_16 = ((/* implicit */unsigned char) var_7);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) arr_0 [i_0]))));
        var_18 = ((/* implicit */short) max((var_18), (var_11)));
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 20; i_1 += 3) 
    {
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_4 [i_1])))) ? (((/* implicit */unsigned long long int) arr_3 [i_1 - 1])) : (((arr_2 [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))))))))));
        arr_6 [i_1] = ((/* implicit */_Bool) (~(arr_2 [i_1 + 3])));
        arr_7 [i_1] = ((/* implicit */unsigned short) arr_3 [18U]);
        arr_8 [i_1] = ((/* implicit */unsigned char) ((arr_2 [i_1 + 3]) ^ (arr_2 [i_1 + 1])));
    }
    for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 3) 
    {
        arr_11 [i_2 + 1] = ((/* implicit */unsigned long long int) arr_9 [i_2]);
        var_20 = ((/* implicit */short) arr_2 [i_2]);
        arr_12 [(unsigned char)3] [16LL] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (arr_2 [i_2])));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 3) 
        {
            for (int i_4 = 1; i_4 < 16; i_4 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 1; i_5 < 14; i_5 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_6 = 4; i_6 < 15; i_6 += 3) /* same iter space */
                        {
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) max((((((/* implicit */long long int) arr_17 [i_3 - 1] [i_3 + 1] [(_Bool)0])) % (arr_15 [i_3 - 1] [0U] [i_3 - 1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_2 - 1])) || (((/* implicit */_Bool) arr_13 [i_2 - 1]))))))))));
                            var_22 = ((/* implicit */long long int) arr_16 [i_6]);
                        }
                        for (unsigned int i_7 = 4; i_7 < 15; i_7 += 3) /* same iter space */
                        {
                            arr_25 [i_2] [i_2 - 1] [i_3 - 1] [i_2 - 1] [(unsigned short)9] [i_4] [i_7 - 4] = ((/* implicit */signed char) (~((+(((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * (arr_19 [i_7 + 2] [(signed char)10])))))));
                            arr_26 [(unsigned char)0] [(unsigned char)8] [i_4 + 1] [i_4] [i_4] &= ((/* implicit */signed char) arr_2 [i_7 - 4]);
                        }
                        /* LoopSeq 2 */
                        for (int i_8 = 4; i_8 < 17; i_8 += 3) 
                        {
                            var_23 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((+(arr_17 [(signed char)13] [i_4] [i_4])))))) ? (arr_15 [i_2 - 1] [10ULL] [i_8 - 1]) : (((/* implicit */long long int) arr_19 [i_5 + 2] [i_2 + 1]))));
                            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) arr_2 [i_5 - 1]))));
                            var_25 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_19 [i_2 + 1] [i_2 + 1])))))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 18; i_9 += 3) 
                        {
                            arr_31 [i_2] [i_2] [i_2] [i_2] [i_4] [i_5] [13LL] = ((/* implicit */_Bool) arr_17 [i_9] [i_5 + 4] [(unsigned char)12]);
                            var_26 = ((/* implicit */long long int) arr_24 [i_2 + 1] [i_2] [i_3] [i_3] [i_3 + 1] [i_3] [i_9]);
                            arr_32 [i_2] [i_3] [(_Bool)1] [i_4] [i_3] = ((/* implicit */unsigned char) arr_20 [i_4] [i_2] [i_2 - 1] [i_4]);
                            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_20 [(_Bool)1] [i_3] [16U] [(signed char)0])) ? ((+(arr_14 [i_5 + 4]))) : (min((((/* implicit */unsigned long long int) arr_17 [i_2 + 1] [(short)7] [i_2 + 1])), (arr_30 [(signed char)16] [(signed char)16] [i_4] [(signed char)0]))))))))));
                        }
                    }
                    var_28 *= ((/* implicit */signed char) (+(((/* implicit */int) var_15))));
                }
            } 
        } 
    }
    var_29 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned int) var_6)), (var_14))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_1))))))));
    var_30 = ((/* implicit */signed char) (!(((((/* implicit */int) var_3)) >= (((/* implicit */int) var_10))))));
}
