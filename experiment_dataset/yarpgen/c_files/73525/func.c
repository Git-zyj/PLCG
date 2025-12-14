/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73525
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
    var_20 &= ((/* implicit */short) 4482861181634644710LL);
    var_21 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((var_2), (((/* implicit */long long int) var_13))))) ? (((((/* implicit */_Bool) -1179230843)) ? (((/* implicit */int) (short)16376)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) ((short) (signed char)-76))))), (((/* implicit */int) var_12))));
    var_22 = ((short) (~(((/* implicit */int) ((unsigned char) var_14)))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [(unsigned short)0] [i_0 - 2])) ? (((/* implicit */int) arr_0 [18LL] [i_0 - 2])) : (((/* implicit */int) arr_0 [(short)16] [i_0 - 2]))))) - (((unsigned long long int) var_7))))));
                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (!(((/* implicit */_Bool) -8)))))));
                arr_5 [i_0] = ((/* implicit */unsigned short) ((unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)-7580)) : (((/* implicit */int) arr_4 [i_1] [i_1] [i_1]))))));
                var_25 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1179230843)) ? (((/* implicit */int) arr_3 [i_0 - 2] [i_1])) : (((/* implicit */int) arr_4 [i_0 - 2] [i_1] [i_0]))))))) ? ((+(((long long int) 268173312U)))) : (min((((/* implicit */long long int) ((signed char) 15536644340622927711ULL))), (((long long int) 8602567476459028093LL))))));
            }
        } 
    } 
}
