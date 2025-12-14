/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6502
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
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((max((((/* implicit */long long int) ((signed char) var_7))), (var_0))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) 14077849606386537623ULL)) ? (((/* implicit */int) (unsigned short)10268)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_13) : (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)60))) : (var_16))))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) var_15);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) max((var_18), (((/* implicit */unsigned long long int) -172504499657165189LL)))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? ((((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) (short)21345)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_8 [i_0] [(_Bool)1] [i_0] [i_0] [(_Bool)1]))))) : (((((/* implicit */_Bool) 7773846154706202158LL)) ? (((((/* implicit */_Bool) arr_1 [i_3])) ? (var_3) : (var_0))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0])))))));
                        var_22 = ((/* implicit */short) var_2);
                    }
                }
            } 
        } 
        arr_9 [i_0] = ((((/* implicit */_Bool) var_2)) ? (min((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((((/* implicit */_Bool) -320237579)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))) : (var_9))))) : (min((var_3), (((/* implicit */long long int) (-(((/* implicit */int) var_14))))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        arr_12 [i_4] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (signed char)-125)) ? ((~(((/* implicit */int) arr_11 [i_4] [(short)12])))) : (((/* implicit */int) ((signed char) var_15)))))));
        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) arr_8 [i_4] [i_4] [i_4] [i_4] [(short)5]))));
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 22; i_5 += 3) 
    {
        arr_15 [i_5] = arr_14 [i_5];
        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_5)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)24576)) : (((/* implicit */int) (short)-28833)))) : (((/* implicit */int) arr_14 [i_5]))));
        /* LoopSeq 3 */
        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) /* same iter space */
        {
            arr_19 [i_5] = ((/* implicit */short) (unsigned short)18);
            arr_20 [i_5] = (i_5 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */int) arr_16 [i_5] [i_5] [i_5])) >> (((var_5) - (14152138968017693164ULL)))))) : (((/* implicit */unsigned short) ((((((/* implicit */int) arr_16 [i_5] [i_5] [i_5])) + (2147483647))) >> (((var_5) - (14152138968017693164ULL))))));
        }
        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) /* same iter space */
        {
            arr_24 [i_5] = ((/* implicit */unsigned short) ((arr_14 [i_7]) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_16 [i_5] [i_7] [i_5]))))) : (((((/* implicit */_Bool) (signed char)-27)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (18446744073709551610ULL)))));
            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_22 [i_5])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_16 [i_7] [i_7] [i_7]))))))));
        }
        for (signed char i_8 = 0; i_8 < 22; i_8 += 4) 
        {
            arr_27 [i_5] = ((/* implicit */signed char) ((long long int) arr_25 [(unsigned char)2] [i_5] [i_8]));
            arr_28 [i_5] [i_8] [i_5] = ((/* implicit */unsigned short) (+(var_16)));
            var_26 = ((((/* implicit */_Bool) ((unsigned int) var_13))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-64))))) : (((/* implicit */int) arr_25 [i_5] [i_5] [i_8])));
            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) arr_26 [i_5] [i_5] [i_8]))));
        }
    }
    var_28 = ((/* implicit */signed char) var_0);
    var_29 |= ((/* implicit */signed char) min((((var_3) % (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) -1242270859))));
    var_30 = ((/* implicit */int) (short)4);
}
