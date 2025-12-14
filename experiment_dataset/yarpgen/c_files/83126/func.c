/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83126
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
    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -1647536180)), (18446744073709551615ULL)))) ? ((-(((/* implicit */int) var_9)))) : (((/* implicit */int) var_6))))) ? (max((((/* implicit */unsigned int) var_9)), (((unsigned int) var_10)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
    var_14 = ((/* implicit */long long int) ((unsigned long long int) max((((/* implicit */unsigned int) var_11)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (672158338U))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((short) (+(((unsigned long long int) var_8)))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (-(max((((/* implicit */long long int) var_5)), (min((arr_0 [9LL]), (((/* implicit */long long int) var_7))))))));
        arr_5 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((short) arr_0 [i_0]))), (((((/* implicit */unsigned long long int) arr_0 [i_0])) + (arr_1 [i_0])))));
        var_15 &= ((/* implicit */unsigned int) ((unsigned short) (unsigned short)1));
    }
    for (long long int i_1 = 2; i_1 < 8; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                {
                    arr_16 [i_3] [i_2] [i_2] [i_1] = ((/* implicit */short) ((int) 3622808957U));
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) arr_6 [i_3])))) ^ ((-((+(((/* implicit */int) var_2)))))))))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 2; i_5 < 9; i_5 += 3) 
                        {
                            {
                                arr_23 [i_1] [i_2] [4] [i_4] [0LL] &= ((/* implicit */int) ((((/* implicit */unsigned int) ((int) arr_20 [i_1 - 2] [6ULL] [i_3] [i_5 + 2] [i_2] [i_1 + 1]))) <= ((-(arr_20 [i_1 + 2] [i_1 + 2] [i_3] [i_5 - 1] [i_5 + 2] [i_2])))));
                                var_17 = ((/* implicit */unsigned short) var_7);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_6 = 3; i_6 < 8; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [(unsigned char)13])), (9571153484668025572ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((unsigned long long int) arr_2 [i_1]))))))));
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) arr_11 [i_7]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_20 -= ((/* implicit */short) var_4);
    }
    /* vectorizable */
    for (unsigned char i_8 = 0; i_8 < 20; i_8 += 1) /* same iter space */
    {
        var_21 = (+(arr_1 [i_8]));
        var_22 = ((/* implicit */long long int) (~(((((/* implicit */int) arr_32 [i_8])) | (((/* implicit */int) var_11))))));
        /* LoopNest 3 */
        for (unsigned int i_9 = 0; i_9 < 20; i_9 += 2) 
        {
            for (short i_10 = 0; i_10 < 20; i_10 += 1) 
            {
                for (unsigned short i_11 = 0; i_11 < 20; i_11 += 1) 
                {
                    {
                        var_23 = ((/* implicit */short) min((var_23), (var_6)));
                        arr_41 [i_8] [i_8] [i_9] [i_8] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))));
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_11])) & (((/* implicit */int) arr_2 [i_8]))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((unsigned int) (+(((/* implicit */int) arr_38 [i_8] [(short)3] [i_8]))))))));
    }
    for (unsigned char i_12 = 0; i_12 < 20; i_12 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */short) (~((-(var_7)))));
        var_27 = ((/* implicit */unsigned short) 2147483647);
    }
}
