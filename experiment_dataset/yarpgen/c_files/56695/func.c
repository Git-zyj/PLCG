/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56695
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
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) ((_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-94)), (arr_5 [(short)0] [i_1] [i_2])))))));
                        arr_8 [i_0] [i_3 - 1] [(signed char)1] [i_3 - 1] [i_1] [i_3 - 1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)45)), (arr_3 [i_0] [i_0 + 1]))))) & (((var_16) ^ (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((min((var_9), (((/* implicit */int) (unsigned short)52628)))) & (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_7 [i_0] [i_0] [(short)9] [i_3 - 1])))))))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) var_6))));
    }
    for (short i_4 = 0; i_4 < 15; i_4 += 2) /* same iter space */
    {
        var_23 -= ((/* implicit */_Bool) (+(((arr_10 [i_4] [i_4]) & (arr_10 [i_4] [i_4])))));
        var_24 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_4] [i_4])) ? (((/* implicit */int) var_4)) : ((~(((/* implicit */int) arr_9 [i_4]))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            for (long long int i_6 = 1; i_6 < 14; i_6 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 15; i_7 += 4) 
                    {
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_25 += ((/* implicit */unsigned short) ((((((arr_11 [i_6 + 1] [9] [9]) ^ (var_9))) | (((/* implicit */int) var_4)))) == (((/* implicit */int) (signed char)18))));
                                var_26 = ((/* implicit */int) ((max((((((/* implicit */_Bool) (short)-632)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_12))), (((/* implicit */unsigned long long int) ((unsigned short) (unsigned char)36))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [12ULL] [i_5] [(_Bool)1] [i_7]))) ^ (arr_15 [i_5] [i_5] [i_6] [i_5])))) ? (((((/* implicit */int) var_3)) | (((/* implicit */int) arr_19 [(signed char)12] [i_4] [(unsigned char)8] [i_4])))) : (((((/* implicit */_Bool) var_9)) ? (arr_11 [i_4] [i_5] [6LL]) : (((/* implicit */int) var_4)))))))));
                            }
                        } 
                    } 
                    arr_22 [i_4] [i_4] [i_5] [i_6 - 1] = max((((/* implicit */int) (signed char)10)), (((((/* implicit */int) (signed char)127)) >> (((((/* implicit */int) (signed char)64)) - (34))))));
                    var_27 = ((/* implicit */unsigned long long int) ((unsigned char) ((arr_18 [10U]) * (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_9 = 0; i_9 < 15; i_9 += 2) /* same iter space */
    {
        arr_26 [i_9] = ((((/* implicit */_Bool) (signed char)45)) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) arr_14 [i_9])));
        arr_27 [i_9] [i_9] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_9])) ? (((((/* implicit */_Bool) (unsigned char)157)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_12 [5] [i_9])))) : ((-(((/* implicit */int) var_0))))));
    }
    var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) min((var_16), (((/* implicit */long long int) var_14)))))))), (((((/* implicit */int) var_14)) & (var_5))))))));
    var_29 -= ((/* implicit */signed char) min((min(((+(((/* implicit */int) var_17)))), (((int) var_16)))), (((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)-13)))) == (((/* implicit */int) max((var_4), (((/* implicit */short) var_2))))))))));
}
