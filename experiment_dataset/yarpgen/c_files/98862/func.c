/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98862
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
    var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) ((long long int) var_9)))));
    var_11 ^= ((/* implicit */_Bool) var_4);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 2087208191U)) ? ((~(((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (signed char)72)))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_0 [i_0] [i_1]))) || (((_Bool) var_3))))))))));
                var_13 += ((unsigned char) ((unsigned short) (unsigned char)85));
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) var_0);
    var_15 ^= ((/* implicit */signed char) (-(var_5)));
}
