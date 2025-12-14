/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66864
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
    var_13 = ((/* implicit */short) var_10);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 11; i_1 += 4) 
        {
            for (short i_2 = 3; i_2 < 8; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        arr_9 [i_2] = ((/* implicit */signed char) ((int) -2025845241));
                        var_14 |= ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                    }
                    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((short) 7300091662930729657LL)))));
                    var_16 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1536)) ? (((2326549723632048595ULL) + (((/* implicit */unsigned long long int) 4549453361249354821LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                    var_17 = ((/* implicit */int) var_1);
                    arr_10 [i_2] [(unsigned char)6] [i_2] [i_2] = ((/* implicit */short) -2147483632);
                }
            } 
        } 
    } 
    var_18 *= ((-7300091662930729667LL) / (((((/* implicit */_Bool) 1516291783)) ? (3458764513820540928LL) : (((/* implicit */long long int) ((-1103753287) / (((/* implicit */int) (signed char)43))))))));
}
