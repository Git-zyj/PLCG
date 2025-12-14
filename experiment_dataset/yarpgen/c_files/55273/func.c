/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55273
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) /* same iter space */
    {
        var_11 |= ((/* implicit */short) ((long long int) var_9));
        var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((signed char) arr_2 [i_0]))) ? (((/* implicit */unsigned int) arr_3 [i_0])) : (max((var_5), (2972575818U))))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                for (short i_4 = 3; i_4 < 20; i_4 += 2) 
                {
                    {
                        var_13 -= ((/* implicit */long long int) arr_6 [i_2]);
                        var_14 |= ((/* implicit */unsigned char) (~(4294967290U)));
                    }
                } 
            } 
        } 
        var_15 = ((((/* implicit */_Bool) ((arr_10 [i_1]) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_8 [i_1] [i_1])) : (((/* implicit */int) arr_9 [i_1] [i_1] [i_1])))) : (((((/* implicit */_Bool) arr_11 [i_1] [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_10 [i_1]))))))) ? (((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (var_10) : (((/* implicit */unsigned int) arr_3 [i_1])))))));
    }
    for (short i_5 = 1; i_5 < 14; i_5 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 16; i_7 += 3) 
            {
                for (signed char i_8 = 0; i_8 < 16; i_8 += 3) 
                {
                    {
                        arr_24 [i_5] [i_7] [i_5] [i_6] [i_5] = ((/* implicit */unsigned long long int) ((((arr_3 [i_5 - 1]) + (2147483647))) << (((((((/* implicit */_Bool) arr_3 [i_5 + 1])) ? (554138256U) : (((/* implicit */unsigned int) -1377682902)))) - (554138256U)))));
                        var_16 = ((/* implicit */int) ((unsigned int) arr_20 [i_5] [i_5] [i_7] [i_8]));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 3; i_9 < 14; i_9 += 2) 
                        {
                            var_17 = ((/* implicit */int) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [(signed char)11] [i_6] [i_7] [i_8]))) - (((((/* implicit */_Bool) var_7)) ? (arr_11 [i_5] [(signed char)1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_8])))))))));
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_8] [i_8])) ? (((/* implicit */int) arr_22 [i_7] [i_7])) : ((-(((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_7 [i_8])))))))));
                            arr_27 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) min(((unsigned short)3013), (((/* implicit */unsigned short) var_1))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_5] [(unsigned short)2] [i_7] [i_8] [i_9])))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */int) (unsigned short)3013)) : ((~(((/* implicit */int) var_9)))))) : (((/* implicit */int) ((((/* implicit */unsigned int) (-(-1377682902)))) > (var_10))))));
                        }
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (min((((((/* implicit */_Bool) (signed char)37)) ? (1377682904) : (((/* implicit */int) (unsigned short)3013)))), (-1377682902))) : (((/* implicit */int) (!(arr_10 [i_5]))))));
                        /* LoopSeq 3 */
                        for (short i_10 = 0; i_10 < 16; i_10 += 4) 
                        {
                            var_20 -= ((/* implicit */unsigned long long int) ((unsigned short) max((((/* implicit */int) var_9)), (max((arr_29 [i_5] [i_6] [i_6] [i_5] [i_8] [i_8] [i_10]), (((/* implicit */int) arr_10 [i_5 - 1])))))));
                            var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max((max((var_4), (((/* implicit */int) var_1)))), (((/* implicit */int) (unsigned short)59268))))) ? (((/* implicit */int) (short)-28047)) : (((((/* implicit */int) (short)-27317)) / (((/* implicit */int) (unsigned char)77))))));
                        }
                        for (signed char i_11 = 1; i_11 < 15; i_11 += 2) 
                        {
                            var_22 = ((/* implicit */long long int) ((unsigned long long int) arr_30 [i_5] [i_8] [i_11 - 1]));
                            var_23 = ((/* implicit */unsigned long long int) arr_25 [i_5 + 1] [i_5] [(unsigned char)12] [i_5 + 2] [i_5]);
                        }
                        for (unsigned short i_12 = 0; i_12 < 16; i_12 += 4) 
                        {
                            var_24 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_5])) >> (((((/* implicit */int) arr_31 [i_12])) - (20586)))))) ? (((/* implicit */int) arr_32 [i_5] [i_5] [i_6] [i_6] [i_7] [i_8] [(unsigned char)1])) : (((((/* implicit */_Bool) arr_1 [i_7] [i_7])) ? (-1100944511) : (((/* implicit */int) var_2))))))), ((~(arr_11 [i_5 + 2] [i_5 + 1])))));
                            var_25 |= ((/* implicit */unsigned int) (signed char)-41);
                            var_26 = arr_21 [14U] [i_5] [14U];
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_22 [i_5] [(signed char)11])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_11 [i_5 + 2] [i_5 + 1]))), (((/* implicit */unsigned int) ((signed char) (short)-28047)))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))));
                        }
                    }
                } 
            } 
            var_28 = ((/* implicit */int) arr_20 [i_5] [i_5] [i_6] [i_6]);
        }
        var_29 ^= ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 1377682904)))) ? (((((/* implicit */int) (short)27306)) >> (((((/* implicit */int) arr_22 [i_5] [(signed char)12])) + (86))))) : (((((/* implicit */_Bool) arr_34 [i_5] [i_5] [i_5] [i_5] [10U] [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) (short)27306)) : (((/* implicit */int) var_3))))))) ? (((unsigned int) (short)28026)) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))));
    }
    var_30 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (signed char)(-127 - 1)))) ? (var_4) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
    var_31 &= ((/* implicit */unsigned int) ((signed char) ((int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)28004)) : (((/* implicit */int) var_2))))));
}
