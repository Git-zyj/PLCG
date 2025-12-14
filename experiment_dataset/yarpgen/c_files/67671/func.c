/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67671
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [0ULL] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) ((short) arr_0 [i_0])))))) & (((max((var_8), (((/* implicit */unsigned long long int) var_0)))) << (((((/* implicit */int) arr_0 [i_0])) << (((var_0) - (300061654U)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_7)) ^ (arr_1 [i_0] [i_0])));
        arr_4 [i_0] [i_0] |= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)-65))))))))) < (((long long int) (+(arr_1 [1ULL] [i_0]))))));
        var_12 ^= ((/* implicit */unsigned long long int) (+((((!(((/* implicit */_Bool) (signed char)0)))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (arr_0 [i_0]))))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            arr_7 [i_0] [i_1 - 1] [i_1] = ((/* implicit */signed char) ((((max((((/* implicit */long long int) ((signed char) (signed char)-53))), ((+(arr_1 [(unsigned char)8] [i_1]))))) + (9223372036854775807LL))) >> (((max((arr_6 [i_0]), (((/* implicit */unsigned long long int) (short)-30914)))) - (18446744073709520660ULL)))));
            var_13 = ((/* implicit */short) ((long long int) arr_6 [i_1]));
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            var_14 = ((/* implicit */int) var_5);
                            var_15 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)52))) < (arr_9 [i_0]))));
                            arr_16 [i_0] [i_4] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) -830692538)) < (3840U)));
                            arr_17 [i_4] [i_1] [i_3] [(_Bool)1] = ((/* implicit */_Bool) var_3);
                        }
                        var_16 = ((/* implicit */long long int) (signed char)19);
                    }
                } 
            } 
        }
        for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_6 = 0; i_6 < 13; i_6 += 2) 
            {
                var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0))));
                arr_24 [6LL] [i_5] [i_5] [i_0] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) max((arr_6 [i_5]), (var_4)))) ? (var_5) : (arr_23 [i_5])))));
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) (~(arr_23 [i_6]))))))))));
                arr_25 [i_0] [i_0] [i_6] [i_6] &= ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0])))))));
            }
            arr_26 [i_0] &= ((/* implicit */signed char) arr_9 [i_5]);
        }
    }
    var_19 = ((/* implicit */unsigned int) ((int) ((((/* implicit */unsigned int) var_11)) - (max((var_7), (((/* implicit */unsigned int) var_3)))))));
}
