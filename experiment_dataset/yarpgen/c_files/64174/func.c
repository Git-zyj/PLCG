/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64174
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
    var_14 = (+(-2190197322000130144LL));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */signed char) (~(((/* implicit */int) min((((((/* implicit */_Bool) arr_1 [i_1])) && (((/* implicit */_Bool) arr_0 [i_0])))), ((!(((/* implicit */_Bool) var_12)))))))));
                var_16 &= min(((unsigned short)65535), (((/* implicit */unsigned short) (short)(-32767 - 1))));
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (~(min((arr_2 [i_0] [i_1]), (arr_2 [i_0] [i_0]))))))));
            }
        } 
    } 
}
