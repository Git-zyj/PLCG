/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75114
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
    var_17 = ((/* implicit */unsigned long long int) var_0);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            arr_5 [i_0 - 1] = ((/* implicit */unsigned char) arr_2 [i_0 - 1]);
            arr_6 [i_1] = arr_2 [i_0];
        }
        for (signed char i_2 = 3; i_2 < 22; i_2 += 3) /* same iter space */
        {
            var_18 = ((/* implicit */short) arr_3 [(unsigned char)15] [i_0 - 1] [i_2 - 1]);
            arr_10 [(unsigned char)16] [(unsigned char)16] = ((/* implicit */unsigned char) arr_8 [i_2 + 1] [i_2]);
            var_19 = ((/* implicit */long long int) arr_2 [i_0 - 2]);
            var_20 = ((/* implicit */int) arr_2 [i_0 - 2]);
            var_21 += ((/* implicit */unsigned int) arr_1 [i_0]);
        }
        for (signed char i_3 = 3; i_3 < 22; i_3 += 3) /* same iter space */
        {
            arr_13 [i_0] = ((/* implicit */unsigned int) arr_9 [i_0 - 1] [i_3 - 3]);
            var_22 = ((/* implicit */unsigned char) arr_8 [i_0 - 2] [i_0]);
            var_23 = ((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_3 - 3]);
            var_24 = arr_8 [i_0 - 2] [(unsigned short)13];
        }
        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            var_25 = ((/* implicit */long long int) arr_1 [i_0 + 1]);
            var_26 = ((/* implicit */_Bool) arr_4 [i_0 + 1] [i_4]);
            arr_16 [(unsigned short)20] [i_4] [i_4] = ((/* implicit */unsigned long long int) arr_8 [i_0 - 1] [i_0 - 1]);
        }
        var_27 &= ((/* implicit */unsigned long long int) arr_1 [i_0 - 1]);
        var_28 += ((/* implicit */int) arr_14 [i_0 - 1]);
        var_29 = ((/* implicit */unsigned long long int) arr_7 [i_0]);
    }
    /* vectorizable */
    for (unsigned char i_5 = 2; i_5 < 10; i_5 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_6 = 1; i_6 < 11; i_6 += 1) /* same iter space */
        {
            arr_21 [i_5 - 2] = arr_9 [i_5 + 2] [i_6 + 1];
            var_30 = ((/* implicit */int) arr_19 [i_5 - 1]);
            var_31 ^= ((/* implicit */unsigned char) arr_1 [i_5 + 2]);
            arr_22 [i_5] [i_5] [i_6] = arr_20 [i_6 - 1] [(short)9];
        }
        for (unsigned char i_7 = 1; i_7 < 11; i_7 += 1) /* same iter space */
        {
            var_32 = ((/* implicit */long long int) arr_14 [i_5 - 1]);
            var_33 = ((/* implicit */unsigned short) arr_24 [i_7 + 1] [i_7 + 1] [i_7 - 1]);
            var_34 -= ((/* implicit */short) arr_18 [i_7]);
            var_35 = ((/* implicit */unsigned short) arr_24 [i_7] [i_7] [i_7 + 1]);
        }
        for (unsigned char i_8 = 1; i_8 < 11; i_8 += 1) /* same iter space */
        {
            var_36 = ((/* implicit */unsigned long long int) arr_25 [i_5 - 1]);
            var_37 = ((/* implicit */unsigned int) arr_1 [i_5 + 1]);
        }
        var_38 = ((/* implicit */short) arr_1 [i_5]);
        var_39 -= ((/* implicit */unsigned short) arr_25 [i_5]);
        var_40 = ((/* implicit */unsigned short) arr_24 [i_5 + 2] [i_5 - 1] [i_5 - 1]);
    }
    for (unsigned long long int i_9 = 1; i_9 < 21; i_9 += 1) 
    {
        var_41 += ((/* implicit */_Bool) min((min((((/* implicit */long long int) 3221225472U)), (-6720410195947175880LL))), (max((arr_27 [(unsigned short)16]), (arr_27 [4])))));
        arr_29 [i_9] = ((/* implicit */signed char) min((max((arr_27 [i_9]), (arr_27 [i_9]))), (min((arr_27 [i_9]), (arr_27 [i_9])))));
        /* LoopSeq 1 */
        for (unsigned long long int i_10 = 1; i_10 < 23; i_10 += 2) 
        {
            var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) min((min((arr_31 [i_9 + 2] [i_10 - 1] [i_9 + 2]), (arr_31 [i_9] [i_10 - 1] [i_9 + 3]))), (arr_31 [i_10 + 1] [i_9 + 1] [i_9 + 1]))))));
            var_43 = ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_31 [i_9] [i_10 - 1] [i_10 + 1])), (max((max((arr_27 [i_9]), (((/* implicit */long long int) arr_31 [i_9] [i_9] [i_10])))), (((/* implicit */long long int) min((((/* implicit */unsigned short) arr_31 [i_9] [i_9] [i_9])), (arr_28 [i_9]))))))));
            arr_32 [16LL] &= ((/* implicit */unsigned long long int) arr_31 [i_9] [i_10] [i_10]);
            var_44 += ((/* implicit */_Bool) arr_30 [18U]);
        }
        var_45 = ((/* implicit */signed char) min((max((min((((/* implicit */long long int) arr_31 [i_9] [i_9] [i_9 + 1])), (arr_27 [i_9]))), (((/* implicit */long long int) arr_30 [i_9])))), (((/* implicit */long long int) max((((/* implicit */short) min((arr_30 [i_9]), (((/* implicit */unsigned char) arr_31 [i_9] [i_9] [i_9]))))), (max(((short)-256), (((/* implicit */short) (signed char)-89)))))))));
        arr_33 [i_9] = max((((/* implicit */unsigned short) arr_31 [i_9 + 1] [15ULL] [i_9 + 2])), (max((((/* implicit */unsigned short) arr_31 [i_9 + 3] [i_9 + 3] [i_9 - 1])), (arr_28 [i_9]))));
    }
    for (unsigned short i_11 = 3; i_11 < 18; i_11 += 1) 
    {
        var_46 = min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)255));
        var_47 = ((/* implicit */short) min((((/* implicit */unsigned char) max((arr_15 [i_11] [i_11 - 2]), (arr_15 [i_11 + 1] [i_11])))), (min(((unsigned char)60), (((/* implicit */unsigned char) arr_15 [i_11 + 2] [i_11]))))));
        arr_37 [2U] &= ((/* implicit */unsigned int) arr_36 [16] [16]);
        arr_38 [i_11] = ((/* implicit */unsigned long long int) arr_9 [i_11 - 3] [i_11 + 1]);
        arr_39 [i_11] = ((/* implicit */short) max((((/* implicit */long long int) max((((/* implicit */signed char) arr_1 [i_11 - 1])), (arr_11 [i_11] [i_11 + 1])))), (min((arr_27 [i_11]), (((/* implicit */long long int) arr_11 [i_11] [i_11 - 1]))))));
    }
}
