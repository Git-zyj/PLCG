/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79328
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
    var_11 = ((var_1) != (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)240))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_5))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_2] &= ((/* implicit */_Bool) ((var_5) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) (unsigned short)9873)) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))) : (((unsigned long long int) arr_3 [i_0] [i_0]))))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        arr_9 [i_0] [i_1 + 1] [i_2] [i_3] = ((/* implicit */long long int) ((unsigned char) arr_5 [i_0] [i_0] [i_0] [i_0]));
                        var_12 |= ((/* implicit */unsigned char) var_0);
                        var_13 &= ((/* implicit */unsigned int) var_3);
                    }
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_0)) ^ (var_5)));
    var_15 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))));
}
