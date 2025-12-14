/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58995
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
    /* LoopSeq 1 */
    for (short i_0 = 4; i_0 < 9; i_0 += 1) 
    {
        arr_4 [i_0] |= ((/* implicit */unsigned long long int) var_1);
        var_17 |= ((/* implicit */unsigned short) (-(arr_1 [i_0] [i_0])));
    }
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (~(((int) ((((/* implicit */_Bool) -986046943)) && (((/* implicit */_Bool) 12751633129108166273ULL))))))))));
    var_19 = ((/* implicit */short) max((((((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) var_0))))) / (var_2))), (((/* implicit */int) ((short) var_1)))));
}
