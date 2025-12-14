/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55842
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (long long int i_4 = 3; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_11 ^= ((/* implicit */_Bool) (-(((18446744073709551605ULL) * (((/* implicit */unsigned long long int) max((arr_4 [i_0] [i_1]), (2251524935778304LL))))))));
                                var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) 2251524935778297LL))));
                                var_13 = ((/* implicit */unsigned short) ((18446744073709551605ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_0] [i_2])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 4; i_5 < 23; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            {
                                arr_19 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) max(((unsigned short)24157), (((/* implicit */unsigned short) arr_16 [i_0] [(short)7] [i_6]))))) & ((+(0)))))), ((+(max((arr_5 [i_2] [i_5 + 1] [i_6]), (((/* implicit */long long int) (signed char)-116))))))));
                                var_14 *= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_9 [i_5] [i_5] [i_5] [i_5 + 2] [i_5 + 2] [i_5] [i_5 - 2])) : (((/* implicit */int) arr_9 [i_1] [(unsigned short)5] [i_1] [i_1] [i_5] [i_5 + 2] [i_5 - 2]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 1; i_7 < 23; i_7 += 2) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (unsigned short)10275)) : (((/* implicit */int) arr_12 [i_1] [i_2] [i_0] [i_8])))) ^ (((/* implicit */int) var_10)))), (((((/* implicit */_Bool) arr_2 [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_7])) : (((((/* implicit */int) (signed char)64)) + (((/* implicit */int) (unsigned short)55261))))))));
                                arr_24 [i_8] [i_8] [(signed char)20] [i_8] [i_8] &= ((/* implicit */int) ((long long int) 1324299757));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_9 = 0; i_9 < 24; i_9 += 4) 
    {
        for (signed char i_10 = 0; i_10 < 24; i_10 += 2) 
        {
            for (long long int i_11 = 0; i_11 < 24; i_11 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 1; i_12 < 21; i_12 += 1) 
                    {
                        for (long long int i_13 = 2; i_13 < 22; i_13 += 3) 
                        {
                            {
                                arr_38 [i_9] [i_10] [6LL] [i_12] [i_13 + 1] = ((/* implicit */unsigned long long int) ((((unsigned int) arr_1 [i_9])) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)24151))))))));
                                var_16 = ((/* implicit */long long int) (unsigned short)32756);
                                arr_39 [i_9] [i_10] [i_11] = ((/* implicit */long long int) ((((((/* implicit */int) arr_6 [i_11] [i_13] [i_12 - 1] [i_11])) - (((/* implicit */int) (signed char)0)))) * (((((/* implicit */_Bool) arr_6 [i_12 + 2] [i_11] [i_12 + 2] [i_11])) ? (((/* implicit */int) arr_6 [i_13] [i_13] [i_12 + 3] [i_9])) : (((/* implicit */int) arr_6 [i_12] [i_12 + 1] [i_12 + 2] [i_10]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 24; i_14 += 1) 
                    {
                        for (short i_15 = 3; i_15 < 22; i_15 += 4) 
                        {
                            {
                                arr_45 [i_14] [i_11] [i_11] [i_14] [i_15] = ((/* implicit */unsigned char) var_8);
                                arr_46 [i_9] [i_14] [i_10] [i_11] [i_14] [i_15] = (+(((/* implicit */int) ((((/* implicit */int) ((short) (signed char)-115))) > (((/* implicit */int) (_Bool)1))))));
                                var_17 -= ((/* implicit */int) (_Bool)1);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_16 = 0; i_16 < 24; i_16 += 2) 
                    {
                        for (signed char i_17 = 1; i_17 < 23; i_17 += 2) 
                        {
                            {
                                arr_51 [i_17] [i_10] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_16 [(unsigned short)16] [i_17 + 1] [i_17 + 1]))));
                                arr_52 [i_17] [i_16] [i_16] [i_11] [i_17] [i_17] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_9] [i_10] [i_17] [i_16] [i_11])) && (((/* implicit */_Bool) arr_17 [i_9] [i_10] [i_11] [i_16] [i_11])))))));
                                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (((!(arr_1 [i_9]))) ? (min((arr_17 [i_9] [i_10] [i_11] [i_16] [i_17 - 1]), (arr_17 [i_9] [i_11] [i_11] [i_11] [i_17 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (signed char)(-127 - 1))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
