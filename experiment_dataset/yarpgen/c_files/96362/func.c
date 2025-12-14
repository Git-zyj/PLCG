/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96362
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
    var_18 = ((/* implicit */_Bool) var_13);
    var_19 += ((/* implicit */short) (~(((/* implicit */int) (short)-14162))));
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((-8006325648077031891LL) / (((/* implicit */long long int) ((/* implicit */int) var_2))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (1501721908U) : (var_8))))))) && (((/* implicit */_Bool) (+(var_1))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [14U] = ((/* implicit */short) (~((~(((/* implicit */int) (signed char)-20))))));
                arr_6 [i_0] [i_0 + 2] = ((/* implicit */long long int) ((((/* implicit */long long int) 4194303U)) == (max((((5762453312037110411LL) | (((/* implicit */long long int) var_1)))), (var_9)))));
                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_0 [i_1 + 3])))) ? (min((2772563724467550705ULL), (((/* implicit */unsigned long long int) (signed char)117)))) : (((/* implicit */unsigned long long int) (~(232690163U))))));
                arr_7 [i_0 + 1] [i_0] [i_0 + 1] = ((/* implicit */unsigned short) var_6);
            }
        } 
    } 
}
