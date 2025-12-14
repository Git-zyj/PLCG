/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60347
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
    var_14 = ((/* implicit */int) -1693513691157703869LL);
    var_15 = ((/* implicit */unsigned int) max(((_Bool)1), ((_Bool)1)));
    var_16 = ((/* implicit */_Bool) var_9);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9779390339613886567ULL))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            arr_14 [i_0] [i_0] [i_2] [i_0] &= ((/* implicit */signed char) arr_4 [i_3]);
                            var_17 = ((((((/* implicit */_Bool) arr_12 [i_1 + 2] [i_1] [i_1 + 2] [i_1 + 3] [i_3 + 1] [i_3 + 1])) ? (((var_7) ? (arr_7 [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3 + 1]))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))))) | (max((((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0] [i_2] [i_0])) + (((/* implicit */int) arr_12 [i_1] [i_1] [i_2] [i_2] [i_0] [i_1]))))), (((unsigned int) var_13)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
