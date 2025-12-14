/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72021
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
    var_11 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (~(-165493537838130235LL)))))) : (((((/* implicit */long long int) min((3394758104U), (var_1)))) % ((-(2440102815659933043LL)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((max((4268873455291712329LL), (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) max((((/* implicit */signed char) arr_1 [i_0])), (var_9)))))))));
        arr_2 [i_0] [i_0] = max(((~((((_Bool)1) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned short)10]))))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) max((((/* implicit */int) var_3)), (arr_0 [i_0] [i_0 + 2])))) : (max((((/* implicit */unsigned int) arr_1 [i_0])), (900209191U))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((var_2), (((/* implicit */int) (short)24204)))))))), (3895180871U)));
    }
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) max((3394758102U), (((/* implicit */unsigned int) (short)7912)))))));
}
