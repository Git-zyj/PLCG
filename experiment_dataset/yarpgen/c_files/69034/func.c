/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69034
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
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_7 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 3588481973U)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0]))))) : (min((((/* implicit */unsigned int) var_2)), (706485322U)))))) ? ((~(((int) (unsigned char)17)))) : ((+(((((/* implicit */_Bool) 1274115746)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_2])) : (((/* implicit */int) arr_0 [i_0]))))))));
                    var_10 *= ((/* implicit */unsigned short) ((short) ((((/* implicit */int) arr_0 [i_0 - 1])) / (((/* implicit */int) var_9)))));
                }
                for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned short) arr_9 [(signed char)14] [i_0] [i_1 - 1] [(signed char)14])), (arr_6 [i_0] [i_0] [i_0]))))))) ? (((((/* implicit */int) ((-1095025428197475933LL) > (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 2])))))) >> (((max((((/* implicit */unsigned long long int) arr_1 [i_0])), (14220372386341958808ULL))) - (14220372386341958790ULL))))) : (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (_Bool)1)) : (2147483647)))));
                    arr_10 [i_3] [i_0 + 1] = ((/* implicit */unsigned int) ((signed char) (~(((/* implicit */int) arr_1 [i_0 + 1])))));
                    arr_11 [i_0 - 1] [i_0] [i_1] [i_3] = arr_8 [1U] [i_0];
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    for (unsigned int i_5 = 2; i_5 < 14; i_5 += 2) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) var_8))));
                                var_13 = ((/* implicit */unsigned short) 4294967295U);
                            }
                        } 
                    } 
                } 
                var_14 &= ((/* implicit */long long int) ((((/* implicit */unsigned int) (-(var_5)))) <= (1262884173U)));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_8 = 3; i_8 < 10; i_8 += 2) 
        {
            var_15 = ((/* implicit */unsigned long long int) arr_9 [i_8 - 1] [10LL] [i_7] [i_7]);
            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) arr_20 [i_7]))));
            var_17 = ((/* implicit */_Bool) ((((/* implicit */int) ((var_6) < (arr_13 [i_8] [i_8] [i_7])))) << (((min((((/* implicit */unsigned int) arr_19 [i_8 + 2])), (arr_22 [i_7] [i_8 + 2]))) - (3002544260U)))));
            var_18 = ((/* implicit */long long int) ((unsigned short) (+(((long long int) (_Bool)1)))));
            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (-(((((/* implicit */int) arr_18 [i_7] [i_8 - 2] [i_8 - 2] [i_7] [i_8 - 3])) + (((/* implicit */int) var_7)))))))));
        }
        for (unsigned short i_9 = 0; i_9 < 12; i_9 += 3) 
        {
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(7U)))) ? (min((arr_25 [i_7] [i_9]), (((/* implicit */long long int) var_1)))) : (((((/* implicit */_Bool) arr_25 [i_7] [i_9])) ? (arr_25 [i_9] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3876)))))));
            /* LoopNest 2 */
            for (long long int i_10 = 0; i_10 < 12; i_10 += 2) 
            {
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_7] [i_7] [i_10] [i_11])) + (((/* implicit */int) (unsigned short)59343))))) ? ((+(arr_28 [i_10] [i_10] [i_7] [i_7]))) : (((/* implicit */long long int) arr_19 [i_9])))), (((/* implicit */long long int) arr_29 [i_11 - 1] [i_10] [i_9] [i_7]))));
                        var_22 += ((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(arr_26 [i_7])))) / ((~(arr_27 [i_10] [0ULL] [i_11 - 1])))));
                        arr_32 [9ULL] [(short)5] [(short)5] [i_11] [i_11] [(short)5] = ((/* implicit */unsigned short) arr_24 [i_7]);
                        arr_33 [(_Bool)1] [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)59343))));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_7] [i_9] [(short)4] [(short)4])) * (((/* implicit */int) (!(((/* implicit */_Bool) 8682866219605595207LL)))))))) ? ((~(((/* implicit */int) ((unsigned short) (unsigned short)12781))))) : (((((/* implicit */_Bool) ((((-5470300098510568120LL) + (9223372036854775807LL))) << (((((/* implicit */int) var_7)) - (28401)))))) ? ((-(((/* implicit */int) (unsigned short)5799)))) : ((~(((/* implicit */int) var_7))))))));
                    }
                } 
            } 
        }
        arr_34 [i_7] = ((/* implicit */int) arr_1 [i_7]);
    }
}
