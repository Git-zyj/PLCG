/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82288
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
    for (long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] [i_0] [(signed char)23] [i_3] [i_4] = ((/* implicit */long long int) arr_9 [i_4] [16] [i_2] [i_3]);
                                arr_12 [i_4] [6] [i_4] [i_3] [i_3] = ((/* implicit */long long int) max((max((arr_1 [i_0 + 1]), (((/* implicit */unsigned int) (short)32745)))), (((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_0 + 1])))));
                                var_20 |= ((/* implicit */short) ((((((/* implicit */_Bool) arr_3 [16U] [i_1 + 1] [i_0 + 1])) ? (arr_3 [i_0 + 1] [i_1 + 1] [i_0 + 1]) : (arr_3 [i_0 + 3] [i_1 + 4] [i_0 + 2]))) <= (((((/* implicit */_Bool) arr_9 [i_2] [i_1 + 2] [i_0 - 1] [i_2])) ? (((/* implicit */long long int) arr_9 [i_2] [i_1 + 3] [i_0 + 3] [i_2])) : (arr_3 [i_0] [i_1 + 1] [i_0 + 3])))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned int) -2305843009213693952LL);
                    var_22 = ((/* implicit */_Bool) ((max((((/* implicit */long long int) arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 3])), (arr_8 [i_1 + 1]))) << (((/* implicit */int) arr_4 [i_1 + 4] [i_1 + 4] [i_1 + 1]))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (arr_7 [i_0 + 3] [i_1 + 1] [(unsigned short)6] [(signed char)15] [(signed char)15]) : (arr_7 [i_0] [i_1 + 1] [i_2] [i_5] [i_6])))) ? (((((/* implicit */_Bool) (unsigned short)40781)) ? (((/* implicit */int) arr_2 [i_1 + 1])) : (((/* implicit */int) arr_5 [i_0 + 3] [i_6])))) : (((((/* implicit */_Bool) (short)32758)) ? (((/* implicit */int) arr_5 [i_6] [i_1 - 2])) : (((/* implicit */int) arr_2 [i_5]))))));
                                var_24 *= (((((+(4323455642275676160LL))) == (((/* implicit */long long int) min((1524413722), (((/* implicit */int) (short)32740))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)118), (((/* implicit */signed char) (_Bool)1)))))) : (max((var_0), (((/* implicit */unsigned int) arr_9 [i_2] [22U] [(signed char)10] [i_2])))));
                                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */int) (((+(13532000800473088537ULL))) == (((/* implicit */unsigned long long int) var_1))))) == ((~(arr_10 [i_6] [i_6] [i_5] [i_2] [i_1] [i_1] [i_0 + 1]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 *= var_17;
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 3; i_7 < 9; i_7 += 4) 
    {
        for (short i_8 = 2; i_8 < 11; i_8 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_9 = 2; i_9 < 11; i_9 += 3) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_7 [i_9 + 1] [i_9] [i_9 + 1] [i_9 + 1] [i_9 - 2])))) ? (((((/* implicit */_Bool) arr_17 [i_9])) ? (((/* implicit */int) arr_20 [i_7 + 1] [i_8] [i_9 - 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-32758))))))) : (((/* implicit */int) var_10))));
                            arr_27 [i_9] [i_9 + 1] [i_9 + 1] [i_9] = ((/* implicit */_Bool) arr_24 [i_7]);
                            var_28 = ((/* implicit */_Bool) var_4);
                            arr_28 [i_9] [i_9] [(short)9] [i_7 - 2] [i_9] = ((/* implicit */short) (_Bool)1);
                        }
                    } 
                } 
                arr_29 [i_7] [i_8] [i_8 - 2] &= ((/* implicit */unsigned short) (-(min((2326959997800082265LL), (((/* implicit */long long int) arr_22 [i_7 - 2] [i_8 + 1]))))));
            }
        } 
    } 
    var_29 |= ((/* implicit */short) -1524413711);
}
