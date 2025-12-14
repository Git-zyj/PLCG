/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59513
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
    var_10 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)104)), (17857688269244051966ULL)));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)16383)) || (((/* implicit */_Bool) 641429937759316098LL))));
                var_12 = ((/* implicit */short) (((+(min((((/* implicit */long long int) var_5)), (-641429937759316099LL))))) == (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                var_13 += ((/* implicit */unsigned int) ((var_6) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (4875459463326699999LL)))) ? (((var_4) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (min((var_4), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17857688269244051989ULL)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))))))));
            }
        } 
    } 
    var_14 *= ((/* implicit */unsigned char) var_0);
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((_Bool) max((1170080474271408400LL), (((/* implicit */long long int) (short)16410))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-1095036480270078143LL))))));
}
