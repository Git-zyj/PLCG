/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65703
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
    var_18 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) 4977500541815080080LL)) ? (((/* implicit */int) (signed char)-122)) : (var_2))) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)34825)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned char i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        {
                            var_19 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_3])) ? (max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_6 [i_2 + 1] [i_2 + 1] [i_3 + 2] [i_3 - 1])))) : (((/* implicit */int) max((arr_6 [i_0] [i_3 + 2] [i_3 + 2] [i_3 + 2]), (arr_6 [i_3] [i_3 - 1] [i_3] [i_3 - 1]))))));
                            arr_9 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_8 [i_0] [i_0] [i_2 + 1]), (1366007764))))));
                            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((arr_6 [i_2] [i_2 - 1] [i_2] [i_2]), (max((((/* implicit */unsigned short) var_4)), (min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)63192)))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) - (max((arr_4 [i_0] [i_1]), (((/* implicit */unsigned int) arr_2 [i_0] [i_0]))))));
            }
        } 
    } 
}
