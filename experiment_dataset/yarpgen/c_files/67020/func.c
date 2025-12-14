/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67020
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */int) arr_2 [i_0]);
                var_18 = ((/* implicit */unsigned short) ((short) -1649240309));
                arr_5 [i_0] [i_0] [i_1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)26)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) 9223372036854775807LL))) ? (((((/* implicit */_Bool) (short)27760)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (arr_0 [i_0] [i_1])))) : ((~(((7001799017669440277ULL) / (((/* implicit */unsigned long long int) -558198795186112483LL))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_1);
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        for (unsigned short i_3 = 4; i_3 < 10; i_3 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    arr_14 [i_4] [i_2] [(unsigned short)6] [i_2] = ((/* implicit */unsigned long long int) (~(110989117U)));
                    arr_15 [i_3] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)12)) < (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) max(((short)-27760), ((short)15118)))) : ((-(((/* implicit */int) (short)248))))))));
                    var_20 += ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((-6579991524591994892LL) - (((/* implicit */long long int) min((var_6), (((/* implicit */unsigned int) var_4)))))))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3 - 1] [i_3 + 2]))) - (arr_1 [i_3])))));
                }
                arr_16 [i_2] = ((/* implicit */_Bool) arr_8 [10U] [3U]);
                var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)255)), (((((/* implicit */_Bool) var_10)) ? ((~(((/* implicit */int) (short)-13540)))) : (((/* implicit */int) (short)-30479))))));
                /* LoopNest 3 */
                for (short i_5 = 0; i_5 < 13; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        for (int i_7 = 0; i_7 < 13; i_7 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) min((min((((((/* implicit */_Bool) (signed char)-27)) ? (arr_12 [i_2] [i_3] [10U]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-27760))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) >= (((/* implicit */int) arr_13 [i_2] [i_2] [8] [i_2]))))))), (((/* implicit */unsigned int) (((~(((/* implicit */int) arr_7 [i_2])))) < (((/* implicit */int) max(((unsigned short)20980), (((/* implicit */unsigned short) arr_7 [11LL]))))))))));
                                var_23 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) == (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_7 [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44580))) : (2656690313U)))))))));
                            }
                        } 
                    } 
                } 
                var_24 |= ((((/* implicit */_Bool) ((arr_21 [i_2] [i_3] [i_3 - 1] [i_2] [i_3]) >> (((arr_21 [i_2] [i_2] [i_2] [10LL] [i_2]) - (1683205106U)))))) ? (((((/* implicit */_Bool) arr_23 [i_2] [i_3] [i_2] [i_3] [(unsigned char)4])) ? (arr_23 [i_2] [(short)6] [i_2] [(short)6] [i_3]) : (arr_23 [i_2] [i_2] [i_2] [(short)10] [i_3]))) : (arr_12 [i_2] [i_3] [(signed char)11]));
            }
        } 
    } 
}
