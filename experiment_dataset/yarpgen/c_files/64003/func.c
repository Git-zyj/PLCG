/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64003
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            {
                arr_4 [16LL] &= ((/* implicit */int) ((unsigned short) max(((+(((/* implicit */int) (_Bool)1)))), (((int) var_1)))));
                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) min((((/* implicit */unsigned int) var_7)), (max((((/* implicit */unsigned int) (signed char)-74)), (arr_3 [(_Bool)1] [(_Bool)1]))))))));
                var_15 = ((/* implicit */short) var_7);
                arr_5 [i_0] [i_1] = max((((((arr_2 [i_0] [i_1]) == (var_0))) ? (((/* implicit */unsigned long long int) ((arr_0 [i_1]) ? (((/* implicit */int) (short)20949)) : (((/* implicit */int) arr_1 [1U]))))) : (var_1))), (((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) var_10)), (arr_3 [i_1] [(unsigned short)3]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)23164))) == ((+(min((14153523190354235493ULL), (11947187012797505488ULL)))))));
}
