/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97573
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) max((arr_2 [i_0]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_1 - 3] [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) arr_5 [i_1 - 3] [i_1] [i_2] [i_0])))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 += ((/* implicit */short) var_4);
                                var_18 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)46)) ? (((/* implicit */int) arr_4 [i_1] [i_4])) : (arr_9 [i_0] [i_0] [i_0] [i_0])))), (((unsigned long long int) (unsigned char)47)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3])))));
                                var_19 -= ((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [(unsigned short)10] [i_4] [i_1 - 1] [i_3]))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_1] [i_1])), (((((/* implicit */_Bool) arr_12 [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)71))) : (arr_12 [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1 + 3])))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) var_15);
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
    {
        for (long long int i_6 = 2; i_6 < 18; i_6 += 3) 
        {
            {
                arr_18 [4LL] [i_6] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)48747)) && (((/* implicit */_Bool) (unsigned char)208))));
                arr_19 [i_5] [i_6 - 2] [i_6] = ((/* implicit */long long int) ((unsigned short) (unsigned char)227));
            }
        } 
    } 
}
