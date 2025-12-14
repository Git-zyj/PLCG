/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89265
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
    var_10 = ((/* implicit */signed char) min((((((/* implicit */_Bool) 3259094925U)) ? (2305843009213693951ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) ((_Bool) 16140901064495857656ULL)))));
    var_11 = ((/* implicit */_Bool) max((min((((var_2) * (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) var_9))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((((/* implicit */_Bool) min((min((arr_3 [i_0]), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) ((unsigned char) arr_2 [i_0] [i_0] [i_0])))))) ? (min((((/* implicit */unsigned long long int) ((arr_2 [i_0] [i_1 - 1] [i_0]) % (arr_3 [i_0])))), ((-(16140901064495857664ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)74))));
                var_12 = ((/* implicit */_Bool) ((unsigned long long int) var_4));
                arr_6 [i_0] [i_1 + 1] = (+(((/* implicit */int) arr_4 [i_1 + 1] [i_0] [i_0])));
                var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_3 [i_1]))) ? (((/* implicit */int) ((_Bool) -653385632))) : ((-(((/* implicit */int) arr_4 [i_0] [i_1 - 2] [i_1 - 2])))))))));
            }
        } 
    } 
}
