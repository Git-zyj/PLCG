/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85527
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
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) var_0))));
                var_20 = ((/* implicit */unsigned char) ((max((((((/* implicit */long long int) ((/* implicit */int) var_9))) + (var_5))), (((/* implicit */long long int) ((_Bool) var_4))))) >= (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_0 + 1] [i_0 - 1] [i_0 - 1])))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_17)))), (var_12)))) ? (min((((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (var_8))), (min((var_15), (((/* implicit */unsigned long long int) -9047134795544613015LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((max((var_0), (((/* implicit */unsigned char) var_7)))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) var_9))))))))))))));
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 4; i_3 < 18; i_3 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned char) (+(max((arr_1 [i_3 - 2]), (((/* implicit */unsigned int) arr_2 [i_3 - 1]))))));
                var_23 = ((/* implicit */_Bool) (+((+(((/* implicit */int) arr_7 [i_3 - 2] [i_3 - 3]))))));
            }
        } 
    } 
}
