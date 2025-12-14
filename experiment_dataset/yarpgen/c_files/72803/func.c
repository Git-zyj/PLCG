/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72803
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
    for (short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5)))), (((/* implicit */int) (_Bool)0))));
                var_19 = ((/* implicit */_Bool) var_3);
            }
        } 
    } 
    var_20 -= ((/* implicit */short) ((((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_6))))) || (((/* implicit */_Bool) var_0))));
    /* LoopNest 2 */
    for (unsigned char i_2 = 1; i_2 < 10; i_2 += 4) 
    {
        for (signed char i_3 = 3; i_3 < 11; i_3 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 3; i_5 < 10; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            {
                                arr_18 [i_6] [i_6] [i_5] [i_4] [i_3] [i_6] [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((((/* implicit */_Bool) 16140901064495857664ULL)) ? (((/* implicit */int) (unsigned short)830)) : (((/* implicit */int) (unsigned short)64706)))) + (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)64706)) : (((/* implicit */int) (unsigned short)830))))))) % (((((/* implicit */_Bool) arr_17 [i_2 + 2] [i_3 - 2] [i_4] [i_5 - 1] [i_2 + 2])) ? (arr_17 [i_2] [i_3 - 3] [i_4] [i_5] [i_6]) : (arr_17 [i_2 + 2] [i_2] [(unsigned char)0] [i_2] [i_2 + 1])))));
                                arr_19 [i_2] [i_2] [i_4] [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-7495)) || (((/* implicit */_Bool) 231199923U)))))) >= (min((231199917U), (arr_13 [i_2] [i_2 - 1])))))) * (((/* implicit */int) arr_3 [i_2]))));
                            }
                        } 
                    } 
                } 
                arr_20 [i_2] [i_3 - 2] = ((/* implicit */_Bool) ((min((((((/* implicit */_Bool) (unsigned short)829)) ? (((/* implicit */int) (unsigned short)847)) : (((/* implicit */int) (unsigned short)59216)))), (((/* implicit */int) (short)18335)))) - (((((/* implicit */_Bool) 1143914305352105984ULL)) ? (((/* implicit */int) (unsigned short)6319)) : (((/* implicit */int) (_Bool)1))))));
                /* LoopNest 2 */
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 1; i_8 < 10; i_8 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned int i_9 = 1; i_9 < 10; i_9 += 3) 
                            {
                                arr_29 [i_2] [i_3] [i_7] = ((/* implicit */unsigned short) arr_9 [i_2 + 1] [i_3 - 2] [i_8]);
                                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) arr_16 [8] [(unsigned short)2] [i_7] [(unsigned short)2] [i_2]))));
                                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (((~(min((((/* implicit */unsigned long long int) var_12)), (var_0))))) >> (((((/* implicit */int) var_15)) >> ((((~(((/* implicit */int) var_9)))) - (100))))))))));
                                arr_30 [i_8] [i_8 + 1] [i_8 + 2] [8] [i_8 + 1] [i_8] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) / (17302829768357445632ULL)))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3)))))) == (((((/* implicit */int) arr_28 [i_2 - 1] [i_3] [i_7] [i_7] [i_9])) + (((((/* implicit */_Bool) arr_10 [i_8 + 2] [i_7 - 1] [i_3])) ? (((/* implicit */int) (unsigned short)32256)) : (((/* implicit */int) var_7))))))));
                            }
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4063767373U)) ? (((/* implicit */int) (short)19154)) : (((/* implicit */int) min(((unsigned short)829), (((/* implicit */unsigned short) (signed char)12)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 12; i_10 += 1) 
                {
                    for (unsigned short i_11 = 0; i_11 < 12; i_11 += 2) 
                    {
                        {
                            var_24 -= ((/* implicit */unsigned long long int) (+((~((-(((/* implicit */int) (_Bool)1))))))));
                            /* LoopSeq 1 */
                            for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 4) 
                            {
                                var_25 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_10])) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_2 [i_12])))) : (((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) (unsigned short)64706)))))))) ? (((/* implicit */int) arr_24 [i_2 + 2] [i_2] [i_2 - 1] [i_11])) : (min((max((((/* implicit */int) var_5)), (arr_22 [i_10] [i_2]))), (((/* implicit */int) var_17))))));
                                arr_37 [i_2 - 1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min(((!(((/* implicit */_Bool) 1378026864)))), (arr_26 [i_2 + 2] [i_2]))))) % (-5485000253726087731LL)));
                                var_26 ^= ((/* implicit */unsigned int) ((min((1125898833100800ULL), (((/* implicit */unsigned long long int) arr_31 [i_3 - 2] [i_11])))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned short)820))))));
                                arr_38 [i_11] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)12114)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_24 [i_3] [i_10] [i_11] [i_2]))))) : (max((((((/* implicit */_Bool) var_1)) ? (arr_35 [i_3] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))), (((((/* implicit */_Bool) arr_12 [i_2] [i_11] [i_2])) ? (1143914305352105970ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
