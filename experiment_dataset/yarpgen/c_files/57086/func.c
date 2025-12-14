/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57086
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
    var_20 = ((/* implicit */int) min((((/* implicit */long long int) var_7)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_7)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_0)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (signed char i_4 = 2; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_21 = arr_4 [i_1];
                                var_22 = ((/* implicit */short) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2856419700733721187LL))))), (arr_5 [i_0] [i_2])));
                                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) arr_2 [i_1] [i_1])) : (arr_7 [i_2])));
                                arr_13 [i_0] [i_2] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_2 [i_0] [(short)14])), (arr_7 [i_2])))) ? (min((arr_7 [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2856419700733721188LL)) ? (((/* implicit */int) (short)-14333)) : (((/* implicit */int) (unsigned short)36071)))))))) ? (((((/* implicit */_Bool) max((-2856419700733721188LL), (-5659472958682523084LL)))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (var_1) : (((/* implicit */unsigned long long int) arr_1 [i_0])))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_0 [i_2])), (var_6)))))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_7 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [4LL]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_1 [i_0])))))));
                            }
                        } 
                    } 
                    var_24 = ((((/* implicit */_Bool) 2856419700733721187LL)) ? (((/* implicit */int) (signed char)45)) : (((/* implicit */int) (short)29831)));
                    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (-((+(var_1))))))));
                }
            } 
        } 
    } 
    var_26 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 140737488355327ULL)) ? (((/* implicit */long long int) 58028111)) : (2856419700733721207LL)))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_13)) : (var_7))) : (((/* implicit */int) min((((/* implicit */short) var_12)), (var_10))))))));
}
