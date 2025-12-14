/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86802
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
    var_16 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (_Bool)1)), (var_4)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    var_17 = ((/* implicit */signed char) (+(((/* implicit */int) ((((9223372036854775807LL) / (var_2))) >= (((/* implicit */long long int) max((arr_5 [i_1]), (((/* implicit */int) (unsigned char)240))))))))));
                    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) arr_2 [i_0] [6]))));
                }
                for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) /* same iter space */
                {
                    arr_11 [i_1] [i_1] [i_1 - 1] [i_1] = ((/* implicit */unsigned char) (short)14528);
                    var_19 = ((/* implicit */unsigned char) (short)8735);
                    arr_12 [i_1] = ((/* implicit */unsigned int) var_11);
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) arr_10 [i_0] [i_3] [i_1] [i_5]);
                                var_21 -= ((/* implicit */short) var_15);
                                var_22 = ((/* implicit */int) arr_15 [i_0] [i_1] [i_3] [(_Bool)1] [10]);
                                var_23 = ((/* implicit */unsigned long long int) arr_17 [i_1] [i_1 + 1]);
                                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) arr_1 [3] [i_4]))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 1; i_7 < 13; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 1; i_8 < 14; i_8 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (max((((/* implicit */unsigned long long int) var_0)), (min((((/* implicit */unsigned long long int) var_3)), (arr_1 [i_6] [i_7]))))) : (((/* implicit */unsigned long long int) max((1148416217698708719LL), (((/* implicit */long long int) arr_27 [i_0] [i_0] [i_0] [i_0] [i_1 - 2] [i_1])))))));
                                var_26 = (short)-8723;
                                var_27 = ((/* implicit */_Bool) arr_18 [i_8] [i_1] [i_7] [13] [i_8]);
                                var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_6 [i_0] [(_Bool)1] [(_Bool)1] [(unsigned char)8])))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) max(((short)8742), (((/* implicit */short) var_12))))), (max((var_7), (((/* implicit */unsigned int) (unsigned short)63392))))))))))));
                            }
                        } 
                    } 
                    var_29 -= ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [(_Bool)1] [i_0])) + (((/* implicit */int) arr_4 [(unsigned short)5] [i_6]))))) || (((/* implicit */_Bool) ((arr_19 [i_0] [i_0] [i_1] [(unsigned char)4]) ^ (((/* implicit */unsigned long long int) 24))))))))));
                }
                /* LoopNest 3 */
                for (short i_9 = 0; i_9 < 16; i_9 += 1) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 1) 
                    {
                        for (long long int i_11 = 0; i_11 < 16; i_11 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) (short)-1966))));
                                var_31 = ((/* implicit */unsigned short) var_0);
                                arr_35 [i_1] [i_1 - 1] [i_9] [i_10] [i_11] = ((/* implicit */unsigned short) (+(((min((((/* implicit */unsigned int) (short)-1950)), (var_13))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(_Bool)1] [10])))))));
                            }
                        } 
                    } 
                } 
                var_32 ^= ((/* implicit */unsigned int) var_8);
                /* LoopNest 3 */
                for (signed char i_12 = 1; i_12 < 14; i_12 += 4) 
                {
                    for (signed char i_13 = 3; i_13 < 15; i_13 += 1) 
                    {
                        for (int i_14 = 0; i_14 < 16; i_14 += 1) 
                        {
                            {
                                var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) arr_1 [i_12 + 1] [i_13 - 2]))));
                                var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) ((unsigned int) arr_16 [i_14] [i_12] [i_1 + 1] [i_0])))));
                                var_35 = ((/* implicit */signed char) max(((-(arr_19 [i_0] [i_0] [i_12 - 1] [i_1]))), (((/* implicit */unsigned long long int) arr_36 [i_14] [i_12 + 1] [i_12 + 1]))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_15 = 3; i_15 < 14; i_15 += 4) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        for (unsigned long long int i_17 = 0; i_17 < 16; i_17 += 3) 
                        {
                            {
                                var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) max(((((~(arr_7 [i_17]))) << (((((/* implicit */int) var_6)) - (45116))))), (((/* implicit */unsigned int) max((var_6), (((/* implicit */unsigned short) min(((short)-1953), (((/* implicit */short) (signed char)86)))))))))))));
                                arr_50 [i_1] [i_1] [i_1] [i_15] [i_1] [i_16] [i_17] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_43 [i_1 + 1] [i_1] [i_1 - 1] [i_1 - 1]))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)1970)) : (((/* implicit */int) var_3))))), ((~(-113684295361643488LL))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_41 [i_1] [i_1 + 1] [i_1 - 2] [i_1 - 1] [i_15 - 3] [i_15 + 2] [i_15 - 2])))))));
                                var_37 = ((((/* implicit */int) arr_4 [i_16] [i_17])) & (((/* implicit */int) max((arr_29 [i_1] [i_1] [i_1 - 2] [i_1 - 2]), (((/* implicit */short) arr_38 [i_1 - 1] [i_1 - 1] [(unsigned char)6] [i_1 - 1]))))));
                                var_38 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) & (min(((~(var_4))), (((/* implicit */unsigned long long int) (signed char)15))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
