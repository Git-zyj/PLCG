/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70507
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */_Bool) arr_1 [(signed char)9]);
                arr_4 [i_1] [i_1] [i_1] = (+(((/* implicit */int) (signed char)3)));
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) (signed char)3);
                arr_6 [i_1] [i_0] [i_1] = (signed char)1;
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((var_13) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))))))))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)7)) << ((+(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) (_Bool)1)))))))));
}
