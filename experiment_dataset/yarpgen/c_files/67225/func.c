/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67225
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
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */long long int) arr_3 [i_0] [i_0]);
                arr_4 [i_0] [i_1] = ((/* implicit */_Bool) var_8);
                var_13 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))), (((unsigned long long int) min((var_3), (((/* implicit */long long int) arr_1 [i_0] [i_0])))))));
                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 + 1])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1])))))) ? (((/* implicit */int) min((arr_3 [i_1 + 1] [i_1 + 1]), (arr_3 [i_1 + 1] [i_1 + 1])))) : (((/* implicit */int) ((unsigned char) arr_3 [i_1 + 1] [i_1 + 1])))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) min((((long long int) min((var_8), (((/* implicit */unsigned short) var_10))))), (((/* implicit */long long int) (~(((/* implicit */int) var_2)))))));
    var_16 = ((/* implicit */unsigned short) var_6);
}
