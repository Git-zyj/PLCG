/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65625
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_19 = ((/* implicit */unsigned short) (((((~(arr_0 [i_0]))) ^ (max((arr_0 [i_0]), (((/* implicit */int) arr_1 [i_0])))))) - (((((/* implicit */int) ((unsigned char) (short)112))) ^ (((/* implicit */int) (short)(-32767 - 1)))))));
    }
    var_20 = ((((/* implicit */_Bool) ((int) (short)(-32767 - 1)))) ? (min((((/* implicit */unsigned long long int) (~(7340032)))), ((~(144115188075823104ULL))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_0)), (var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 768LL)))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) -228379454)) : (3222665224396973984ULL))))));
}
