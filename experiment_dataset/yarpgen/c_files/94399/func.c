/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94399
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
    var_17 ^= ((/* implicit */unsigned short) max(((_Bool)1), (var_1)));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) (signed char)(-127 - 1));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 1; i_3 < 12; i_3 += 3) 
                {
                    {
                        var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) (signed char)0)) - (((/* implicit */int) (unsigned short)16766))))), (((long long int) (short)1433))));
                        var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 6994669574743358362ULL)) ? (arr_7 [i_0 - 1] [i_1 + 1] [i_3 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_14))))) | (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_2 [i_0 + 1] [(unsigned char)2]))))));
                        var_20 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65535))))), (max((3815157624351225717LL), (var_3)))))) ? (((((/* implicit */int) (unsigned char)240)) << (((arr_3 [i_0]) - (4898615683380845843LL))))) : ((~(((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) (_Bool)0)))))))));
                        var_21 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (3U)))));
                    }
                } 
            } 
            arr_12 [i_0 + 1] = arr_6 [i_0];
        }
        for (int i_4 = 3; i_4 < 14; i_4 += 3) 
        {
            var_22 = ((/* implicit */unsigned int) ((var_1) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65529))) : (arr_13 [i_4] [i_0 - 1] [i_4]))))));
            arr_16 [i_0] [i_0] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((long long int) (_Bool)1))))) ? (arr_10 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((-7531246464010882417LL), (((/* implicit */long long int) (_Bool)1)))) < (max((-9168519390669765740LL), (((/* implicit */long long int) (_Bool)1))))))))));
        }
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_19 [i_5] = ((/* implicit */unsigned short) var_3);
            var_23 ^= ((/* implicit */_Bool) arr_18 [(_Bool)1]);
            var_24 = ((((/* implicit */_Bool) ((long long int) arr_7 [i_0] [i_0] [i_0]))) ? (((((/* implicit */_Bool) (unsigned short)3633)) ? (((/* implicit */int) (unsigned short)45081)) : (((/* implicit */int) arr_14 [i_0] [i_5] [i_0 + 1])))) : (((/* implicit */int) (unsigned char)255)));
        }
    }
    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 3) 
    {
        arr_22 [i_6] [5LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 7495676480375912106LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_6]))) : (arr_3 [i_6]))) << (((arr_7 [(signed char)4] [i_6] [3]) + (2832762818724029055LL)))))) ? (var_6) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (4460498942826018299ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))))) ? (((((/* implicit */_Bool) var_13)) ? (var_6) : (((/* implicit */unsigned int) var_9)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) arr_14 [i_6] [i_6] [i_6])))))))));
        arr_23 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)0))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_7 = 2; i_7 < 19; i_7 += 3) 
    {
        arr_26 [i_7] = ((/* implicit */signed char) ((var_11) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_8 = 3; i_8 < 18; i_8 += 2) 
        {
            arr_29 [i_7] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (unsigned short)6813))))));
            /* LoopSeq 2 */
            for (long long int i_9 = 0; i_9 < 21; i_9 += 1) 
            {
                var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_7 - 2] [i_8] [i_9]))))))));
                var_26 = ((/* implicit */long long int) (~(var_11)));
                arr_33 [i_7] [i_8] [(signed char)10] [i_7] = ((/* implicit */short) (~(var_6)));
                var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)6813)) ? (((/* implicit */int) (unsigned short)45981)) : (((/* implicit */int) (unsigned short)58126))));
                var_28 ^= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)97)) ? (arr_30 [i_8] [i_8] [i_9] [i_7 - 2]) : (((((/* implicit */_Bool) arr_32 [i_7])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_7 + 2] [i_7 + 2] [6ULL] [20U])))))));
            }
            for (unsigned long long int i_10 = 4; i_10 < 20; i_10 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_11 = 0; i_11 < 21; i_11 += 3) 
                {
                    arr_38 [i_8] [i_7] = ((/* implicit */unsigned int) ((arr_24 [i_7] [i_10]) << (((((/* implicit */int) arr_36 [(unsigned char)12] [i_10 + 1] [i_10 - 4])) - (28)))));
                    var_29 = ((/* implicit */long long int) max((var_29), (((((var_7) + (9223372036854775807LL))) << (((((/* implicit */int) arr_35 [i_8] [i_8 + 1] [i_8 - 1] [i_8 - 1])) - (24679)))))));
                    var_30 = ((/* implicit */short) 7355780800207021105LL);
                }
                arr_39 [i_10] [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) -2954257706909606584LL);
                var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)154)) - (((/* implicit */int) arr_32 [i_10 - 2]))));
                var_32 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-28578)) && (((/* implicit */_Bool) (unsigned char)75))));
            }
        }
        for (long long int i_12 = 0; i_12 < 21; i_12 += 2) 
        {
            arr_42 [i_7] [i_7] = ((/* implicit */unsigned short) arr_27 [i_12] [12] [i_7]);
            arr_43 [i_7] [i_7] [i_12] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_40 [i_7] [i_12])))) : (arr_37 [i_7 - 1] [i_7 - 1] [i_7]))) & (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)240)), ((short)-17777)))))));
        }
        var_33 = ((/* implicit */long long int) min((arr_30 [i_7 + 2] [i_7] [i_7] [i_7]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((-2147483630) + (2147483644))))))));
    }
}
