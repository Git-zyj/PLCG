/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68044
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) var_11))));
        arr_4 [i_0] = ((/* implicit */short) arr_3 [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        var_13 = (+(((/* implicit */int) var_11)));
        arr_7 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_6 [i_1])) + (max((arr_5 [i_1]), (((/* implicit */long long int) var_11))))))) > (max((1713508693199436954ULL), (7440258191285546181ULL)))));
    }
    var_14 ^= (unsigned short)18;
}
