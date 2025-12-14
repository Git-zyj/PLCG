/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56103
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
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((signed char) ((unsigned long long int) arr_0 [i_0])))), (((unsigned long long int) max((((/* implicit */int) (_Bool)1)), (var_7))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            arr_5 [i_1] |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [i_1] [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_11)))) >> ((((~(3561529879U))) - (733437393U)))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (long long int i_3 = 2; i_3 < 21; i_3 += 4) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_1] [i_3] [i_3] |= ((/* implicit */short) arr_6 [i_0 + 1]);
                        var_12 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned char) 2753239019U)))));
                        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) var_4))));
                        arr_11 [i_3 + 1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) 2147483647));
                    }
                } 
            } 
            arr_12 [i_0] = ((/* implicit */unsigned short) var_4);
        }
        arr_13 [8] [8] &= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) 6328499845815439710ULL))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)13))))), (14111106559001092620ULL)));
    }
    /* LoopSeq 1 */
    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        var_14 += ((/* implicit */short) ((((((((/* implicit */_Bool) (short)-4808)) ? (((/* implicit */unsigned long long int) 1695254435U)) : (10ULL))) >> (((max((var_3), (arr_3 [i_4] [i_4] [i_4]))) - (13628933209351773675ULL))))) >> (((((min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) ((((/* implicit */_Bool) -2730974228167921757LL)) ? (((/* implicit */int) (short)-6298)) : (((/* implicit */int) (_Bool)1))))))) - (-9223372036854775752LL))) + (80LL)))));
        arr_16 [i_4] = ((/* implicit */signed char) ((long long int) arr_7 [i_4]));
    }
    /* LoopSeq 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        arr_20 [(unsigned char)0] &= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_5] [i_5] [i_5]))) : (arr_7 [(_Bool)1])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) var_7)) : (var_10)))) ? ((-(2251662374731776ULL))) : (min((arr_9 [i_5] [6U] [6U] [i_5]), (((/* implicit */unsigned long long int) var_5))))))));
        arr_21 [i_5] = ((/* implicit */_Bool) max(((+(min((((/* implicit */unsigned long long int) arr_8 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])), (var_1))))), (((/* implicit */unsigned long long int) min((arr_17 [15]), (((/* implicit */int) arr_0 [i_5])))))));
        arr_22 [i_5] = ((/* implicit */short) ((((long long int) (signed char)93)) << (((var_4) - (16475387924889273217ULL)))));
        /* LoopNest 2 */
        for (long long int i_6 = 3; i_6 < 16; i_6 += 3) 
        {
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_28 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_5] [i_7])) ? (arr_23 [i_5] [i_6] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (max((((/* implicit */unsigned long long int) var_6)), (var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (568629344U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)31109)) ? (((/* implicit */int) ((unsigned char) 2099083195U))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) > (1302924901U))))))) : (((min((arr_3 [i_5] [i_6] [i_7]), (((/* implicit */unsigned long long int) var_7)))) * (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_27 [(unsigned short)0])), (arr_24 [i_6] [i_5]))))))));
                    arr_29 [i_5] = ((/* implicit */unsigned int) (unsigned char)255);
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) min((var_15), (min((((((/* implicit */_Bool) min((-9223372036854775786LL), (((/* implicit */long long int) arr_7 [i_9]))))) ? (max((var_4), (((/* implicit */unsigned long long int) arr_1 [i_9])))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)2)), (1321283236U)))))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) 76640021)) : (4181437826617558296ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) : ((+(arr_9 [i_5] [i_5] [i_9] [i_9])))))))));
                                arr_36 [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) ^ (var_10)));
                                arr_37 [i_5] [i_6] [i_7] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((int) arr_34 [i_8] [i_5] [6U] [i_5]))) <= (min((((unsigned long long int) var_11)), (((/* implicit */unsigned long long int) (~(var_8))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_11 = 0; i_11 < 17; i_11 += 2) 
        {
            for (int i_12 = 0; i_12 < 17; i_12 += 3) 
            {
                {
                    arr_46 [i_10] [i_12] [i_10] [i_10] = ((/* implicit */int) var_11);
                    var_16 = min((((/* implicit */unsigned long long int) (((!(arr_33 [i_11]))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) (short)-32756)) ? (4294967289U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)59688)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)28672))) : (67108864U)))), (min((var_1), (var_9))))));
                }
            } 
        } 
        arr_47 [i_10] = ((/* implicit */short) (+(((((/* implicit */_Bool) ((arr_27 [i_10]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (var_10)))) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_23 [i_10] [i_10] [i_10]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8201010881884943185ULL)) ? (((/* implicit */int) var_5)) : (arr_34 [i_10] [i_10] [i_10] [i_10]))))))));
        var_17 = ((/* implicit */unsigned short) max((var_17), (arr_4 [i_10] [i_10] [i_10])));
    }
}
