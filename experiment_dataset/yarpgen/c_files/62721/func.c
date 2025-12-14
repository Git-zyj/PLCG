/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62721
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_4 [i_0] [(unsigned char)0] = ((/* implicit */_Bool) arr_3 [i_0] [i_0]);
                var_14 += ((/* implicit */_Bool) 849765634);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) var_12);
    var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((var_9) + (9223372036854775807LL))) >> (((7455124759753005322LL) - (7455124759753005308LL))))), (((/* implicit */long long int) (signed char)-88))))) ? (7455124759753005313LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) max((var_5), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_13))) != (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)136))) - (var_9)))))))))));
}
