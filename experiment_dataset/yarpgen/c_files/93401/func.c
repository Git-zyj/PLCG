/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93401
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
    var_11 -= var_6;
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_12 = ((((((/* implicit */_Bool) arr_2 [3ULL])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [(unsigned short)14])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (signed char)123))))) : (((((/* implicit */_Bool) -13078994479010299LL)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))) * ((+(((((/* implicit */_Bool) (unsigned char)29)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57981))))))));
        var_13 ^= ((/* implicit */unsigned short) arr_1 [(_Bool)1]);
    }
    for (int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        var_14 = ((/* implicit */long long int) max((var_14), ((((!((!(((/* implicit */_Bool) (unsigned short)0)))))) ? ((-(((((/* implicit */long long int) ((/* implicit */int) var_7))) - (271478004641078101LL))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (var_3)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (short)-4044)) : (((/* implicit */int) (_Bool)1))))) : (var_5)))))));
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (~(((((/* implicit */int) arr_4 [i_1])) / (((/* implicit */int) arr_4 [i_1])))))))));
    }
}
