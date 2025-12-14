/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99181
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_15 = (((+(min(((-2147483647 - 1)), (var_11))))) / (((((/* implicit */_Bool) var_10)) ? ((+(2147483647))) : (((/* implicit */int) min(((unsigned short)23712), ((unsigned short)23712)))))));
                var_16 = var_14;
                var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)41824))));
                var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) ^ (min((0ULL), (arr_0 [i_1] [i_1]))))))));
            }
        } 
    } 
    var_19 = ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 1395705886)) <= (0ULL))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) min((-1103349544), (((/* implicit */int) (unsigned short)0))))) ? (((((/* implicit */_Bool) -1103349543)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (var_7))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_13)), (var_10)))))));
    var_20 ^= ((/* implicit */short) var_5);
}
