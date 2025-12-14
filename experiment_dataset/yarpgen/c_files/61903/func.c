/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61903
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
    var_10 = ((/* implicit */unsigned char) var_0);
    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60458))) < (var_8))) ? (((/* implicit */int) max((((/* implicit */short) (_Bool)0)), (var_5)))) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-87))) : (((var_3) ? ((~(var_8))) : (((/* implicit */unsigned int) ((int) var_7))))))))));
    var_12 = ((/* implicit */_Bool) min(((-(((/* implicit */int) var_3)))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-86)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 19; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_0] [i_2] = ((/* implicit */short) min((min(((-(((/* implicit */int) arr_0 [i_2])))), (((/* implicit */int) (!(var_3)))))), (((/* implicit */int) var_5))));
                    arr_9 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-77))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_6 [i_2] [i_1] [i_2 + 2])), (var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((unsigned long long int) (signed char)-127)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_0])))))))));
                }
            } 
        } 
    } 
}
