/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90960
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_1 [i_2])))))))));
                    arr_7 [(signed char)7] [11U] [(signed char)0] [11U] = ((/* implicit */int) var_13);
                    var_15 += ((/* implicit */int) (-(max((var_1), (((/* implicit */unsigned int) arr_1 [i_1 - 1]))))));
                }
            } 
        } 
        var_16 = ((/* implicit */int) min((var_16), ((+(((((/* implicit */_Bool) arr_5 [(_Bool)1] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_13))))))))));
    }
    for (int i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        var_17 = ((/* implicit */int) max((max((((/* implicit */unsigned int) arr_9 [i_3] [18])), (((((/* implicit */_Bool) arr_9 [i_3] [i_3])) ? (arr_8 [i_3]) : (arr_8 [i_3]))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3] [16LL])) ? (arr_9 [i_3] [i_3]) : (((/* implicit */int) var_2))))))))));
        arr_10 [(unsigned short)3] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned short)1744)) : (((/* implicit */int) (unsigned short)63792))));
        arr_11 [i_3] = ((/* implicit */short) arr_9 [(unsigned char)18] [i_3]);
    }
    for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
    {
        var_18 *= ((/* implicit */unsigned short) (+((~(max((arr_12 [i_4]), (((/* implicit */unsigned long long int) var_6))))))));
        arr_16 [i_4] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)63798)) >> (((((/* implicit */int) (signed char)-29)) + (45)))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
    {
        arr_19 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) ((873513507U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22787)))))) >= (((/* implicit */int) ((signed char) (signed char)3)))))) == ((((((-(((/* implicit */int) var_13)))) + (2147483647))) >> (((((/* implicit */int) var_5)) + (116)))))));
        var_19 &= ((/* implicit */unsigned short) max((((((arr_17 [i_5] [i_5]) + (2147483647))) << (((((((/* implicit */_Bool) 873513507U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3421453792U))) - (1U))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 7900958989367964529ULL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)1744))))) ? (var_7) : (((var_12) ? (arr_18 [i_5]) : (arr_18 [i_5])))))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) /* same iter space */
    {
        arr_24 [i_6] [i_6] = ((/* implicit */signed char) arr_20 [i_6]);
        /* LoopNest 2 */
        for (short i_7 = 1; i_7 < 23; i_7 += 3) 
        {
            for (unsigned int i_8 = 0; i_8 < 24; i_8 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 0; i_9 < 24; i_9 += 3) 
                    {
                        arr_35 [(_Bool)1] [i_7] [i_9] [i_7] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_17 [i_7 - 1] [i_7 + 1])) ? (arr_17 [i_7 - 1] [i_7 - 1]) : (arr_17 [i_7 - 1] [i_7 - 1]))) / ((+(((/* implicit */int) var_13))))));
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((arr_17 [i_7 - 1] [i_7 + 1]), (arr_17 [i_7 - 1] [i_7 + 1])))) * (((((/* implicit */long long int) ((/* implicit */int) var_0))) / (var_3)))));
                    }
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_6] [i_6] [i_8] [i_6])) ? (((arr_29 [i_7] [i_7 + 1] [i_7 - 1]) ? (((/* implicit */int) arr_31 [i_7 - 1] [i_6] [i_7 + 1] [i_7 + 1])) : (((/* implicit */int) arr_31 [(unsigned char)8] [i_6] [i_7 - 1] [i_7 + 1])))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_5))))) ? (((((/* implicit */int) var_8)) + (((/* implicit */int) arr_30 [i_7] [i_7] [i_7] [(unsigned short)18])))) : (((/* implicit */int) arr_27 [i_7 - 1] [i_7]))))));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (long long int i_10 = 3; i_10 < 14; i_10 += 2) 
    {
        var_22 = ((/* implicit */unsigned int) var_5);
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (+(((((/* implicit */int) ((short) var_11))) - (((((/* implicit */_Bool) arr_38 [(signed char)8])) ? (arr_18 [i_10]) : (((/* implicit */int) var_8)))))))))));
    }
}
