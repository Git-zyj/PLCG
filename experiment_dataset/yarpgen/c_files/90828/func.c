/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90828
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_20 += ((/* implicit */_Bool) ((7137153552833775582ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23989)))));
                arr_5 [i_0] |= min((min((11164492448719452469ULL), (3632744571473407027ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -2981350612895868189LL)) - (7282251624990099146ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) : ((~(var_12)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (-((+(((/* implicit */int) ((short) var_13))))))))));
}
