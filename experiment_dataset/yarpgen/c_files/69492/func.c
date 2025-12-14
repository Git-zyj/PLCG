/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69492
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                var_15 += ((/* implicit */_Bool) max((min(((-(908481477U))), (((/* implicit */unsigned int) arr_2 [i_1 + 2] [i_1 + 3])))), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned short)50839)) : (((/* implicit */int) (unsigned short)14710)))), (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3)))))))));
                /* LoopSeq 3 */
                for (long long int i_2 = 1; i_2 < 13; i_2 += 1) 
                {
                    var_16 &= ((/* implicit */short) max((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))), (((var_7) ? (((1014189298U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2] [i_2]))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) (short)-1);
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (min((arr_4 [i_0] [i_0] [i_1 + 4] [i_2 + 3]), (((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0] [(unsigned short)4]))))));
                                var_19 = 3386485819U;
                                var_20 ^= ((/* implicit */unsigned short) var_13);
                            }
                        } 
                    } 
                }
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_7);
                    arr_15 [i_0] [i_1] [i_5] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0])) : (((/* implicit */int) (short)-512))))))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [(_Bool)1] [(unsigned short)14] [i_1] [(_Bool)1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)32402))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_6))))) : (min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0]))) : (2305843009213693951LL))), ((~(var_6)))))));
                    var_21 = ((/* implicit */long long int) arr_6 [i_0] [(unsigned short)14]);
                    /* LoopNest 2 */
                    for (long long int i_6 = 1; i_6 < 16; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 17; i_7 += 1) 
                        {
                            {
                                var_22 *= ((/* implicit */long long int) min((((/* implicit */int) ((signed char) ((var_9) ? (arr_18 [i_1] [i_5] [i_1]) : (((/* implicit */int) var_7)))))), (((((/* implicit */int) min(((unsigned short)58166), (arr_3 [i_0])))) & (max((((/* implicit */int) var_0)), (var_12)))))));
                                arr_22 [i_5] [i_5] [i_7] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned char) var_13))))) ? ((-(3386485816U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_14))))))));
                                arr_23 [i_7] = ((/* implicit */unsigned long long int) (~((~(((((/* implicit */int) var_13)) | (arr_5 [i_0] [i_7] [(short)13] [(short)13])))))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_8 = 3; i_8 < 14; i_8 += 1) 
                {
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (arr_7 [i_1] [i_1]))))) + (((((/* implicit */_Bool) arr_5 [i_0] [14LL] [i_1] [i_8])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_1])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_8])), (((unsigned short) -2147483624)))))) : (min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_19 [5ULL] [i_8] [i_0] [i_1] [i_0])), (arr_2 [i_1] [i_1])))), (3627981921U)))));
                    var_24 -= ((/* implicit */signed char) (+((-((+(((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0]))))))));
                }
            }
        } 
    } 
    var_25 += ((/* implicit */signed char) var_9);
    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((unsigned char) max((((((/* implicit */_Bool) 9223372036854775807LL)) ? (132120576) : (((/* implicit */int) (unsigned short)33120)))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))))))))));
}
