/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80248
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
    for (long long int i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0 - 2] [i_1] [i_1] = var_2;
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (~(598251362U)));
            }
        } 
    } 
    var_13 &= ((/* implicit */unsigned char) min((max((((/* implicit */long long int) ((signed char) (unsigned char)0))), (((((/* implicit */_Bool) (unsigned short)10589)) ? (7945245442580114836LL) : (((/* implicit */long long int) 598251362U)))))), (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
    var_14 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)10587), ((unsigned short)54946))))) : (((((/* implicit */_Bool) (signed char)-95)) ? (-7945245442580114837LL) : (((/* implicit */long long int) var_12)))))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15394)))));
}
