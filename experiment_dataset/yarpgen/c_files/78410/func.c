/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78410
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
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */int) ((max((var_8), (var_0))) != (((((/* implicit */_Bool) var_16)) ? (-1967788647844769544LL) : (-6024386058168016053LL)))))) ^ (((/* implicit */int) var_14)))))));
    var_18 = ((/* implicit */long long int) var_5);
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) min((min((arr_0 [(short)9]), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) var_7)))))));
        arr_3 [i_0] [i_0 + 1] = ((int) (-(((/* implicit */int) arr_0 [i_0 - 1]))));
        var_19 = ((/* implicit */short) (_Bool)1);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */short) 1967788647844769538LL);
        var_20 ^= ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-68))));
    }
    var_21 *= ((/* implicit */unsigned char) var_0);
}
