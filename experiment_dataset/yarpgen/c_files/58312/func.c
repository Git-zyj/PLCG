/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58312
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            arr_6 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65526)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65531)))));
            var_11 *= (_Bool)1;
        }
        for (unsigned int i_2 = 1; i_2 < 14; i_2 += 1) 
        {
            var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_6))))) : (13625368068805990840ULL)))))));
            var_13 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((arr_2 [i_2 + 2]) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((/* implicit */long long int) ((/* implicit */int) var_5))) + (1124101170293788712LL))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_2 + 2] [i_2 + 1])))))));
            arr_10 [i_2] [13U] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((unsigned short)19477), (((/* implicit */unsigned short) ((var_1) <= (var_1))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) 3)), (var_0)))) ? ((-(((/* implicit */int) var_6)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [(short)5]))) <= (9223372036854775807LL))))))) : (((((/* implicit */_Bool) ((9223372036854775807LL) - (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */_Bool) -2631644750971860836LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-97))) : (18155135830207428744ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22805)))))));
            arr_11 [i_2] [i_0] [(short)4] = ((/* implicit */unsigned char) var_7);
        }
        for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            /* LoopSeq 1 */
            for (signed char i_4 = 2; i_4 < 14; i_4 += 2) 
            {
                arr_17 [i_3] [i_0] = ((/* implicit */unsigned short) max((16769024U), (((/* implicit */unsigned int) (signed char)-20))));
                var_14 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) min((arr_16 [i_3] [i_4]), (((/* implicit */int) var_9)))))))) % (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)15)) <= (((/* implicit */int) (_Bool)0))))) <= (((/* implicit */int) (short)6760)))))));
            }
            var_15 = ((/* implicit */short) ((((((134217600U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18))))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_3]))))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((short) (unsigned char)1))))))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            for (unsigned short i_6 = 0; i_6 < 16; i_6 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 3; i_7 < 14; i_7 += 1) 
                    {
                        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)10089))))) ? (((/* implicit */int) (unsigned short)46889)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1)))))));
                        var_17 = ((/* implicit */unsigned short) (short)10089);
                    }
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_18 ^= ((/* implicit */unsigned int) var_9);
                        var_19 *= ((/* implicit */_Bool) ((3042780282285569700LL) >> (((-8707479349222727796LL) + (8707479349222727812LL)))));
                        var_20 ^= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)254))) | (var_1)));
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)6753)) ? (((/* implicit */int) (signed char)50)) : (((/* implicit */int) var_6)))))));
                        arr_29 [i_0] [i_5] [i_6] [14] = arr_25 [i_8] [i_6] [i_5] [i_0] [i_0] [i_0];
                    }
                    arr_30 [i_6] [i_0] [i_6] = ((/* implicit */unsigned int) (((+(-8707479349222727796LL))) >= (((/* implicit */long long int) (-(((/* implicit */int) (short)6733)))))));
                    arr_31 [i_0] [i_5] [i_5] [i_6] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)52122)), (-844183397291924959LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 9223372036854775807LL)))) : (120ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 4294967284U)) / (287667426198290432LL))))));
                    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (~(-9223372036854775795LL))))));
                }
            } 
        } 
        arr_32 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) (short)-6760)) & (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) (short)709)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (8707479349222727795LL)))));
    }
    var_23 = ((/* implicit */int) (((!(((((/* implicit */_Bool) (unsigned char)3)) || (((/* implicit */_Bool) var_6)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (4294967291U)));
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (var_0) : ((-(((-9223372036854775795LL) ^ (-7202972353402718430LL)))))));
    /* LoopSeq 1 */
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
    {
        var_25 = ((/* implicit */unsigned long long int) min(((~(((((/* implicit */_Bool) -9223372036854775776LL)) ? (arr_33 [i_9]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))), (9223372036854775807LL)));
        arr_35 [i_9 - 1] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (unsigned char)126)) ? (-9223372036854775795LL) : (((-8707479349222727796LL) / (((/* implicit */long long int) ((/* implicit */int) var_8))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((-5116013092791152351LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((((/* implicit */_Bool) -9223372036854775785LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2289843390U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
        var_26 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
        /* LoopNest 2 */
        for (unsigned long long int i_10 = 3; i_10 < 14; i_10 += 4) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    arr_41 [i_11] [i_10] [i_10] [i_9 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_34 [i_11])) ? (max((((/* implicit */long long int) (signed char)18)), ((+(-7202972353402718442LL))))) : (((/* implicit */long long int) ((((/* implicit */int) var_8)) >> (((arr_38 [i_9 - 1]) - (5828787245697942959ULL))))))));
                    var_27 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? (((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) % (17049113338493494559ULL)))) : ((+(var_7)))));
                    arr_42 [i_9] [i_9] [i_10] = ((/* implicit */unsigned long long int) var_4);
                    arr_43 [i_9 - 1] [i_10 + 2] [i_9] [4] &= ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) arr_33 [i_11])) / (18446744073709551615ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_6)), ((unsigned short)65529)))))));
                }
            } 
        } 
    }
}
