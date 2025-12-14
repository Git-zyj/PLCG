/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60310
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
    var_18 = min((min((((((/* implicit */_Bool) var_15)) ? (var_10) : (var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_13)))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))) - (var_13)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    var_19 = ((((/* implicit */unsigned int) (+(((arr_0 [i_0]) - (((/* implicit */int) var_9))))))) / (1792U));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        arr_11 [i_0] [i_1] [i_2 + 1] [i_3] = 2143999730;
                        arr_12 [i_0] [i_1] [i_3] = ((/* implicit */long long int) arr_3 [i_0] [i_1]);
                        var_20 *= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_2 [i_2 + 1] [i_2 + 2])) ? (arr_2 [i_2 - 1] [i_2 + 1]) : (arr_2 [i_2 - 1] [i_2 - 1])))));
                    }
                }
            } 
        } 
        var_21 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))) * (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((unsigned long long int) 18446744073709551614ULL)) : (((/* implicit */unsigned long long int) var_2))))));
        var_22 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])))))));
        var_23 -= ((/* implicit */unsigned char) 9932043494259496387ULL);
    }
    for (int i_4 = 1; i_4 < 10; i_4 += 1) 
    {
        var_24 = ((((((/* implicit */_Bool) ((unsigned int) arr_0 [i_4 + 1]))) ? (((/* implicit */unsigned long long int) min((arr_5 [i_4] [i_4 - 1]), (((/* implicit */unsigned int) (signed char)46))))) : (((18446744073709551614ULL) % (((/* implicit */unsigned long long int) arr_2 [i_4 + 1] [i_4 + 1])))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_4 - 1] [i_4 - 1])) ? (1622727574U) : (arr_5 [i_4 - 1] [i_4 - 1])))));
        var_25 += ((/* implicit */unsigned long long int) ((unsigned short) 9223372036854775807ULL));
        arr_15 [i_4 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1))))) | (min((arr_7 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]), (var_10)))))) ? (arr_5 [i_4 + 1] [i_4 + 1]) : (((arr_6 [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 + 1]) ^ (arr_14 [i_4 + 1] [i_4 - 1])))));
        var_26 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_4 [i_4 - 1] [i_4 + 1]))))));
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 22; i_5 += 2) 
    {
        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            for (long long int i_7 = 1; i_7 < 23; i_7 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_8 = 1; i_8 < 23; i_8 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_9 = 0; i_9 < 24; i_9 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned int) max((var_27), (((((/* implicit */_Bool) arr_7 [i_5 + 1] [i_5] [i_5 + 1] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_5 - 1]))) : (arr_5 [i_7 + 1] [i_7 + 1])))));
                            var_28 = ((/* implicit */unsigned char) 18446744073709551615ULL);
                        }
                        for (unsigned short i_10 = 0; i_10 < 24; i_10 += 1) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned char) (-(((var_15) / (9223372036854775796ULL)))));
                            var_30 = ((arr_16 [i_5 + 2]) ? (((/* implicit */unsigned long long int) arr_23 [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_8])) : (var_15));
                            arr_30 [i_5 - 1] [i_8] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_8 - 1] [i_7 + 1] = ((/* implicit */short) var_4);
                            var_31 = ((/* implicit */unsigned short) arr_27 [i_5 + 2] [i_7 - 1] [i_7 + 1] [i_8 + 1]);
                            var_32 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (18446744073709551610ULL) : (((/* implicit */unsigned long long int) arr_23 [i_7] [i_7] [i_7 - 1] [(unsigned short)2]))));
                        }
                        var_33 = ((/* implicit */_Bool) max((var_33), ((!(((/* implicit */_Bool) arr_8 [i_5 + 1] [i_5 + 2] [i_5 + 1] [i_5 - 1] [i_5 + 2] [i_5 - 1]))))));
                    }
                    var_34 += min((((/* implicit */unsigned int) (-(((/* implicit */int) var_9))))), ((+(arr_29 [i_7 + 1] [10U] [10U] [i_5]))));
                    arr_31 [i_5 + 2] [i_6] [i_5 + 2] [i_7 - 1] = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) ((short) var_12))), (((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (13835058055282163712ULL))))), (((/* implicit */unsigned long long int) (~(((arr_8 [i_7 + 1] [i_7 + 1] [i_6] [i_5 - 1] [i_5 + 2] [i_5 - 1]) & (((/* implicit */long long int) arr_23 [i_5] [i_5] [i_6] [(_Bool)1])))))))));
                }
            } 
        } 
    } 
    var_35 = ((/* implicit */short) var_17);
}
