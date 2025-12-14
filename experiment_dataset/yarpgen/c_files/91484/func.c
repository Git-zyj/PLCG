/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91484
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                var_15 -= ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) var_13))) ^ (((/* implicit */int) ((var_14) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)131))))))))), (9223372036854775807LL)));
                var_16 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775792LL)) ? (((/* implicit */int) arr_2 [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) arr_2 [i_1 - 1] [i_1 + 2]))))) ? (max((((9223372036854775792LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_3))))), (min((9223372036854775792LL), (((/* implicit */long long int) (unsigned short)65535)))))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_0 [(unsigned char)5]), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_14)))))))))));
            }
        } 
    } 
    var_17 &= ((/* implicit */long long int) var_8);
    var_18 = ((/* implicit */signed char) var_10);
}
