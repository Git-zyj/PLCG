/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63015
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
    var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_14))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_1))))) ? (max((1ULL), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) min((var_11), (((/* implicit */int) (signed char)-120)))))))) ? (((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) >= (var_5))), (((_Bool) var_6))))) : (((/* implicit */int) max((max((((/* implicit */short) var_14)), ((short)15360))), (((/* implicit */short) (!(((/* implicit */_Bool) (short)15360))))))))));
                    arr_6 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (short)2044);
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_7)) : (var_0))))))));
                }
            } 
        } 
    } 
    var_22 &= ((/* implicit */int) min((min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_14))))), (((unsigned int) var_9)))), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_15)), ((unsigned short)23396)))) : (((((/* implicit */_Bool) (signed char)108)) ? (((/* implicit */int) (signed char)109)) : (((/* implicit */int) var_3)))))))));
}
