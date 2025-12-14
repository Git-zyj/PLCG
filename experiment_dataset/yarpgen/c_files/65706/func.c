/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65706
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
    var_17 = ((/* implicit */unsigned int) var_11);
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 22; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) (~(min((((/* implicit */int) (!(((/* implicit */_Bool) (short)6123))))), (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0] [i_2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)255))))))));
                    var_19 = ((/* implicit */signed char) (-(((/* implicit */int) var_3))));
                }
            } 
        } 
    } 
}
