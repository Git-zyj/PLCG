/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7862
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                for (unsigned int i_3 = 3; i_3 < 12; i_3 += 3) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) (((~(arr_6 [i_0] [i_0] [i_1] [i_0]))) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_7 [i_1 + 1] [3] [i_1] [i_3 - 1]))))));
                        arr_10 [i_0] &= ((/* implicit */unsigned char) (_Bool)1);
                        var_19 = ((/* implicit */signed char) (+(min((min((arr_7 [i_0] [i_1 - 1] [i_1] [(unsigned short)13]), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_2] [i_3])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [(short)12])) ? (arr_3 [i_3] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2] [i_2]))))))))));
                        arr_11 [i_1] = min((((((((/* implicit */_Bool) var_4)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) ^ (var_12))), (((/* implicit */long long int) 0U)));
                    }
                } 
            } 
        } 
        arr_12 [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) var_14))));
        var_20 = ((/* implicit */long long int) min((max((min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])), (arr_4 [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_12)))))), (((/* implicit */unsigned long long int) (~(arr_3 [i_0] [i_0]))))));
        var_21 = ((/* implicit */signed char) ((((((arr_4 [i_0] [i_0]) / (((/* implicit */unsigned long long int) arr_2 [i_0])))) == (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-26))) : (var_15))))) ? (((/* implicit */long long int) 811073497)) : (((long long int) var_11))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 2; i_4 < 12; i_4 += 4) 
    {
        var_22 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [(unsigned char)4])) ? (arr_13 [i_4]) : (arr_13 [9ULL])));
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            for (unsigned char i_6 = 3; i_6 < 14; i_6 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 2; i_7 < 13; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 1; i_8 < 14; i_8 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) <= (((int) arr_23 [7U] [7U] [(_Bool)1])))))));
                                arr_28 [i_4] [i_5] [i_6] [i_7] [i_8] = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_20 [i_4 - 2] [i_4 - 2] [i_4] [i_4])) ? (((/* implicit */unsigned int) -811073524)) : (arr_24 [i_7] [i_5]))));
                                var_24 = ((/* implicit */unsigned char) (~(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65527))) & (1408696742031798460LL)))));
                                var_25 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) var_10)) : (var_4))) / (((/* implicit */long long int) 3708158103U))));
                                arr_29 [i_4] [i_5] [(_Bool)1] [i_7 + 2] [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-52))) : (var_1)))) ? (((arr_22 [i_8 + 1] [i_6] [(unsigned char)13] [i_4]) / (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9)))))));
                            }
                        } 
                    } 
                    arr_30 [(unsigned char)2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_4 - 1] [i_4 + 2] [i_4 - 1])) ? (((/* implicit */long long int) var_17)) : (var_3)));
                    arr_31 [i_6] [i_6] [i_5] [i_4] = ((/* implicit */long long int) ((unsigned char) arr_18 [i_4 + 3] [i_6 + 1] [i_6 + 1]));
                    var_26 = ((/* implicit */_Bool) ((long long int) -811073523));
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((long long int) arr_14 [i_4 - 2] [i_4])))));
        arr_32 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (unsigned char)116))) ? (((unsigned long long int) (signed char)120)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4 - 2] [i_4 + 2] [i_4])))));
    }
    /* LoopNest 3 */
    for (unsigned char i_9 = 2; i_9 < 15; i_9 += 4) 
    {
        for (signed char i_10 = 0; i_10 < 19; i_10 += 4) 
        {
            for (short i_11 = 1; i_11 < 18; i_11 += 2) 
            {
                {
                    var_28 -= ((/* implicit */unsigned int) ((signed char) (short)63));
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_11 + 1])) ? (arr_35 [i_11 - 1]) : (arr_35 [i_11 - 1])))) ? (15755500516140909165ULL) : (((/* implicit */unsigned long long int) var_3))));
                    var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) max((((((/* implicit */_Bool) ((var_4) | (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_11])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : (arr_35 [i_11]))), (((/* implicit */unsigned int) ((var_12) <= (((/* implicit */long long int) arr_35 [i_9]))))))))));
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned short) var_6);
}
