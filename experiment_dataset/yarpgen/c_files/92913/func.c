/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92913
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
    var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) (-((+(-477672045))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) -1786670439)), (((long long int) var_3))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) 1786670439)) == (1023LL))))) <= (var_2)))) : (((/* implicit */int) (_Bool)1))));
        var_12 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
    }
    for (long long int i_1 = 0; i_1 < 11; i_1 += 2) /* same iter space */
    {
        var_13 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((long long int) var_7))) <= (((((/* implicit */_Bool) (-(var_4)))) ? ((+(var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) > (var_3)))))))));
        var_14 -= ((/* implicit */int) ((var_2) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1])))));
    }
    var_15 = min((((/* implicit */long long int) ((((6481393403042946124LL) / (-2504915390320872093LL))) >= (((/* implicit */long long int) ((var_8) | (var_9))))))), ((+(max((((/* implicit */long long int) var_0)), (-797171396961003012LL))))));
    var_16 = ((/* implicit */long long int) (+(var_8)));
    var_17 = ((/* implicit */int) max((var_17), (-524049635)));
}
