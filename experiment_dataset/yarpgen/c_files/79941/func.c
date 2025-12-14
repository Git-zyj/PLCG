/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79941
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
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_5 [i_0] [(unsigned char)15] = ((/* implicit */long long int) arr_4 [i_0] [i_0 + 1]);
                var_19 = ((/* implicit */_Bool) ((unsigned long long int) (_Bool)1));
                var_20 = ((/* implicit */unsigned long long int) (~(min((((/* implicit */long long int) ((((/* implicit */_Bool) 9216320288497399181LL)) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) var_9))))), (0LL)))));
                arr_6 [(short)14] = ((/* implicit */short) arr_3 [(unsigned char)5]);
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) ((max((((/* implicit */int) var_12)), ((-(((/* implicit */int) var_1)))))) != (((/* implicit */int) var_4))));
    var_22 = 0LL;
}
