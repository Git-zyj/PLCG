/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90297
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
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 16; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */short) (signed char)1)), ((short)24256))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) min(((-(((/* implicit */int) arr_3 [i_4 + 1])))), (((/* implicit */int) var_6))));
                                arr_11 [i_3] [(short)16] [i_3] &= ((/* implicit */int) 8468940698937521853LL);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) var_14);
    var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_2))));
    var_21 = max((var_8), (((/* implicit */long long int) (!(((/* implicit */_Bool) 5131807003568302116ULL))))));
    /* LoopSeq 3 */
    for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        var_22 ^= ((/* implicit */unsigned int) max((154719589411079724ULL), (((/* implicit */unsigned long long int) (~(min((23U), (((/* implicit */unsigned int) var_5)))))))));
        var_23 = min((((var_14) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_15))))) : (((unsigned long long int) 3385664148U)))), (((/* implicit */unsigned long long int) (unsigned short)0)));
        var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))))) <= (((((/* implicit */_Bool) arr_12 [i_5])) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 15; i_6 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_7 = 1; i_7 < 16; i_7 += 3) 
        {
            var_25 = ((((/* implicit */_Bool) var_9)) ? (-7006785722083803581LL) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_6]))));
            var_26 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_17 [i_6]))));
            arr_20 [i_6] [(_Bool)1] = ((/* implicit */long long int) 5131807003568302087ULL);
            var_27 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 2092756581)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_6)))) <= (((/* implicit */int) arr_18 [i_6 + 1] [i_6] [i_7]))));
        }
        /* LoopNest 2 */
        for (long long int i_8 = 2; i_8 < 16; i_8 += 2) 
        {
            for (int i_9 = 1; i_9 < 16; i_9 += 3) 
            {
                {
                    arr_27 [i_9] [i_6] = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)-1))));
                    var_28 = ((/* implicit */unsigned long long int) var_15);
                    var_29 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_16)) - (((((/* implicit */_Bool) arr_21 [i_6] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32754))) : (18446744073709551596ULL)))));
                }
            } 
        } 
        arr_28 [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) > (0LL)));
        var_30 -= ((/* implicit */unsigned short) (-((+(((/* implicit */int) (unsigned short)59488))))));
    }
    for (int i_10 = 1; i_10 < 15; i_10 += 4) /* same iter space */
    {
        var_31 &= ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_24 [i_10 + 1] [(_Bool)1] [i_10])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_24 [i_10 - 1] [(unsigned short)0] [12U]) > (arr_24 [i_10 + 2] [14ULL] [i_10]))))) : (((arr_24 [i_10 + 1] [(short)10] [i_10]) - (arr_24 [i_10 + 2] [6ULL] [i_10])))));
        /* LoopNest 3 */
        for (unsigned short i_11 = 0; i_11 < 18; i_11 += 2) 
        {
            for (unsigned short i_12 = 1; i_12 < 16; i_12 += 2) 
            {
                for (unsigned int i_13 = 1; i_13 < 16; i_13 += 3) 
                {
                    {
                        var_32 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_2)) << (((((/* implicit */int) var_5)) - (35022)))))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)-32766)) | (((/* implicit */int) var_14))))) : (min((((/* implicit */long long int) arr_39 [i_10] [i_10] [(signed char)0])), (var_8)))))));
                        arr_42 [i_10] [i_11] [i_10] [i_12] [17U] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_35 [i_10] [i_10] [i_13]), (var_7))))) > (5131807003568302116ULL))));
                    }
                } 
            } 
        } 
        var_33 = ((/* implicit */signed char) var_13);
        arr_43 [i_10] = ((/* implicit */unsigned short) var_13);
        var_34 = ((/* implicit */long long int) ((unsigned int) (short)-32741));
    }
}
