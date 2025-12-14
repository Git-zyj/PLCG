/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73585
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */unsigned char) max((((/* implicit */int) (_Bool)0)), (((((/* implicit */int) var_3)) & ((+(((/* implicit */int) (_Bool)1))))))));
                var_11 = ((/* implicit */unsigned short) max((var_11), (((unsigned short) 18446744073709551615ULL))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) ((((((var_7) + (2147483647))) >> (((var_6) - (336819614))))) >> (((((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned char)74)) - (61))))) - (8188))))));
            }
        } 
    } 
    var_12 = ((int) (~(18446744073709551615ULL)));
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) min((((/* implicit */int) var_3)), (min((((/* implicit */int) ((_Bool) var_4))), (var_7))))))));
    var_14 = (((!(((/* implicit */_Bool) (unsigned short)3340)))) ? ((~(((/* implicit */int) ((_Bool) var_5))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((int) var_9)))))));
}
