/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74291
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((-1719974562), (min((((/* implicit */int) var_16)), (1719974562)))))) ^ (var_10)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 4; i_1 < 23; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) (!((!(((/* implicit */_Bool) var_5)))))));
                    arr_9 [4LL] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (+(-1LL)))) ? (((/* implicit */int) (signed char)-121)) : (((((/* implicit */int) (signed char)-121)) - (((/* implicit */int) (_Bool)1)))))) + (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))));
                }
            } 
        } 
    } 
}
