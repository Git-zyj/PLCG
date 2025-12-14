/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77768
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
    var_20 = ((/* implicit */short) min((min((((/* implicit */int) (short)-5212)), (-1945112457))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((var_4) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)27162))))))));
    var_21 = ((((/* implicit */_Bool) ((844170379U) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_7)) : (143596438))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) > (min((var_14), (((/* implicit */unsigned long long int) var_4))))))) : (((/* implicit */int) (unsigned char)247)));
    var_22 += ((/* implicit */signed char) min(((unsigned short)22153), ((unsigned short)4565)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 20; i_1 += 2) 
        {
            {
                var_23 = ((/* implicit */unsigned long long int) ((int) var_19));
                var_24 = ((/* implicit */unsigned long long int) max((var_24), (min((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1])) ? (arr_0 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_4 [i_1] [13ULL])))))))), (((((/* implicit */_Bool) arr_1 [i_1 - 3] [i_1 - 1])) ? (arr_1 [i_1 + 1] [i_1 - 3]) : (arr_1 [i_1 - 4] [i_1 - 3])))))));
            }
        } 
    } 
    var_25 += ((/* implicit */signed char) var_14);
}
