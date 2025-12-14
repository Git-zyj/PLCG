/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83262
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
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            for (unsigned short i_2 = 4; i_2 < 21; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) var_2);
                    var_13 -= ((/* implicit */signed char) (+(((/* implicit */int) arr_0 [i_0]))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)179))))) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) var_2))))) ? (var_5) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? ((-(((/* implicit */int) (unsigned char)77)))) : (((((/* implicit */_Bool) (unsigned char)179)) ? (((/* implicit */int) var_9)) : (var_1))))))));
}
