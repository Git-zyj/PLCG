/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67584
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
    var_14 = ((/* implicit */short) var_9);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 4; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) var_5);
                                var_16 = ((/* implicit */_Bool) (((-(var_5))) << (((((var_10) ? ((~(var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) - (239965239U)))));
                                var_17 -= ((/* implicit */_Bool) var_9);
                                var_18 = ((/* implicit */unsigned short) var_10);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 2; i_5 < 22; i_5 += 1) 
                    {
                        for (signed char i_6 = 3; i_6 < 22; i_6 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_8) < (((/* implicit */int) var_2)))))) : (var_5)));
                                var_20 = ((/* implicit */unsigned short) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                                var_21 = ((/* implicit */long long int) var_2);
                                var_22 = ((/* implicit */unsigned int) var_2);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 23; i_7 += 3) 
                    {
                        for (unsigned long long int i_8 = 1; i_8 < 21; i_8 += 1) 
                        {
                            {
                                arr_23 [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) var_4)) & (var_6)));
                                var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))));
                                arr_24 [i_0] [i_0] [i_1] [i_2] [i_7] = ((/* implicit */unsigned short) var_8);
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */_Bool) min((var_24), ((!(((/* implicit */_Bool) 0LL))))));
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 1; i_9 < 20; i_9 += 3) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 23; i_10 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) var_12))));
                                var_26 -= ((/* implicit */short) (~(((((var_6) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48093))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)62427)) >> (((((/* implicit */int) (unsigned short)9284)) - (9259)))))) : (var_6)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
