/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85397
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
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) >= (min((685176422U), (((/* implicit */unsigned int) (_Bool)1))))));
                var_11 = max((((((/* implicit */unsigned long long int) arr_0 [i_1] [(_Bool)1])) | (arr_4 [i_1]))), (((unsigned long long int) arr_0 [i_0 - 1] [i_1])));
                arr_6 [i_1] = min((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_4 [i_1]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_1] [i_1])) & (((/* implicit */int) var_5))))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) / (((arr_0 [i_0 - 1] [i_1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
    var_12 -= var_2;
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((var_6) - (3745375340599152481ULL)))));
    var_14 = ((/* implicit */signed char) var_4);
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) min(((+(15433764627278288300ULL))), (min((var_0), (var_6)))))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) min((-1), (((/* implicit */int) (unsigned char)105))))) > (var_4)))))));
}
