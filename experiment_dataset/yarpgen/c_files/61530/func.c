/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61530
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
    for (int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            arr_6 [(signed char)12] |= ((/* implicit */signed char) 471719565U);
            arr_7 [i_0] [i_0] = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
            var_10 = ((/* implicit */unsigned short) 471719577U);
        }
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            /* LoopNest 3 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (unsigned short i_4 = 2; i_4 < 14; i_4 += 2) 
                {
                    for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */signed char) (-((-(((((/* implicit */int) (unsigned short)8687)) ^ (((/* implicit */int) var_8))))))));
                            arr_19 [i_0] [i_0] [(unsigned short)3] [i_4] [i_5] = ((/* implicit */int) var_4);
                        }
                    } 
                } 
            } 
            var_12 &= ((/* implicit */short) ((((/* implicit */int) arr_12 [i_0 - 1] [i_0] [i_0] [i_0 + 1])) - (((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_2])) - (((/* implicit */int) var_3))))) ? (((/* implicit */int) (unsigned short)53621)) : (((/* implicit */int) arr_8 [i_0] [i_0 - 1]))))));
        }
        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 4) 
        {
            /* LoopSeq 3 */
            for (int i_7 = 0; i_7 < 16; i_7 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 16; i_8 += 4) 
                {
                    for (int i_9 = 0; i_9 < 16; i_9 += 1) 
                    {
                        {
                            arr_31 [i_8] [i_6] [i_6] [i_8] [i_9] |= ((/* implicit */_Bool) (signed char)-98);
                            var_13 = ((/* implicit */short) (((~(arr_30 [i_0 - 1] [i_0 + 1]))) & (((((/* implicit */_Bool) arr_30 [i_0 - 1] [i_0 + 1])) ? (arr_30 [i_0 - 1] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))));
                            arr_32 [i_7] [i_7] [i_7] [i_0] [i_7] = ((/* implicit */signed char) ((min((arr_25 [i_0] [i_6] [i_7] [i_8] [i_8] [i_9]), (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))))) / (((/* implicit */int) max((arr_21 [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)237))) < (10870018936045573798ULL)))))))));
                        }
                    } 
                } 
                arr_33 [i_0] = 7497152651208477983LL;
            }
            for (int i_10 = 0; i_10 < 16; i_10 += 4) 
            {
                var_14 = ((/* implicit */short) ((((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_0] [i_0] [i_6]))))) ^ (min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))))), (((-2545187012639055792LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)237)))))))));
                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) 924488281))));
            }
            for (short i_11 = 2; i_11 < 14; i_11 += 4) 
            {
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) 7U)) ? (((/* implicit */int) (short)-28032)) : (((/* implicit */int) arr_20 [i_0 + 1] [i_11] [i_11 - 2])))) : (((/* implicit */int) ((((/* implicit */_Bool) 4387792676364196122ULL)) && (((/* implicit */_Bool) var_7)))))));
                arr_39 [i_0] [i_0] [i_0 + 1] = ((/* implicit */short) arr_8 [i_0] [i_0]);
            }
            arr_40 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0])) ? (((/* implicit */long long int) arr_23 [i_0] [i_6] [0LL])) : (max((((/* implicit */long long int) -1791764899)), (var_4))))) != (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)115)), (arr_20 [i_0 - 1] [i_0 - 1] [i_0 + 1])))))));
        }
        for (unsigned long long int i_12 = 1; i_12 < 15; i_12 += 1) 
        {
            var_17 ^= ((/* implicit */int) var_2);
            var_18 = ((/* implicit */unsigned char) var_1);
        }
        arr_43 [i_0] = ((/* implicit */int) -2545187012639055792LL);
    }
    for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 2) 
    {
        var_19 += ((/* implicit */long long int) arr_9 [i_13] [i_13] [(unsigned short)14]);
        var_20 += ((/* implicit */short) 2040834940);
        /* LoopSeq 3 */
        for (unsigned short i_14 = 0; i_14 < 13; i_14 += 1) 
        {
            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_13] [i_13] [i_13] [i_14])) / (((/* implicit */int) arr_14 [i_13] [i_14] [i_14] [i_14] [i_14]))))) ? (10870018936045573798ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))));
            var_22 = ((/* implicit */int) (short)-16044);
            var_23 = (~(14058951397345355493ULL));
            var_24 ^= ((/* implicit */int) ((((/* implicit */_Bool) 14058951397345355493ULL)) && (((((/* implicit */int) var_1)) <= (((/* implicit */int) (signed char)7))))));
            arr_48 [i_13] [i_13] [i_14] = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)0)) - (((/* implicit */int) arr_9 [i_13] [i_14] [i_14])))) != ((~(((/* implicit */int) arr_4 [i_13]))))));
        }
        for (unsigned int i_15 = 2; i_15 < 9; i_15 += 4) /* same iter space */
        {
            arr_51 [(unsigned short)0] [i_15] [i_15] = ((/* implicit */short) (-(arr_45 [i_15] [i_13])));
            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((~(3823247719U)))))) ? (((/* implicit */int) ((min((0LL), (((/* implicit */long long int) (unsigned short)32455)))) != (((/* implicit */long long int) ((/* implicit */int) arr_8 [(short)12] [i_15])))))) : (min((((/* implicit */int) (unsigned char)254)), (((((/* implicit */int) (signed char)-35)) ^ (((/* implicit */int) arr_13 [i_15] [i_15] [i_15] [(unsigned short)1]))))))));
        }
        for (unsigned int i_16 = 2; i_16 < 9; i_16 += 4) /* same iter space */
        {
            arr_55 [i_13] [i_13] [i_13] = (signed char)14;
            var_26 = ((/* implicit */signed char) 15871317101026044604ULL);
            /* LoopNest 3 */
            for (signed char i_17 = 0; i_17 < 13; i_17 += 4) 
            {
                for (int i_18 = 4; i_18 < 11; i_18 += 4) 
                {
                    for (short i_19 = 0; i_19 < 13; i_19 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */_Bool) var_2);
                            arr_63 [i_13] [i_13] [i_13] = ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)20)) < (((((/* implicit */_Bool) (short)-32767)) ? (((/* implicit */int) (signed char)38)) : (((/* implicit */int) (short)32611)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 576458553280167936ULL)) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_41 [i_19]))))))))) : (((((/* implicit */_Bool) (unsigned short)39658)) ? (((/* implicit */long long int) ((/* implicit */int) arr_62 [i_13] [i_13] [i_13] [i_13] [(unsigned short)4]))) : (2545187012639055791LL)))));
                        }
                    } 
                } 
            } 
        }
    }
    var_28 = ((/* implicit */short) (signed char)-127);
}
