/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86493
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((15020295456607179639ULL) >> (((/* implicit */int) (_Bool)1)))))));
        var_16 = ((/* implicit */long long int) max((min((arr_1 [i_0]), (((/* implicit */unsigned int) (unsigned short)58430)))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17213))))))) > (max((17224762126711177723ULL), (((/* implicit */unsigned long long int) 917504)))))))));
        var_17 ^= ((/* implicit */_Bool) max((((((/* implicit */_Bool) 17224762126711177721ULL)) ? (1221981946998373892ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_0 [i_0]) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-21713)))))) && ((!(((/* implicit */_Bool) var_5)))))))));
    }
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) var_4))))) || (((/* implicit */_Bool) var_4))));
}
