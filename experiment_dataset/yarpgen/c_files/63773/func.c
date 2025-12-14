/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63773
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) -1981888736);
        var_20 -= ((/* implicit */signed char) (~(1863496988U)));
    }
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                {
                    arr_8 [1LL] [i_3] [i_3] = ((/* implicit */short) arr_4 [i_1]);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
                        {
                            {
                                arr_14 [i_3] [i_3] = ((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) min((var_17), (arr_6 [i_3] [i_3] [3U]))))) : (3676999326175429594LL))) > (((/* implicit */long long int) (-(((/* implicit */int) arr_9 [i_1] [i_1])))))));
                                arr_15 [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */short) var_14)), (arr_6 [i_3] [i_3] [i_4]))))));
                            }
                        } 
                    } 
                    arr_16 [i_3] [i_3] [i_3] [13U] = ((/* implicit */short) ((1981888735) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) 134217728U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_7 [i_1] [i_2] [i_3]))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_2 [i_3])))) - (54)))));
                }
            } 
        } 
        var_21 = ((/* implicit */long long int) arr_9 [i_1] [i_1]);
        arr_17 [(unsigned short)15] [i_1] = ((/* implicit */int) (-(max(((+(var_12))), (((/* implicit */unsigned long long int) arr_11 [(unsigned short)2] [(unsigned short)10] [i_1] [i_1] [i_1]))))));
        arr_18 [i_1] = ((max((max((2647240373845897465LL), (((/* implicit */long long int) 134217704U)))), (((/* implicit */long long int) ((((/* implicit */int) var_14)) | (((/* implicit */int) (signed char)-102))))))) != (((/* implicit */long long int) max((-1337396120), (((/* implicit */int) min((var_16), (var_18))))))));
        var_22 = ((/* implicit */signed char) max((arr_3 [i_1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (-438598733) : (((/* implicit */int) (unsigned char)3)))))));
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 19; i_6 += 3) 
    {
        arr_21 [8LL] = ((/* implicit */unsigned short) 4160749569U);
        var_23 = ((/* implicit */long long int) arr_1 [i_6] [i_6]);
        var_24 = ((/* implicit */short) 6795910910084277871LL);
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 2) 
    {
        arr_24 [i_7] [(signed char)13] = ((/* implicit */unsigned long long int) ((arr_20 [i_7]) ? (((/* implicit */int) arr_1 [i_7] [i_7])) : (((/* implicit */int) var_6))));
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (3696034992U) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_2 [i_7]))))));
        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) (((-9223372036854775807LL - 1LL)) == (((/* implicit */long long int) ((/* implicit */int) arr_2 [(unsigned char)15]))))))));
        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_7] [i_7])) ? (1863496990U) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))));
    }
    var_28 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */unsigned int) 438598734)) : (2431470311U)))) ? (((/* implicit */int) (unsigned char)163)) : (((/* implicit */int) (_Bool)1))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) * (14377105392590168317ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
    var_29 = var_6;
    var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) var_11))));
}
