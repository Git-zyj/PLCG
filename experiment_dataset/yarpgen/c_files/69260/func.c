/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69260
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
    var_10 = ((/* implicit */unsigned long long int) (short)-32766);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        var_11 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_8 [i_3] [2LL] [i_0 - 1] [i_1 + 1] [i_3])) ? (((/* implicit */int) arr_8 [i_3] [i_1] [i_0 - 1] [i_1 - 2] [0])) : (((/* implicit */int) arr_8 [i_3] [i_3] [i_0 - 1] [i_1 - 2] [i_1])))) >> (((arr_6 [i_3] [i_1] [i_2] [i_3]) - (17870231680681955105ULL)))));
                        arr_10 [i_0 - 1] [i_0] [i_0] = ((/* implicit */int) var_9);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_15 [i_0] = ((/* implicit */unsigned short) var_3);
                            arr_16 [i_0] [i_1 - 1] [i_2] [i_0] [i_3] |= ((/* implicit */unsigned int) (short)-32742);
                            arr_17 [i_0] [i_0] [i_1] [i_2 - 2] [i_3] [i_3] [i_1] = ((/* implicit */unsigned char) var_3);
                            arr_18 [i_0] [i_1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_12 [i_4] [i_3] [i_2] [i_1 + 1] [i_0 + 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) var_1))));
                        }
                        var_12 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) (short)32759))))) + (7680514751949645142LL)))) ? (arr_9 [i_0] [i_0] [i_2] [i_2]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)48015)))))));
                        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((arr_7 [i_3] [6U] [i_2] [6U]) - (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) < (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_3])) * ((-(((/* implicit */int) var_8))))))))))));
                    }
                    var_14 += ((/* implicit */unsigned char) arr_9 [i_0 - 1] [i_1 + 1] [i_2] [i_0 + 1]);
                    var_15 = ((/* implicit */_Bool) min((var_15), (var_9)));
                    arr_19 [i_0] [i_0] [i_2 + 1] [(signed char)1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        arr_24 [i_0] [i_0] = ((/* implicit */unsigned short) var_2);
                        var_16 = ((/* implicit */long long int) arr_3 [i_1 + 1] [i_1] [(_Bool)1]);
                        arr_25 [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_0] [9LL] [i_0 + 1])) ? (arr_2 [i_0]) : (((/* implicit */long long int) var_6)))) > (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_5] [i_2 - 1] [i_1 - 2] [i_0] [i_0 - 1] [i_0 + 1])))));
                    }
                    /* vectorizable */
                    for (unsigned int i_6 = 4; i_6 < 8; i_6 += 4) 
                    {
                        arr_28 [10U] [i_0] [i_0] [i_0] = (short)-32736;
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -6464699555037070745LL)) ? (((/* implicit */int) ((((/* implicit */int) (short)-32766)) < (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) arr_27 [i_1 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 2; i_7 < 10; i_7 += 1) 
                        {
                            arr_33 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_7 + 1] [i_7 - 2] [i_6 - 4] [i_1 + 1])) ? (arr_29 [i_0 - 1] [i_0 + 1] [i_2 - 2] [i_6 - 3] [i_6]) : (arr_29 [i_0 + 1] [i_0] [i_2 - 1] [i_6 + 4] [i_7])));
                            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */int) (short)2016)) & (-429085643))))));
                            var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) (short)32741)) ? (((((/* implicit */_Bool) arr_8 [i_6] [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */int) arr_22 [i_6])) : (((/* implicit */int) (short)24475)))) : (((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) var_2)))))));
                        }
                        arr_34 [i_6 + 3] [8ULL] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_3);
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 4) 
    {
        var_20 = ((/* implicit */long long int) var_4);
        arr_37 [i_8] [i_8] = ((/* implicit */signed char) arr_36 [i_8] [i_8]);
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) arr_35 [i_8]))));
        arr_38 [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_35 [i_8]))));
    }
}
