/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99828
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
    var_14 = ((/* implicit */unsigned short) var_6);
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4144958219U)) ? (9309434292400060180ULL) : (((/* implicit */unsigned long long int) 1637958970U))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_16 &= ((/* implicit */long long int) ((unsigned short) (!(((/* implicit */_Bool) var_0)))));
                    var_17 *= ((/* implicit */short) ((unsigned int) 9309434292400060192ULL));
                    arr_8 [i_0] [i_0] [3U] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_0])))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) 9309434292400060175ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((-5771006484024092291LL) >= (((/* implicit */long long int) var_1)))))) : (min((((/* implicit */unsigned long long int) var_5)), (var_0))))))));
}
