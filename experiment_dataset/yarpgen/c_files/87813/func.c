/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87813
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
    var_13 = min((var_2), ((((~(var_11))) % (((var_2) >> (((1391984117) - (1391984095))))))));
    var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (unsigned short)3043)))) << (((((((/* implicit */int) (short)18692)) << (((((/* implicit */int) (unsigned short)3043)) - (3034))))) - (9570293)))));
    var_15 = ((/* implicit */unsigned short) var_12);
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned char)198)) : (((/* implicit */int) (unsigned short)3043))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */long long int) (-(min((arr_5 [i_1] [i_1 - 2] [9U]), (((/* implicit */unsigned long long int) var_5))))));
                var_18 = ((/* implicit */unsigned char) ((int) (unsigned short)62493));
                var_19 = ((/* implicit */unsigned char) ((unsigned long long int) (-(((/* implicit */int) (signed char)60)))));
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)62493)) ? (((/* implicit */int) (unsigned short)62493)) : (((/* implicit */int) (unsigned short)62493))));
            }
        } 
    } 
}
