/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95377
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
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) max((var_6), (var_14))))));
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) % (((/* implicit */int) var_6))))) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */int) max((var_11), (((/* implicit */short) var_13))))) | (((/* implicit */int) (_Bool)0))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((unsigned int) ((arr_0 [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1)))))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (short i_2 = 3; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_7 [(short)6] [i_1] [i_2 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -321137494)) ? (((((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))) + (arr_1 [i_0]))) : (-6047775435550414969LL)));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        arr_10 [i_0] [i_3] [i_2] [i_3] = ((/* implicit */long long int) ((unsigned char) min((arr_9 [i_3] [i_3]), ((signed char)-124))));
                        arr_11 [i_3] = ((/* implicit */int) (+(((((((/* implicit */_Bool) (unsigned char)216)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-124))) : (arr_1 [i_3]))) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                        /* LoopSeq 3 */
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            var_18 = ((((/* implicit */int) arr_12 [i_0] [i_0] [i_2 - 3])) >> ((((-(var_10))) - (16780244940713207588ULL))));
                            var_19 |= ((/* implicit */unsigned short) (-(-3222087435205168168LL)));
                            arr_14 [i_0] [i_3] = ((/* implicit */int) (-(((unsigned long long int) (!(((/* implicit */_Bool) var_5)))))));
                        }
                        for (unsigned short i_5 = 1; i_5 < 13; i_5 += 4) 
                        {
                            var_20 &= (-(((/* implicit */int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)57))) <= (1099511627264LL))))));
                            var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55977))) * (var_10)));
                            arr_17 [i_5] [i_3] [i_3] [i_2 - 2] [(unsigned char)13] [i_3] [(unsigned short)4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)206)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (12963419934600708208ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)153))) : ((-(var_8)))))) ? (var_10) : (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_8 [i_3] [10U] [i_5 - 1] [i_5 - 1] [(unsigned char)1])), ((~(((/* implicit */int) arr_8 [i_3] [i_1] [i_2 - 2] [i_3] [i_5 + 2])))))))));
                            arr_18 [i_3] [i_1] [7U] [i_2] [(unsigned char)7] [i_3] [i_5 - 1] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_11)), (14182365754035209059ULL)))) ? (min((((/* implicit */long long int) (unsigned short)31958)), (-6047775435550414969LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3] [i_0] [i_3] [i_2 - 1] [i_5 + 1]))))), (((/* implicit */long long int) var_1))));
                        }
                        for (unsigned long long int i_6 = 2; i_6 < 15; i_6 += 3) 
                        {
                            arr_22 [i_0] [i_0] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_16 [i_2] [i_2 - 3] [i_6 + 1] [i_6 - 1] [i_6]) : (((/* implicit */int) arr_12 [10LL] [i_2 - 3] [i_6 + 1]))))) ? (((/* implicit */long long int) max((arr_16 [i_1] [i_2 - 3] [i_6 + 1] [i_6 - 2] [i_6]), (((/* implicit */int) arr_12 [i_0] [i_2 - 2] [i_6 - 2]))))) : (((var_7) / (((/* implicit */long long int) arr_16 [i_1] [i_2 - 1] [i_6 - 2] [i_6 + 1] [(unsigned char)13]))))));
                            var_22 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(min((3507466413U), (var_8)))))) ? (((/* implicit */int) (((((_Bool)1) ? (-1099511627272LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-10774))))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))))))) : (((((((/* implicit */_Bool) 8U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_19 [i_0] [i_1] [i_6 + 1])))) + (((/* implicit */int) (short)28046))))));
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_13 [i_6 + 1] [i_2 - 1])) && ((!(((/* implicit */_Bool) (unsigned char)119))))))))));
                            arr_23 [i_0] [i_1] [i_3] [i_3] [i_6] = ((/* implicit */int) ((((unsigned long long int) var_5)) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1])) ? (((/* implicit */int) arr_13 [i_0] [i_6 - 2])) : (((/* implicit */int) arr_13 [i_1] [i_1])))))));
                        }
                        var_24 = ((/* implicit */unsigned char) arr_12 [i_1] [i_2] [i_3]);
                        var_25 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((var_8) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [0ULL] [i_1] [i_0] [i_2 - 3])))))), (max((3656350035U), (((/* implicit */unsigned int) (unsigned char)145))))));
                    }
                    for (long long int i_7 = 0; i_7 < 16; i_7 += 4) 
                    {
                        var_26 |= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_19 [i_2 - 3] [i_2 + 1] [i_2 - 3]), (arr_12 [i_2] [i_2 + 1] [i_2 - 3]))))) + (4294967287U)));
                        var_27 += ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) -1002617768)) ? (arr_1 [i_0]) : (arr_1 [i_0]))));
                        arr_27 [i_0] [i_1] [i_2] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((arr_4 [i_7] [i_2 - 1] [i_0]) + (9223372036854775807LL))) << (((((((/* implicit */int) var_0)) + (161))) - (62))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_2] [15LL] [i_7])) ? (var_12) : (4144170103U))))))) ? (2147483635) : (max((arr_6 [i_0] [i_1] [i_2 + 1]), (((((/* implicit */int) (unsigned char)17)) + (((/* implicit */int) (short)(-32767 - 1)))))))));
                        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (short)0))));
                    }
                    arr_28 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (((!(((/* implicit */_Bool) var_14)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [(unsigned short)13] [i_1] [i_2 - 3] [i_2]))) == (var_3)))) : (((/* implicit */int) var_14))))) + (var_7)));
                }
            } 
        } 
        arr_29 [(unsigned char)5] = ((/* implicit */unsigned short) arr_21 [i_0] [i_0] [i_0]);
        arr_30 [i_0] |= ((/* implicit */int) ((3656350022U) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
    }
    /* LoopNest 3 */
    for (unsigned int i_8 = 1; i_8 < 17; i_8 += 4) 
    {
        for (unsigned short i_9 = 2; i_9 < 16; i_9 += 1) 
        {
            for (int i_10 = 3; i_10 < 15; i_10 += 2) 
            {
                {
                    var_29 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_8]))) / (((((/* implicit */_Bool) var_4)) ? (arr_31 [i_8] [(unsigned char)9]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)203))))))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */int) (unsigned short)18630)) : (((/* implicit */int) (unsigned short)53234)))))));
                    arr_38 [i_8] [i_8] = ((/* implicit */unsigned short) ((max((382429515U), (((/* implicit */unsigned int) arr_33 [i_8] [i_9 - 1] [i_9])))) + (min((((/* implicit */unsigned int) arr_37 [i_9] [i_9 + 2] [i_9])), (arr_31 [i_8 - 1] [i_9 - 1])))));
                    arr_39 [i_8] [i_8] = (i_8 % 2 == zero) ? (((/* implicit */long long int) (~(((var_3) >> (((((/* implicit */int) arr_36 [i_8] [1] [i_10 - 2] [i_10])) - (7094)))))))) : (((/* implicit */long long int) (~(((var_3) >> (((((((/* implicit */int) arr_36 [i_8] [1] [i_10 - 2] [i_10])) - (7094))) - (55523))))))));
                    arr_40 [i_8] [i_8] [i_10 - 3] [i_10 + 2] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)192)) <= (((/* implicit */int) arr_33 [i_10] [i_9 - 1] [i_9 + 1])))))));
                    arr_41 [i_8] [i_9 - 1] [i_10 + 1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (unsigned char)7)) ? (4271445472182111796LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    } 
}
