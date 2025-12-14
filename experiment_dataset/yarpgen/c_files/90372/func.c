/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90372
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
    for (long long int i_0 = 3; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned int i_3 = 4; i_3 < 23; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) min((var_11), (((/* implicit */int) ((((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) (unsigned short)65535)))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0] [i_1] [i_0])) >> (((((/* implicit */int) arr_9 [i_0] [i_0] [21ULL])) - (38379)))))))))));
                            arr_12 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_3] [(unsigned short)0] [i_0]))))) ? (max((min((((/* implicit */unsigned int) arr_0 [i_0])), (1920U))), (4294965375U))) : (max((((((/* implicit */_Bool) 2855805655U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_7 [i_1] [i_2] [i_1]))), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) arr_2 [i_0] [i_0])), (arr_1 [i_0])))))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_1] |= ((/* implicit */short) arr_2 [i_1] [i_1]);
            }
        } 
    } 
    var_16 ^= ((/* implicit */signed char) ((unsigned short) var_10));
}
