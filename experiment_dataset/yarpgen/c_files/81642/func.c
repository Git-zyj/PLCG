/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81642
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
    var_17 = ((/* implicit */short) 3081805228261042940ULL);
    var_18 -= ((((_Bool) (signed char)127)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(18446744073709551615ULL))))))));
    var_19 -= ((/* implicit */short) var_0);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    var_20 -= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)96)) ? (var_10) : (((/* implicit */int) var_6))))) ? ((~(((/* implicit */int) (unsigned char)84)))) : (((/* implicit */int) (unsigned char)104)))));
                    var_21 ^= ((/* implicit */long long int) var_7);
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) != (((var_13) ? (max((((/* implicit */int) (unsigned char)210)), (arr_1 [11U]))) : (((/* implicit */int) var_14)))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_0)))))))) : (var_9))))));
}
