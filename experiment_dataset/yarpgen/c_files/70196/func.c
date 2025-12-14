/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70196
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
    var_14 = max((max((var_5), (((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))))), (1043835484U));
    var_15 &= var_13;
    var_16 = ((/* implicit */unsigned int) min((var_16), (1881184821U)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) + (((((/* implicit */_Bool) 1881184807U)) ? (2413782474U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)52)))))))));
                    var_18 -= ((/* implicit */unsigned int) ((var_12) != (2448924572U)));
                    var_19 = ((/* implicit */unsigned int) min((var_19), ((-((+(arr_0 [i_2 + 1])))))));
                    var_20 = ((((/* implicit */unsigned int) ((int) 1881184821U))) | (2203432525U));
                }
            } 
        } 
    } 
}
