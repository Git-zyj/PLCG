/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73404
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
    var_16 *= ((/* implicit */unsigned short) ((((min((var_10), (3925999070770465639LL))) <= (((/* implicit */long long int) ((/* implicit */int) var_4))))) ? (((unsigned long long int) ((((/* implicit */_Bool) -3925999070770465632LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (3925999070770465639LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned long long int) 3925999070770465638LL)))))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        var_17 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)147))))) ? (max((((/* implicit */unsigned long long int) (+(-787710328)))), (arr_0 [i_0 - 1]))) : (((/* implicit */unsigned long long int) -3925999070770465638LL))));
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_13)))))) >= (arr_0 [14U]))))));
        var_19 *= 1491426387U;
    }
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) -3925999070770465618LL))));
}
