/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90861
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
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) min((var_15), (((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (!(((/* implicit */_Bool) 1899530836)))))))) <= (((/* implicit */int) (_Bool)0))))));
                                var_16 = ((/* implicit */signed char) ((unsigned long long int) (_Bool)0));
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] [i_0] = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)3072)), (2627762750U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0 + 3] [i_1] [6] [i_1] [i_1])) || (((/* implicit */_Bool) (short)4034))))) : (((/* implicit */int) ((1667204541U) >= (((/* implicit */unsigned int) 1163059402))))));
            }
        } 
    } 
    var_17 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
    var_18 ^= ((/* implicit */signed char) var_1);
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 16; i_5 += 3) 
    {
        for (signed char i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            {
                var_19 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_12))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (unsigned char)125)) : (((/* implicit */int) arr_18 [(signed char)8]))))), (((((/* implicit */_Bool) (unsigned char)137)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (3135894691U))))))));
                /* LoopNest 3 */
                for (unsigned int i_7 = 1; i_7 < 15; i_7 += 4) 
                {
                    for (unsigned long long int i_8 = 1; i_8 < 12; i_8 += 2) 
                    {
                        for (signed char i_9 = 4; i_9 < 15; i_9 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3328771333177449847ULL))))) : (((/* implicit */int) arr_19 [i_6] [i_6])))))));
                                arr_27 [i_6] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (~(((/* implicit */int) (short)511))))) ? (((-8166820088933694037LL) & (((/* implicit */long long int) arr_20 [12] [i_6] [(unsigned short)6] [i_6])))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)137)) ^ (((/* implicit */int) var_12))))))), (((/* implicit */long long int) arr_25 [i_5] [i_6] [i_5] [i_6] [i_5] [i_5] [i_5]))));
                                var_21 = ((/* implicit */unsigned long long int) arr_26 [i_6] [i_6]);
                                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) min((max((max((((/* implicit */unsigned long long int) var_10)), (var_1))), (((/* implicit */unsigned long long int) arr_19 [i_9] [i_9])))), (((/* implicit */unsigned long long int) (unsigned char)231)))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) -15)) / (2627762747U))) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)148)))))) ? ((-(((var_1) / (((/* implicit */unsigned long long int) var_10)))))) : (((/* implicit */unsigned long long int) (+(arr_26 [i_6] [i_6]))))));
                /* LoopNest 2 */
                for (signed char i_10 = 3; i_10 < 14; i_10 += 3) 
                {
                    for (unsigned short i_11 = 0; i_11 < 16; i_11 += 3) 
                    {
                        {
                            var_24 ^= ((/* implicit */int) max((max((((/* implicit */unsigned long long int) arr_29 [i_10 - 2] [0ULL] [(signed char)0])), (arr_32 [i_10 - 3] [i_11] [i_11] [i_11]))), (((((/* implicit */_Bool) arr_24 [i_10 + 2] [i_10 + 2] [8] [i_11] [(_Bool)1] [i_10 + 2])) ? (arr_32 [i_10 - 3] [i_10] [(unsigned short)4] [i_11]) : (arr_32 [i_10 + 1] [i_11] [i_11] [i_11])))));
                            var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_22 [i_11] [(_Bool)1] [0LL] [i_11]))));
                            arr_33 [i_6] [i_6] = ((/* implicit */unsigned long long int) max((min((((((/* implicit */_Bool) arr_29 [i_5] [i_6] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (1667204545U))), (min((((/* implicit */unsigned int) arr_19 [i_6] [4U])), (var_10))))), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)3072))) : (2627762751U)))));
                            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) arr_23 [(signed char)8] [i_6] [i_6] [i_6] [i_6] [i_6]))));
                            arr_34 [i_6] [i_6] [i_5] = ((((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) + (arr_20 [4] [(unsigned char)3] [i_6] [i_5]))) >= (((/* implicit */int) ((_Bool) (unsigned char)242))));
                        }
                    } 
                } 
                arr_35 [i_6] [i_6] = ((/* implicit */signed char) ((((9223372036854775791LL) - (((/* implicit */long long int) ((/* implicit */int) max((arr_15 [13LL] [13LL]), (((/* implicit */unsigned short) arr_14 [i_5])))))))) - (((/* implicit */long long int) ((/* implicit */int) (signed char)65)))));
            }
        } 
    } 
}
