/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99219
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
    var_14 -= ((unsigned char) var_4);
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 8; i_0 += 2) 
    {
        var_15 *= ((/* implicit */unsigned char) ((unsigned int) arr_0 [i_0]));
        var_16 -= ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 7560771007510998192ULL)) ? (13835058055282163712ULL) : (13835058055282163712ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (13835058055282163736ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)0)))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
    }
    var_17 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) ((var_5) / (var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) var_4)))))) : (((13835058055282163743ULL) << (((4611686018427387879ULL) - (4611686018427387859ULL))))))));
}
