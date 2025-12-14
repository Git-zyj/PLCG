/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76660
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_1)))) ? (((/* implicit */unsigned int) min((var_13), (((/* implicit */int) var_7))))) : (((unsigned int) (unsigned char)104)))));
                    arr_6 [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((max((var_6), (((/* implicit */unsigned short) arr_4 [(_Bool)1] [i_1])))), (((/* implicit */unsigned short) var_5)))))) + (min((((/* implicit */unsigned int) arr_4 [i_0] [(short)19])), (max((((/* implicit */unsigned int) var_15)), (var_0)))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) && (((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned long long int) var_15))))))))));
    var_22 = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */short) (_Bool)0)), ((short)-19404)))) / (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)63)) || (((/* implicit */_Bool) (unsigned short)77)))))));
}
