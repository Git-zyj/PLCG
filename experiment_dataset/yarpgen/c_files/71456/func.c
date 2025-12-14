/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71456
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */signed char) ((unsigned short) (unsigned char)16));
                arr_5 [8ULL] = ((/* implicit */unsigned short) var_16);
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */int) (unsigned char)57)) : (((/* implicit */int) (_Bool)1))));
                arr_7 [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) min((((/* implicit */short) var_5)), (arr_3 [i_0])))) + (2147483647))) << ((((((~(((/* implicit */int) min((var_9), (((/* implicit */unsigned char) (_Bool)1))))))) + (8))) - (6)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            {
                arr_14 [i_3] [i_2] = ((/* implicit */signed char) ((unsigned long long int) (~(((/* implicit */int) (_Bool)1)))));
                var_19 = (((!(((/* implicit */_Bool) arr_10 [i_3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_3]) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64115))))))) : ((((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))) : (var_7))));
            }
        } 
    } 
}
