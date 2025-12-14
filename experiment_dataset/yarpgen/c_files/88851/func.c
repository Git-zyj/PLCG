/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88851
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
    for (short i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        arr_2 [3ULL] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) arr_0 [i_0])), (var_15))), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-35)))))))) ? (((arr_1 [i_0]) * (2850426775U))) : (((((/* implicit */_Bool) var_6)) ? (1444540545U) : (2850426775U)))));
        var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)16480))));
        var_19 = ((/* implicit */int) var_5);
    }
    var_20 = ((/* implicit */long long int) max(((-(((((/* implicit */_Bool) (signed char)-29)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -8623861841539708757LL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((unsigned char) var_12))))))));
    var_21 ^= var_10;
}
