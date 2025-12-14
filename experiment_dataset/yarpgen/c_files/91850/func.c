/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91850
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
    var_16 = ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1))))))) - (((/* implicit */int) ((var_13) != (((/* implicit */unsigned int) -1744633573))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_17 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [i_0]) : (arr_0 [i_2])))) ? (1763698821U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)90)))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */int) arr_0 [i_1]);
                                var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)15))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 3; i_5 < 18; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 20; i_6 += 3) 
                        {
                            {
                                arr_17 [i_0] [(signed char)12] [i_2] [i_5] [i_5] = ((/* implicit */long long int) var_5);
                                arr_18 [(unsigned char)19] [i_5] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) (+((+(((/* implicit */int) (unsigned char)165))))))) && (((/* implicit */_Bool) (signed char)72))));
                            }
                        } 
                    } 
                    arr_19 [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_2])) ? (((int) var_4)) : (((/* implicit */int) ((unsigned char) (short)15960)))));
                    /* LoopNest 2 */
                    for (signed char i_7 = 1; i_7 < 19; i_7 += 1) 
                    {
                        for (short i_8 = 3; i_8 < 19; i_8 += 3) 
                        {
                            {
                                arr_25 [i_0] [i_1] [i_8] [(unsigned short)14] [(unsigned short)14] = ((/* implicit */short) var_1);
                                var_20 |= ((/* implicit */_Bool) min((((var_12) / (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_7 + 2] [i_1]))))), (((/* implicit */long long int) arr_2 [i_8 + 1] [i_8 - 3]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_9 = 2; i_9 < 15; i_9 += 1) 
    {
        for (signed char i_10 = 2; i_10 < 13; i_10 += 4) 
        {
            {
                arr_32 [i_10] &= ((/* implicit */int) ((var_0) | ((((!(((/* implicit */_Bool) (unsigned char)0)))) ? (((/* implicit */unsigned int) var_3)) : (var_13)))));
                /* LoopSeq 2 */
                for (short i_11 = 0; i_11 < 16; i_11 += 2) 
                {
                    var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_7)), (min((((/* implicit */unsigned int) (-2147483647 - 1))), (402064720U)))));
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6152))) : (16388654362878673867ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_1), (((/* implicit */unsigned short) (short)-15985))))))))) ? (var_13) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (((-2147483647 - 1)) > (((/* implicit */int) (unsigned char)91))))) : (((/* implicit */int) arr_26 [i_9] [8])))))));
                    var_23 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_14))) + (((long long int) ((((/* implicit */int) arr_14 [i_10 - 1] [i_10 - 1] [i_9])) <= (var_3))))));
                }
                for (short i_12 = 0; i_12 < 16; i_12 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_13 = 4; i_13 < 14; i_13 += 2) 
                    {
                        for (int i_14 = 0; i_14 < 16; i_14 += 4) 
                        {
                            {
                                arr_42 [i_9] [i_10] [i_10] [i_12] [i_9] [i_10] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1617653442))));
                                var_24 = ((/* implicit */unsigned char) ((var_11) != (((/* implicit */int) (short)23214))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_15 = 0; i_15 < 16; i_15 += 3) 
                    {
                        for (unsigned short i_16 = 0; i_16 < 16; i_16 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) arr_45 [i_9] [i_10] [i_12] [i_16] [i_15]))));
                                arr_48 [i_9] [i_10] [i_12] [i_15] [i_12] &= ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_12]))));
                            }
                        } 
                    } 
                    arr_49 [i_9] [i_10] [10U] [i_9] = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)18))));
                    arr_50 [i_9] [i_10] = ((/* implicit */unsigned char) (~((-(((/* implicit */int) var_7))))));
                    var_26 ^= ((/* implicit */unsigned short) arr_12 [i_12] [i_12] [(unsigned char)4] [i_9] [i_9]);
                }
                arr_51 [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_13)))) ? (((/* implicit */int) ((short) (short)5626))) : (((/* implicit */int) (!(((((/* implicit */_Bool) 3U)) && (((/* implicit */_Bool) (unsigned short)35515)))))))));
            }
        } 
    } 
}
