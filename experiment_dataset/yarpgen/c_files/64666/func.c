/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64666
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
    var_20 = ((/* implicit */signed char) ((unsigned long long int) (!(((/* implicit */_Bool) var_15)))));
    var_21 = ((/* implicit */unsigned long long int) (signed char)110);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1 - 2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((var_3) ? (8044843441246820363LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-31572))))))))));
                    var_22 = (-((((!((_Bool)0))) ? (((/* implicit */int) (unsigned short)38846)) : (((/* implicit */int) (signed char)-121)))));
                    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((unsigned long long int) (-(((/* implicit */int) var_6))))) & (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(_Bool)0]))) / (max((var_8), (((/* implicit */unsigned int) var_11))))))))))));
                }
            } 
        } 
    } 
}
