/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5544
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)112))));
                    var_20 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_2 - 1] [i_2 + 3] [i_2 + 2]))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_1 [i_0]))));
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) min((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) arr_2 [i_0] [i_1] [(signed char)6])), (arr_1 [(_Bool)1])))))), (var_10))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) ((((((/* implicit */int) var_8)) < (-1758818772))) ? (max((var_19), (((/* implicit */long long int) (_Bool)0)))) : (((/* implicit */long long int) var_9)))))));
}
