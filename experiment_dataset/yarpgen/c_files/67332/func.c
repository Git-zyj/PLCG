/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67332
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 17; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_7 [i_0 - 2] [i_1] [i_1 + 1] [i_2 - 1])) : (((((/* implicit */_Bool) arr_7 [i_2 - 3] [i_2 - 3] [i_2 - 2] [i_2 - 1])) ? ((-(((/* implicit */int) var_6)))) : (max((-48359196), (((/* implicit */int) (unsigned short)50499)))))))))));
                    arr_9 [i_0 - 2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15037)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)128))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (max((min((((/* implicit */unsigned long long int) var_2)), (var_9))), (((var_10) + (((/* implicit */unsigned long long int) 5347022438998566878LL)))))) : (((/* implicit */unsigned long long int) var_0))));
}
