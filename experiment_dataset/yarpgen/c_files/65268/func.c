/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65268
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
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                    arr_6 [i_0] [i_1] [i_2] = var_8;
                    arr_7 [i_0] [i_2 + 1] [i_2] [i_0] = ((/* implicit */unsigned short) (signed char)127);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            {
                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned short)59620)) : (((/* implicit */int) (unsigned char)226))));
                arr_14 [i_3] [i_4] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-127)) ? (1817530271) : (((/* implicit */int) (unsigned short)65535))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) (+(((int) (~(var_4))))));
    var_16 ^= ((/* implicit */long long int) ((((/* implicit */int) var_12)) + (((var_2) - (((/* implicit */int) ((signed char) (signed char)49)))))));
}
