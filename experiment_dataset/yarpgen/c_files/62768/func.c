/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62768
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
    var_19 = var_5;
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) >= (min((((/* implicit */unsigned long long int) 2305843009213677568LL)), (arr_4 [i_0] [i_1]))))) ? (min((arr_4 [i_1 - 1] [i_1 - 1]), (((/* implicit */unsigned long long int) arr_1 [i_1 - 1] [i_1 - 3])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_4 [i_0] [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)13))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) var_12)))))) ^ (max((arr_4 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_2 [i_1])))))) : (((/* implicit */unsigned long long int) 9223372036854775800LL))));
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 21; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_21 += ((/* implicit */short) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_3))));
                                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) ((var_18) * (((/* implicit */unsigned int) ((/* implicit */int) ((short) (signed char)-90))))))) ? (max((((unsigned long long int) arr_3 [i_2 + 1] [(short)18])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-8538)) : (((/* implicit */int) (unsigned short)65519))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))));
                                arr_12 [i_0] [(unsigned char)15] [i_1] [i_0] [14ULL] [i_2] [(short)13] = ((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */int) ((signed char) arr_2 [i_4]))), (((((((/* implicit */int) var_13)) + (2147483647))) << (((/* implicit */int) arr_9 [i_0] [i_1] [(unsigned short)3] [i_4]))))))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1111755367)) && (var_11))))) & (arr_0 [15LL])))));
                            }
                        } 
                    } 
                } 
                arr_13 [0U] [i_1] = ((/* implicit */unsigned char) (unsigned short)11);
                var_23 *= ((/* implicit */unsigned long long int) var_0);
            }
        } 
    } 
    var_24 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((min((var_16), (((/* implicit */unsigned int) var_9)))) >> (((max((((/* implicit */unsigned long long int) 2251765453946880LL)), (var_1))) - (9638349909195755984ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((int) var_11)) == (((/* implicit */int) ((short) -1LL))))))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)17)) : (((/* implicit */int) var_15))))), (((((/* implicit */_Bool) var_5)) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
}
