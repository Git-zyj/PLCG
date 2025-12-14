/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78710
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_17 ^= ((/* implicit */short) ((((/* implicit */unsigned int) min((max((((/* implicit */int) arr_2 [(signed char)3])), (557626004))), (((/* implicit */int) arr_4 [i_0] [i_0]))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) -557625997)) : (var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2]))) : (min((((/* implicit */unsigned int) (short)-21105)), (var_5)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 7; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_18 = min((((/* implicit */unsigned long long int) ((unsigned int) arr_0 [8LL] [i_4]))), (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0] [i_2] [i_2] [5U])) / (((/* implicit */int) arr_1 [i_1]))))) / ((+(var_1))))));
                                arr_10 [i_2] [i_3] [i_2] [2U] [i_1] [5] [i_2] = ((((((((/* implicit */_Bool) (signed char)69)) ? (var_2) : (((/* implicit */long long int) var_6)))) + (9223372036854775807LL))) >> (((/* implicit */int) ((((/* implicit */int) var_15)) != (((/* implicit */int) arr_1 [i_3 - 2]))))));
                                var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3] [7ULL] [i_3] [i_3])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (short)21087))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [(unsigned short)4] [i_2] [i_2])) && (((/* implicit */_Bool) var_9))))) : (((((/* implicit */int) arr_7 [i_0] [i_0] [i_2])) * (((/* implicit */int) (unsigned char)142)))))) >= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((var_3), (arr_1 [i_2]))))) < (-1LL))))));
                                var_20 = (unsigned char)11;
                            }
                        } 
                    } 
                    arr_11 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((3537634899U) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0] [i_0])) ? (((((/* implicit */int) (short)27159)) * (((/* implicit */int) var_8)))) : (((((/* implicit */int) arr_3 [(unsigned short)1] [i_1])) / (((/* implicit */int) var_7)))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (short)-27160)), (max((var_1), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13)))))))));
    var_22 ^= ((/* implicit */unsigned short) ((var_10) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((unsigned long long int) (!(((/* implicit */_Bool) var_16)))))));
    var_23 ^= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) var_11)))));
}
