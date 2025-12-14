/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93016
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
    var_15 &= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)83)), (-9223372036854775786LL)));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)83)) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */unsigned short) (short)-32118)))))));
        var_17 = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2613476053049515767LL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ^ (2047U)))));
        var_18 += ((/* implicit */short) (+((~(-9223372036854775805LL)))));
        arr_2 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
    }
}
