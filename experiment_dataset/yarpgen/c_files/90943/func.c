/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90943
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
    var_20 = ((/* implicit */unsigned short) (-(var_7)));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_21 = ((((/* implicit */_Bool) (unsigned char)118)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)137))) : ((-9223372036854775807LL - 1LL)));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) ((max((((((/* implicit */_Bool) var_8)) ? (var_10) : (268173312LL))), (((((/* implicit */long long int) ((/* implicit */int) var_16))) / (arr_1 [i_4]))))) * (arr_1 [(unsigned short)2])));
                                var_23 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(var_18)))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)145))) - (var_6))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 1] [i_1]))))) << (((((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_10 [i_0] [(unsigned char)0] [i_3] [i_4])), (var_18)))) : (var_17))) - (15621452693856829207ULL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) (((~((-(var_17))))) << (((max((((unsigned long long int) var_16)), (((/* implicit */unsigned long long int) ((unsigned char) var_10))))) - (140ULL)))));
}
