/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76235
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
    var_15 = ((/* implicit */_Bool) ((int) (-(((/* implicit */int) var_13)))));
    var_16 = ((/* implicit */unsigned char) (((~(((((/* implicit */int) var_9)) >> (((/* implicit */int) (_Bool)1)))))) ^ (((/* implicit */int) (signed char)92))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */int) var_12);
                    var_18 = ((/* implicit */unsigned char) (_Bool)1);
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (int i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        var_19 |= ((/* implicit */unsigned char) (_Bool)1);
        var_20 = ((/* implicit */signed char) ((arr_10 [i_3]) ? (arr_1 [6ULL] [i_3]) : (((/* implicit */unsigned long long int) ((2147483647) / (((/* implicit */int) (signed char)3)))))));
        var_21 = ((/* implicit */unsigned long long int) max((min((arr_7 [(unsigned char)4] [(unsigned char)4]), (2147483647))), (max((arr_7 [(unsigned char)12] [(unsigned char)12]), (arr_7 [(unsigned char)14] [i_3])))));
        var_22 = ((/* implicit */int) arr_9 [i_3]);
        arr_11 [i_3] [(_Bool)1] = ((((/* implicit */int) var_7)) - (((/* implicit */int) arr_6 [i_3] [i_3] [i_3] [i_3])));
    }
    for (unsigned short i_4 = 2; i_4 < 9; i_4 += 3) 
    {
        arr_14 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_7 [i_4] [i_4]), (arr_7 [i_4] [i_4])))) ? (arr_7 [i_4] [i_4]) : (((((/* implicit */_Bool) arr_7 [i_4] [i_4])) ? (((/* implicit */int) (unsigned char)240)) : (var_6)))));
        arr_15 [2ULL] &= ((/* implicit */unsigned char) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (18446744073709551615ULL))) / (arr_1 [2] [i_4]))), (((/* implicit */unsigned long long int) arr_8 [i_4 - 2] [i_4 - 1]))));
        var_23 = ((/* implicit */unsigned long long int) -1);
        var_24 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) -1)), (((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_7), ((_Bool)1))))) : (((((/* implicit */_Bool) var_3)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
        var_25 = ((/* implicit */signed char) (((+(((/* implicit */int) var_4)))) - (arr_13 [i_4 - 2])));
    }
    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned char) arr_7 [i_5] [(_Bool)1]);
        var_27 -= ((/* implicit */int) ((unsigned char) (signed char)127));
        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) | (((/* implicit */int) arr_3 [i_5] [i_5] [i_5]))))) || (((/* implicit */_Bool) var_6))));
    }
    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 3) 
            {
                for (unsigned short i_9 = 0; i_9 < 17; i_9 += 2) 
                {
                    {
                        var_29 = max((((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-4))))) ? (((/* implicit */int) (unsigned short)36333)) : (((/* implicit */int) var_1)))), (((((/* implicit */int) (_Bool)1)) >> ((((+(((/* implicit */int) var_9)))) - (53))))));
                        var_30 = ((/* implicit */_Bool) ((max((min((((/* implicit */int) arr_3 [i_6] [i_6] [i_6])), (arr_23 [i_6] [i_6]))), (((/* implicit */int) arr_32 [i_6] [i_9] [i_8] [i_9] [i_6])))) ^ (((/* implicit */int) (signed char)15))));
                        var_31 &= ((/* implicit */unsigned char) arr_3 [i_6] [i_6] [i_8]);
                        arr_33 [i_9] [i_7] [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_9] [i_8] [i_7] [i_6])) ? (((/* implicit */int) arr_6 [i_6] [i_7] [i_6] [i_6])) : (arr_2 [i_9])))) ? (((var_6) >> (((arr_2 [i_9]) + (1692362658))))) : (((((/* implicit */_Bool) 12113387612952168560ULL)) ? (((/* implicit */int) (unsigned char)52)) : (arr_2 [i_9])))));
                    }
                } 
            } 
        } 
        var_32 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_16 [i_6] [i_6]) ? (arr_22 [i_6] [i_6] [i_6]) : (var_6)))) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) (_Bool)1))))))));
        /* LoopNest 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (unsigned char i_11 = 0; i_11 < 17; i_11 += 3) 
            {
                {
                    var_33 = ((/* implicit */unsigned long long int) (_Bool)1);
                    arr_40 [i_11] [i_10] [i_6] = arr_35 [i_6] [i_10] [i_6];
                }
            } 
        } 
    }
}
