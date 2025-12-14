/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61653
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
    var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (max((var_16), (((/* implicit */int) (short)5219)))) : (((/* implicit */int) (unsigned char)214)))))));
    var_18 -= ((/* implicit */unsigned short) var_9);
    var_19 = ((/* implicit */long long int) var_12);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) arr_3 [i_2 + 1] [i_2 - 1] [i_2 + 1]))));
                    arr_8 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) -7028315341559103965LL);
                    var_21 = ((/* implicit */int) max((var_21), ((-(((/* implicit */int) var_11))))));
                    arr_9 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? ((~(2219848546U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */signed char) (unsigned char)174);
    }
    for (unsigned long long int i_3 = 3; i_3 < 11; i_3 += 2) 
    {
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) 
            {
                {
                    arr_17 [i_4] [i_3] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)21897)), ((unsigned short)17884))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        for (int i_7 = 0; i_7 < 13; i_7 += 1) 
                        {
                            {
                                var_22 -= ((/* implicit */short) (signed char)-48);
                                arr_23 [i_3] [i_3] [i_3] [i_3] [i_3 + 2] = ((/* implicit */unsigned int) var_14);
                                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(71827920)))) ? ((~(((/* implicit */int) arr_19 [(short)3] [i_3] [(short)3])))) : (((/* implicit */int) var_6))));
                                var_24 -= ((/* implicit */unsigned short) var_8);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_8 = 4; i_8 < 10; i_8 += 2) 
                    {
                        arr_26 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_8 - 1] [i_3] [10ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_5]))) : (2219848562U)));
                        var_25 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) 131990927))));
                        var_26 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_24 [8ULL] [i_3] [i_3] [i_3 - 2] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2219848562U)))))) : (min((((/* implicit */unsigned int) (short)-5338)), (2075118734U))))), (((/* implicit */unsigned int) var_4))));
                        arr_27 [(unsigned short)1] [i_5] [i_3] [8U] [i_3] = ((/* implicit */long long int) var_1);
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 13; i_9 += 3) 
                    {
                        for (signed char i_10 = 0; i_10 < 13; i_10 += 4) 
                        {
                            {
                                var_27 *= ((/* implicit */unsigned long long int) var_3);
                                var_28 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) -1078384618)) ? (var_13) : (((/* implicit */int) arr_30 [i_3] [i_9] [i_10] [i_9]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_3] [i_3] [i_3 + 1] [i_3]))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3] [i_3]))) : (2219848562U)))), (var_15)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned char) var_14);
        var_30 = ((/* implicit */unsigned int) var_10);
    }
}
