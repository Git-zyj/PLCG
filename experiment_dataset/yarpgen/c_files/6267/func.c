/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6267
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
    var_18 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_11)), (var_15)))) ? (var_1) : (((((/* implicit */_Bool) var_9)) ? (7ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */int) min((var_19), ((+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))) <= (arr_0 [i_0]))))))));
                    arr_10 [i_0] = ((/* implicit */unsigned long long int) var_17);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_16 [(signed char)3] [i_1] [i_4] [i_4] = var_12;
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (~(var_5)))))) - (arr_14 [i_2] [i_2] [i_2])));
                                arr_17 [i_4] [i_4] [i_4] [i_4] [20LL] = ((/* implicit */long long int) arr_0 [i_1]);
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (~(4494023208979469730ULL))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */long long int) arr_15 [i_0] [i_0] [15U] [i_1] [i_2] [i_2])) ^ (arr_8 [i_2] [(signed char)13] [i_1] [2]))))), (max((min((((/* implicit */unsigned long long int) arr_7 [i_0] [15ULL] [i_0])), (18446744073709551615ULL))), (min((((/* implicit */unsigned long long int) 1044070470)), (16928357116857842975ULL)))))));
                    var_23 = ((/* implicit */long long int) var_8);
                }
            } 
        } 
    } 
}
