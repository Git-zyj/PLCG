/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/974
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (9223372036854775794LL))) : (((/* implicit */long long int) var_3))));
        var_17 = ((/* implicit */long long int) (~(8316106359954689825ULL)));
    }
    var_18 = ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775784LL)) ? (3401722739U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8886))))))))) << (((min((((((/* implicit */_Bool) var_15)) ? (9223372036854775794LL) : (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_2)), (4294967282U)))))) - (4294967274LL))));
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((9223372036854775795LL), (((/* implicit */long long int) var_7))))) ? (((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8893))))) : (((/* implicit */long long int) var_3))))) ? (697378519620701734LL) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
}
