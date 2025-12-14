/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78857
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_2] [i_1] [i_1] [i_0 - 1] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_4 [i_1] [i_1 - 1] [i_2])) != (((/* implicit */int) var_10)))) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) arr_1 [i_0 - 1] [i_1 - 1])) | (((/* implicit */int) arr_4 [i_1] [i_1 - 1] [i_1]))))));
                    arr_11 [i_0 + 2] [i_0 + 2] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((arr_1 [i_0 - 1] [i_0 - 1]) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_1 [i_0 + 2] [i_1 - 1]))))) + ((~(var_3)))));
                    arr_12 [i_0 + 1] [i_1] [(unsigned short)10] = ((/* implicit */short) max((arr_2 [i_0] [i_1 - 1] [i_2]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1 - 1] [i_1 - 1])) && (((/* implicit */_Bool) arr_2 [i_0] [i_1 - 1] [i_2])))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        arr_15 [i_3] [i_3] = ((/* implicit */short) (-(((((/* implicit */int) arr_4 [6ULL] [i_3] [6ULL])) << (((((/* implicit */int) arr_4 [(unsigned short)16] [i_3] [i_3])) - (32892)))))));
        arr_16 [i_3] [i_3] = ((/* implicit */unsigned short) arr_3 [i_3] [i_3]);
    }
    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
    {
        arr_19 [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_18 [i_4] [i_4])) <= (((/* implicit */int) max((arr_18 [i_4] [i_4]), (((/* implicit */unsigned short) var_14)))))));
        arr_20 [i_4] = ((/* implicit */short) arr_17 [i_4]);
        arr_21 [i_4] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_11))))) + (((((/* implicit */int) arr_18 [i_4] [i_4])) - (((/* implicit */int) arr_18 [i_4] [i_4]))))));
        /* LoopSeq 2 */
        for (short i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            arr_25 [(unsigned char)15] [i_5] = ((/* implicit */short) (-(max((((/* implicit */int) arr_18 [i_4] [i_4])), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_8))))))));
            arr_26 [i_4] [i_4] [i_4] |= ((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_24 [i_4] [i_4]))))));
        }
        /* vectorizable */
        for (unsigned short i_6 = 2; i_6 < 20; i_6 += 2) 
        {
            arr_30 [i_4] |= ((arr_22 [i_4] [i_4] [i_6 - 2]) ^ (arr_22 [i_6] [i_6] [i_6 - 2]));
            arr_31 [i_6 + 3] [i_4] [i_4] = ((/* implicit */short) (+(arr_28 [i_6 + 2] [i_6 - 1])));
        }
    }
    /* LoopSeq 3 */
    for (unsigned char i_7 = 3; i_7 < 10; i_7 += 2) 
    {
        arr_35 [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_16)) : ((+(((/* implicit */int) var_14))))));
        arr_36 [(unsigned short)4] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_9 [i_7 - 1] [i_7 - 1] [i_7] [i_7 - 3])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_6)))), (((/* implicit */int) (unsigned char)177))));
    }
    for (long long int i_8 = 3; i_8 < 16; i_8 += 3) 
    {
        arr_40 [12ULL] = ((/* implicit */short) max(((-(arr_23 [i_8] [i_8 + 3] [i_8 + 1]))), (((/* implicit */long long int) ((arr_23 [i_8 + 2] [i_8 + 2] [i_8]) >= (arr_23 [i_8] [i_8] [i_8]))))));
        arr_41 [i_8] = ((/* implicit */unsigned char) arr_24 [i_8] [i_8]);
        arr_42 [(short)12] = ((/* implicit */unsigned char) arr_29 [i_8] [i_8]);
        arr_43 [i_8] = ((/* implicit */short) ((((((/* implicit */_Bool) var_12)) ? (arr_28 [i_8 + 3] [i_8 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_8 + 2] [i_8 - 3]))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_24 [i_8] [i_8])), (arr_18 [i_8] [i_8]))))))))));
    }
    for (short i_9 = 0; i_9 < 18; i_9 += 3) 
    {
        arr_47 [i_9] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_29 [i_9] [i_9])), (var_0))))));
        arr_48 [i_9] = (i_9 % 2 == 0) ? (((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_17 [(unsigned char)20])) ? (((/* implicit */int) arr_24 [i_9] [i_9])) : (((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_15))))))) + (2147483647))) << (((((((/* implicit */int) arr_46 [i_9] [i_9])) - ((~(((/* implicit */int) arr_44 [i_9])))))) - (81040)))))) : (((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_17 [(unsigned char)20])) ? (((/* implicit */int) arr_24 [i_9] [i_9])) : (((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_15))))))) + (2147483647))) << (((((((((((/* implicit */int) arr_46 [i_9] [i_9])) - ((~(((/* implicit */int) arr_44 [i_9])))))) - (81040))) + (24210))) - (17))))));
        arr_49 [i_9] [i_9] = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) (short)5)), ((unsigned short)20015)));
        arr_50 [i_9] = ((/* implicit */unsigned short) arr_29 [i_9] [i_9]);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_10 = 3; i_10 < 22; i_10 += 2) 
    {
        arr_53 [i_10] [i_10] = ((/* implicit */short) var_8);
        arr_54 [i_10 - 1] [i_10 - 1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) < (arr_51 [i_10 - 3])));
        arr_55 [i_10] [i_10] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)29188))));
    }
    var_17 = ((/* implicit */long long int) var_16);
}
