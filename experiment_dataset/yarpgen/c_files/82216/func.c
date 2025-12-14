/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82216
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
    for (signed char i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            arr_12 [i_0 - 2] [i_1] [i_1] [i_2] [i_3] [(unsigned char)2] = ((/* implicit */signed char) max(((~(max((((/* implicit */int) arr_6 [4LL])), (var_7))))), (((((/* implicit */_Bool) (~(var_4)))) ? (((((/* implicit */_Bool) arr_9 [i_3] [i_1])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_10 [i_2])))) : (((((/* implicit */_Bool) arr_7 [(unsigned short)14] [i_1] [i_2] [5ULL])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_2]))))))));
                            var_13 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-2))));
                            arr_13 [i_2] [3] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_12), (var_12)))) ? (max((3871389809003952458LL), (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_11 [i_2] [17U] [i_0])))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */int) max(((short)28367), (var_3)))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [12ULL] [i_3])) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) var_0))))))) : (((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (2050174581)))) ? (((((/* implicit */_Bool) arr_5 [i_0] [(signed char)6])) ? (var_2) : (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_9 [i_3] [i_1])) : (((/* implicit */int) arr_3 [i_0 - 1])))))))));
                        }
                    } 
                } 
                var_14 += ((/* implicit */short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(2525013511U))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1769953783U)) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)167))))) : (((((/* implicit */_Bool) (signed char)24)) ? (1105400358695837547ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
                arr_14 [i_0 - 2] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1776732767117636091ULL)) ? (120115794U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)107)))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [i_1] [i_1]))))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (var_10) : (((/* implicit */unsigned int) var_11)))))), ((+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (2525013513U)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */int) max((min((((/* implicit */long long int) min((((/* implicit */unsigned short) (unsigned char)198)), ((unsigned short)42761)))), (max((33554431LL), (((/* implicit */long long int) var_7)))))), (((/* implicit */long long int) (~((~(((/* implicit */int) (short)-17617)))))))));
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)92)), (2431425839U)))) ? (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (unsigned char)109))))))) : ((~(((((/* implicit */_Bool) var_7)) ? (var_1) : (var_1))))))))));
}
