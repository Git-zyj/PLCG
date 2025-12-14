/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8011
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
    var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((((/* implicit */int) var_0)), (((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) (short)5842)) : (((/* implicit */int) var_0))))))), (min((((/* implicit */long long int) (signed char)0)), (var_13)))));
    var_18 &= ((/* implicit */signed char) (unsigned char)224);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((-8053800114343890823LL) & (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (+(((min((2503677582U), (((/* implicit */unsigned int) 0)))) - (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
        arr_4 [i_0] &= ((/* implicit */unsigned long long int) (_Bool)1);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 3; i_1 < 12; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                {
                    arr_14 [i_1] [3] [i_3] [3] |= ((/* implicit */signed char) arr_13 [i_1] [i_2]);
                    var_20 = ((/* implicit */unsigned char) (((+(((/* implicit */int) var_2)))) + (((/* implicit */int) var_5))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_4 = 4; i_4 < 13; i_4 += 4) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 15; i_7 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_1 - 3] [i_1 - 3] [i_1] [i_4] [i_4 - 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)14455)))))));
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_1] [i_1]))) != (var_12))))));
                                var_23 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 884461558U)) ? (1836855217U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_1 - 2] [i_5]))))) >> (((((arr_19 [i_7]) ^ (((/* implicit */int) (short)-5863)))) + (2005411453)))));
                            }
                        } 
                    } 
                    var_24 = 743526124721471372LL;
                    var_25 = ((/* implicit */unsigned int) (unsigned char)22);
                }
            } 
        } 
    }
    var_26 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((min((var_6), (((/* implicit */long long int) (unsigned short)55828)))) <= (((/* implicit */long long int) (+(((/* implicit */int) var_11))))))))));
    /* LoopNest 3 */
    for (unsigned char i_8 = 0; i_8 < 19; i_8 += 1) 
    {
        for (signed char i_9 = 2; i_9 < 15; i_9 += 4) 
        {
            for (int i_10 = 2; i_10 < 17; i_10 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 19; i_11 += 1) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                var_27 ^= ((/* implicit */int) max((((/* implicit */unsigned short) arr_32 [i_8] [i_9 + 2] [i_10] [i_10] [i_9] [i_10 - 2])), ((unsigned short)33075)));
                                arr_35 [i_8] [i_9 + 3] [i_9] [i_11] [i_12] &= ((/* implicit */long long int) min((var_4), (((/* implicit */unsigned long long int) (signed char)-27))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */short) (~(var_1)));
                    var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)31000)), (8053800114343890830LL)))) ? (var_3) : (((/* implicit */int) (signed char)-121))));
                }
            } 
        } 
    } 
}
