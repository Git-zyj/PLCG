/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95318
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
    var_12 = ((/* implicit */int) var_4);
    var_13 = (short)29974;
    var_14 = ((/* implicit */short) var_9);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_15 += ((/* implicit */signed char) var_10);
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) ((short) var_7)))) * (((((/* implicit */int) (_Bool)0)) * (((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */int) (short)10376)) : (((/* implicit */int) (signed char)-17))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_16 += ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) arr_6 [i_1])) <= (var_11))) ? (var_5) : (((unsigned long long int) arr_6 [i_1]))));
        var_17 = ((/* implicit */_Bool) ((unsigned short) min((((/* implicit */unsigned long long int) var_1)), ((~(11ULL))))));
    }
    var_18 += ((/* implicit */unsigned long long int) (signed char)-26);
}
