/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6719
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
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (~(max((14ULL), (18446744073709551602ULL))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_17 *= ((((((/* implicit */_Bool) 18446744073709551602ULL)) ? (18446744073709551602ULL) : (13ULL))) % (((((((/* implicit */_Bool) 18446744073709551602ULL)) ? (13ULL) : (13ULL))) << (((((((/* implicit */_Bool) 18446744073709551601ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (20ULL))) - (18446744073709551607ULL))))));
        var_18 = min(((~(1435647986901816525ULL))), (max((((18446744073709551605ULL) & (17011096086807735091ULL))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) & (18446744073709551601ULL))))));
    }
}
