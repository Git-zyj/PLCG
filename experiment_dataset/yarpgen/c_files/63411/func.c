/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63411
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
    var_14 |= ((/* implicit */signed char) max((((((((/* implicit */_Bool) var_13)) ? (var_10) : (var_1))) << (((max((var_0), (((/* implicit */long long int) var_5)))) - (3660428639161136589LL))))), (((/* implicit */unsigned int) var_3))));
    var_15 = ((/* implicit */_Bool) var_3);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (+(min((var_1), (((/* implicit */unsigned int) var_12)))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 24; i_3 += 4) 
                    {
                        for (short i_4 = 2; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_0] = ((/* implicit */_Bool) (~((~(var_8)))));
                                var_17 = ((/* implicit */unsigned char) (!((_Bool)1)));
                                var_18 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)63)) * (((/* implicit */int) (unsigned short)45064))));
                                var_19 = ((/* implicit */long long int) (+(1073733632U)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 21; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) arr_13 [i_0] [i_0] [(signed char)15] [i_0]);
                                var_21 = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned short) arr_7 [i_0])))))))), (((((/* implicit */_Bool) arr_15 [i_6 + 1] [i_6] [i_6] [i_6 + 1])) ? (var_7) : (((/* implicit */int) var_9))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) (~(var_0)))) / (((arr_4 [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
                }
            } 
        } 
    } 
}
