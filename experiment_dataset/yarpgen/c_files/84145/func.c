/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84145
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_18 |= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) 589348742)), ((-(((((/* implicit */_Bool) var_13)) ? (325223325U) : (((/* implicit */unsigned int) -589348747))))))));
                            var_19 ^= ((/* implicit */unsigned char) ((unsigned int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) -7723261040265076656LL)))))))) ? (2126018265) : (((/* implicit */int) var_9))));
                    var_21 = var_1;
                    arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((-7723261040265076656LL) + (9223372036854775807LL))) << (((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4] [i_0] [i_0] [i_0]))) / (max((((/* implicit */unsigned int) (_Bool)0)), (arr_2 [i_4] [i_1])))))));
                }
                var_22 = (~(((/* implicit */int) arr_7 [i_1] [i_1] [13ULL] [1ULL] [1ULL])));
                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) 274112085U)) ? (((/* implicit */unsigned long long int) 325223325U)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(signed char)8] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)19))) : (arr_4 [i_1] [i_1] [i_0])))) ? (((((/* implicit */_Bool) 107614431U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (5168827936824259511ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-17286))))))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) var_17))));
    var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (signed char)111)) != (-589348747)))) * (((/* implicit */int) ((var_15) != (var_1)))))))));
}
