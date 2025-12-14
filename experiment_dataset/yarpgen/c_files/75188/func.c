/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75188
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
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 17; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (+(((/* implicit */int) ((short) arr_5 [i_1 - 1] [i_1]))))))));
                    var_15 = ((/* implicit */unsigned short) var_8);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0 + 2] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */long long int) arr_11 [i_4] [i_3] [i_2] [(unsigned short)18] [i_0]);
                                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((3212999018027755532ULL), (((/* implicit */unsigned long long int) 4213809201U))))) ? (((((/* implicit */_Bool) -393757589)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)29404))) : (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_6), (var_0)))))))) ? (((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) var_2))))) ? (((/* implicit */int) max((arr_13 [i_0 + 1] [i_4] [i_2] [i_4]), (var_0)))) : (((/* implicit */int) min((arr_7 [i_0] [i_0] [i_2]), (((/* implicit */short) arr_13 [i_1] [i_1 + 1] [i_1] [i_1]))))))) : (((((var_8) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_6)) : ((-(((/* implicit */int) arr_1 [i_1 - 1] [3ULL])))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_17 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4213809195U)) ? (((/* implicit */int) (unsigned short)31141)) : (((/* implicit */int) (short)22607))))) ? (((((/* implicit */_Bool) arr_9 [i_0 + 3] [i_0] [i_0] [i_0] [(unsigned char)19] [7LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_0 - 1] [i_0] [i_0]))) : (81158094U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))));
        arr_17 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned short) max((((((/* implicit */_Bool) 133984700U)) ? (((/* implicit */unsigned long long int) 4213809195U)) : (836713067428482522ULL))), (((/* implicit */unsigned long long int) ((unsigned char) (short)22601))))));
        var_18 ^= ((/* implicit */unsigned long long int) arr_5 [i_0] [(short)6]);
    }
    for (int i_5 = 1; i_5 < 17; i_5 += 2) /* same iter space */
    {
        var_19 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) arr_11 [i_5 + 3] [i_5 + 1] [i_5] [i_5] [i_5]))) == (((/* implicit */int) max((((/* implicit */short) arr_0 [i_5 + 3])), (((short) arr_4 [i_5])))))));
        var_20 = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8037087750767825359LL)) ? (((/* implicit */int) (short)-29405)) : (-393757589)))))) ? (arr_15 [i_5] [i_5 + 1] [i_5] [i_5] [i_5 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_14 [i_5] [i_5] [i_5] [i_5 + 1] [i_5])) && ((_Bool)0)))))));
        arr_20 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((arr_2 [13ULL]), (((/* implicit */unsigned int) arr_3 [(short)2] [(short)2] [i_5 - 1])))), (((/* implicit */unsigned int) (unsigned char)99))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_6 [i_5 + 2])))) : ((-(var_5)))));
    }
    for (unsigned short i_6 = 2; i_6 < 15; i_6 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_6]))) & (var_7))), (((/* implicit */unsigned int) max((((/* implicit */short) var_11)), (arr_7 [i_6] [i_7] [i_6 - 1]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_6 + 3])) ? (((/* implicit */int) max((var_2), (((/* implicit */signed char) var_11))))) : (((/* implicit */int) max((arr_7 [i_6 - 2] [i_7] [i_6 + 1]), (((/* implicit */short) var_2)))))))) : (((unsigned long long int) arr_6 [i_6 + 2]))));
            var_22 = ((/* implicit */unsigned char) var_5);
            arr_26 [i_6] [i_6] [i_7] |= ((/* implicit */int) arr_7 [i_6] [i_6] [(unsigned char)3]);
        }
        /* vectorizable */
        for (unsigned char i_8 = 0; i_8 < 18; i_8 += 1) /* same iter space */
        {
            arr_29 [i_6] [i_8] = ((/* implicit */unsigned char) arr_6 [i_6 - 2]);
            var_23 = arr_24 [i_8] [i_8];
        }
        for (unsigned int i_9 = 0; i_9 < 18; i_9 += 2) 
        {
            arr_32 [i_6 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned short)45875), (((/* implicit */unsigned short) ((4202219324757435763LL) != (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_9] [(unsigned short)16]))))))))) ? (((/* implicit */int) ((unsigned char) min((arr_9 [i_6] [i_6] [15LL] [i_9] [i_9] [i_9]), (((/* implicit */unsigned long long int) var_13)))))) : (((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned int) var_9)), (var_7)))))));
            arr_33 [i_6] [i_6] [i_9] |= ((/* implicit */unsigned char) ((long long int) max((arr_9 [i_6 + 3] [i_6 - 2] [i_6 + 3] [i_6 + 2] [i_6 + 3] [(unsigned short)12]), (((/* implicit */unsigned long long int) arr_21 [i_6 + 2])))));
            var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)0))));
        }
        var_25 += ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_6 + 1])) ^ (((/* implicit */int) arr_6 [i_6 + 1]))))) <= (((var_1) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)251)))))));
    }
    for (short i_10 = 4; i_10 < 10; i_10 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (long long int i_12 = 0; i_12 < 11; i_12 += 2) 
            {
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                {
                    {
                        var_26 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_12)), (max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_37 [i_13 - 1])))));
                        var_27 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_35 [i_13] [i_11])))) / (((/* implicit */int) arr_3 [i_13] [i_11] [i_11]))));
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */unsigned short) arr_41 [i_10] [i_10] [i_10]);
        var_29 = ((/* implicit */unsigned int) ((short) max((((/* implicit */unsigned long long int) ((short) arr_22 [i_10 - 4]))), (max((arr_12 [i_10] [(short)2]), (((/* implicit */unsigned long long int) arr_7 [i_10] [i_10] [(unsigned short)13])))))));
    }
    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4213809217U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10))));
}
