/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84972
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
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_15)) : ((+(((/* implicit */int) var_4))))))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)22065))))) : (((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) (unsigned char)42))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : ((~(var_3)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) var_2)) : (var_7)));
        var_18 -= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((long long int) arr_2 [i_1])))));
        arr_5 [i_1] = ((/* implicit */_Bool) arr_2 [i_1]);
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_3) : (arr_0 [i_1])));
        arr_7 [(unsigned char)10] = ((/* implicit */unsigned char) ((((407318585809588770ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) ? (((/* implicit */long long int) (((_Bool)1) ? (1597121521U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : ((+(-7789208194216945279LL)))));
    }
    var_20 = var_8;
}
