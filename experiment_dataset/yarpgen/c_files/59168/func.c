/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59168
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
    var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)96))))) ? (((((/* implicit */_Bool) (signed char)40)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)42)))) : (max((354947139), (((/* implicit */int) (signed char)63)))))) | (max((((((/* implicit */int) (signed char)-40)) - (((/* implicit */int) (unsigned char)6)))), (((/* implicit */int) var_4))))));
    var_20 = ((/* implicit */_Bool) 3781621799U);
    var_21 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) ((var_8) | (var_1)))) ? (var_15) : (((/* implicit */unsigned long long int) (~(var_16)))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)15118)) : (((/* implicit */int) arr_1 [i_0])))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((+(((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_0])))) % (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_2])))))));
                    var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 + 1] [i_1 - 1]))) : (5091923666251137397LL))))));
                }
            } 
        } 
        arr_10 [i_0] = max((((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (signed char)-40)))))), (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_0 [i_0])), (-5855188750674041104LL)))) ? (((/* implicit */int) (signed char)69)) : (((/* implicit */int) ((unsigned char) 5091923666251137406LL))))));
    }
    for (unsigned char i_3 = 1; i_3 < 23; i_3 += 4) 
    {
        var_24 = arr_12 [i_3] [i_3];
        /* LoopNest 2 */
        for (unsigned int i_4 = 1; i_4 < 22; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                {
                    arr_19 [i_3] = ((/* implicit */unsigned char) arr_13 [23ULL]);
                    var_25 = ((/* implicit */long long int) arr_11 [i_3]);
                }
            } 
        } 
    }
    for (short i_6 = 0; i_6 < 17; i_6 += 4) 
    {
        var_26 = ((/* implicit */short) ((((long long int) 3741927800078965037ULL)) < (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_11 [i_6])) ? (((/* implicit */int) arr_13 [i_6])) : (((/* implicit */int) (signed char)-41)))))))));
        arr_23 [i_6] [i_6] = ((/* implicit */unsigned long long int) max(((-(min((4294967295U), (((/* implicit */unsigned int) (unsigned char)99)))))), (((/* implicit */unsigned int) (unsigned char)157))));
    }
}
