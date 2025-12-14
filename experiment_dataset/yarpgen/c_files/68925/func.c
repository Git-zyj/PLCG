/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68925
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
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) var_1))));
    var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) 104072948U)) || (((/* implicit */_Bool) var_10))))), (((((/* implicit */int) arr_4 [i_0])) % (((int) arr_2 [i_0]))))));
                arr_7 [(unsigned short)8] &= ((/* implicit */unsigned int) ((min((((/* implicit */long long int) (unsigned char)239)), (-2947216607829178337LL))) / (((/* implicit */long long int) (~(((/* implicit */int) var_1)))))));
            }
        } 
    } 
}
