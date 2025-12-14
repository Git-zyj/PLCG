/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75843
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
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_19 = ((((((/* implicit */_Bool) ((int) arr_3 [i_0] [i_1]))) ? ((-(-5576457884872011532LL))) : (((/* implicit */long long int) (-(((/* implicit */int) var_13))))))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-117)))))));
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((max((((/* implicit */long long int) min((((/* implicit */short) var_11)), (arr_3 [i_0] [i_1])))), (var_5))) + (9223372036854775807LL))) << (((((((/* implicit */int) (short)-1394)) + (1407))) - (13)))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) ((int) var_3));
}
