/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70959
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))), (((/* implicit */int) min((((/* implicit */signed char) var_2)), (var_9))))))) ? (var_6) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_1)))))))));
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (var_6)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 + 1])) | (((/* implicit */int) arr_0 [i_0 - 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))) & (arr_2 [i_0] [i_0] [i_1])))))));
                var_13 = ((/* implicit */unsigned long long int) (-((~(((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) arr_0 [i_0]))))))));
                arr_5 [i_0] [i_1] = max((min((arr_3 [i_0] [i_0 - 2] [i_0 + 1]), (arr_2 [i_1] [i_0] [i_0]))), (arr_3 [i_0 - 1] [i_1] [i_0]));
                var_14 = arr_2 [i_0] [i_0] [i_1];
                arr_6 [(unsigned char)6] [i_0] [(unsigned char)6] &= ((/* implicit */unsigned char) (-(((/* implicit */int) var_4))));
            }
        } 
    } 
    var_15 = var_6;
    var_16 = var_3;
}
