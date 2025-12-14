/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97352
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
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((((/* implicit */_Bool) var_6)) ? ((-(var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) var_1)) & (((/* implicit */int) var_12)))) > (((/* implicit */int) var_10))))))))));
    var_14 = ((/* implicit */int) var_1);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_6)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_1]))) & (var_3))) : (((/* implicit */unsigned long long int) ((unsigned int) (short)32640))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -8)) ? (var_4) : (((/* implicit */unsigned long long int) var_2))))) ? ((~(arr_0 [i_1]))) : (arr_0 [i_0])))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(-1170946631)))) ? (max((((/* implicit */unsigned long long int) var_5)), (arr_0 [i_1]))) : (arr_6 [i_2] [i_1] [12U])))) ? (max((((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [2]))) : (arr_6 [20ULL] [i_1] [i_1]))), (((/* implicit */unsigned long long int) ((arr_4 [i_1]) ? (((/* implicit */int) (short)16365)) : (((/* implicit */int) var_10))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)7)) ? (arr_14 [i_4] [i_4] [i_4] [i_4] [(unsigned short)5] [i_4 + 1] [i_4]) : (arr_14 [i_2] [i_2] [i_4] [i_2] [i_4] [i_4 + 3] [6ULL])))) % ((~((-(var_6)))))));
                                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) (unsigned short)7))), (min((((/* implicit */int) arr_12 [16U] [i_4] [16U])), (((((/* implicit */_Bool) 443365445)) ? (arr_3 [i_0] [i_0] [22ULL]) : (((/* implicit */int) var_12)))))))))));
                                var_18 = ((/* implicit */int) var_10);
                                arr_15 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_12 [i_0] [i_1 - 1] [i_4 + 3]))))) ^ (((((/* implicit */_Bool) (~(18446744073709551615ULL)))) ? (max((((/* implicit */unsigned int) (_Bool)1)), (arr_14 [i_0] [9ULL] [(short)22] [i_3] [15ULL] [i_3] [15ULL]))) : (((/* implicit */unsigned int) -437157233))))));
                            }
                        } 
                    } 
                    var_19 += ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [(unsigned char)18] [i_2]))))))) & (var_4)));
                }
                for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) min((2ULL), (((/* implicit */unsigned long long int) -1LL)))))));
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) arr_2 [i_1 + 2] [i_0] [i_0 + 1])), (var_8)))) ? (min((((/* implicit */int) arr_2 [i_1 + 1] [i_0] [i_0 + 1])), (443365445))) : (((/* implicit */int) ((((/* implicit */_Bool) 15361347349047794837ULL)) || (((/* implicit */_Bool) arr_11 [i_0] [i_0 + 1])))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        arr_22 [i_0] [i_1 - 1] = (~(((/* implicit */int) arr_5 [i_0] [i_0])));
                        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551602ULL)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 1] [i_6] [i_1 + 1]))))))));
                        var_23 = ((/* implicit */unsigned long long int) ((unsigned int) arr_12 [i_0] [i_0 + 1] [i_1 - 1]));
                    }
                    for (unsigned int i_7 = 1; i_7 < 24; i_7 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */_Bool) ((unsigned long long int) (-(arr_17 [i_7] [i_5] [i_0]))));
                        arr_26 [i_0] = ((/* implicit */short) var_12);
                    }
                    /* vectorizable */
                    for (unsigned int i_8 = 1; i_8 < 24; i_8 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_19 [i_0]))));
                        var_26 = ((((/* implicit */_Bool) (-(var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1] [(unsigned short)7]))) : (((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))));
                        arr_31 [i_0] [i_0] [19] [i_0] = ((/* implicit */long long int) (-(((int) -2201603164231029040LL))));
                    }
                }
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned long long int) var_12);
}
