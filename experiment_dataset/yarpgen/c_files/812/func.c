/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/812
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
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            {
                arr_5 [17LL] [i_1 - 1] [i_0 + 4] = ((/* implicit */unsigned short) (-(1366001920U)));
                var_17 *= ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) min(((short)32767), (((/* implicit */short) arr_3 [i_0] [i_0] [i_0 + 1]))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_0)) : (var_8))))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) ((300276545509077527LL) > (((/* implicit */long long int) ((/* implicit */int) var_1))))))) : (((((/* implicit */_Bool) arr_4 [i_0 + 4] [i_1])) ? (arr_2 [(unsigned char)5] [(unsigned char)1]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 - 1])) ? (arr_4 [i_1 + 2] [i_1 - 2]) : (arr_4 [i_1 - 2] [i_1 - 1])))) ? (((arr_4 [i_1 - 2] [i_1 - 2]) - (arr_4 [i_1 - 2] [i_1 - 1]))) : ((+(arr_4 [i_1 - 2] [i_1 + 1])))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) 4323455642275676160ULL)) || (((/* implicit */_Bool) (short)-1628))));
}
