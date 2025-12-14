/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60078
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
    var_14 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-17706))))) ? (((/* implicit */int) ((1280129484U) == (((/* implicit */unsigned int) ((/* implicit */int) (short)24939)))))) : (((/* implicit */int) var_9))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (var_1))))) / (((((/* implicit */_Bool) (unsigned char)38)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)14)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 22; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_14 [i_4] [i_4] = ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)218))) / (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1036513208U)) * (0ULL)))) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) -1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21045))) : (2616504777311573155LL))))));
                                arr_15 [i_4] [i_2] [i_4] = ((/* implicit */unsigned int) (unsigned char)37);
                                var_16 |= var_10;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        for (int i_6 = 2; i_6 < 20; i_6 += 3) 
                        {
                            {
                                arr_22 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_11)) ? (0) : (((/* implicit */int) (short)8860)))), (((/* implicit */int) var_2))))) && ((_Bool)0)));
                                var_17 = ((/* implicit */int) -2616504777311573135LL);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_7 = 1; i_7 < 22; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 1; i_8 < 20; i_8 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) (signed char)27);
                                arr_28 [i_8 - 1] [i_7 - 1] [i_2] [i_1] = ((/* implicit */_Bool) var_10);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) (((+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)70)) : (((/* implicit */int) var_10)))))) >> (((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_3)) + (14162950264314412363ULL)))) ? (min((var_0), (((/* implicit */unsigned long long int) (unsigned short)12724)))) : (((/* implicit */unsigned long long int) var_4)))) - (12693ULL)))));
}
