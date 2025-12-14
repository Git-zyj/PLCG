/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55905
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (-(max((var_0), (((/* implicit */long long int) (signed char)-110)))))))));
                arr_5 [11] [i_1] [i_1] = ((/* implicit */signed char) max(((-(-1044753147988948026LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)108)))))));
                var_21 = ((/* implicit */unsigned short) (-(max((max((((/* implicit */long long int) (unsigned char)147)), (2736011038957312747LL))), (((/* implicit */long long int) (_Bool)1))))));
                var_22 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (unsigned char)147)) ? (((/* implicit */int) (_Bool)1)) : (var_5))), (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)141))))));
                var_23 = ((/* implicit */signed char) min((((unsigned int) (_Bool)0)), (((/* implicit */unsigned int) ((int) (signed char)109)))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) ((signed char) (_Bool)1));
    var_25 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) -1LL))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)31)), (var_17)))) : ((+(((((/* implicit */_Bool) (unsigned short)6962)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_18))))))));
}
