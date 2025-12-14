/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84978
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
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (((_Bool)1) ? (0LL) : (9223372036854775807LL))))));
    var_14 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned char)160)))) <= ((((!(((/* implicit */_Bool) (unsigned short)38006)))) ? (((((/* implicit */_Bool) 5159805713505123997LL)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (short)32767))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    {
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_0 - 1])) <= (((/* implicit */int) var_9))));
                        arr_12 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_11 [(unsigned short)5] [i_1] [(unsigned short)1] [i_1]))) ? ((+(((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) arr_1 [i_0] [i_1 - 2]))));
                    }
                } 
            } 
            arr_13 [i_0] [4] = (!(((/* implicit */_Bool) ((((/* implicit */long long int) 552842634)) | (arr_0 [i_1])))));
        }
        /* LoopSeq 3 */
        for (unsigned char i_4 = 2; i_4 < 9; i_4 += 2) /* same iter space */
        {
            var_16 *= ((_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_14 [i_0] [i_0 + 1] [i_0 - 2])) : (((/* implicit */int) var_12))));
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                for (unsigned short i_6 = 0; i_6 < 11; i_6 += 2) 
                {
                    {
                        arr_22 [i_0 - 1] [i_0 - 1] [i_5] [(short)3] &= ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) var_11)) ? (((long long int) 1057173904)) : (((/* implicit */long long int) ((/* implicit */int) (short)3968))))));
                        arr_23 [i_5] [i_5] [i_5] [i_5] = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-30171)) : (((/* implicit */int) (unsigned char)158))))) ? (((/* implicit */long long int) var_11)) : ((-(5147007614915688597LL))));
                    }
                } 
            } 
            arr_24 [i_4] [(_Bool)1] [i_0 - 2] = ((/* implicit */int) arr_2 [i_0]);
        }
        /* vectorizable */
        for (unsigned char i_7 = 2; i_7 < 9; i_7 += 2) /* same iter space */
        {
            arr_29 [i_0 + 1] = ((/* implicit */unsigned short) ((var_5) * (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_7] [i_0 - 1] [i_7])))));
            /* LoopNest 2 */
            for (unsigned short i_8 = 0; i_8 < 11; i_8 += 3) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (long long int i_10 = 0; i_10 < 11; i_10 += 4) 
                        {
                            arr_37 [i_0 - 2] [i_0 - 1] [i_0 + 1] [i_0] [i_0 + 1] [i_8] = ((/* implicit */unsigned short) -3293879874660923201LL);
                            arr_38 [i_8] [i_9] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 1926358766)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_15 [i_0 + 1]))))));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            arr_41 [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [1LL] [i_7 - 2])) : (((/* implicit */int) (unsigned char)255))));
                            arr_42 [i_0] [i_8] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)0))));
                        }
                        for (long long int i_12 = 0; i_12 < 11; i_12 += 4) 
                        {
                            var_17 ^= ((/* implicit */unsigned char) (+(424882650901713402LL)));
                            var_18 = ((/* implicit */_Bool) (+((+(((/* implicit */int) arr_17 [i_9] [i_9] [i_9]))))));
                            arr_45 [i_9] [i_8] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_30 [i_0 + 1]))));
                            var_19 = (_Bool)1;
                        }
                        for (unsigned short i_13 = 0; i_13 < 11; i_13 += 2) 
                        {
                            var_20 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)54674)) + (((/* implicit */int) arr_2 [i_0 + 1]))));
                            arr_49 [i_0] [(unsigned short)7] [0] [i_0] [i_8] = ((/* implicit */long long int) var_2);
                        }
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_7] [i_7 - 1] [i_7 + 2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_21 [(unsigned short)1] [(unsigned short)1] [i_9] [i_9] [i_0]))));
                        arr_50 [i_8] [i_8] [i_7 + 1] [i_8] = ((/* implicit */unsigned short) (_Bool)0);
                    }
                } 
            } 
        }
        for (int i_14 = 0; i_14 < 11; i_14 += 2) 
        {
            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)62628)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) <= (arr_27 [9LL] [i_0 - 2] [i_0])))) : ((+(var_11)))))))))));
            arr_55 [i_0] |= ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_14])) ? (((/* implicit */int) arr_15 [i_0 + 1])) : (((/* implicit */int) var_10))))) != (((((/* implicit */_Bool) ((long long int) var_12))) ? (-8197787180181904153LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)8524))) != (-3516400935009169249LL))))))));
        }
    }
}
