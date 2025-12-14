/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70750
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned char) arr_3 [i_0] [i_1] [i_1]);
                var_15 = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */signed char) ((((/* implicit */_Bool) 8388607LL)) && (((/* implicit */_Bool) arr_2 [i_0] [7U]))))), ((signed char)0)))), (max((((/* implicit */unsigned long long int) (unsigned char)213)), (10076608064317584286ULL)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                {
                    var_16 += ((/* implicit */unsigned char) max((((/* implicit */int) ((2251799813685247ULL) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 514246639810137275ULL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_5 [i_2])))))))), ((-(((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2] [i_3] [i_3] [i_4])) || (((/* implicit */_Bool) var_11)))))))));
                    arr_10 [(short)4] [i_3] [9ULL] [9ULL] = ((/* implicit */unsigned int) arr_9 [14U] [5ULL] [i_4] [9U]);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) var_3);
    var_18 = ((/* implicit */short) var_12);
}
