/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78679
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
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned short i_3 = 1; i_3 < 7; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) arr_13 [i_0] [i_0] [i_2] [i_2] [i_3 - 1] [6]);
                                arr_14 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_2] [i_3] [i_0 + 2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_8 [i_0] [i_1] [i_0] [i_1] [i_3] [i_4])), (arr_11 [i_0 - 1] [i_0 - 2] [i_0 + 2] [i_3 + 2]))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (int i_6 = 1; i_6 < 7; i_6 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) max((arr_3 [i_0] [i_0] [i_6 + 1]), (((/* implicit */int) var_12))))) : ((+(arr_16 [i_0] [i_0] [i_5]))))) == (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)110)) != (((/* implicit */int) (signed char)96))))) + (((/* implicit */int) arr_17 [i_5] [i_1])))))));
                            var_21 += ((/* implicit */_Bool) arr_0 [i_0 - 1]);
                            var_22 = ((/* implicit */unsigned long long int) var_14);
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -1084269239577634012LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_1] [i_1]))) : (arr_13 [i_0] [i_0] [i_0] [i_0] [(unsigned short)0] [i_0]))) & (max((arr_13 [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1]), (((/* implicit */long long int) arr_8 [i_0 + 1] [i_0 + 1] [(unsigned char)5] [i_0] [(unsigned short)8] [(unsigned char)4]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_4 [i_0] [i_0] [(signed char)6]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-55)))))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) + (2320715313269410208ULL)))));
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_15)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_9)) - (((/* implicit */int) var_6))))) : (((var_11) + (((/* implicit */long long int) ((/* implicit */int) var_18)))))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_10)))))) >= (((((/* implicit */_Bool) (unsigned short)64483)) ? (((/* implicit */unsigned long long int) var_8)) : (var_7))))))));
    /* LoopNest 2 */
    for (unsigned char i_7 = 0; i_7 < 11; i_7 += 3) 
    {
        for (unsigned short i_8 = 0; i_8 < 11; i_8 += 4) 
        {
            {
                var_25 = (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [(signed char)4]))))));
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 11; i_9 += 3) 
                {
                    for (int i_10 = 0; i_10 < 11; i_10 += 4) 
                    {
                        {
                            arr_30 [i_7] [i_8] [i_7] [i_7] = (i_7 % 2 == zero) ? (((/* implicit */long long int) ((((arr_25 [i_7] [i_7] [i_7] [i_7]) << (((arr_25 [i_7] [i_8] [i_9] [i_8]) - (4184293393U))))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_7])) ? (min((arr_26 [6U] [i_7] [i_9] [i_7]), (((/* implicit */int) arr_24 [i_7] [i_8] [i_7])))) : (((/* implicit */int) arr_24 [(_Bool)1] [i_8] [i_7])))))))) : (((/* implicit */long long int) ((((arr_25 [i_7] [i_7] [i_7] [i_7]) << (((((arr_25 [i_7] [i_8] [i_9] [i_8]) - (4184293393U))) - (3078473098U))))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_7])) ? (min((arr_26 [6U] [i_7] [i_9] [i_7]), (((/* implicit */int) arr_24 [i_7] [i_8] [i_7])))) : (((/* implicit */int) arr_24 [(_Bool)1] [i_8] [i_7]))))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                            {
                                var_26 ^= ((/* implicit */signed char) arr_34 [i_7] [i_7] [i_8] [i_7] [(unsigned short)8] [i_7]);
                                var_27 = (!(((/* implicit */_Bool) arr_32 [i_7] [i_7] [i_7] [(_Bool)1] [(_Bool)1] [i_7])));
                            }
                            var_28 = ((/* implicit */unsigned short) (((+(((((/* implicit */int) arr_23 [i_7])) - (((/* implicit */int) (_Bool)1)))))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_7] [(unsigned short)1] [i_7] [i_7] [i_7] [i_7])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
