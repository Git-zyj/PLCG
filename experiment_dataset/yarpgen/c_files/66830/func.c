/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66830
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
    var_11 ^= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_5)), (var_9)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 6131536739921303879LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)162))) : (12289680606330232938ULL))))));
                var_13 += ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1 + 1])) ? (var_9) : (((/* implicit */long long int) var_7))))) ? (((/* implicit */int) min((((/* implicit */short) arr_2 [i_0])), (var_3)))) : (max((arr_0 [1U] [12LL]), (((/* implicit */int) var_10)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (12289680606330232962ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))))));
                var_14 -= ((/* implicit */_Bool) arr_5 [i_0]);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) max((1116353392), (((/* implicit */int) var_4))));
    var_16 = ((/* implicit */unsigned char) var_8);
    var_17 = ((/* implicit */long long int) var_8);
}
