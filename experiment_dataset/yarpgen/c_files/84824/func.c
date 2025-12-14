/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84824
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
    var_15 += ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (-(-3922027718841644484LL)))) : (137438953471ULL)))));
    var_16 = ((/* implicit */long long int) ((var_6) == ((+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_6)))))));
    var_17 -= ((/* implicit */signed char) var_13);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned char) arr_7 [11LL] [11LL] [i_1]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    var_19 = ((/* implicit */short) var_13);
                    var_20 = ((/* implicit */unsigned int) ((var_9) == (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 + 1])))));
                }
                var_21 += ((/* implicit */_Bool) 0ULL);
                arr_10 [7ULL] [i_1] = ((/* implicit */long long int) (_Bool)1);
            }
        } 
    } 
}
