/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98500
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */int) (signed char)-28)) - (((/* implicit */int) arr_6 [i_0] [i_0])))), (((((/* implicit */int) arr_9 [i_0])) - (((/* implicit */int) (short)419))))));
                    arr_12 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))), (((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (9501355548456991005ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28672)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_14 ^= ((/* implicit */signed char) min((((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_10 [i_0] [i_2] [i_3] [i_4])))) >> (((((/* implicit */int) arr_15 [i_4] [i_1] [i_2] [i_3])) - (174)))))), ((~(-5993552683840754213LL)))));
                                var_15 = ((/* implicit */unsigned long long int) arr_15 [i_4] [i_3] [i_2] [i_1]);
                                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_4]))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_0] = ((/* implicit */signed char) var_1);
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (~(((var_3) | (((arr_2 [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2] [i_1] [i_0]))))))))))));
                }
            } 
        } 
        var_18 = ((/* implicit */signed char) arr_8 [i_0] [i_0] [i_0]);
    }
    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            for (short i_7 = 0; i_7 < 18; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 2; i_8 < 16; i_8 += 1) 
                    {
                        for (signed char i_9 = 0; i_9 < 18; i_9 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) var_2);
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) ((unsigned char) arr_33 [i_5] [i_6] [i_9] [i_6] [i_9]))), ((~(((/* implicit */int) var_8))))))) ? (((((arr_30 [i_5] [i_5] [i_5] [i_5]) - (((/* implicit */long long int) ((/* implicit */int) var_11))))) - (((/* implicit */long long int) (+(2073396677)))))) : (((/* implicit */long long int) max((((((/* implicit */int) arr_22 [i_8 - 2])) % (((/* implicit */int) var_8)))), (min((arr_25 [i_5] [i_5] [i_5] [i_5]), (((/* implicit */int) var_13)))))))));
                                arr_36 [i_5] [i_6] = ((/* implicit */signed char) min((((arr_33 [i_8 + 1] [i_8] [i_8 - 1] [i_8] [i_8]) ^ (arr_33 [i_8 - 2] [i_8] [i_8 - 2] [i_8] [i_8]))), (((/* implicit */int) (signed char)75))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) max((arr_19 [i_5] [i_5]), (((/* implicit */unsigned short) arr_22 [i_7]))))), ((-(((/* implicit */int) var_4))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_1), (((/* implicit */short) var_13))))) ? (((/* implicit */int) var_0)) : ((+(((/* implicit */int) (signed char)96))))))) : ((-(((((/* implicit */_Bool) arr_19 [i_5] [i_6])) ? (4222033659U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_5] [i_5]))))))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_10 = 3; i_10 < 16; i_10 += 4) 
        {
            for (signed char i_11 = 3; i_11 < 14; i_11 += 1) 
            {
                {
                    var_22 |= ((/* implicit */int) arr_38 [i_5] [i_10 + 2] [i_11 + 4]);
                    var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)185)) > (((/* implicit */int) arr_22 [i_11]))))) % (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-10716))))))) <= (max((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */_Bool) arr_40 [i_11] [i_10] [i_10] [i_5])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
                }
            } 
        } 
        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) var_13))));
    }
    /* vectorizable */
    for (unsigned int i_12 = 3; i_12 < 15; i_12 += 4) 
    {
        var_25 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_12 - 3] [i_12 + 3])) ? (((/* implicit */int) arr_29 [i_12 + 2] [i_12 + 3])) : (((/* implicit */int) arr_19 [i_12] [i_12 + 3]))));
        arr_45 [i_12] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_29 [i_12] [i_12 - 1])) : (((/* implicit */int) var_11)))) ^ (((/* implicit */int) arr_24 [i_12] [i_12] [i_12]))));
    }
    var_26 = ((4719000490174430059ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)87))));
}
