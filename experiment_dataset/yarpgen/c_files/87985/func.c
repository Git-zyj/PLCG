/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87985
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
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        arr_3 [i_0 - 1] [(signed char)2] = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_2 [i_0])) ? (18446744073709551615ULL) : (0ULL)))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) var_9))));
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? ((+(4ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                    var_13 = ((/* implicit */short) ((signed char) (~(((/* implicit */int) arr_1 [i_0])))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_14 = ((arr_5 [i_3] [i_0 + 1]) / (((/* implicit */unsigned long long int) var_3)));
            /* LoopSeq 2 */
            for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) var_10))));
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    for (short i_6 = 1; i_6 < 10; i_6 += 4) 
                    {
                        {
                            var_16 *= ((/* implicit */unsigned int) 18446744073709551611ULL);
                            arr_18 [i_0] [i_4] [i_0] [i_0] [i_6] [i_5] [i_5] = ((/* implicit */unsigned short) (+((~(((/* implicit */int) var_10))))));
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1]))))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                var_18 += ((/* implicit */unsigned int) (_Bool)1);
                arr_21 [i_0] = (unsigned char)1;
                var_19 ^= ((/* implicit */unsigned int) ((int) (_Bool)1));
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 2; i_8 < 8; i_8 += 4) 
                {
                    for (unsigned char i_9 = 2; i_9 < 9; i_9 += 1) 
                    {
                        {
                            arr_28 [i_9] [9] [9] [i_7] [i_8] [i_9 - 1] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_9])) & (((/* implicit */int) var_7))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_9] [i_8] [i_0 + 1] [i_0 + 1]))))) : (((/* implicit */int) arr_12 [i_0 - 1] [2] [i_8] [i_9 + 1])));
                            var_20 ^= var_3;
                            arr_29 [i_0 - 1] [(short)4] [i_9] [i_0] [i_0 - 1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 + 1] [i_8 - 1]))) ^ (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_8)) : (21ULL)))));
                            var_21 -= ((/* implicit */unsigned int) var_1);
                        }
                    } 
                } 
            }
        }
        for (signed char i_10 = 0; i_10 < 11; i_10 += 1) 
        {
            arr_32 [i_10] [i_10] [i_0 - 1] = ((/* implicit */unsigned long long int) var_2);
            var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0 + 1])) * (((/* implicit */int) ((short) arr_25 [i_0] [i_0 - 1] [i_0] [i_0])))));
            arr_33 [0ULL] |= ((/* implicit */int) 4294967293U);
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 11; i_11 += 4) 
        {
            for (unsigned char i_12 = 3; i_12 < 10; i_12 += 1) 
            {
                {
                    arr_40 [i_11] [i_0 + 1] [i_11] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (58720256ULL) : (var_1)))) ? ((-(var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))));
                    var_23 = ((/* implicit */_Bool) (~((~(((/* implicit */int) var_6))))));
                    arr_41 [i_12] [i_12] = ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) & (((/* implicit */int) var_7))))) | ((~(var_9))));
                }
            } 
        } 
    }
    for (unsigned char i_13 = 0; i_13 < 22; i_13 += 4) 
    {
        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_42 [i_13])) ? (var_9) : (((/* implicit */unsigned long long int) 65011712U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [i_13])))))))))));
        /* LoopSeq 3 */
        for (unsigned char i_14 = 3; i_14 < 21; i_14 += 4) 
        {
            var_25 = ((/* implicit */short) (-(var_9)));
            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_5)) : (var_1))) << (((min((((var_1) << (((65011734U) - (65011701U))))), (((/* implicit */unsigned long long int) var_7)))) - (66ULL))))))));
            /* LoopNest 2 */
            for (int i_15 = 4; i_15 < 20; i_15 += 4) 
            {
                for (int i_16 = 2; i_16 < 19; i_16 += 3) 
                {
                    {
                        var_27 ^= ((int) var_0);
                        var_28 = ((/* implicit */_Bool) min(((+(((/* implicit */int) (short)-1)))), (((/* implicit */int) ((((/* implicit */int) arr_49 [i_15 + 2] [i_14 - 1])) > (((/* implicit */int) arr_49 [i_15 - 4] [i_14 - 3])))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_17 = 0; i_17 < 22; i_17 += 2) 
        {
            var_29 = ((/* implicit */int) arr_51 [i_13] [1ULL] [1ULL]);
            var_30 &= ((/* implicit */unsigned long long int) var_7);
            arr_57 [1] [1] = ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) << (((18014381329612800ULL) - (18014381329612800ULL))));
        }
        for (short i_18 = 0; i_18 < 22; i_18 += 2) 
        {
            arr_62 [i_13] [i_18] = ((/* implicit */short) 4294967280U);
            var_31 = ((/* implicit */_Bool) (unsigned char)252);
        }
    }
    var_32 &= ((/* implicit */unsigned long long int) var_5);
}
