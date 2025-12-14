/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60113
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) 17313293355988704393ULL)) ? ((~(0))) : (((/* implicit */int) ((unsigned short) (short)-24988)))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            arr_7 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 17313293355988704378ULL)))))) >= (max((1133450717720847238ULL), (((/* implicit */unsigned long long int) (short)-5))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned int i_2 = 3; i_2 < 10; i_2 += 3) 
            {
                arr_10 [i_0] [i_2] [i_2 + 1] = var_12;
                /* LoopNest 2 */
                for (long long int i_3 = 4; i_3 < 10; i_3 += 3) 
                {
                    for (unsigned int i_4 = 3; i_4 < 12; i_4 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) ((signed char) arr_3 [i_1 + 2] [i_3 - 1]));
                            arr_16 [i_0] [i_2] [i_2] [i_2] [i_2] [i_0] = arr_0 [i_1] [i_1];
                        }
                    } 
                } 
                var_20 = (+(((/* implicit */int) ((unsigned short) arr_5 [i_0]))));
                arr_17 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)55683)) >> (((3492478692U) - (3492478672U)))));
            }
            for (unsigned int i_5 = 2; i_5 < 12; i_5 += 3) /* same iter space */
            {
                arr_20 [i_0] = ((/* implicit */long long int) 17313293355988704377ULL);
                arr_21 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)0))));
                arr_22 [i_1] [i_1] [i_5] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned char) var_9)), ((unsigned char)57)));
                arr_23 [i_5] [i_5] = var_8;
            }
            for (unsigned int i_6 = 2; i_6 < 12; i_6 += 3) /* same iter space */
            {
                arr_27 [i_0] [i_1] [(short)7] = ((/* implicit */long long int) max((1873920147261508648ULL), (17313293355988704387ULL)));
                arr_28 [i_0] [i_0] [i_1] [i_6] = ((/* implicit */unsigned long long int) 0U);
            }
            var_21 = ((/* implicit */unsigned short) max((var_21), (arr_18 [9ULL] [i_1 + 2] [i_1 + 3] [4ULL])));
        }
        /* vectorizable */
        for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 2) 
        {
            /* LoopNest 3 */
            for (int i_8 = 1; i_8 < 10; i_8 += 1) 
            {
                for (unsigned short i_9 = 0; i_9 < 13; i_9 += 3) 
                {
                    for (unsigned int i_10 = 0; i_10 < 13; i_10 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_38 [i_10] [i_8 - 1] [i_7] [(unsigned char)3])) ? (((/* implicit */int) (unsigned short)5)) : (((/* implicit */int) (unsigned short)65524))));
                            var_23 = ((/* implicit */unsigned long long int) arr_4 [i_8 - 1] [i_8 + 1] [i_8 + 1]);
                            var_24 = ((/* implicit */long long int) arr_40 [i_0] [(short)0] [(short)0] [i_8] [12LL]);
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */short) var_15);
            arr_41 [i_0] = ((/* implicit */unsigned int) arr_25 [i_0]);
            arr_42 [i_0] [i_7] = ((((/* implicit */_Bool) 1746326501U)) ? (((/* implicit */int) (short)-15)) : (((/* implicit */int) arr_40 [i_0] [i_0] [i_0] [i_0] [(unsigned short)12])));
        }
        /* LoopSeq 1 */
        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
        {
            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((unsigned long long int) (short)-22813)))));
            arr_46 [i_0] [i_11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)5)))))) / (((((/* implicit */_Bool) 4606018084855278188ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (7998630885031536629ULL))))))));
            var_27 = ((/* implicit */signed char) var_13);
            var_28 = ((/* implicit */short) min((max((((/* implicit */int) arr_0 [i_11 - 1] [i_11 - 1])), ((-(((/* implicit */int) (unsigned char)188)))))), ((-(((/* implicit */int) (_Bool)0))))));
            var_29 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (2926579250U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63)))))), ((~((+(5368111680664884051LL)))))));
        }
    }
    var_30 = ((((/* implicit */_Bool) -3LL)) ? (4294967292U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
    var_31 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-107))))), (((unsigned int) (short)21784))));
    var_32 = var_6;
}
