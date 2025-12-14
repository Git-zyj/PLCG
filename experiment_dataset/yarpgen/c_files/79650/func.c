/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79650
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-13731)) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-27413))))) : (((unsigned int) var_9))))) % (min((((var_5) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)115))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-18488)), (var_7))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) var_9);
                    var_13 |= ((/* implicit */_Bool) arr_0 [i_0]);
                }
            } 
        } 
    } 
}
