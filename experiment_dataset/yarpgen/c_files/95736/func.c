/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95736
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
    var_18 -= ((/* implicit */long long int) var_4);
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_13))))), (var_1)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_15))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 14; i_2 += 2) 
            {
                {
                    var_20 -= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(unsigned char)8] [i_1] [(unsigned char)8] [i_0])) ? (arr_3 [i_0] [i_1] [(_Bool)1]) : (((/* implicit */long long int) var_2))))) ? (((/* implicit */int) min((arr_1 [15LL]), (var_6)))) : (arr_0 [i_1 + 2]))), (min((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0])) : (var_16))), ((~(arr_6 [i_0] [i_1] [i_1] [i_2])))))));
                    arr_9 [11LL] [i_1] [11LL] [4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(min((((/* implicit */long long int) arr_1 [i_0])), (arr_3 [i_2 - 2] [i_1 - 1] [i_0])))))) ? (((/* implicit */int) ((((arr_1 [i_1 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) : (arr_3 [i_2 - 1] [i_2] [i_2 + 1]))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_2 - 2])) ? (((/* implicit */int) arr_2 [i_0] [i_2])) : (((/* implicit */int) var_11)))))))) : (((/* implicit */int) ((arr_3 [i_2 + 1] [i_2 + 2] [i_1 + 2]) > (arr_3 [i_2 - 1] [i_2 - 2] [i_1 - 1]))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 2; i_3 < 13; i_3 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1] [i_2 + 1] [i_2 + 1] [i_3])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_3])) ? (arr_12 [i_0] [i_2]) : (((/* implicit */int) var_5))))) : (arr_11 [i_1 - 1] [i_1 + 2] [i_1 + 2])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_3] [i_2 - 2] [(_Bool)1])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) (+(arr_6 [i_0] [15U] [3LL] [i_3])))) : ((-(arr_10 [i_0] [i_0] [i_0] [(signed char)11] [i_2] [10])))))));
                        var_22 |= ((/* implicit */int) arr_10 [i_0] [(signed char)7] [i_1] [i_0] [i_2 + 1] [i_2 + 1]);
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_3 [i_0] [i_0] [i_0]) + (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [(signed char)13] [i_1] [i_1] [(signed char)14])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_2 [i_2 - 1] [i_2 - 1])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0]))))) : (((((/* implicit */_Bool) max((arr_11 [i_0] [i_2] [i_3]), (((/* implicit */long long int) arr_0 [i_0]))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */_Bool) 7)) && (((/* implicit */_Bool) var_1)))))))));
                    }
                    for (unsigned int i_4 = 2; i_4 < 13; i_4 += 2) /* same iter space */
                    {
                        arr_15 [12LL] [(unsigned short)5] [i_1] [i_1 + 2] [(unsigned char)9] [(unsigned char)9] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_3))));
                        var_24 += ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_6 [8U] [3ULL] [3ULL] [i_0])) ? (arr_11 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [(unsigned char)12] [i_1 + 1])))))))) ? (((/* implicit */unsigned long long int) min((arr_6 [i_4 + 1] [i_1 - 1] [i_2 + 2] [i_2 - 2]), (arr_6 [i_4 + 2] [i_1 - 1] [i_2] [i_2 - 2])))) : ((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_2] [i_4 + 3])) : (var_7)))))));
                        arr_16 [14U] [14U] [i_2] [i_2] [0U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((4042654937858672571LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)20))))) ? ((~(var_1))) : (((/* implicit */long long int) (-(var_14))))))) ? ((-(((var_5) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_10))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)102)) : (((/* implicit */int) (_Bool)1)))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            arr_20 [8ULL] [i_1 + 1] [i_2] [i_5] [i_5] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (+(arr_10 [(unsigned short)9] [i_1 + 1] [(short)13] [i_2] [i_4 + 2] [(unsigned short)7])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-17)) && (((/* implicit */_Bool) 4042654937858672571LL))))) : ((-(((/* implicit */int) (unsigned char)255)))))) <= (var_2)));
                            var_25 = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */int) var_11)) == (arr_6 [i_5] [i_4 + 1] [i_2 + 1] [i_1 + 1])))), (((((/* implicit */_Bool) arr_6 [i_4 - 2] [i_4 + 2] [i_2 + 2] [i_1 + 2])) ? (((/* implicit */int) arr_5 [i_4] [i_4 - 2] [i_2 - 2] [i_1 - 1])) : (((/* implicit */int) var_11))))));
                        }
                        var_26 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14U)) ? (-3505938787588163487LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)52545)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)65535), (((/* implicit */unsigned short) (signed char)-29))))) ? (var_14) : (((/* implicit */int) arr_7 [(unsigned char)12] [(unsigned char)12] [i_2] [(unsigned char)12])))))));
                    }
                }
            } 
        } 
    } 
    var_27 |= ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_1))) ^ (((/* implicit */long long int) ((var_8) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_15))))))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */int) max((var_13), (((/* implicit */signed char) var_6))))) : (((/* implicit */int) ((-3505938787588163489LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))))));
    var_28 = var_6;
}
