/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93821
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_12)), (var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)8120), (((/* implicit */short) var_0)))))) : (781481787809194583ULL)))) || (((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */int) (unsigned short)126)), (-2107297583)))))));
                var_18 = ((/* implicit */unsigned short) ((((((unsigned long long int) -2107297563)) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) min((((((/* implicit */int) (signed char)126)) > (((/* implicit */int) arr_1 [i_0] [i_1])))), (((((/* implicit */int) var_0)) >= (((/* implicit */int) var_12))))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 3; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_19 += ((/* implicit */unsigned int) ((max((((2107297583) <= (((/* implicit */int) var_10)))), (var_10))) ? ((+(342650478))) : ((~(((((/* implicit */int) var_4)) + (((/* implicit */int) arr_5 [i_0] [i_1] [i_0] [i_3]))))))));
                                arr_14 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (var_13))))));
                                arr_15 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) (+(var_15)))) >= ((+(3950973361813544575ULL)))))) <= (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)35662)), (var_8)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
                            }
                        } 
                    } 
                } 
                var_20 |= ((/* implicit */unsigned long long int) var_5);
            }
        } 
    } 
    var_21 += ((/* implicit */unsigned long long int) var_7);
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
    {
        for (unsigned int i_6 = 3; i_6 < 14; i_6 += 4) 
        {
            {
                arr_22 [i_6 + 2] = ((/* implicit */short) arr_4 [i_5] [i_5]);
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((-(var_14))) << ((((+(arr_9 [i_5] [i_6 - 3]))) - (12518720482547989059ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_18 [i_5] [i_5])) : (1847925216)))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) arr_18 [i_5] [i_5])) + (2147483647))) >> (((var_9) - (1606853739)))))) : (((var_6) | (((/* implicit */unsigned int) arr_21 [i_5] [i_5] [i_5])))))) : (((/* implicit */unsigned int) ((/* implicit */int) (((~(var_16))) <= (((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_5] [i_5] [i_5]))))))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_7 = 1; i_7 < 19; i_7 += 3) 
    {
        for (unsigned short i_8 = 0; i_8 < 21; i_8 += 1) 
        {
            {
                var_23 = ((/* implicit */unsigned int) max((var_23), ((+(min((min((var_8), (((/* implicit */unsigned int) (_Bool)1)))), (min((((/* implicit */unsigned int) arr_27 [i_7 - 1] [i_8] [i_8])), (var_6)))))))));
                arr_29 [i_7] [i_8] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_23 [i_7 - 1])) ? (((/* implicit */unsigned long long int) var_15)) : (arr_23 [i_7 - 1]))), (((/* implicit */unsigned long long int) (~(var_1))))));
                arr_30 [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (-(min((((/* implicit */int) arr_28 [i_7 + 2] [i_7 + 2] [i_8])), (var_1)))))), (min((arr_23 [i_7 + 1]), (((/* implicit */unsigned long long int) (_Bool)1))))));
            }
        } 
    } 
}
