/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60842
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
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 2; i_2 < 15; i_2 += 4) 
                {
                    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((min((var_16), (((/* implicit */unsigned long long int) var_10)))) + (((/* implicit */unsigned long long int) (((-(arr_4 [i_1] [i_1] [i_2] [i_0]))) & (((((/* implicit */_Bool) arr_3 [10LL])) ? (((/* implicit */int) var_4)) : (var_0)))))))))));
                    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : ((-(((/* implicit */int) (_Bool)1))))))) ? (arr_1 [i_1]) : ((+(arr_5 [i_0 - 2] [i_0 - 2] [i_1] [i_2 - 1]))))))));
                }
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)147)) > (((/* implicit */int) (unsigned short)27014))));
                var_19 = ((/* implicit */int) ((short) min((max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (_Bool)0)))), (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0 + 1] [i_0])))));
                /* LoopNest 3 */
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    for (int i_4 = 0; i_4 < 18; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 1; i_5 < 14; i_5 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((var_9) / (((/* implicit */long long int) arr_10 [i_3] [i_1]))))))) && (((/* implicit */_Bool) (+(((1944754090598851047LL) % (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_3] [i_5])))))))));
                                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((1944754090598851047LL) >> (((1944754090598851047LL) - (1944754090598851046LL))))) : (((/* implicit */long long int) ((((((/* implicit */int) (short)-20280)) + (2147483647))) >> (((/* implicit */int) (unsigned char)0)))))))) ? (((/* implicit */unsigned long long int) (-(1944754090598851033LL)))) : ((~(arr_6 [i_5] [i_5] [i_5 + 3])))));
                                var_22 = ((/* implicit */unsigned char) var_12);
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */long long int) max((arr_0 [i_1]), (((/* implicit */int) (unsigned char)255))));
            }
        } 
    } 
    var_24 = min((var_12), (var_12));
}
