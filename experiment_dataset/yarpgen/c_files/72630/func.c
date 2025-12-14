/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72630
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
    var_14 ^= ((/* implicit */_Bool) (short)-32587);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((-942794334) & (((((/* implicit */_Bool) 942794330)) ? (-942794310) : (-942794327)))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (_Bool)1)) : ((-2147483647 - 1))))) & (((((/* implicit */_Bool) 10ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (7ULL)))))));
                arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((-7978886153339472333LL), (((/* implicit */long long int) (~(2147483647))))))) ? (((/* implicit */unsigned long long int) min((554153860399104LL), (((/* implicit */long long int) min((458752), (((/* implicit */int) (signed char)-102)))))))) : (min((17181680893664312106ULL), (((/* implicit */unsigned long long int) -1032532831))))));
                arr_8 [i_1] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (short)-31068))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) var_0);
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -9101771866838106376LL)) ? (((/* implicit */unsigned long long int) 0LL)) : (15409868027353511587ULL))) * (var_8)))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (signed char)101)))));
}
