/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86402
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
    var_18 = ((/* implicit */_Bool) (short)-20293);
    var_19 = ((/* implicit */unsigned short) var_3);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_20 -= (!(((/* implicit */_Bool) var_9)));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 2) 
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) (((~(((((/* implicit */_Bool) -856221945)) ? (((/* implicit */unsigned int) var_15)) : (var_8))))) | (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1] [21] [i_1] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_4) & (((/* implicit */unsigned long long int) -856221945))))) ? (((-856221946) ^ (856221946))) : ((-((-(((/* implicit */int) (unsigned char)115))))))));
                                var_21 *= ((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)57954))))) : (856221941))), (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(var_8)));
                    arr_17 [i_0] [18] [i_2] [(signed char)15] = (unsigned short)65517;
                }
                /* vectorizable */
                for (short i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    var_22 = ((/* implicit */unsigned char) (+((+(var_8)))));
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)20036)) & (715719882)));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 1) 
                {
                    for (long long int i_7 = 2; i_7 < 22; i_7 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */short) -856221946);
                            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) (-(856221946)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : ((-((+(-1LL)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
