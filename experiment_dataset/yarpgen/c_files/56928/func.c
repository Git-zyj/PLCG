/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56928
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
    var_16 |= ((/* implicit */long long int) ((unsigned short) ((short) ((((/* implicit */unsigned int) var_6)) * (var_12)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) min((-4063517940587145118LL), (((/* implicit */long long int) var_9)))))))), (((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) && (((/* implicit */_Bool) (short)-10736)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]))))) : (((/* implicit */int) (_Bool)1))))));
                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) 0U)), (var_14)))) ? ((+(4063517940587145141LL))) : (4063517940587145121LL)))), (((unsigned long long int) arr_2 [i_0] [i_1])))))));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1047215496)) ? ((-(arr_1 [i_1] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) min((((/* implicit */long long int) -53204392)), (9223372036854775807LL))))))));
            }
        } 
    } 
    var_20 |= (~(((/* implicit */int) (unsigned char)0)));
}
