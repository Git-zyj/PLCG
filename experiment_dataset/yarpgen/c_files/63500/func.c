/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63500
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 10; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                            {
                                var_12 = ((/* implicit */unsigned short) (((~(((((/* implicit */_Bool) arr_13 [i_0 + 4] [i_0 + 1] [i_0 + 2] [i_0])) ? (var_1) : (((/* implicit */long long int) var_2)))))) <= (((/* implicit */long long int) max((((/* implicit */int) min((arr_0 [i_0] [i_0]), (var_7)))), ((+(arr_9 [i_1] [i_2 - 2] [i_1] [i_0]))))))));
                                var_13 = ((/* implicit */unsigned char) var_6);
                                arr_14 [i_0 + 3] [i_1] [i_2 - 2] [i_0 + 3] [i_3] [i_3] = ((/* implicit */unsigned int) ((((unsigned long long int) var_11)) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_11 [i_0 + 1] [i_0 + 4] [i_1] [i_2 - 1] [i_3] [i_4]))))));
                            }
                            var_14 = ((/* implicit */unsigned short) arr_10 [i_0] [i_0 + 2] [i_1] [i_2 - 1] [i_2 - 2]);
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned int) (~((-(((/* implicit */int) (unsigned short)510))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 23; i_5 += 4) 
    {
        for (short i_6 = 3; i_6 < 22; i_6 += 4) 
        {
            {
                var_16 = ((/* implicit */long long int) var_11);
                /* LoopNest 2 */
                for (signed char i_7 = 1; i_7 < 20; i_7 += 2) 
                {
                    for (unsigned int i_8 = 2; i_8 < 22; i_8 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)2032)), (var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-32760)) <= (((/* implicit */int) arr_15 [i_5] [i_5])))))) : (((((/* implicit */_Bool) arr_25 [i_5] [i_6] [i_7] [i_8] [i_8])) ? (var_11) : (((/* implicit */unsigned int) arr_19 [i_8 - 1] [i_8]))))))) ? (((/* implicit */int) arr_20 [i_6] [i_6 + 1] [i_6])) : (((((/* implicit */_Bool) -8102751486796779911LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-32747))))));
                            var_18 = ((/* implicit */_Bool) var_6);
                            arr_27 [i_5] [i_5] [i_7] [i_8] = ((/* implicit */unsigned char) (+(max((((/* implicit */int) ((_Bool) arr_25 [i_5] [i_6] [i_7 + 2] [i_8 - 1] [i_7 - 1]))), (((int) var_11))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_9 = 3; i_9 < 19; i_9 += 2) 
                {
                    for (signed char i_10 = 0; i_10 < 23; i_10 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) max(((!(((/* implicit */_Bool) (unsigned short)64868)))), (var_8)));
                            var_20 = ((/* implicit */unsigned short) (~(((unsigned int) var_4))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 2) 
                {
                    for (unsigned char i_12 = 1; i_12 < 21; i_12 += 4) 
                    {
                        {
                            arr_41 [i_12] = ((/* implicit */signed char) min(((+(((/* implicit */int) var_0)))), (((/* implicit */int) var_0))));
                            arr_42 [i_5] [i_12] [i_11] [i_12] = ((/* implicit */long long int) (signed char)-94);
                            arr_43 [i_12] = ((/* implicit */_Bool) ((var_8) ? (((/* implicit */unsigned long long int) -1LL)) : ((((+(8688613084421214179ULL))) * (((/* implicit */unsigned long long int) arr_17 [i_11]))))));
                            var_21 = ((/* implicit */unsigned short) arr_28 [i_12] [i_12] [i_12]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_13 = 0; i_13 < 17; i_13 += 1) 
    {
        for (unsigned long long int i_14 = 0; i_14 < 17; i_14 += 1) 
        {
            {
                var_22 = ((/* implicit */int) ((max((((((/* implicit */_Bool) var_10)) ? (arr_30 [i_13] [19U] [i_14] [i_14]) : (((/* implicit */long long int) var_2)))), (arr_48 [i_13]))) >> (((long long int) ((((/* implicit */long long int) var_11)) / (var_6))))));
                /* LoopNest 3 */
                for (unsigned long long int i_15 = 0; i_15 < 17; i_15 += 2) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        for (unsigned int i_17 = 3; i_17 < 16; i_17 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) var_6);
                                var_24 ^= ((/* implicit */long long int) arr_36 [i_13] [i_15] [i_13]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_25 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) ? ((-(1991075865U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
    var_26 = var_6;
}
