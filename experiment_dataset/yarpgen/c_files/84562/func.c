/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84562
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
    var_18 = ((unsigned long long int) var_11);
    var_19 = ((/* implicit */unsigned long long int) max(((unsigned char)217), ((unsigned char)151)));
    var_20 |= ((/* implicit */unsigned long long int) var_5);
    var_21 = ((/* implicit */unsigned char) min((var_3), (var_9)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned short) min((6117602379279626850ULL), (((/* implicit */unsigned long long int) (unsigned short)21))));
                var_23 = min((((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0]))))), ((short)-31175));
            }
        } 
    } 
}
