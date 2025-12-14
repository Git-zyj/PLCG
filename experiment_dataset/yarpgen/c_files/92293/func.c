/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92293
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
    var_16 |= 31U;
    var_17 = ((/* implicit */unsigned int) (((-(min((var_2), (17139352849213996212ULL))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) var_6)) < ((-(var_8)))))))));
    var_18 = min((((((/* implicit */_Bool) ((4149790620449563491LL) / (((/* implicit */long long int) var_5))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) var_6)) | (var_14)))))), (((_Bool) (!(((/* implicit */_Bool) 31U))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */_Bool) 31U);
        arr_2 [i_0] = ((/* implicit */long long int) var_8);
        var_20 -= ((/* implicit */int) (_Bool)0);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
    }
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */int) min((((arr_1 [i_1]) ? (((/* implicit */unsigned int) var_4)) : (var_11))), (((/* implicit */unsigned int) ((int) arr_1 [i_1])))));
        var_22 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) (((_Bool)1) && (((/* implicit */_Bool) 13789438089328484393ULL))))), (min((arr_5 [i_1]), (var_9))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_4 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (var_1) : ((-(arr_4 [i_1])))))));
    }
    var_23 = ((/* implicit */long long int) var_1);
}
