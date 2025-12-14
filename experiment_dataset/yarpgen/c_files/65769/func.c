/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65769
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
    var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) (((!(((/* implicit */_Bool) ((long long int) var_4))))) ? (min((((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) ((1740858150) > (1740858122)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_1), (var_7)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((585595288), (arr_1 [i_1 + 1] [i_0])))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_4))))) : (((250630609U) + (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                arr_4 [i_0] [6LL] [6LL] &= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0 - 2])) ? (((/* implicit */int) ((signed char) var_6))) : ((~(((/* implicit */int) var_7))))))));
            }
        } 
    } 
    var_12 *= ((/* implicit */short) ((((/* implicit */_Bool) 1740858150)) ? (((/* implicit */int) (unsigned short)62829)) : (((/* implicit */int) (short)32767))));
}
