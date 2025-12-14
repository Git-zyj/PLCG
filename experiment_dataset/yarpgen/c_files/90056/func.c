/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90056
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
    var_10 = ((/* implicit */long long int) (+(min((((((/* implicit */int) var_4)) << (((((/* implicit */int) var_1)) - (103))))), (((/* implicit */int) var_6))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_11 |= ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_2] [i_2]);
                    arr_6 [i_0] = ((/* implicit */unsigned char) min(((signed char)84), ((signed char)84)));
                    var_12 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */signed char) arr_9 [i_0] [i_0]);
                                arr_14 [i_0] [i_1 - 1] [16U] [i_3] [(signed char)18] = ((/* implicit */unsigned char) arr_11 [i_4 - 2] [i_4] [i_4] [i_3] [(short)3]);
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_9 [i_1] [i_1 + 1]) ? (((/* implicit */int) arr_10 [(_Bool)1] [18LL] [i_1 - 2] [i_0] [i_1 - 1])) : (((/* implicit */int) arr_10 [i_1] [i_1 - 1] [i_1 + 1] [i_0] [i_1 + 1]))))) ? (((((/* implicit */_Bool) arr_10 [18LL] [18LL] [i_1 + 1] [i_0] [i_1 - 2])) ? (((/* implicit */int) arr_4 [1ULL] [i_1 - 1] [i_1 + 1])) : (((/* implicit */int) arr_9 [i_1 + 1] [i_1 - 1])))) : (((((/* implicit */int) arr_10 [6LL] [i_1] [i_1 - 2] [i_0] [i_1 - 2])) - (((/* implicit */int) arr_4 [i_1] [i_1] [i_1 + 1]))))));
                }
            } 
        } 
    } 
}
