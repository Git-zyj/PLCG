/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7847
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
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */unsigned long long int) ((_Bool) (((-2147483647 - 1)) & (2147483647))));
                var_11 = ((((((/* implicit */_Bool) (unsigned char)0)) ? (203841259U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))) != (min((((/* implicit */unsigned int) (-2147483647 - 1))), (524160U))));
                var_12 -= ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) (short)3230))) != (((/* implicit */int) (unsigned short)40537))));
                arr_6 [i_0] = ((/* implicit */unsigned char) 11188947300408237554ULL);
                var_13 = ((/* implicit */unsigned long long int) min((var_13), (min((((((/* implicit */_Bool) 26U)) ? (10494525427446398343ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25027))))), (((/* implicit */unsigned long long int) (_Bool)0))))));
            }
        } 
    } 
    var_14 = ((/* implicit */short) 10494525427446398343ULL);
    var_15 |= ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) (short)-13628))) >> (((/* implicit */int) ((((/* implicit */_Bool) 4333685962941704851LL)) && (((/* implicit */_Bool) ((long long int) (unsigned char)185))))))));
}
