/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8862
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
    var_11 |= ((/* implicit */long long int) max((446485960), (((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 446485964)) || (((/* implicit */_Bool) (signed char)11)))))) % (arr_2 [i_0] [i_0]))))));
                var_13 -= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-89)) ? (446485960) : (446485943)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775805LL))))) : (67043328))));
                var_14 -= ((/* implicit */int) ((unsigned char) (signed char)10));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) min((((((((/* implicit */_Bool) (unsigned char)115)) || (((/* implicit */_Bool) 2506954706U)))) ? (min((((/* implicit */unsigned long long int) (signed char)88)), (16247735988941871334ULL))) : ((-(9771633927611143134ULL))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)146))))))))));
    var_16 &= ((/* implicit */signed char) (((_Bool)0) ? (-446485926) : (((/* implicit */int) (_Bool)1))));
}
