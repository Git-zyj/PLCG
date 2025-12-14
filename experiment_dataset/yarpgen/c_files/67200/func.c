/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67200
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        var_13 = arr_0 [i_0];
        /* LoopNest 2 */
        for (short i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_3 + 2] [i_1 + 1] [i_0 + 1] [(unsigned char)3])) ? (((/* implicit */int) arr_2 [i_3] [i_1 - 1])) : (var_5)));
                        arr_10 [1U] [i_0] [i_1] [i_0 - 1] [i_0] = ((/* implicit */long long int) (+((+(((/* implicit */int) (short)-6432))))));
                    }
                    var_15 = ((/* implicit */long long int) ((unsigned short) ((unsigned char) -317841512)));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (short i_4 = 1; i_4 < 13; i_4 += 4) 
        {
            var_16 = ((/* implicit */unsigned long long int) -317841512);
            /* LoopNest 2 */
            for (signed char i_5 = 2; i_5 < 14; i_5 += 3) 
            {
                for (long long int i_6 = 0; i_6 < 16; i_6 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_5 + 1] [i_0] [i_0] [i_0 + 1]))));
                        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 - 1] [i_4 - 1])) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1] [i_4 + 3])) : (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_4 + 1])))))));
                    }
                } 
            } 
            var_19 = ((/* implicit */unsigned short) (unsigned char)47);
            var_20 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2))));
            arr_17 [i_0] = ((/* implicit */_Bool) arr_11 [(short)11]);
        }
        for (short i_7 = 2; i_7 < 14; i_7 += 3) 
        {
            var_21 ^= ((/* implicit */short) (_Bool)1);
            /* LoopNest 2 */
            for (unsigned char i_8 = 0; i_8 < 16; i_8 += 3) 
            {
                for (unsigned char i_9 = 3; i_9 < 12; i_9 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (short i_10 = 0; i_10 < 16; i_10 += 2) 
                        {
                            arr_29 [i_10] [i_9 - 3] [i_8] [(signed char)10] [i_10] &= ((/* implicit */unsigned int) ((var_0) / (((/* implicit */long long int) ((arr_1 [i_10]) + (((/* implicit */unsigned int) var_10)))))));
                            arr_30 [i_7 + 2] [9LL] [i_0] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)51650))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0]))) : (var_12)));
                            arr_31 [0U] [14ULL] [i_0] [i_9] [15LL] [i_9] = ((/* implicit */unsigned int) (!(arr_12 [i_9 - 1])));
                        }
                        for (unsigned short i_11 = 0; i_11 < 16; i_11 += 2) 
                        {
                            arr_35 [i_0] [i_9] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_0] [i_9] [(signed char)15] [i_9])) % (((/* implicit */int) (unsigned char)224))))) == (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) % (var_11)))));
                            var_22 = arr_26 [i_9 + 4] [i_7 + 2] [i_7 + 1] [i_0 + 1];
                            var_23 += ((/* implicit */short) var_2);
                        }
                        for (short i_12 = 2; i_12 < 12; i_12 += 3) 
                        {
                            arr_38 [i_0] [i_7] [i_9] [(unsigned char)2] [i_0] [i_7] = ((/* implicit */short) var_2);
                            var_24 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_32 [i_7] [15U] [i_12 + 1] [i_12] [i_12])) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (890762555)));
                            var_25 = ((/* implicit */unsigned int) ((((_Bool) -317841512)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)34273))))) : (arr_36 [i_12 + 2])));
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_0 - 1] [i_0 - 1] [(short)14] [i_7 + 1])) ? (((/* implicit */int) (short)-26341)) : (((/* implicit */int) var_4))));
                        }
                        arr_39 [i_9] [2LL] [i_0] = ((/* implicit */unsigned int) arr_16 [i_9 + 1] [i_9] [1U] [i_9 + 2]);
                    }
                } 
            } 
            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((signed char) ((((/* implicit */_Bool) arr_21 [i_0] [i_7])) ? (((/* implicit */int) (short)-11116)) : (((/* implicit */int) arr_9 [(short)4] [i_0 - 1] [2LL] [(short)4]))))))));
        }
        for (unsigned char i_13 = 0; i_13 < 16; i_13 += 2) 
        {
            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((-1272988034) != (((/* implicit */int) arr_9 [i_13] [i_0 + 1] [i_0] [i_13])))))));
            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((6987765032554359243LL) / (((/* implicit */long long int) ((/* implicit */int) (short)11106))))))));
        }
    }
    var_30 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned int) var_3)), (var_12))), (2977978324U)))) ? (max((max((var_5), (((/* implicit */int) (unsigned short)42240)))), (((/* implicit */int) var_2)))) : (((/* implicit */int) (short)-11116))));
}
