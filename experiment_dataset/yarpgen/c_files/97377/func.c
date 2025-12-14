/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97377
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((unsigned long long int) 4294967295U)) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_16)))))));
        var_19 += ((_Bool) (!(((/* implicit */_Bool) 18ULL))));
        var_20 += ((((((/* implicit */long long int) var_10)) / (var_7))) & (((/* implicit */long long int) ((/* implicit */int) ((var_3) >= (3043622498U))))));
    }
    var_21 = ((/* implicit */long long int) var_11);
    var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((long long int) var_12)) << (((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_18)))))) * (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (6178984210737772794ULL)))) ? (((/* implicit */unsigned long long int) (~(79063335)))) : (var_6)))));
}
