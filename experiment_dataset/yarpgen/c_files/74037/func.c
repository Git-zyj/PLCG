/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74037
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
    var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) -1689631636))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) (((~(((/* implicit */int) (_Bool)1)))) >= (((/* implicit */int) var_4)))))));
        arr_3 [i_0] = max((((((((/* implicit */int) (unsigned char)64)) & (((/* implicit */int) (short)-6421)))) | (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_2 [i_0])))))), (((((-2147483647) & (((/* implicit */int) arr_0 [i_0])))) ^ (max((((/* implicit */int) arr_0 [i_0])), (2147483647))))));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_12 |= ((/* implicit */long long int) max((min((((/* implicit */int) arr_4 [i_0])), (max((-1750688472), (((/* implicit */int) (signed char)24)))))), (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) max(((unsigned short)16935), (((/* implicit */unsigned short) arr_4 [i_0]))))))))));
                    arr_9 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */long long int) arr_4 [i_0]);
                    arr_10 [i_0] [(signed char)13] [i_0] = ((/* implicit */unsigned char) arr_7 [i_0] [8ULL]);
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */unsigned long long int) var_0);
    }
    /* vectorizable */
    for (unsigned char i_3 = 2; i_3 < 22; i_3 += 3) 
    {
        var_13 = ((/* implicit */int) var_7);
        /* LoopSeq 1 */
        for (short i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_5 = 0; i_5 < 23; i_5 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 23; i_6 += 1) 
                {
                    for (unsigned char i_7 = 0; i_7 < 23; i_7 += 4) 
                    {
                        {
                            var_14 -= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_25 [i_6] [i_7])) | (((/* implicit */int) arr_18 [i_4] [i_6] [i_7])))) ^ (((/* implicit */int) var_4))));
                            var_15 -= ((/* implicit */signed char) ((((/* implicit */int) arr_21 [i_3] [i_3] [i_3 - 2] [i_3])) - (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_2))))));
                            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) var_4))));
                            var_17 = ((/* implicit */long long int) arr_16 [i_3] [(signed char)22] [i_5] [1U]);
                        }
                    } 
                } 
                arr_26 [i_3] [i_4] [6ULL] [i_5] = ((var_6) ? (((/* implicit */int) arr_18 [i_3 + 1] [i_3 + 1] [i_3 - 1])) : (((/* implicit */int) var_3)));
            }
            /* LoopNest 2 */
            for (signed char i_8 = 1; i_8 < 20; i_8 += 3) 
            {
                for (signed char i_9 = 1; i_9 < 20; i_9 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (short i_10 = 0; i_10 < 23; i_10 += 1) /* same iter space */
                        {
                            arr_37 [i_4] [i_10] &= var_3;
                            arr_38 [(unsigned char)20] [i_4] [i_9] [i_9 + 2] [i_9] = ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) arr_30 [i_3 + 1] [i_9] [i_3 + 1])) : (((/* implicit */int) arr_27 [i_3 - 1] [(signed char)8] [i_8] [i_9])));
                        }
                        for (short i_11 = 0; i_11 < 23; i_11 += 1) /* same iter space */
                        {
                            var_18 = ((((142625730) == (((/* implicit */int) (_Bool)0)))) ? (((((/* implicit */int) (short)-2095)) + (((/* implicit */int) (signed char)6)))) : (((/* implicit */int) ((signed char) (signed char)-25))));
                            arr_41 [i_9] [i_9] [i_11] [i_9 + 2] [i_9 + 2] [i_9 + 2] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)1)) != (((/* implicit */int) (signed char)26))))) == (((/* implicit */int) (unsigned char)40))));
                            arr_42 [i_3 - 2] [i_3 - 2] [i_4] [i_3 - 2] [i_3 - 2] |= ((/* implicit */unsigned char) arr_35 [i_4]);
                        }
                        for (short i_12 = 0; i_12 < 23; i_12 += 1) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned long long int) arr_16 [(unsigned char)0] [i_3] [i_3 + 1] [i_9 - 1]);
                            var_20 = ((/* implicit */int) arr_24 [(unsigned char)15] [i_4] [i_4] [i_4] [11U] [i_9] [i_12]);
                        }
                        var_21 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1)))))) >> (((((/* implicit */int) arr_21 [i_9 + 1] [i_9 - 1] [i_9 + 3] [i_9 + 1])) - (76)))));
                    }
                } 
            } 
        }
        var_22 = ((/* implicit */_Bool) arr_12 [19]);
    }
    for (signed char i_13 = 2; i_13 < 21; i_13 += 4) 
    {
        arr_47 [i_13] |= ((/* implicit */unsigned short) min((((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)58)), (4066967343U)))), (((((((/* implicit */int) (short)-16384)) > (arr_46 [i_13]))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_45 [i_13] [i_13 + 3]))))) : (max((((/* implicit */long long int) arr_46 [(unsigned char)13])), (-2639193607254976602LL)))))));
        var_23 *= ((/* implicit */signed char) arr_46 [i_13]);
    }
    for (unsigned short i_14 = 0; i_14 < 16; i_14 += 4) 
    {
        arr_50 [i_14] [i_14] = ((/* implicit */unsigned long long int) (unsigned short)44447);
        arr_51 [i_14] = (+(((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) (signed char)127)))));
        /* LoopNest 2 */
        for (signed char i_15 = 0; i_15 < 16; i_15 += 3) 
        {
            for (unsigned short i_16 = 0; i_16 < 16; i_16 += 2) 
            {
                {
                    var_24 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (short)-15887)), (-2639193607254976594LL)));
                    arr_57 [i_15] [13ULL] = ((/* implicit */unsigned char) arr_15 [i_14] [i_15]);
                }
            } 
        } 
    }
}
