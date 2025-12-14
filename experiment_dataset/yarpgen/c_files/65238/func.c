/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65238
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
    var_10 = ((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned int) ((((((/* implicit */long long int) ((var_8) ? (((/* implicit */int) (unsigned char)41)) : (((/* implicit */int) (signed char)-102))))) - (((((/* implicit */_Bool) (unsigned char)214)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21055))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [6U] [i_2] = ((/* implicit */unsigned int) (unsigned short)24477);
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned long long int) ((unsigned long long int) (+(((/* implicit */int) var_6))))));
                }
            } 
        } 
    } 
}
