/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97152
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_12 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)44720)) ? (2633866117848515137ULL) : (15812877955861036479ULL)))) ? (((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */long long int) -2147483634)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2633866117848515150ULL))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (min((((((/* implicit */_Bool) -2075718809)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_5))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_7)))))))));
                arr_5 [i_1] [i_0] |= ((/* implicit */_Bool) var_3);
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) ((-8576786318143715655LL) + (var_0))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -8622752295682798320LL)), (var_1)))) ? (((((/* implicit */_Bool) 15812877955861036468ULL)) ? (3554501702364027522ULL) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + (var_7)))))) : (((/* implicit */unsigned long long int) var_9))));
    var_14 = ((/* implicit */unsigned short) ((((max((var_1), (((/* implicit */unsigned long long int) var_6)))) * (((unsigned long long int) (unsigned short)65532)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))));
    var_15 = min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((var_10), (var_3)))), (var_9)))), (((((/* implicit */_Bool) var_0)) ? (15812877955861036489ULL) : (2297875633735975536ULL))));
}
