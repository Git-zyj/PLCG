/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86646
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
    for (int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) != (11600836073348643151ULL))))))) ? (min((1733836802623667875ULL), (((/* implicit */unsigned long long int) 33554431)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_5))))))))));
                var_14 = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-54))));
            }
        } 
    } 
    var_15 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_0), (var_1)))) ? (var_12) : (((/* implicit */int) max((((/* implicit */short) (signed char)-54)), ((short)16))))))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) ((((/* implicit */int) var_5)) ^ (var_12))))))))));
}
