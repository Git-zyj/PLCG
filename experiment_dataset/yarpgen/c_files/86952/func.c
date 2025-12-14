/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86952
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */short) ((((min((((/* implicit */unsigned long long int) (unsigned short)45494)), (13513344548570901048ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_0])), ((unsigned short)47355))))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 10540468110513435324ULL))))));
                var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((((arr_3 [(_Bool)0]) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) var_12)))), (((((/* implicit */_Bool) 10540468110513435315ULL)) ? (((/* implicit */int) (unsigned short)32454)) : (-1794200888)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11517666679887076059ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)7274)) && (((/* implicit */_Bool) 1025604180U))))) : (((/* implicit */int) arr_4 [i_1 + 1]))))) : (((((/* implicit */_Bool) min((1925466081592473122ULL), (((/* implicit */unsigned long long int) (unsigned short)1565))))) ? ((+(arr_1 [i_1]))) : (min((((/* implicit */unsigned long long int) var_9)), (9716258008277710506ULL)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) var_2))));
}
