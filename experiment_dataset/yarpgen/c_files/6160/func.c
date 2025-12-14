/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6160
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 1) /* same iter space */
                {
                    arr_9 [i_2] = ((/* implicit */unsigned long long int) arr_3 [i_0]);
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_7))));
                }
                for (signed char i_3 = 0; i_3 < 24; i_3 += 1) /* same iter space */
                {
                    var_21 ^= ((/* implicit */unsigned char) (signed char)79);
                    var_22 *= ((/* implicit */_Bool) arr_8 [(unsigned char)16]);
                }
                for (signed char i_4 = 0; i_4 < 24; i_4 += 1) /* same iter space */
                {
                    var_23 ^= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (short)20346)) <= (((/* implicit */int) (short)20346))))) & (((((/* implicit */int) arr_10 [i_0] [2] [i_4])) & (((/* implicit */int) arr_10 [i_4] [i_1] [i_0]))))));
                    var_24 = ((/* implicit */unsigned char) (signed char)44);
                }
                /* vectorizable */
                for (signed char i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_25 = ((/* implicit */signed char) 3868032510U);
                        /* LoopSeq 1 */
                        for (int i_7 = 0; i_7 < 24; i_7 += 4) 
                        {
                            var_26 ^= ((/* implicit */unsigned long long int) var_13);
                            var_27 = ((/* implicit */unsigned short) var_16);
                        }
                    }
                    for (short i_8 = 0; i_8 < 24; i_8 += 4) /* same iter space */
                    {
                        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (~(((/* implicit */int) (_Bool)1)))))));
                        arr_25 [i_5] [i_5] [i_5] [i_1] [13] [i_5] = ((/* implicit */long long int) arr_13 [i_8] [i_8]);
                    }
                    for (short i_9 = 0; i_9 < 24; i_9 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_10 = 2; i_10 < 23; i_10 += 4) 
                        {
                            arr_31 [(signed char)20] [i_1] [(signed char)20] [i_9] [i_10] [(signed char)20] [i_5] = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned short)60569)) <= (((/* implicit */int) arr_3 [i_5])))) ? (((((/* implicit */_Bool) var_15)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_5] [i_5] [i_0])) ? (((/* implicit */int) arr_15 [i_5] [i_5])) : (((/* implicit */int) (unsigned char)136)))))));
                            var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)43))));
                            arr_32 [i_0] [i_0] [i_0] [i_0] [(signed char)23] [i_0] [i_5] = ((/* implicit */short) ((-6132355022796206467LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)28)))));
                        }
                        for (unsigned int i_11 = 0; i_11 < 24; i_11 += 1) 
                        {
                            arr_35 [i_5] [21] [i_5] = ((/* implicit */int) var_16);
                            var_30 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_11])) ? (((((/* implicit */_Bool) arr_16 [(signed char)6] [i_9] [i_9])) ? (((/* implicit */int) arr_17 [i_0])) : (((/* implicit */int) var_3)))) : (((/* implicit */int) (signed char)-117))));
                        }
                        arr_36 [i_5] [i_1] [i_5] [i_9] [i_1] [i_1] = (((+(((/* implicit */int) var_17)))) + ((+(((/* implicit */int) (short)-15528)))));
                        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_11 [i_5] [i_5] [i_9])) : (((/* implicit */int) arr_28 [i_1] [i_5] [i_1] [i_1] [i_0]))))) ? (1546999U) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_1)))))));
                        var_32 = ((/* implicit */unsigned long long int) var_12);
                    }
                    arr_37 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_7 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-35)))))) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) ((unsigned short) 1917742374144802192LL)))));
                    var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((var_12) >> (((var_19) - (779062384))))))));
                    var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-43)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)2669))) : (4294967295U)));
                }
                var_35 = ((/* implicit */unsigned short) ((unsigned int) (-(((/* implicit */int) var_18)))));
            }
        } 
    } 
    var_36 = ((/* implicit */int) max((var_36), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) ((unsigned int) var_10))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) 14046887931314235104ULL)))))))))));
}
