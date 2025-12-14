/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63778
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) arr_4 [i_0] [i_0] [i_2 - 1] [i_0]))));
                            arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_7 [i_3] [i_2 + 1] [i_0] [i_0] [i_0]);
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)29342)) == (((((/* implicit */_Bool) -1902056599741974572LL)) ? (((/* implicit */int) (short)-15140)) : (((/* implicit */int) (unsigned short)4642))))));
                            arr_10 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */_Bool) arr_4 [i_3] [i_3] [i_2 - 2] [i_3]);
                            arr_11 [i_0] = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) -1902056599741974572LL)), (9670710903144289107ULL))), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_1)) ? (0ULL) : (((/* implicit */unsigned long long int) -5075004902697525664LL))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_22 = (-(((long long int) ((arr_8 [i_0] [i_0] [i_1 - 2] [i_4] [i_1 - 2]) ? (-5075004902697525664LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))));
                            arr_18 [i_5] [i_4] [i_0] [i_0] = arr_8 [i_4] [i_4] [i_0] [i_4] [i_5];
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_6 = 1; i_6 < 10; i_6 += 2) 
                {
                    for (short i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        for (short i_8 = 0; i_8 < 11; i_8 += 4) 
                        {
                            {
                                var_23 *= ((/* implicit */unsigned char) arr_26 [i_6 - 1] [i_1 + 2] [i_6 + 1] [i_7]);
                                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_5 [i_1] [i_1])), (var_19))))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        for (unsigned char i_10 = 4; i_10 < 13; i_10 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_11 = 4; i_11 < 12; i_11 += 1) 
                {
                    for (unsigned char i_12 = 2; i_12 < 13; i_12 += 3) 
                    {
                        {
                            var_25 += ((/* implicit */unsigned char) (~(-2138115950569900128LL)));
                            arr_38 [i_12] [i_9] [i_10] = (+(((/* implicit */int) ((short) (!(arr_29 [i_9]))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (long long int i_14 = 0; i_14 < 14; i_14 += 4) 
                    {
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            {
                                arr_48 [i_9] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned short) arr_30 [i_9]))), (((((/* implicit */_Bool) arr_40 [i_9] [i_9])) ? (arr_28 [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_9] [i_9])))))))) ? (((/* implicit */int) arr_45 [i_9] [i_9] [i_15])) : (((int) min((arr_40 [i_9] [i_9]), (((/* implicit */long long int) arr_37 [i_9] [i_9] [i_9] [i_14] [i_9])))))));
                                var_26 += ((/* implicit */unsigned char) min((((arr_36 [i_14] [i_10 - 2]) | (arr_36 [i_10] [i_10 - 2]))), (((arr_36 [i_10] [i_10]) ^ (arr_36 [i_14] [i_15])))));
                                arr_49 [i_10] [i_10 - 3] [9] [i_10 - 4] [i_9] [i_10 - 4] [(_Bool)1] = ((/* implicit */long long int) (-(var_19)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_16 = 3; i_16 < 12; i_16 += 2) 
                {
                    for (signed char i_17 = 0; i_17 < 14; i_17 += 3) 
                    {
                        for (short i_18 = 0; i_18 < 14; i_18 += 1) 
                        {
                            {
                                arr_59 [i_9] [i_9] [i_16] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) arr_41 [i_9] [i_16 + 1] [i_16 + 1])) > (((/* implicit */int) arr_37 [i_9] [i_9] [i_9] [i_17] [i_16 - 1])))))));
                                arr_60 [i_9] [i_9] [7LL] [i_9] [13LL] [i_17] = max((((int) max((var_12), (((/* implicit */unsigned short) var_6))))), (((/* implicit */int) var_18)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
