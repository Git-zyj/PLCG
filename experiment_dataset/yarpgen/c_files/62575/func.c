/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62575
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
    var_20 += ((/* implicit */_Bool) var_1);
    var_21 = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) var_11)), (var_0))) / (((/* implicit */unsigned long long int) var_3))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */int) ((((max((((/* implicit */unsigned int) (unsigned char)139)), (4294967295U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) ^ (0U)));
                    var_22 ^= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (short)379)) : (((/* implicit */int) arr_4 [i_2] [i_2] [i_2])))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_23 = ((signed char) var_2);
                                var_24 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) * (var_12))) << (((((/* implicit */int) var_9)) - (59)))));
                                arr_17 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) var_14)))), (((/* implicit */int) arr_6 [i_2] [i_1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 |= ((/* implicit */unsigned short) var_2);
}
