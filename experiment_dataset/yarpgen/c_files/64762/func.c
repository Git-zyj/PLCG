/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64762
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-35)) ? (((/* implicit */int) min(((unsigned char)37), (((/* implicit */unsigned char) (_Bool)1))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) arr_1 [i_0] [i_1]))))));
                var_19 = ((/* implicit */unsigned char) max((var_19), (((unsigned char) max((min(((unsigned char)157), (((/* implicit */unsigned char) var_11)))), (((/* implicit */unsigned char) ((arr_2 [i_1] [i_0]) >= (((/* implicit */long long int) ((/* implicit */int) var_11)))))))))));
                var_20 = arr_4 [i_0] [(unsigned char)1] [i_1];
            }
        } 
    } 
    var_21 = ((/* implicit */int) var_6);
    var_22 += ((/* implicit */unsigned char) ((((/* implicit */long long int) -1)) - (((((/* implicit */_Bool) var_16)) ? (916983861853882462LL) : (((/* implicit */long long int) ((var_10) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_17)))))))));
}
