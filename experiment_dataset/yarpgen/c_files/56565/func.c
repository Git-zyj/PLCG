/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56565
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (signed char)113)) - (109)))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) 624258362))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) 7088266362815857593ULL);
    }
    /* LoopNest 2 */
    for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        for (unsigned char i_2 = 1; i_2 < 19; i_2 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2 + 2] [i_2 - 1]))) < (2133027546U)))) > (((arr_8 [i_2] [i_2 + 1]) >> (((((/* implicit */int) arr_0 [i_2 + 3] [i_2 - 1])) - (129))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 1) 
                {
                    for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned long long int) arr_9 [i_2]);
                            var_14 *= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) arr_5 [i_3 - 1])) < (((/* implicit */int) arr_7 [i_2 + 1])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
