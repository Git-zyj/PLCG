/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86874
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
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((((unsigned long long int) (signed char)-21)) + (((/* implicit */unsigned long long int) max((((/* implicit */int) var_9)), (var_12)))))) - (((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */unsigned char) var_9)), (var_10))))))))));
    var_16 += min((((/* implicit */long long int) ((short) min((((/* implicit */int) var_5)), (var_7))))), (max((min((2358411225389859656LL), (2358411225389859648LL))), (((/* implicit */long long int) max((1243644419), (var_12)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((long long int) min((max((var_3), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) ((unsigned char) -8564688440298914049LL))))));
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned char) var_6))), (((var_4) / (((/* implicit */long long int) var_12))))))) && (((/* implicit */_Bool) ((max((var_0), (((/* implicit */long long int) var_14)))) & (min((-6458565461738978271LL), (((/* implicit */long long int) (short)32750)))))))));
        arr_3 [i_0] = ((/* implicit */short) ((long long int) ((short) 1243644396)));
        var_18 = ((/* implicit */long long int) ((_Bool) ((signed char) min((arr_0 [14LL]), (((/* implicit */long long int) arr_1 [i_0]))))));
    }
}
