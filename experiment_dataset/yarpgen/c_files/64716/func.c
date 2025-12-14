/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64716
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
    var_17 = ((/* implicit */int) (-(-6737778144352705994LL)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_18 ^= ((/* implicit */short) arr_0 [i_0] [i_0]);
        var_19 = min((35115652612096LL), (((/* implicit */long long int) 255)));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) -35115652612097LL)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)179)) ? (((/* implicit */unsigned long long int) -5693622296287356783LL)) : (437368082272411360ULL))))))), ((unsigned short)14741)));
    }
    var_20 = ((/* implicit */unsigned short) max((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_1))) ? (((unsigned int) var_9)) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))));
    var_21 += ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_7))));
}
