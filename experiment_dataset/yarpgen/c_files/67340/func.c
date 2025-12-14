/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67340
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
    var_10 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) var_5)))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_7 [i_2] = ((/* implicit */_Bool) min((min((var_4), (var_4))), (((/* implicit */unsigned char) max((((_Bool) var_4)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) < (var_1))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_13 [i_4] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) var_1)))));
                                arr_14 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_8)))));
                                arr_15 [8ULL] [i_0] [i_1] [i_2] [i_3] [i_3] = ((((/* implicit */long long int) ((var_2) - (((/* implicit */int) var_3))))) * (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)60086))) / (9168457388878981655LL))));
                                arr_16 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (var_2)))) + ((-((((_Bool)0) ? (6589086038484199009ULL) : (((/* implicit */unsigned long long int) 5217083275563268701LL))))))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9)))) - (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */long long int) var_0);
}
