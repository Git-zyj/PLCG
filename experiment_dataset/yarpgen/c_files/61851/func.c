/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61851
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_10 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) -9045321633220176692LL)) < (18446744073709551615ULL)));
        var_11 = ((/* implicit */int) arr_2 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [(short)0] [i_0]))))) * (19ULL)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) 28ULL)) ? (((/* implicit */int) (signed char)91)) : (789415101))))));
        var_13 = ((/* implicit */_Bool) arr_4 [i_1] [i_1]);
        var_14 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)91)) ? (18446744073709551581ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24063)))));
    }
    var_15 = ((/* implicit */short) var_8);
    var_16 = (signed char)2;
    var_17 *= ((/* implicit */short) var_2);
}
