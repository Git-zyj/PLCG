/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66578
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */_Bool) var_1);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_12 [(unsigned char)1] [i_2] [i_2] [i_3] [i_4] = arr_3 [i_1] [i_4];
                                arr_13 [10U] [i_1 + 1] [i_2] [(signed char)15] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (_Bool)1)), (12898327044273604287ULL))), (min((((/* implicit */unsigned long long int) var_9)), (arr_4 [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-24640)) && (((/* implicit */_Bool) arr_1 [i_0])))))) : (((unsigned int) arr_7 [i_0] [i_1 - 1] [i_1 - 2]))));
                                var_21 ^= ((/* implicit */unsigned int) ((short) (+(arr_10 [i_0] [(signed char)3] [i_1 - 1]))));
                                var_22 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-24640))) ^ (arr_7 [i_0] [i_1] [i_2]))))), (((unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_3] [i_2] [i_0])))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_2] = ((/* implicit */unsigned char) (~(max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_2])) || (((/* implicit */_Bool) arr_8 [i_0] [i_1 + 3] [i_2] [i_1] [i_2] [i_2]))))), (((((/* implicit */_Bool) arr_4 [i_0])) ? (7231845449432783925LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_15)), (var_19)));
    var_24 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (short)-24625)), (var_4)));
}
