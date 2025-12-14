/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82856
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
    var_13 = ((/* implicit */_Bool) 4194303ULL);
    var_14 = ((/* implicit */unsigned short) 0U);
    var_15 = (short)-25281;
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 *= ((/* implicit */unsigned long long int) 0U);
        var_17 = ((/* implicit */unsigned int) (short)-15376);
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            arr_4 [i_0] [i_1] = ((/* implicit */short) 18446744073709551615ULL);
            arr_5 [i_0] = ((/* implicit */_Bool) 18446744073709551615ULL);
            var_18 ^= ((/* implicit */_Bool) 0U);
            /* LoopSeq 2 */
            for (unsigned short i_2 = 3; i_2 < 9; i_2 += 1) 
            {
                var_19 = ((/* implicit */unsigned char) 4294967284U);
                var_20 = ((/* implicit */int) (signed char)-1);
                arr_8 [i_2] [i_0] = 492581209243648ULL;
                var_21 = ((/* implicit */unsigned long long int) (_Bool)1);
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) (short)(-32767 - 1));
                            arr_17 [i_0] [i_0] [i_0] [i_0] = 0U;
                            var_23 = ((/* implicit */unsigned short) (_Bool)1);
                            var_24 = ((/* implicit */unsigned short) 0U);
                        }
                    } 
                } 
                arr_18 [i_0] [i_0] = ((/* implicit */unsigned int) 18446744073709551615ULL);
                var_25 = ((/* implicit */unsigned int) (unsigned short)65535);
                var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) 2139777838))));
            }
        }
        /* vectorizable */
        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            arr_23 [i_0] [i_0] [i_0] = ((/* implicit */short) (unsigned short)0);
            /* LoopNest 2 */
            for (unsigned int i_7 = 0; i_7 < 10; i_7 += 3) 
            {
                for (unsigned int i_8 = 1; i_8 < 8; i_8 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 0; i_9 < 10; i_9 += 3) 
                        {
                            arr_30 [i_0] = ((/* implicit */int) (unsigned short)8097);
                            arr_31 [i_9] [i_0] [i_7] [i_0] [i_0] [i_0] [i_0] = 4294967284U;
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (_Bool)1);
                            var_27 = ((/* implicit */unsigned short) (unsigned char)130);
                        }
                        arr_33 [i_0] [i_0] [i_0] [i_8] = ((/* implicit */unsigned int) (unsigned char)230);
                        arr_34 [i_0] [i_0] = ((/* implicit */unsigned char) 853003792);
                    }
                } 
            } 
            arr_35 [i_0] [i_0] = ((/* implicit */signed char) (unsigned char)125);
            arr_36 [i_0] = ((/* implicit */signed char) (unsigned short)1930);
        }
        arr_37 [i_0] = (unsigned char)146;
    }
    for (unsigned int i_10 = 0; i_10 < 10; i_10 += 4) 
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 10; i_11 += 4) 
        {
            for (long long int i_12 = 0; i_12 < 10; i_12 += 4) 
            {
                {
                    arr_46 [i_12] [i_11] [i_11] [i_10] = (unsigned char)24;
                    arr_47 [i_10] [i_10] &= ((/* implicit */unsigned short) (_Bool)1);
                }
            } 
        } 
        var_28 = ((/* implicit */_Bool) -1241713661);
        var_29 = ((/* implicit */unsigned char) 4355751883062228745ULL);
        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) 17562772989441034690ULL))));
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        arr_50 [i_13] = 11U;
        var_31 = ((/* implicit */unsigned long long int) -1241713667);
    }
}
