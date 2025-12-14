/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87444
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_4 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_0 [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_0 [i_0])) + (24894)))));
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) /* same iter space */
            {
                arr_7 [i_2] |= ((/* implicit */int) (_Bool)0);
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) arr_10 [i_1]);
                            var_17 = ((/* implicit */int) arr_11 [i_0] [i_1] [i_2]);
                            var_18 ^= ((/* implicit */unsigned char) (!((!(arr_3 [i_2])))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned char) ((unsigned int) ((var_3) ? (arr_10 [i_1]) : (((/* implicit */long long int) 2052821752U)))));
                var_20 = ((/* implicit */long long int) 2052821752U);
            }
            for (unsigned int i_5 = 0; i_5 < 10; i_5 += 2) /* same iter space */
            {
                var_21 = ((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_5] [i_5] [i_0]))));
                var_22 = ((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_1]);
            }
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            arr_19 [i_6] [i_0] = ((/* implicit */unsigned int) (((~((~(arr_13 [i_0] [i_0] [i_6]))))) & ((~(((/* implicit */int) (unsigned short)44351))))));
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) min((2011021758U), (((/* implicit */unsigned int) (short)7472)))))));
            var_24 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_11 [i_0] [i_6] [i_0]))))));
            arr_20 [i_0] [i_0] [i_6] = ((/* implicit */_Bool) var_10);
        }
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((var_6) / (((/* implicit */long long int) ((((_Bool) 13198422924480720679ULL)) ? (((((/* implicit */_Bool) 2052821732U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)16827))) : (3056402906U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))))))))));
        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((min((((/* implicit */unsigned int) var_4)), (var_5))) - (((((arr_21 [i_7]) & (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) | (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 2) 
        {
            for (unsigned short i_9 = 4; i_9 < 13; i_9 += 4) 
            {
                for (signed char i_10 = 0; i_10 < 17; i_10 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_11 = 0; i_11 < 17; i_11 += 4) 
                        {
                            var_27 = ((/* implicit */short) ((arr_23 [i_11] [i_10] [i_7]) << (((((min((((/* implicit */unsigned long long int) (short)-16827)), (arr_29 [i_9] [i_8]))) & (((/* implicit */unsigned long long int) arr_23 [i_7] [i_7] [i_9])))) - (1301892205824708617ULL)))));
                            var_28 = ((/* implicit */_Bool) max((var_28), ((!(((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_24 [i_7])))), (((/* implicit */int) max(((short)-22177), (((/* implicit */short) (_Bool)1))))))))))));
                        }
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            arr_35 [i_7] [i_10] [i_12 - 1] = arr_30 [i_12];
                            arr_36 [i_12] [i_12 - 1] [i_12] [i_12] [i_12 - 1] [i_12] [i_12] = ((/* implicit */signed char) var_6);
                            var_29 = ((/* implicit */unsigned short) (!(((((/* implicit */int) (!(((/* implicit */_Bool) (short)16821))))) == (((/* implicit */int) (_Bool)1))))));
                        }
                        var_30 -= ((/* implicit */unsigned char) ((((unsigned int) arr_32 [i_8] [i_9 + 3] [i_9] [i_9 + 2] [i_9 - 4] [i_9 + 1])) >= (((arr_21 [i_9 + 1]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_9] [i_9 + 2] [i_9 - 4] [i_9 - 3] [i_9 + 2] [i_9 - 2])))))));
                    }
                } 
            } 
        } 
        arr_37 [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (2242145545U)))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-41)))));
    }
    var_31 ^= ((/* implicit */int) var_12);
    var_32 &= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_13))) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) (!(var_11))))))));
    var_33 = ((/* implicit */int) ((-960621135) < (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) var_11)), (var_0)))))))));
}
