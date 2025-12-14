/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81996
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
    var_20 &= var_6;
    var_21 = ((/* implicit */unsigned char) ((unsigned int) var_16));
    var_22 = ((/* implicit */unsigned short) var_17);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                var_23 = ((/* implicit */int) min((((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (+(var_18)))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) var_18)) : (var_5))))), (((/* implicit */unsigned long long int) ((unsigned short) (signed char)105)))));
                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) min((((/* implicit */int) var_12)), (((((/* implicit */_Bool) min(((unsigned char)105), (((/* implicit */unsigned char) (_Bool)1))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)8915)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) var_8)))))))));
                arr_5 [i_0] [i_1 + 2] [i_1] = ((/* implicit */signed char) (_Bool)1);
            }
        } 
    } 
    var_25 = ((/* implicit */int) (unsigned short)61346);
}
