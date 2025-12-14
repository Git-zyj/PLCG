/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73282
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
    var_16 = ((/* implicit */_Bool) max((max((((/* implicit */int) max((var_7), (((/* implicit */unsigned short) (signed char)127))))), (((((/* implicit */_Bool) (unsigned char)144)) ? (((/* implicit */int) var_13)) : (737540900))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
    var_17 = ((/* implicit */int) -1297416290111702783LL);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_18 += ((/* implicit */_Bool) ((int) min((max((-1297416290111702783LL), (((/* implicit */long long int) (unsigned char)134)))), (((/* implicit */long long int) 1238330299)))));
                var_19 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (-1297416290111702783LL) : (-2305843009213693952LL))))), (arr_5 [i_0])));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) (unsigned short)1020);
}
