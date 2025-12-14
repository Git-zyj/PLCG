/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85394
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)36366)) ? (((/* implicit */long long int) ((((/* implicit */int) var_13)) >> (((((/* implicit */int) var_0)) - (34612)))))) : (((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_18)))))))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
    var_21 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) max((((/* implicit */unsigned short) (short)-5932)), ((unsigned short)36359))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] = max((((unsigned char) ((((/* implicit */int) var_17)) <= (((/* implicit */int) var_0))))), (((unsigned char) arr_1 [i_0 + 1])));
        var_22 ^= ((/* implicit */unsigned long long int) arr_0 [i_0 - 2] [(unsigned char)2]);
    }
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_14)))))) == (((/* implicit */int) min((var_19), (((/* implicit */unsigned short) ((short) (short)-5932))))))));
    var_24 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_15)))) ? (((((/* implicit */int) var_9)) & (((/* implicit */int) (unsigned char)16)))) : ((+(((/* implicit */int) var_9))))))) + (var_7)));
}
