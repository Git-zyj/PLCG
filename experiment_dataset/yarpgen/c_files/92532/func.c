/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92532
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
    var_10 = ((/* implicit */short) var_1);
    var_11 = var_4;
    var_12 = ((/* implicit */int) var_6);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_4 [i_0] [(unsigned char)13] [i_1]);
                arr_8 [i_0] [4ULL] [i_0] = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_2))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) var_1)))))));
                arr_9 [i_0] [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */int) arr_0 [i_0] [i_1])))) << (((((((/* implicit */int) arr_0 [i_0] [i_0])) + (115))) - (24)))));
                arr_10 [i_0] [i_0] [7LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((unsigned long long int) arr_0 [i_0] [i_0])), (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) max((((/* implicit */short) var_3)), ((short)24364)))), (var_6)))) : (((/* implicit */int) arr_1 [i_0]))));
                arr_11 [(signed char)17] [i_1] = min((((int) min((arr_1 [i_1]), (((/* implicit */unsigned char) arr_6 [i_0] [i_0] [i_1]))))), ((-(((/* implicit */int) max(((_Bool)1), (arr_2 [i_0])))))));
            }
        } 
    } 
}
