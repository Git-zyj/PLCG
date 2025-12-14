/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76274
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
    var_10 = ((/* implicit */unsigned char) var_5);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 22; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] [i_0 + 3] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 4])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_0] [i_1 + 1]))))));
                arr_5 [(unsigned char)18] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)159)))), ((+((+(((/* implicit */int) (signed char)97))))))));
            }
        } 
    } 
}
