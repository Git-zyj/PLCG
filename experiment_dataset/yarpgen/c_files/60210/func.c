/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60210
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
    var_20 = ((/* implicit */signed char) (~(var_2)));
    var_21 = ((/* implicit */int) ((long long int) (signed char)-37));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) -3467904633751607323LL)) ? (-1LL) : (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_4 [11])) ? (-1LL) : (-18LL)))))));
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_3 [i_0] [i_0 + 1] [i_0])))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) 0)) || (((/* implicit */_Bool) -7762624298319139712LL))))))) : (((/* implicit */int) ((short) arr_3 [i_0] [i_0 - 1] [i_0])))));
            }
        } 
    } 
}
