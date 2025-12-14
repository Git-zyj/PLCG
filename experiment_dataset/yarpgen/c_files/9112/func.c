/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9112
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
    var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_2 - 1] [21ULL]))) : (((((/* implicit */unsigned long long int) 0LL)) & (arr_0 [i_1]))))) >> (((max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))))), (arr_1 [i_0]))) - (18446744073709536263ULL)))));
                    var_12 *= ((/* implicit */_Bool) 4294967295U);
                }
            } 
        } 
    } 
}
