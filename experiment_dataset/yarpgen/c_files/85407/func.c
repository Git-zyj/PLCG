/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85407
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
    var_16 = ((/* implicit */unsigned int) ((-5117098981912379536LL) | (((/* implicit */long long int) (((((~(964712863))) + (2147483647))) >> ((((+(1267449567U))) - (1267449541U))))))));
    var_17 = ((/* implicit */unsigned char) min(((!((_Bool)0))), (var_11)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */short) ((unsigned int) (-(((/* implicit */int) arr_2 [i_0])))));
                arr_8 [i_0] = ((/* implicit */short) ((long long int) (+(min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_2)))))));
                var_19 += ((/* implicit */signed char) arr_7 [i_0] [i_1]);
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) max((var_20), (-8615040612372626414LL)));
}
