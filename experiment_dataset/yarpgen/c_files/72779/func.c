/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72779
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_12 = ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_4 [i_2] [i_0] [i_0])) / (((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_7 [7ULL] [i_1] [i_1] [i_0]) : (arr_1 [i_2])))))) ? (arr_5 [i_2]) : (((/* implicit */unsigned long long int) var_6)));
                    var_13 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) max((var_1), (arr_5 [i_2])))))) ^ (((var_1) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_8))))))));
                }
            } 
        } 
    } 
    var_14 |= ((/* implicit */int) max((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))) == (min((var_11), (var_11))))), ((!(((/* implicit */_Bool) ((unsigned char) var_7)))))));
    var_15 = ((/* implicit */unsigned short) max((max((min((4906572970299390421ULL), (((/* implicit */unsigned long long int) 1568673832570195544LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))))), (((unsigned long long int) var_0))));
}
