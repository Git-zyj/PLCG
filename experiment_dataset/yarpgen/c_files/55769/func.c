/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55769
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
    var_10 -= ((/* implicit */unsigned short) (short)-12402);
    var_11 = ((/* implicit */int) var_5);
    var_12 = (short)-12404;
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        arr_2 [(_Bool)1] = ((/* implicit */unsigned short) ((arr_1 [i_0]) ? (((/* implicit */int) (short)-3599)) : (((/* implicit */int) ((short) arr_1 [i_0 - 2])))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)13)), (1015169905)))) * (0ULL)));
        var_13 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max(((short)-14615), (((/* implicit */short) arr_1 [i_0 - 1]))))), (max((((/* implicit */unsigned long long int) arr_1 [i_0 - 1])), (7667098127283720452ULL)))));
        arr_4 [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) 1015169929)), (max((((/* implicit */unsigned int) var_9)), (3283311485U)))));
    }
}
