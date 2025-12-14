/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93208
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */long long int) ((((12481098489247805071ULL) / (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_0)), (65520LL)))))) ^ (min((max((((/* implicit */unsigned long long int) var_17)), (var_11))), (((/* implicit */unsigned long long int) ((arr_0 [i_0]) >> (((((/* implicit */int) arr_2 [i_0])) - (18531))))))))))) : (((/* implicit */long long int) ((((12481098489247805071ULL) / (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_0)), (65520LL)))))) ^ (min((max((((/* implicit */unsigned long long int) var_17)), (var_11))), (((/* implicit */unsigned long long int) ((arr_0 [i_0]) >> (((((((/* implicit */int) arr_2 [i_0])) - (18531))) + (34153)))))))))));
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */short) arr_1 [i_0]);
                var_20 = ((/* implicit */unsigned long long int) arr_0 [(short)19]);
                var_21 = ((/* implicit */unsigned int) min((((((((var_7) + (9223372036854775807LL))) >> (((((/* implicit */int) var_10)) + (147))))) & (((arr_0 [17LL]) & (((/* implicit */long long int) arr_3 [i_0])))))), (((/* implicit */long long int) 2509330125U))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 1; i_2 < 9; i_2 += 2) 
    {
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_4 = 1; i_4 < 12; i_4 += 2) 
                {
                    for (unsigned short i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_13 [i_5] [i_5] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_5] [i_6]))) : (var_15)))))) ? (65530LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_15 [i_5] [i_5])))))))));
                                arr_24 [i_2] [i_2] [i_2] [i_5] = ((/* implicit */int) (-(((((/* implicit */_Bool) (+(-5743265689499935700LL)))) ? (((((/* implicit */_Bool) 6911121416113224808ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)161))) : (arr_4 [i_2]))) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) / (arr_4 [i_2])))))));
                                var_23 &= ((/* implicit */long long int) var_0);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 11; i_7 += 3) 
                {
                    for (signed char i_8 = 0; i_8 < 13; i_8 += 2) 
                    {
                        {
                            arr_32 [i_2] [i_7] [i_2] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_2])))))));
                            arr_33 [i_2] = ((/* implicit */unsigned int) max(((+(((/* implicit */int) var_6)))), (((((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_7 + 2])) || (((/* implicit */_Bool) arr_20 [i_3] [i_8]))))) * ((-(((/* implicit */int) arr_25 [i_2 - 1] [i_2 - 1]))))))));
                            var_24 ^= ((/* implicit */short) ((unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) var_13))) / (var_7))) * (((/* implicit */long long int) ((((/* implicit */int) var_18)) / (((/* implicit */int) arr_25 [i_2] [i_2]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
