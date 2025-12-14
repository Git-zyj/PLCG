/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73975
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
    var_17 = var_14;
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_18 = ((/* implicit */short) (~(var_1)));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)1023))));
        var_19 -= ((/* implicit */unsigned long long int) var_10);
    }
    for (short i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_20 -= arr_0 [i_1] [i_1];
        arr_6 [(short)10] [(short)10] = ((/* implicit */signed char) min((((short) arr_1 [i_1])), (((/* implicit */short) arr_4 [7ULL] [i_1]))));
        var_21 *= ((/* implicit */unsigned long long int) (short)5993);
    }
    for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 3) 
    {
        arr_9 [i_2] = (short)-5994;
        var_22 = ((/* implicit */signed char) (+(((((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_8 [i_2])))) >> (((((/* implicit */int) (short)24961)) - (24956)))))));
    }
    for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) min((((((/* implicit */int) ((((/* implicit */_Bool) 4852237903073723264ULL)) && (((/* implicit */_Bool) arr_0 [(signed char)16] [i_3]))))) % (((/* implicit */int) (short)-5994)))), (((/* implicit */int) var_13)))))));
        arr_12 [(signed char)9] [i_3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)0))));
    }
}
