/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95961
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -2147483647)) ^ (arr_2 [i_0] [i_0])))), (min((min((var_1), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])))), (min((((/* implicit */unsigned long long int) var_9)), (0ULL)))))));
                var_20 = ((/* implicit */unsigned int) min((min((arr_3 [i_0] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */long long int) arr_5 [i_0] [i_0])) : (arr_1 [i_1])))))), (((/* implicit */unsigned long long int) -2147483647))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) min(((_Bool)1), (((_Bool) (unsigned char)245)))))));
                    var_22 = ((/* implicit */int) (+(min((((/* implicit */unsigned long long int) min((var_2), (((/* implicit */unsigned short) (short)3072))))), (((((/* implicit */_Bool) var_1)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_1 [i_0]))))))));
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) min((-2147483636), (((/* implicit */int) (unsigned char)0))));
                }
                var_23 = (+(((17596690281804925331ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3056))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_3 = 3; i_3 < 10; i_3 += 1) 
    {
        for (int i_4 = 2; i_4 < 10; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                {
                    var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) 9013380591607272787LL))));
                    arr_16 [i_3] [i_4] [i_5] = ((/* implicit */unsigned int) var_4);
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((2986926499275521553LL), (((/* implicit */long long int) 1711298273))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) >= (((/* implicit */int) (_Bool)1)))))) : (var_1))), (((/* implicit */unsigned long long int) var_11))));
    var_26 *= ((/* implicit */long long int) min((min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) | (var_1))), (((/* implicit */unsigned long long int) min((2073043105U), (((/* implicit */unsigned int) (_Bool)1))))))), (((/* implicit */unsigned long long int) var_11))));
    /* LoopSeq 3 */
    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 3) 
    {
        arr_19 [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) + (min((((/* implicit */unsigned long long int) var_12)), (var_4)))));
        arr_20 [i_6] [i_6] = ((/* implicit */signed char) ((min((min((((/* implicit */long long int) -2147483647)), (arr_18 [i_6]))), (((/* implicit */long long int) var_15)))) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        /* LoopNest 3 */
        for (short i_7 = 0; i_7 < 22; i_7 += 2) 
        {
            for (int i_8 = 3; i_8 < 21; i_8 += 3) 
            {
                for (long long int i_9 = 0; i_9 < 22; i_9 += 4) 
                {
                    {
                        var_27 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_8 - 1] [i_8 - 3])))))));
                        var_28 = ((/* implicit */unsigned char) 1253857211);
                    }
                } 
            } 
        } 
        arr_31 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) min((var_0), (((/* implicit */unsigned short) ((((/* implicit */int) arr_25 [i_6] [i_6] [i_6])) == (((/* implicit */int) var_7)))))))) + (((/* implicit */int) arr_26 [i_6] [i_6]))));
    }
    /* vectorizable */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_29 = ((/* implicit */int) ((14632304231215432728ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_10] [i_10] [i_10])))));
        /* LoopNest 3 */
        for (signed char i_11 = 0; i_11 < 15; i_11 += 3) 
        {
            for (short i_12 = 0; i_12 < 15; i_12 += 1) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        var_30 += ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_32 [i_10]))));
                        arr_44 [i_10] [i_10] [i_12] [i_11] [i_13] = ((/* implicit */int) var_17);
                    }
                } 
            } 
        } 
        var_31 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)65535))));
    }
    for (signed char i_14 = 0; i_14 < 13; i_14 += 4) 
    {
        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)14191))))) >= (((/* implicit */int) arr_36 [i_14]))));
        arr_47 [i_14] [i_14] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((var_16), (((/* implicit */unsigned long long int) var_10))))) ? (((((/* implicit */_Bool) arr_8 [i_14] [i_14] [i_14])) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 159463779)) | (9223372036854775807LL)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1ULL)) ? (2147483647) : (((/* implicit */int) (unsigned char)245)))))));
    }
}
