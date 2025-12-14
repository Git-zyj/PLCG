/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80037
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        var_12 *= ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) var_6)))));
        var_13 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */int) arr_1 [i_0 - 2]))))));
    }
    var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) 14511126130183316626ULL)) ? (var_6) : (((/* implicit */int) (signed char)16)))), (((((/* implicit */int) (unsigned char)4)) >> (((var_6) + (387645816))))))))));
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23895))) ^ (min((((/* implicit */unsigned long long int) var_0)), (14373881487806742001ULL)))))) ? (3387650711U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (-1296481453)))) ? (max((var_0), (((/* implicit */int) (unsigned char)239)))) : (var_1))))));
}
