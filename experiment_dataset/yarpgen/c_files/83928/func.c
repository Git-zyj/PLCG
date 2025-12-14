/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83928
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
    var_18 = ((/* implicit */unsigned char) max((1360928936480117013ULL), (((/* implicit */unsigned long long int) var_4))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_19 *= arr_7 [i_0] [i_0] [i_0] [(unsigned char)9];
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19; i_3 += 3) 
                    {
                        for (short i_4 = 1; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((int) (-(17085815137229434631ULL)))) : ((-(((/* implicit */int) arr_2 [i_3])))))))));
                                var_21 = ((/* implicit */short) ((2147483627) > (((/* implicit */int) arr_2 [i_0]))));
                                var_22 = ((/* implicit */long long int) ((short) arr_0 [i_1 + 1] [i_4 - 1]));
                            }
                        } 
                    } 
                    arr_14 [(unsigned char)9] [(unsigned char)9] [i_2] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 2147483622)) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_17))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)0))))))), (((/* implicit */unsigned long long int) arr_13 [(short)7] [(short)7] [i_0] [i_0] [(short)7] [i_2] [i_2]))));
                    arr_15 [i_0] = ((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [14LL]);
                }
            } 
        } 
    } 
}
