/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/778
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [(unsigned char)7] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1])) || (((/* implicit */_Bool) var_7)))) && ((!(((/* implicit */_Bool) var_2))))));
                var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0]))))));
                var_18 = (+(var_0));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (((-(((unsigned int) var_3)))) >= (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0)))))));
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) var_13))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((unsigned long long int) (signed char)-53));
    var_21 = ((/* implicit */short) (((!(((/* implicit */_Bool) max((17123682416831866615ULL), (((/* implicit */unsigned long long int) (short)729))))))) || ((!(((/* implicit */_Bool) var_11))))));
}
