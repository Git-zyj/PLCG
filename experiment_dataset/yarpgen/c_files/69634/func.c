/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69634
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
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        arr_4 [i_0 - 1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 2])) ? (((/* implicit */int) var_4)) : (var_10)))) && (((((/* implicit */_Bool) arr_2 [i_0 - 2])) && (((/* implicit */_Bool) var_13)))));
        var_19 = ((/* implicit */unsigned char) (+(arr_1 [i_0 + 1])));
        arr_5 [i_0] = ((/* implicit */unsigned char) (short)(-32767 - 1));
    }
    for (short i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)221))) ? (((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) -783004397028354716LL)) : (((((/* implicit */unsigned long long int) var_3)) + (arr_6 [i_1]))))) : (((/* implicit */unsigned long long int) ((arr_7 [i_1] [i_1]) - ((-(var_7))))))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_6 [i_1]) : (arr_6 [i_1])))) ? (((4042504550707491907ULL) / (((/* implicit */unsigned long long int) -783004397028354706LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1]))))))));
        var_22 *= ((/* implicit */unsigned short) ((long long int) ((unsigned char) (unsigned char)225)));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) ((long long int) var_5));
    }
    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) var_3))));
    /* LoopSeq 1 */
    for (unsigned char i_2 = 3; i_2 < 17; i_2 += 2) 
    {
        var_24 = ((/* implicit */unsigned long long int) var_15);
        /* LoopNest 2 */
        for (short i_3 = 1; i_3 < 18; i_3 += 3) 
        {
            for (unsigned short i_4 = 1; i_4 < 16; i_4 += 1) 
            {
                {
                    arr_16 [i_3] = ((/* implicit */unsigned int) ((long long int) arr_12 [i_2] [i_3 - 1] [i_3]));
                    /* LoopSeq 3 */
                    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        arr_21 [i_5] [i_3] [i_3] [i_2] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_3 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_14 [i_3])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_13))))) : (((unsigned int) arr_10 [i_4])))), (((/* implicit */unsigned int) arr_11 [i_2] [i_4] [i_5]))));
                        var_25 = ((/* implicit */_Bool) max((var_25), (arr_11 [i_2] [i_4] [i_5])));
                    }
                    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned int) ((signed char) min((((/* implicit */long long int) ((unsigned int) 1659675455))), (((arr_20 [i_2] [i_4 + 3] [i_6]) ? (arr_22 [i_2] [i_3 + 1] [i_3] [i_6]) : (((/* implicit */long long int) arr_13 [i_3])))))));
                        var_27 &= ((/* implicit */unsigned short) ((3849451968461377526LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)227)))));
                    }
                    /* vectorizable */
                    for (unsigned int i_7 = 0; i_7 < 19; i_7 += 4) 
                    {
                        arr_27 [i_3] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_17)))) : (((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */int) arr_26 [i_2] [i_3] [i_4] [i_7])) : (((/* implicit */int) (unsigned char)35))))));
                        var_28 = ((/* implicit */_Bool) var_18);
                    }
                    var_29 |= (((-(((/* implicit */int) ((signed char) 1380078720U))))) << (((((/* implicit */int) var_12)) - (173))));
                    var_30 -= ((/* implicit */unsigned long long int) var_14);
                }
            } 
        } 
    }
    var_31 = ((/* implicit */unsigned short) ((int) var_2));
}
