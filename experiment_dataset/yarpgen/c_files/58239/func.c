/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58239
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
    var_14 = ((/* implicit */unsigned char) var_2);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned short) var_9);
                /* LoopSeq 1 */
                for (unsigned short i_2 = 2; i_2 < 16; i_2 += 1) 
                {
                    var_15 |= arr_3 [i_2 + 1] [i_2] [i_2 - 2];
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_4] = (!(((/* implicit */_Bool) (unsigned short)49925)));
                                var_16 &= ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_10 [i_0] [i_0] [i_2] [i_3]), (((/* implicit */int) arr_11 [i_0]))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)171))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)25399)) ? (((/* implicit */int) arr_3 [i_2] [i_1] [i_2])) : (((/* implicit */int) var_3))))) : ((~(arr_9 [(unsigned short)8] [i_1] [i_2] [(short)17] [(short)17]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0]))) <= (arr_4 [i_0] [9LL])))), (var_2)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 3; i_5 < 19; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_10 [i_0] [i_1] [i_2] [i_6]) & (arr_10 [i_0] [i_1 + 1] [i_5 - 3] [i_6])))) ? ((~(arr_10 [i_0] [i_1] [i_5 - 1] [i_1]))) : (((int) (unsigned char)84))));
                                var_18 = ((/* implicit */signed char) (+(var_11)));
                                var_19 = ((/* implicit */signed char) var_8);
                                var_20 = (((+(min((((/* implicit */unsigned long long int) (unsigned char)189)), (arr_9 [i_6] [i_6] [i_6] [12ULL] [i_6]))))) << (((((((/* implicit */_Bool) arr_5 [i_5 - 3] [i_2 + 3] [15])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_3 [i_5 + 1] [i_2 + 1] [(signed char)12])))) + (48))));
                                var_21 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_4 [i_1 + 2] [i_1 + 2])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1 + 2] [i_1 + 2])) || (((/* implicit */_Bool) arr_4 [i_1 + 2] [i_1 + 2]))))) : (((/* implicit */int) var_6))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (short)-10))));
                }
                /* LoopNest 3 */
                for (unsigned char i_7 = 2; i_7 < 16; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 1) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_28 [i_0] [i_1] [i_7] [i_8] [i_9] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)154)) ? (688514245932726895LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)47)))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))), (((arr_19 [i_9] [i_1 - 1] [i_1]) + (((/* implicit */long long int) ((/* implicit */int) (short)0)))))));
                                var_22 -= ((/* implicit */short) ((((/* implicit */_Bool) max((var_13), ((short)-6489)))) ? (((/* implicit */int) (signed char)-46)) : (((/* implicit */int) min(((signed char)-10), (((/* implicit */signed char) ((var_8) && (((/* implicit */_Bool) var_12))))))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */unsigned long long int) max((((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-11)))) >> (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-12100)) : (((/* implicit */int) var_12)))) + (12126))))), (((/* implicit */int) min((var_0), (((/* implicit */short) (signed char)66)))))));
            }
        } 
    } 
    var_24 = ((/* implicit */int) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)59))))) : (14576365913540799627ULL)))));
}
