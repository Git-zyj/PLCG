/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62144
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
    var_18 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */long long int) min((2147483647U), (((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))))))));
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) max((var_15), (((unsigned short) var_6))))) ? (((/* implicit */long long int) 3015946534U)) : (var_17)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_14)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_16)))))))) : (((/* implicit */int) arr_4 [20LL] [i_1] [i_0])))))));
                    var_21 = ((/* implicit */long long int) max(((+(min((((/* implicit */unsigned long long int) (_Bool)1)), (var_3))))), (((unsigned long long int) (+(var_13))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */unsigned int) ((max((var_9), ((_Bool)1))) ? (((/* implicit */int) var_1)) : (((int) var_10))))) : (((((/* implicit */_Bool) var_11)) ? (((var_8) & (((/* implicit */unsigned int) var_2)))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
}
