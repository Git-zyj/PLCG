/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84148
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
    var_17 = ((/* implicit */unsigned int) ((unsigned short) (unsigned short)34715));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            {
                arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 113247014U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)126))) : (4181720282U)));
                arr_9 [i_1] [(_Bool)1] [i_1] = ((/* implicit */int) min((((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) != (4181720270U)))), (((short) ((((/* implicit */_Bool) 27)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_12))))));
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) arr_6 [i_0] [i_1]))));
                var_19 = ((/* implicit */long long int) arr_7 [i_1]);
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_5 [i_0]), (arr_5 [i_0])))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) 1647734123U);
    var_22 = ((/* implicit */unsigned long long int) ((((unsigned long long int) 6730292078071077295LL)) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (225809549U)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_15)), (491520)))) : (((unsigned long long int) var_13))))));
}
