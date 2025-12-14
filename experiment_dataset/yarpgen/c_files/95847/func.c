/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95847
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
    var_20 -= max((((((/* implicit */_Bool) (~((-9223372036854775807LL - 1LL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) < (max((var_12), (((/* implicit */unsigned int) var_3))))))));
    var_21 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) 9223372036854775807LL)) <= (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_5))))))));
    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) <= (var_19))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_9)) == (12139198510524527465ULL))))) & (var_19)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_23 = ((/* implicit */_Bool) ((((unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) << (((((/* implicit */int) arr_1 [(signed char)8])) - (84)))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [2U])))));
                var_24 = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)-22458)), (3913564789U)))), (12139198510524527467ULL))), (((/* implicit */unsigned long long int) ((((int) 401874179)) < (((/* implicit */int) ((_Bool) 381402524U))))))));
            }
        } 
    } 
}
