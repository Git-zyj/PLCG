/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91215
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
    var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((var_13), (((/* implicit */int) ((unsigned short) var_14)))))), ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) | (var_15)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) arr_2 [i_2]))));
                    var_22 = ((/* implicit */signed char) (-(max((((/* implicit */int) var_9)), (((((/* implicit */_Bool) 18446744073709551587ULL)) ? (((/* implicit */int) (unsigned char)73)) : (((/* implicit */int) var_6))))))));
                }
            } 
        } 
    } 
    var_23 &= max((((/* implicit */unsigned long long int) var_13)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_1)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) + (((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) -5799921596673840210LL)))) ? (max((((/* implicit */long long int) (signed char)120)), (var_2))) : (((/* implicit */long long int) ((((/* implicit */int) var_6)) >> (((((/* implicit */int) var_9)) + (24390))))))))));
}
