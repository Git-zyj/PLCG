/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94647
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
    for (int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 8; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) arr_10 [i_0] [i_0] [(unsigned char)3]);
                    var_21 += ((/* implicit */unsigned char) (~(((arr_4 [i_0] [(_Bool)1] [i_0 - 1]) << (((var_12) - (8403319986516727550ULL)))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_11);
    /* LoopSeq 4 */
    for (signed char i_3 = 3; i_3 < 13; i_3 += 1) 
    {
        var_23 &= ((/* implicit */short) max((arr_12 [i_3 + 1] [4ULL]), (arr_12 [i_3 - 1] [(unsigned char)10])));
        var_24 |= ((/* implicit */long long int) min(((~(((((/* implicit */_Bool) var_1)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))))), (max((((((/* implicit */_Bool) var_19)) ? (7873329642729271627ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) var_17))))));
        var_25 = ((/* implicit */unsigned long long int) min((var_25), (max((((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned long long int) var_18))))) ? (var_11) : ((+(var_11))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_11 [i_3 - 1])))))))));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_26 -= ((var_2) << (((((/* implicit */int) arr_14 [i_4] [i_4])) - (94))));
        var_27 += ((/* implicit */signed char) (+(((/* implicit */int) (signed char)56))));
    }
    for (long long int i_5 = 0; i_5 < 24; i_5 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_6 = 0; i_6 < 24; i_6 += 1) 
        {
            for (unsigned int i_7 = 3; i_7 < 22; i_7 += 1) 
            {
                for (signed char i_8 = 0; i_8 < 24; i_8 += 1) 
                {
                    {
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_23 [i_6] [i_7 - 3] [i_7 - 3] [(unsigned char)11])))) ? (((((/* implicit */_Bool) var_17)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((arr_24 [i_5] [i_7 - 2] [i_7] [i_8] [i_8] [i_6]) * (((/* implicit */unsigned long long int) arr_22 [i_5] [i_7 - 3] [i_8] [i_8]))))));
                        var_29 = ((/* implicit */unsigned char) min((var_29), (((unsigned char) (+(max((10573414430980279989ULL), (((/* implicit */unsigned long long int) arr_17 [i_5])))))))));
                    }
                } 
            } 
        } 
        var_30 = ((/* implicit */int) (-(18446744073709551615ULL)));
    }
    for (short i_9 = 2; i_9 < 12; i_9 += 1) 
    {
        arr_29 [i_9] = ((/* implicit */unsigned long long int) ((unsigned char) ((arr_28 [i_9 + 1] [i_9 + 3]) | (arr_28 [i_9 + 1] [i_9 + 3]))));
        /* LoopSeq 3 */
        for (unsigned short i_10 = 0; i_10 < 15; i_10 += 1) 
        {
            var_31 += ((/* implicit */_Bool) (+((-((+(((/* implicit */int) arr_20 [i_9] [i_9] [i_10]))))))));
            /* LoopSeq 1 */
            for (unsigned char i_11 = 1; i_11 < 13; i_11 += 1) 
            {
                var_32 = ((/* implicit */signed char) ((unsigned long long int) (unsigned char)26));
                var_33 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned char) (+(arr_15 [i_9])))))));
                var_34 = ((/* implicit */unsigned char) ((unsigned int) min(((!(((/* implicit */_Bool) arr_25 [i_11] [(unsigned short)12])))), ((!(((/* implicit */_Bool) (unsigned short)127)))))));
            }
        }
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
        {
            var_35 ^= ((/* implicit */unsigned long long int) (~((~((~(((/* implicit */int) arr_17 [i_12]))))))));
            var_36 ^= (+(max((9115939996313903479ULL), (((/* implicit */unsigned long long int) arr_32 [i_9 - 2] [i_12 - 1])))));
        }
        for (unsigned short i_13 = 3; i_13 < 12; i_13 += 1) 
        {
            var_37 += ((/* implicit */unsigned short) (-(min(((-(arr_34 [i_9] [i_13]))), (arr_37 [(unsigned short)7] [i_13 + 1] [i_13])))));
            /* LoopNest 2 */
            for (unsigned long long int i_14 = 0; i_14 < 15; i_14 += 1) 
            {
                for (unsigned char i_15 = 0; i_15 < 15; i_15 += 1) 
                {
                    {
                        arr_44 [i_9] [i_13] [i_14] [1] [(signed char)10] [i_13] = ((/* implicit */unsigned int) (~(arr_22 [i_13 - 2] [i_13] [i_13 + 2] [i_9 - 2])));
                        var_38 = ((/* implicit */unsigned int) max(((+(((/* implicit */int) arr_20 [i_9 - 1] [i_9] [i_9 + 3])))), ((~(((/* implicit */int) arr_38 [i_13 - 2] [i_13 - 3] [i_14]))))));
                        var_39 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((var_2), (var_16))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 15; i_16 += 1) 
            {
                for (int i_17 = 0; i_17 < 15; i_17 += 1) 
                {
                    {
                        arr_50 [i_17] [i_13] [i_13] [i_9] = ((/* implicit */signed char) max((((/* implicit */short) ((signed char) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_22 [i_17] [i_16] [i_13] [i_9])))))), (((short) (+(((/* implicit */int) var_0)))))));
                        var_40 *= ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_20 [i_13 - 1] [(unsigned short)21] [i_13 + 1]))))));
                    }
                } 
            } 
        }
    }
}
