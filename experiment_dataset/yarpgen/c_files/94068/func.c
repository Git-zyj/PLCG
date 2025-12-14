/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94068
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */int) var_2))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            var_19 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))));
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */short) ((signed char) (+(((/* implicit */int) arr_4 [7] [7ULL] [(unsigned short)10])))));
            arr_7 [i_0] = ((/* implicit */int) (!((!(((/* implicit */_Bool) var_5))))));
        }
        for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */int) ((long long int) ((int) var_12)));
            arr_11 [i_0] = ((/* implicit */unsigned char) arr_1 [i_2]);
            var_20 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) var_9))));
            var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) 1660709962U)))));
        }
    }
    for (int i_3 = 1; i_3 < 15; i_3 += 1) 
    {
        arr_16 [i_3] = ((unsigned char) ((long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_13)))));
        arr_17 [i_3] [i_3] = ((/* implicit */unsigned char) (~(-3730117759062229968LL)));
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            for (long long int i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 2) /* same iter space */
                    {
                        arr_26 [i_4] = ((/* implicit */signed char) arr_13 [i_3 - 1] [i_3]);
                        arr_27 [i_4] [i_3] = ((/* implicit */short) var_7);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 2) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((short) arr_20 [i_7])))));
                        var_23 &= ((/* implicit */unsigned short) ((int) arr_29 [i_3] [i_3 + 1] [i_3] [i_5]));
                    }
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 13; i_8 += 3) 
                    {
                        arr_35 [i_3] [i_3] [i_5] [i_4] = ((/* implicit */signed char) (+(((/* implicit */int) var_7))));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_4] [i_4])) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_3] [i_3]))) : (arr_19 [i_4] [i_4]))) : (var_3)));
                    }
                    for (unsigned short i_9 = 1; i_9 < 14; i_9 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned char) min((var_25), (var_0)));
                        arr_39 [i_9] [i_4] [(_Bool)1] [i_3 + 1] [i_4] [i_3 + 1] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) arr_30 [i_3 - 1] [i_3 - 1] [9U] [i_3] [i_3] [i_3 - 1])))));
                        var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))));
                    }
                    var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_36 [(short)0] [i_5])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_14)))) : (var_9)))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_1))));
                    arr_40 [i_4] [i_5] = ((/* implicit */unsigned char) var_4);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_10 = 3; i_10 < 12; i_10 += 2) 
                    {
                        arr_45 [i_4] [i_3] [(signed char)12] [i_3] [(signed char)12] [(signed char)12] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) var_12))));
                        var_28 = ((/* implicit */int) arr_33 [i_4] [i_4] [i_4] [i_4]);
                    }
                    arr_46 [i_3] [i_3] [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) var_13))));
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) ((int) arr_30 [i_3] [i_3] [i_3] [i_3] [3] [i_3])))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [4] [i_3] [4] [4]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_3 + 1] [i_3 - 1]))))))))));
    }
    var_30 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) % (((unsigned int) var_7))));
    var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((int) ((((/* implicit */_Bool) (~(524224)))) ? (((((/* implicit */_Bool) (short)-27906)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)-27906)) : (((/* implicit */int) var_11))))))))));
}
