/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63839
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
    var_13 = (((+(((unsigned int) (short)4946)))) >= (var_5));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_9)), (var_10)))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)0)), (var_9)))))))))));
                arr_7 [i_0] = ((/* implicit */unsigned char) var_10);
            }
        } 
    } 
}
