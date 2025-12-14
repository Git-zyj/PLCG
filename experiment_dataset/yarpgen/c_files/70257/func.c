/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70257
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
    for (signed char i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) 6133823456096787653LL)) ? (((/* implicit */int) (unsigned short)65524)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)158))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_7 [i_1 - 1] [i_1 + 2] [i_1 - 1]) ^ (arr_7 [i_1 + 2] [i_1 + 1] [i_1 + 2])))) ? ((~(arr_7 [i_1 + 1] [i_1 + 1] [i_1 - 2]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) | (arr_7 [i_1 - 1] [i_1 + 1] [i_1 + 2])))));
                    var_19 = ((/* implicit */unsigned short) ((arr_8 [i_0 - 1] [i_0 + 2] [i_1 - 2]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 1])))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 4; i_3 < 12; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned short)14764)), ((+(((/* implicit */int) (unsigned char)87))))));
                        var_21 = ((/* implicit */unsigned long long int) (short)14452);
                    }
                    for (unsigned long long int i_4 = 2; i_4 < 14; i_4 += 2) 
                    {
                        var_22 = ((/* implicit */long long int) ((unsigned short) (unsigned short)14759));
                        /* LoopSeq 2 */
                        for (unsigned int i_5 = 2; i_5 < 13; i_5 += 4) 
                        {
                            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (short)1915)) ? (-6133823456096787646LL) : (((/* implicit */long long int) 797901978U))));
                            var_24 = ((/* implicit */int) ((((var_1) ^ (((/* implicit */long long int) arr_16 [(_Bool)1] [i_4] [(unsigned char)10] [i_0] [i_0])))) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-1889)))));
                            var_25 = ((/* implicit */unsigned char) arr_4 [i_1] [i_1]);
                        }
                        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 3) 
                        {
                            var_26 = ((/* implicit */int) min((((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) arr_12 [i_0] [i_0] [i_2] [i_1] [i_6])))))), (var_11)));
                            var_27 = ((/* implicit */unsigned short) 976049387U);
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 0; i_7 < 15; i_7 += 3) 
                        {
                            var_28 = ((/* implicit */long long int) (-((+(var_15)))));
                            var_29 &= ((/* implicit */short) min((((/* implicit */unsigned short) var_6)), (var_8)));
                        }
                        for (unsigned short i_8 = 0; i_8 < 15; i_8 += 1) 
                        {
                            var_30 = (!(((/* implicit */_Bool) (-(((/* implicit */int) var_9))))));
                            var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) (_Bool)1))));
                            var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) max((((((/* implicit */_Bool) ((520410488U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [5U] [i_2] [i_4] [i_8])))))) ? (arr_1 [i_0 - 2] [(_Bool)1]) : (((886121315) ^ (((/* implicit */int) arr_10 [i_0 - 1] [i_1] [i_4] [i_8])))))), (((((/* implicit */_Bool) ((int) var_12))) ? (((/* implicit */int) min(((short)-1915), (((/* implicit */short) (unsigned char)169))))) : (((/* implicit */int) ((short) 6133823456096787641LL))))))))));
                            var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) var_3))));
                        }
                        var_34 &= ((/* implicit */short) 16777216U);
                    }
                }
            } 
        } 
        var_35 = ((/* implicit */signed char) var_3);
        var_36 = ((/* implicit */_Bool) var_6);
    }
    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
    {
        var_37 = ((/* implicit */unsigned int) ((unsigned char) (unsigned short)14759));
        /* LoopSeq 2 */
        for (int i_10 = 1; i_10 < 21; i_10 += 3) /* same iter space */
        {
            var_38 = ((/* implicit */unsigned char) ((_Bool) max(((~(((/* implicit */int) (_Bool)1)))), (min((arr_28 [i_9] [i_9 + 1] [i_10]), (((/* implicit */int) arr_23 [i_9])))))));
            /* LoopNest 3 */
            for (long long int i_11 = 0; i_11 < 24; i_11 += 2) 
            {
                for (unsigned char i_12 = 0; i_12 < 24; i_12 += 1) 
                {
                    for (unsigned char i_13 = 0; i_13 < 24; i_13 += 3) 
                    {
                        {
                            var_39 = ((/* implicit */signed char) var_6);
                            var_40 = ((/* implicit */unsigned long long int) ((((var_11) ^ (((/* implicit */long long int) arr_24 [i_9])))) ^ ((~(var_11)))));
                        }
                    } 
                } 
            } 
        }
        for (int i_14 = 1; i_14 < 21; i_14 += 3) /* same iter space */
        {
            var_41 = ((/* implicit */unsigned char) arr_31 [i_9] [i_9]);
            var_42 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_28 [i_14 + 1] [i_14 + 1] [i_14])) ? (arr_28 [i_14 + 2] [i_14 + 2] [i_14]) : (arr_36 [i_9 + 1]))) ^ (((/* implicit */int) ((unsigned char) var_13)))));
        }
    }
    for (unsigned int i_15 = 0; i_15 < 22; i_15 += 1) 
    {
        var_43 = ((/* implicit */_Bool) (+(max((((/* implicit */int) arr_39 [i_15])), ((-(((/* implicit */int) (unsigned char)86))))))));
        var_44 = ((/* implicit */_Bool) (+((+(((unsigned int) (_Bool)0))))));
        var_45 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_26 [i_15] [(unsigned char)4] [(unsigned char)4]), (((/* implicit */long long int) (~(arr_38 [i_15] [(signed char)22] [2])))))))));
        var_46 |= min((((((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_10)))) ^ (min((((/* implicit */int) (unsigned char)242)), (-388865167))))), (((/* implicit */int) (_Bool)1)));
    }
    for (long long int i_16 = 3; i_16 < 10; i_16 += 1) 
    {
        var_47 = ((/* implicit */unsigned long long int) (+((~(((unsigned int) var_11))))));
        var_48 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) ((_Bool) var_7))), (arr_6 [i_16] [i_16] [i_16]))))));
        var_49 = ((/* implicit */long long int) (-(((/* implicit */int) arr_37 [(short)18]))));
    }
    var_50 = ((/* implicit */long long int) var_12);
}
