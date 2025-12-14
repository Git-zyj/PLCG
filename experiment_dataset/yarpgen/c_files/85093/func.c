/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85093
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
    for (short i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned char) arr_1 [i_0 - 3] [i_0]);
                arr_4 [i_0 - 1] [17U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((arr_3 [i_0]) >= (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])))))))) ? (((/* implicit */long long int) max((arr_1 [i_1 - 2] [i_1]), (arr_2 [i_1 - 1] [i_0])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) arr_2 [i_0 + 1] [(unsigned short)1])) : (arr_3 [(_Bool)1])))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (8005928441446763689LL) : (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-81)) + (2147483647))) >> (((arr_0 [i_1 + 1]) - (24774058U))))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) var_14);
}
