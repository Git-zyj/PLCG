/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61448
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
    var_17 &= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (~(8003697935194112807LL)))) ? (min((((/* implicit */long long int) var_8)), (-8003697935194112816LL))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 8003697935194112810LL))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */int) arr_2 [i_0] [i_1] [i_1 + 2]);
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */signed char) max((2201074369U), (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) arr_0 [2LL]))))), (((((/* implicit */_Bool) -8003697935194112807LL)) ? (var_10) : (((/* implicit */int) arr_1 [(unsigned short)6])))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) var_10);
}
