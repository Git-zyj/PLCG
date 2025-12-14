/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71328
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) (short)-278)), (var_8))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) var_11))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : ((((!(((/* implicit */_Bool) var_2)))) ? (((var_9) << (((/* implicit */int) (_Bool)0)))) : (var_8)))));
    var_14 ^= ((/* implicit */long long int) (((_Bool)1) ? (-453590049) : (453590049)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) min((((/* implicit */long long int) var_6)), (max((((arr_0 [i_1] [(_Bool)1]) ? (var_12) : (arr_2 [i_0] [i_0] [i_1]))), (((/* implicit */long long int) ((unsigned short) -5875061446216711747LL))))))))));
                arr_5 [i_0] = ((/* implicit */short) (-(((arr_3 [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_0] [i_0]))) : (var_9)))));
            }
        } 
    } 
}
