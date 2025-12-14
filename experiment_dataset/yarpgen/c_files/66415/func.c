/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66415
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
    var_10 = ((/* implicit */signed char) var_9);
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */int) var_5)) ^ (((/* implicit */int) (short)-5500)))), (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_1)))))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)39486))));
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) (short)5504)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) var_9)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) 458752ULL))));
                var_14 = (unsigned short)992;
            }
        } 
    } 
}
