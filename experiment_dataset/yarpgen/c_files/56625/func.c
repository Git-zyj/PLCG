/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56625
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
    var_18 = ((/* implicit */signed char) ((max((((((/* implicit */int) var_9)) << (((/* implicit */int) var_14)))), (((/* implicit */int) var_9)))) > (min((((((((/* implicit */int) var_6)) + (2147483647))) << (((((/* implicit */int) (unsigned char)158)) - (158))))), (((/* implicit */int) ((var_12) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))));
    var_19 = ((/* implicit */int) min((min((((/* implicit */unsigned int) ((((/* implicit */long long int) 15427348)) <= (var_8)))), ((-(2916518119U))))), (((/* implicit */unsigned int) var_4))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 16; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) (!(((var_8) >= (max((((/* implicit */long long int) (unsigned short)48403)), (var_8)))))));
                                var_21 = min((((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0 - 1])) ? (18242161272645207899ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_2]))))), (((/* implicit */unsigned long long int) 15427342)));
                                var_22 += ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-19))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) | (arr_10 [i_0 - 1] [i_1] [i_2] [8ULL] [i_4])))));
                                var_23 *= ((/* implicit */signed char) (((-(((15427337) + (((/* implicit */int) arr_11 [6] [i_0] [12U] [i_3] [i_4] [i_2] [i_3 - 1])))))) & (((/* implicit */int) max((((((/* implicit */int) (_Bool)1)) <= (arr_5 [i_1] [i_3 + 3] [i_4]))), (((arr_2 [i_4] [i_3]) || (((/* implicit */_Bool) var_10)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 19; i_6 += 4) 
                        {
                            {
                                arr_21 [i_0 - 1] [i_1] [i_2] [i_1] [i_6] [i_1] [i_6] = ((/* implicit */_Bool) arr_8 [i_0] [i_1] [(unsigned short)6] [17U]);
                                arr_22 [i_5] [i_1] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_14 [i_0] [i_2] [i_6 + 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -7426643052846121615LL)) ? (((/* implicit */int) arr_2 [i_1] [i_2])) : (((/* implicit */int) var_10))))) : (9001158255388728577LL))), (((/* implicit */long long int) var_9))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) max((((var_12) - (((/* implicit */unsigned long long int) (+(var_1)))))), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_9)) ? (9736269913285261948ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
}
