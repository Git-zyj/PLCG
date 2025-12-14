/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69506
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
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) (~(((/* implicit */int) ((short) ((var_0) < (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 22; i_1 += 2) 
        {
            {
                var_14 = ((((/* implicit */_Bool) ((signed char) max((var_4), (((/* implicit */int) (signed char)29)))))) ? (((((/* implicit */_Bool) 2692903240U)) ? (((/* implicit */int) (signed char)105)) : (((/* implicit */int) (unsigned char)0)))) : (min((min((var_4), (((/* implicit */int) (signed char)67)))), (arr_2 [i_1]))));
                var_15 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) -2800147789582022785LL)), (8005626038700865240ULL))) == (((unsigned long long int) var_8)))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-68))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 3482736031108349658ULL)))) : ((+(2800147789582022798LL)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) var_9);
}
