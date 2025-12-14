/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7718
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_12 [i_4] [i_3] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) max((arr_0 [i_0]), (var_8)))) ^ (((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) arr_5 [i_0] [i_0])))) : (min((((((/* implicit */int) var_9)) - (-1543374306))), (((((/* implicit */int) arr_0 [i_3])) << (((1073741823U) - (1073741811U)))))))));
                                var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) ((signed char) var_1)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_0] [i_1 + 1] [i_3] [i_4]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */int) (unsigned short)62)) : (((/* implicit */int) (signed char)15))))) ? (((((/* implicit */_Bool) (unsigned char)140)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (1073741823U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 + 1])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_13 [i_1] [i_2] [i_6])) ? (((/* implicit */int) arr_6 [i_0] [i_2] [i_5] [i_6])) : (((/* implicit */int) arr_15 [i_0] [i_1] [i_5] [i_5] [i_6])))) <= (((((/* implicit */_Bool) arr_13 [i_5] [i_1 - 2] [i_0])) ? (((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_5] [i_6])) : (((/* implicit */int) var_8))))));
                                var_12 -= ((/* implicit */unsigned int) 1583290282);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_7 = 0; i_7 < 21; i_7 += 3) 
    {
        for (unsigned short i_8 = 0; i_8 < 21; i_8 += 2) 
        {
            for (signed char i_9 = 0; i_9 < 21; i_9 += 3) 
            {
                {
                    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((unsigned char) arr_22 [i_7] [i_7] [i_7])))));
                    arr_27 [i_7] [i_7] = min(((signed char)-1), (arr_24 [i_7] [i_7] [i_8] [i_9]));
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 1; i_10 < 18; i_10 += 3) 
                    {
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            {
                                arr_32 [i_7] [i_8] [i_11] [i_10] [i_7] [i_8] [i_7] = ((/* implicit */unsigned int) ((unsigned long long int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_19 [i_11]))))), (arr_18 [i_11 - 1] [i_10 + 1]))));
                                var_14 = arr_22 [i_7] [i_9] [i_10];
                                var_15 -= ((/* implicit */signed char) arr_21 [i_11 - 1] [i_9]);
                                arr_33 [i_11 - 1] [i_10] [i_9] [i_8] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)1023)) + (var_2)))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_22 [i_11] [i_11 - 1] [i_11 - 1])), (var_6))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 3) 
                    {
                        for (unsigned int i_13 = 0; i_13 < 21; i_13 += 3) 
                        {
                            {
                                arr_39 [i_13] [i_12] [i_12] [i_9] [i_8] [i_7] = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_7))))), (1522915171U))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_13] [i_8] [i_9] [i_12])) ? (((/* implicit */int) arr_22 [i_7] [i_8] [i_13])) : (((/* implicit */int) arr_24 [i_7] [i_8] [i_9] [i_13])))))));
                                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((~(1583290282))), (-1583290283)))) ? (((min((((/* implicit */int) var_9)), (-1583290283))) ^ (((/* implicit */int) var_7)))) : (((/* implicit */int) ((((/* implicit */int) arr_38 [i_12] [i_8])) <= (((var_2) + (((/* implicit */int) var_0)))))))));
                                var_17 -= ((((/* implicit */_Bool) ((signed char) var_8))) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)209)), ((short)23691)))) : (((int) arr_19 [i_7])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_14 = 1; i_14 < 12; i_14 += 4) 
    {
        for (unsigned char i_15 = 0; i_15 < 13; i_15 += 3) 
        {
            for (unsigned short i_16 = 1; i_16 < 10; i_16 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) (~(min((((((/* implicit */_Bool) 133397491U)) ? (((/* implicit */int) (short)11412)) : (((/* implicit */int) (unsigned char)136)))), (-1583290283)))));
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) (+(2370622561U)))) ? (arr_19 [i_16 + 2]) : (((/* implicit */int) ((unsigned char) var_6)))))))));
                }
            } 
        } 
    } 
}
