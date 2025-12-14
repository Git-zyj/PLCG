/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56872
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
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) var_2)), (((((/* implicit */int) var_7)) ^ (((/* implicit */int) (signed char)0))))))) || (((/* implicit */_Bool) ((signed char) arr_1 [i_0 + 1])))));
                var_18 &= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (+(((/* implicit */int) (signed char)9)))))) ? (((/* implicit */int) (signed char)0)) : (((int) ((((/* implicit */_Bool) (signed char)-24)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)24)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((long long int) var_1)) + (((/* implicit */long long int) ((/* implicit */int) ((short) var_13))))))) ? (min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))))), (var_3))) : (min((((/* implicit */long long int) var_1)), (var_6)))));
}
