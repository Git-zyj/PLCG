/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94928
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) arr_1 [i_0] [i_1]))));
                var_15 += ((/* implicit */_Bool) min((((/* implicit */unsigned short) ((signed char) ((signed char) (_Bool)1)))), (min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)16464)))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) min(((-(((((/* implicit */_Bool) (unsigned short)16464)) ? (-6408630660651043324LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61440))))))), (((/* implicit */long long int) ((((/* implicit */int) ((signed char) var_3))) * (((/* implicit */int) ((arr_0 [i_0] [i_1]) <= (arr_2 [i_0] [i_0])))))))));
                var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (-3662522701228792395LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1720))) : (3839491592502914935LL)));
            }
        } 
    } 
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_6)))) > (((((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (var_7)))) ? ((+(var_2))) : (((/* implicit */int) (!(((/* implicit */_Bool) -904745794))))))))))));
    var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned short)4101))))))) ? (((long long int) (unsigned short)4096)) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
    var_19 += ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) - (((/* implicit */int) var_1))));
}
