/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57651
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
    var_12 = ((/* implicit */long long int) max((((min((((/* implicit */unsigned long long int) 16744448U)), (13354415013517385589ULL))) - (((((/* implicit */_Bool) (short)-11096)) ? (5092329060192166032ULL) : (((/* implicit */unsigned long long int) 4294967286U)))))), (((/* implicit */unsigned long long int) var_10))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_1 [i_0 + 2])))) ? (arr_1 [i_0]) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (min((arr_1 [i_0]), (((/* implicit */int) arr_0 [i_0]))))))));
        var_14 = ((/* implicit */short) max((arr_0 [4U]), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) && (((/* implicit */_Bool) arr_1 [i_0 + 1])))))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) max(((short)2576), ((short)-4238)));
    }
}
