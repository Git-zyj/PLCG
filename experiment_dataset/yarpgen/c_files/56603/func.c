/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56603
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */short) max((((((/* implicit */long long int) ((/* implicit */int) min((var_12), (((/* implicit */signed char) var_10)))))) ^ (arr_0 [i_0]))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) (unsigned char)250))))), (min((((/* implicit */long long int) arr_1 [i_0] [i_0])), (arr_2 [i_0] [i_1])))))));
                var_14 = ((/* implicit */unsigned int) (unsigned char)253);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_5) % (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)38)))))))) ? (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) var_1)))) : (((/* implicit */int) var_11)))))));
}
