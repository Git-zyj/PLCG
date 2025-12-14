/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62646
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
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) min((13041683571041028525ULL), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) -2147483642)) % (-9223372036854775785LL))))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9223372036854775785LL)) && (((/* implicit */_Bool) (unsigned char)242))))), (16305307436381319801ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)79)) & (((/* implicit */int) (unsigned char)16))))), ((~(((((/* implicit */_Bool) (unsigned char)150)) ? (((/* implicit */long long int) arr_1 [i_0] [i_0])) : (-9223372036854775802LL)))))));
                arr_5 [i_1] [i_1] [i_0] |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)59)) : (arr_0 [i_0]))) & (arr_1 [(short)2] [i_1 + 1])));
                arr_6 [i_1] = ((/* implicit */signed char) max((arr_0 [6ULL]), (((((/* implicit */int) (_Bool)1)) & (-1382650535)))));
            }
        } 
    } 
    var_18 = var_7;
    var_19 = ((/* implicit */long long int) max((var_19), (((((/* implicit */long long int) ((/* implicit */int) (signed char)119))) & (((max((9223372036854775802LL), (((/* implicit */long long int) var_5)))) >> (((unsigned int) (unsigned char)0))))))));
}
