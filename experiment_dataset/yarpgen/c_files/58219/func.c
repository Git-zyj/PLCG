/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58219
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
    for (long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 20; i_2 += 3) 
                {
                    for (short i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 + 2] [i_1 + 2])) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_7)), (arr_3 [(unsigned char)7] [(unsigned short)21])))) : (max((((/* implicit */unsigned long long int) arr_7 [3ULL] [(_Bool)1] [i_2] [3ULL])), (var_12)))))) ? (((((/* implicit */_Bool) var_6)) ? (arr_3 [i_0] [i_0]) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) & (arr_2 [i_0 - 1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))));
                            arr_8 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_1 + 4])) ? (min((var_10), (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) ((arr_6 [i_3 - 2] [i_2] [14U] [i_1 + 3] [14U] [14U]) - (((/* implicit */int) arr_5 [i_3] [i_0 + 1] [i_0 + 1])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_2 [i_0]) > (((/* implicit */unsigned int) ((((arr_6 [i_0 - 1] [i_1] [i_1] [i_2] [i_1] [i_1]) + (2147483647))) << (((((/* implicit */int) arr_0 [i_1])) - (27999)))))))))) : (arr_2 [i_0 - 1])));
                            arr_9 [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */long long int) arr_2 [i_0]);
                        }
                    } 
                } 
                arr_10 [i_0] = ((/* implicit */unsigned int) arr_4 [18LL] [i_0]);
                var_14 = ((/* implicit */unsigned long long int) arr_3 [i_1 + 3] [i_0]);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_8)) ? (max((var_2), (var_12))) : (((/* implicit */unsigned long long int) var_4)))) << (((var_7) - (2013520462)))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
    var_17 = ((/* implicit */short) ((var_12) << (((((/* implicit */int) var_3)) - (24)))));
    /* LoopSeq 3 */
    for (unsigned char i_4 = 3; i_4 < 13; i_4 += 4) /* same iter space */
    {
        arr_13 [i_4] [i_4] = ((/* implicit */signed char) arr_0 [i_4]);
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_4] [15U])) ? (((/* implicit */unsigned int) max((((/* implicit */int) arr_12 [i_4] [i_4])), (((((/* implicit */_Bool) arr_4 [i_4 - 1] [i_4])) ? (arr_6 [i_4] [i_4] [i_4] [i_4] [(unsigned short)19] [i_4]) : (((/* implicit */int) arr_5 [i_4] [i_4] [i_4]))))))) : (arr_2 [i_4])));
        var_19 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_4 [i_4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_11 [(unsigned char)2]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4 + 3] [i_4 + 2]))) : (max((arr_3 [i_4 - 2] [i_4]), (((/* implicit */unsigned int) arr_5 [i_4] [i_4] [i_4])))))))));
    }
    for (unsigned char i_5 = 3; i_5 < 13; i_5 += 4) /* same iter space */
    {
        arr_16 [i_5] = ((/* implicit */long long int) arr_4 [i_5 + 2] [i_5]);
        var_20 = ((/* implicit */unsigned char) ((min((var_6), (((/* implicit */long long int) arr_12 [i_5 - 3] [i_5 - 1])))) - (arr_11 [i_5 + 2])));
        var_21 = ((/* implicit */unsigned char) var_8);
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_11))));
    }
    /* vectorizable */
    for (unsigned char i_6 = 3; i_6 < 13; i_6 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_7 = 1; i_7 < 12; i_7 += 4) 
        {
            var_23 = ((/* implicit */short) ((((((/* implicit */int) arr_5 [i_6] [(signed char)9] [i_7])) < (var_5))) ? (((((/* implicit */_Bool) arr_0 [i_7])) ? (arr_4 [i_7] [i_6]) : (((/* implicit */int) var_11)))) : (((/* implicit */int) var_0))));
            var_24 = ((/* implicit */unsigned char) arr_19 [i_6]);
            arr_23 [i_6] [i_7] [i_6] = ((/* implicit */_Bool) var_5);
            /* LoopNest 2 */
            for (short i_8 = 0; i_8 < 16; i_8 += 2) 
            {
                for (short i_9 = 0; i_9 < 16; i_9 += 4) 
                {
                    {
                        var_25 = ((/* implicit */unsigned int) arr_4 [20U] [i_6 + 2]);
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 0; i_10 < 16; i_10 += 3) 
                        {
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_10] [i_8] [i_7]))) - (arr_14 [i_6])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_7 + 3] [i_7 + 1] [i_6 - 3]))) : (((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_10] [i_9] [i_7])))))));
                            arr_31 [i_6] [i_7] [i_8] [i_6] [i_6] [i_9] [12] = ((/* implicit */unsigned int) arr_11 [i_6 + 3]);
                        }
                        arr_32 [i_7] [i_6] [i_6] [(unsigned char)6] [i_6] = ((/* implicit */unsigned char) var_7);
                    }
                } 
            } 
            var_27 = ((/* implicit */signed char) arr_27 [i_6] [i_7 - 1] [i_6 + 1] [i_6]);
        }
        for (unsigned char i_11 = 1; i_11 < 15; i_11 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_12 = 1; i_12 < 13; i_12 += 4) 
            {
                for (unsigned char i_13 = 0; i_13 < 16; i_13 += 4) 
                {
                    {
                        var_28 = ((/* implicit */unsigned short) ((var_6) % (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_12] [i_12 + 3] [13U] [i_12 + 3])))));
                        arr_41 [i_6] = ((/* implicit */signed char) arr_4 [10] [i_13]);
                        arr_42 [i_6] [(short)1] [i_11] [i_6] = ((/* implicit */unsigned int) arr_18 [i_12] [i_12]);
                        var_29 = ((/* implicit */signed char) ((arr_38 [i_6 - 2] [i_11 + 1] [i_12 + 2] [i_12] [i_13]) ? (arr_35 [i_12 + 2] [i_13]) : (arr_25 [i_6] [i_11 + 1] [i_11] [i_11 + 1])));
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_37 [i_6] [i_11] [i_6] [i_13])) % (((/* implicit */int) arr_30 [i_11] [i_11]))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_38 [(short)9] [i_11] [i_12] [i_11] [i_6])) : (((/* implicit */int) arr_1 [i_11] [(unsigned char)9])))) : (((/* implicit */int) ((arr_7 [(unsigned char)8] [i_11 + 1] [12LL] [i_11 + 1]) || (((/* implicit */_Bool) var_9)))))));
                    }
                } 
            } 
            arr_43 [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) ((var_2) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_6] [i_6])))))) > (((/* implicit */int) arr_37 [(unsigned char)15] [i_11] [i_6] [i_6]))));
        }
        var_31 = ((/* implicit */unsigned long long int) arr_0 [i_6]);
    }
}
