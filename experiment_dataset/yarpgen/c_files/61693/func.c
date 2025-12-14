/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61693
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
    var_13 = ((/* implicit */short) var_4);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_14 &= ((/* implicit */unsigned char) ((arr_3 [i_1] [i_1] [i_1]) < (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                var_15 = ((/* implicit */unsigned short) 754892505);
            }
        } 
    } 
    var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51494))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (14707474130873161438ULL)))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)51466)) != (((/* implicit */int) var_11))))))))));
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) == (14707474130873161453ULL)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (unsigned short)51493))))))) >> (((var_7) - (7193445564431762629LL))))))));
    var_18 &= ((/* implicit */unsigned char) var_6);
}
