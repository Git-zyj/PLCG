/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95200
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_19 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) (_Bool)1);
        var_20 -= ((/* implicit */unsigned int) max((((/* implicit */int) var_6)), ((~(((/* implicit */int) var_4))))));
    }
    for (unsigned char i_1 = 2; i_1 < 21; i_1 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            var_21 = ((/* implicit */unsigned long long int) var_2);
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (((~(((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) var_14)))))));
                            var_23 = ((/* implicit */unsigned short) ((var_5) - (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_1 + 1])))));
                            var_24 = ((/* implicit */unsigned char) (~((~(3461409470U)))));
                        }
                    } 
                } 
            } 
            arr_17 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [i_1 - 1] [i_1])) ? (var_2) : (((/* implicit */long long int) var_9))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (((var_18) / (4294967295U))));
        }
        arr_18 [(unsigned short)13] [i_1 + 1] = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_12 [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_1])))) / (((/* implicit */int) arr_12 [i_1 + 2] [22] [i_1 - 1] [i_1 + 1] [i_1]))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_6 = 1; i_6 < 18; i_6 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_7 = 0; i_7 < 20; i_7 += 4) 
        {
            var_25 = ((/* implicit */int) ((arr_20 [i_6 + 1] [i_6]) / (var_12)));
            var_26 -= ((/* implicit */short) ((((/* implicit */_Bool) -1635724801)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)156))));
            var_27 = ((/* implicit */int) 3955927241U);
            arr_26 [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((long long int) arr_22 [i_7])) : (((/* implicit */long long int) (~(((/* implicit */int) var_14)))))));
        }
        for (short i_8 = 1; i_8 < 17; i_8 += 3) 
        {
            arr_31 [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_6 - 1] [i_8 - 1]))) + (var_8)));
            arr_32 [i_6] [i_8] [i_6] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)27130))));
        }
        /* LoopNest 2 */
        for (unsigned char i_9 = 0; i_9 < 20; i_9 += 1) 
        {
            for (unsigned char i_10 = 0; i_10 < 20; i_10 += 1) 
            {
                {
                    var_28 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_6]))) == (var_8))))));
                    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_10))));
                    var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-97))))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 12; i_11 += 4) 
    {
        var_31 *= ((/* implicit */signed char) arr_11 [i_11] [i_11] [14ULL] [i_11] [i_11] [i_11]);
        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) (((~(((/* implicit */int) var_11)))) ^ (((/* implicit */int) var_17)))))));
        arr_41 [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) 2656210187U)) : ((-(var_8)))));
    }
    var_33 += var_4;
    var_34 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_13))));
}
