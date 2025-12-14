/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84238
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
    var_19 = ((/* implicit */short) ((_Bool) (+(var_1))));
    var_20 = ((int) (~(((/* implicit */int) var_10))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */_Bool) (+(((long long int) arr_2 [i_1]))));
                var_22 = ((/* implicit */short) (unsigned short)9134);
                var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)55896))))) ? (var_1) : ((~((+(((/* implicit */int) arr_1 [i_1] [i_0]))))))));
                var_24 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_18)))) ? (((/* implicit */int) (unsigned short)57955)) : (((((/* implicit */int) var_6)) & ((~(-818513672)))))));
            }
        } 
    } 
}
