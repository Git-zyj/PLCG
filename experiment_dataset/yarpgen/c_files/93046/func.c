/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93046
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
    var_10 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))));
    var_11 = ((/* implicit */_Bool) var_2);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_14 [i_1] [i_1] [i_1] [i_1 + 3] [(short)12] = ((/* implicit */signed char) max((var_9), (((/* implicit */long long int) arr_13 [i_0] [i_0] [i_1 - 2] [i_2] [i_2] [i_3] [i_4]))));
                                var_12 ^= ((/* implicit */unsigned long long int) ((unsigned int) (~((~(401124287332437391LL))))));
                            }
                        } 
                    } 
                } 
                arr_15 [(short)11] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)32742))));
                arr_16 [i_1] [i_1 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */short) arr_0 [i_0] [i_1 + 2])), (var_6)))) ? (((/* implicit */int) max((arr_6 [i_1 - 2] [i_1 + 3] [i_1 - 2]), (((/* implicit */unsigned char) var_5))))) : ((-2147483647 - 1))));
            }
        } 
    } 
    var_13 |= ((/* implicit */unsigned int) (short)-25511);
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        for (int i_6 = 1; i_6 < 18; i_6 += 4) 
        {
            for (unsigned short i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 1) 
                    {
                        for (int i_9 = 0; i_9 < 20; i_9 += 4) 
                        {
                            {
                                arr_31 [i_5] [i_5] [i_5] [i_5] [i_6] = ((/* implicit */unsigned char) var_1);
                                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) var_1))));
                            }
                        } 
                    } 
                    arr_32 [i_6] [i_7] [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) min((var_7), (((/* implicit */unsigned char) arr_28 [i_5] [i_6] [i_7]))))), (((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))) ? (((unsigned long long int) (short)25504)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_5] [i_5])) ? (((/* implicit */int) (short)25494)) : ((+(((/* implicit */int) var_7)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 20; i_10 += 1) 
                    {
                        for (unsigned long long int i_11 = 1; i_11 < 18; i_11 += 2) 
                        {
                            {
                                arr_37 [i_6] = ((/* implicit */unsigned char) (short)25510);
                                var_15 += ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_5])) ? (((/* implicit */int) arr_24 [i_11 + 2])) : (((/* implicit */int) (unsigned short)65529))));
                                var_16 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((short) (short)25483)))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-7240))));
                }
            } 
        } 
    } 
}
