/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84577
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_1), ((unsigned char)233)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_10))))), (arr_6 [i_2] [i_2] [14ULL] [i_1 + 1])))) : (((/* implicit */int) var_1)))))));
                    arr_7 [4] [4LL] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(_Bool)1] [11ULL] [i_0] [(unsigned short)0]))) == (arr_2 [i_0] [i_0] [i_0])));
                    var_21 += ((/* implicit */unsigned char) min((((unsigned long long int) arr_6 [i_1 + 1] [i_1 + 1] [i_2] [i_2])), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 1] [i_1] [i_2])))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((short) (~(((/* implicit */int) arr_6 [i_0] [(unsigned char)6] [i_2] [(unsigned short)10]))))))));
                                arr_16 [13LL] [13LL] [i_2] = ((/* implicit */long long int) arr_5 [11LL] [13LL] [1ULL] [i_0]);
                                arr_17 [i_0] [i_0] [i_2] [i_3] [i_4] = var_7;
                                arr_18 [i_0] [15ULL] [15ULL] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_3 [i_2])) / (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (((((/* implicit */_Bool) arr_10 [i_2])) ? (arr_13 [i_0] [i_1] [(unsigned short)7] [i_3] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
                                var_22 = ((((/* implicit */unsigned long long int) var_2)) & (min((((/* implicit */unsigned long long int) arr_8 [i_1 + 1] [i_1] [i_1] [i_1 - 1])), (var_18))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) var_9);
}
