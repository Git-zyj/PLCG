/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94297
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
    var_11 = ((/* implicit */signed char) max((((unsigned long long int) ((2147483647) - (2147483647)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6)))))));
    var_12 += ((/* implicit */unsigned char) var_5);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (short)-1);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned char i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                var_13 = ((/* implicit */signed char) ((unsigned long long int) arr_5 [i_2 + 1] [i_2] [i_2 + 1]));
                var_14 += ((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0]);
                /* LoopNest 2 */
                for (unsigned char i_3 = 3; i_3 < 12; i_3 += 4) 
                {
                    for (unsigned char i_4 = 1; i_4 < 13; i_4 += 2) 
                    {
                        {
                            arr_15 [i_3] [i_3] [i_1] [i_2 - 1] [(short)8] [i_3] [i_4 - 1] = arr_4 [i_0] [i_0];
                            arr_16 [i_0] [i_1] [i_0] [i_2 + 1] [(signed char)1] [i_3] = ((/* implicit */long long int) ((_Bool) var_3));
                        }
                    } 
                } 
            }
            for (signed char i_5 = 0; i_5 < 14; i_5 += 3) 
            {
                var_15 &= ((/* implicit */signed char) arr_11 [i_0] [i_1] [i_0] [i_5]);
                var_16 = ((/* implicit */_Bool) ((unsigned short) var_5));
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) arr_10 [i_0] [i_1] [i_5])) / (((/* implicit */int) arr_12 [i_1] [(short)12] [i_5] [i_0] [(signed char)0] [i_0])))) : (((/* implicit */int) var_1))));
            }
            for (short i_6 = 2; i_6 < 13; i_6 += 4) 
            {
                arr_24 [i_0] [1LL] [5] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 281474976709632LL)) ? (((/* implicit */int) (unsigned char)210)) : (((/* implicit */int) arr_3 [i_6 - 1]))))) ? (((/* implicit */int) ((unsigned char) arr_18 [i_6 - 1] [i_6 - 1] [i_6 - 1]))) : (((/* implicit */int) arr_14 [i_1] [(unsigned char)8] [i_1] [(unsigned char)0] [i_6 - 2] [(short)12] [i_6]))));
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 14; i_7 += 4) 
                {
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */short) ((((/* implicit */int) arr_25 [5] [5] [i_6 - 2] [i_6 - 2] [i_8])) >> (((((/* implicit */int) arr_25 [i_1] [i_6] [i_6 - 2] [i_8] [(short)7])) - (44)))));
                            arr_29 [i_0] [i_0] [i_8] [i_6] [i_7] [i_8 - 1] [i_8 - 1] = arr_3 [i_6 - 1];
                            arr_30 [i_0] [i_0] [i_6 - 1] [i_7] [i_8] [i_8] = ((/* implicit */int) arr_27 [i_8] [i_1] [i_6 - 2] [i_8] [12LL]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 14; i_9 += 2) 
                {
                    for (short i_10 = 2; i_10 < 13; i_10 += 1) 
                    {
                        {
                            var_19 &= ((/* implicit */long long int) ((((/* implicit */int) arr_35 [i_6] [(unsigned char)10] [i_6 - 2] [(short)4] [i_10 + 1])) + (((/* implicit */int) arr_35 [i_0] [i_0] [i_6 + 1] [i_10 - 2] [i_10 - 1]))));
                            var_20 += ((/* implicit */unsigned char) ((unsigned long long int) (short)-29));
                            arr_37 [i_10] [(unsigned char)10] [i_9] [i_9] [i_6] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) % (((/* implicit */int) arr_7 [i_0] [i_0] [i_6 - 2] [i_10 + 1]))));
                        }
                    } 
                } 
            }
            arr_38 [i_0] [i_0] [(unsigned char)1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) & (((/* implicit */int) var_6))))) ? (((/* implicit */int) (signed char)108)) : (((/* implicit */int) arr_34 [i_0] [i_1] [i_1] [i_1] [i_0]))));
        }
        for (unsigned short i_11 = 0; i_11 < 14; i_11 += 4) /* same iter space */
        {
            var_21 += ((/* implicit */long long int) (+(((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_1))))))));
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 2147483647)))) ? (((/* implicit */int) arr_41 [i_0] [i_0])) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_11] [i_11] [i_11])) || (((/* implicit */_Bool) var_5))))) : (((/* implicit */int) ((((_Bool) arr_27 [i_0] [(_Bool)1] [i_0] [10LL] [i_11])) || (((/* implicit */_Bool) arr_25 [i_11] [i_11] [i_11] [(_Bool)1] [i_11])))))));
            arr_42 [i_0] [i_0] = ((/* implicit */unsigned char) min((max((arr_32 [i_0] [i_0] [6LL] [i_11] [6LL] [i_11]), (arr_32 [i_0] [i_11] [i_0] [i_0] [i_11] [i_11]))), ((-(((long long int) var_1))))));
        }
        arr_43 [i_0] = ((/* implicit */unsigned short) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)15425))) * (arr_21 [i_0] [i_0] [i_0] [i_0]))) - (arr_21 [i_0] [i_0] [(short)11] [i_0]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
    }
}
