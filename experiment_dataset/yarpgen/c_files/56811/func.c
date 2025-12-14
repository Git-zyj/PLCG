/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56811
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
    for (signed char i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1])))))) - (var_12))))))));
                    arr_6 [i_0 + 2] [(unsigned short)16] [i_0 + 1] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) ((arr_0 [i_0 + 2]) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_0]))))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0 + 2] [22] [i_0 - 1]))))) ? (((((((/* implicit */int) arr_5 [i_1] [i_1] [i_2])) + (2147483647))) << (((((((/* implicit */int) arr_5 [5ULL] [(signed char)9] [i_2])) + (18997))) - (16))))) : ((-(((/* implicit */int) arr_5 [i_4] [i_4] [i_4]))))));
                                var_15 ^= ((/* implicit */signed char) ((long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0 - 2] [4] [21ULL] [i_0]))))), (max((var_11), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_2])))))));
                                arr_12 [i_0] [i_1] [i_4] [i_3] [i_0] = min(((~(16711876057931467182ULL))), (((/* implicit */unsigned long long int) ((max((((/* implicit */int) arr_11 [(signed char)9] [i_1] [(unsigned short)16] [i_3] [i_3] [(signed char)12])), (var_7))) / (((((/* implicit */int) var_4)) + (((/* implicit */int) var_4))))))));
                                var_16 = ((/* implicit */long long int) (((~(((/* implicit */int) arr_2 [i_0 + 2] [i_1] [i_3])))) != (((((/* implicit */int) arr_4 [i_2])) ^ (((/* implicit */int) arr_3 [i_1] [i_1]))))));
                            }
                        } 
                    } 
                    var_17 -= ((/* implicit */long long int) max((((((var_2) - (((/* implicit */unsigned long long int) var_5)))) > (((16711876057931467165ULL) ^ (13835058055282163712ULL))))), (((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0 + 2])) && (((/* implicit */_Bool) arr_7 [i_0] [i_0 - 1]))))));
                    arr_13 [i_0 - 1] [6ULL] [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))) : (var_2)))))));
                }
                var_18 ^= ((/* implicit */unsigned long long int) (((!(((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_2)))))) && (((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) (signed char)49))))))));
                arr_14 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)45)) - (((/* implicit */int) (unsigned short)45246))))) : (arr_0 [i_0])))) ? (((unsigned long long int) min((var_2), (var_12)))) : ((((~(1238896044165793171ULL))) - (((((/* implicit */unsigned long long int) var_1)) ^ (var_2)))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (signed char i_5 = 4; i_5 < 22; i_5 += 2) 
    {
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5]))) | (var_12))) ^ (((unsigned long long int) var_8))))) ? ((~(((16711876057931467188ULL) & (((/* implicit */unsigned long long int) 8060514146950289644LL)))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_5]))) : (arr_16 [22ULL]))), (arr_16 [i_5 - 1])))))))));
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_8))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 23; i_6 += 3) 
    {
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_6] [i_6] [1]))) | (var_3))))));
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((unsigned int) arr_16 [i_6])))));
    }
    for (signed char i_7 = 0; i_7 < 10; i_7 += 2) 
    {
        var_23 = ((/* implicit */long long int) ((((long long int) ((((/* implicit */int) arr_1 [i_7])) | (((/* implicit */int) arr_11 [(unsigned short)14] [i_7] [20LL] [20LL] [20LL] [i_7]))))) <= (((/* implicit */long long int) ((((((((/* implicit */int) arr_11 [i_7] [i_7] [(_Bool)0] [i_7] [i_7] [i_7])) | (((/* implicit */int) var_10)))) + (2147483647))) << (((((((/* implicit */int) arr_19 [i_7])) + (28))) - (26))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 4) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 1) 
            {
                {
                    arr_29 [i_7] [i_9] [i_8] [(short)1] = ((/* implicit */long long int) arr_11 [i_7] [16ULL] [11] [i_8] [i_9] [(unsigned char)5]);
                    var_24 = ((/* implicit */unsigned long long int) ((unsigned short) -1856232395));
                    var_25 ^= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_19 [i_7])) ? ((~(((/* implicit */int) arr_17 [i_7])))) : (((/* implicit */int) arr_26 [4ULL]))))));
                    var_26 -= arr_25 [i_7] [i_7] [i_9];
                }
            } 
        } 
        arr_30 [i_7] = ((/* implicit */unsigned short) ((signed char) max(((~(((/* implicit */int) arr_10 [i_7] [i_7] [i_7] [18ULL] [i_7])))), ((~(((/* implicit */int) arr_26 [i_7])))))));
        var_27 = ((/* implicit */unsigned long long int) max((var_27), ((~(var_11)))));
    }
    /* vectorizable */
    for (long long int i_10 = 2; i_10 < 10; i_10 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_11 = 2; i_11 < 10; i_11 += 2) 
        {
            var_28 = ((/* implicit */unsigned long long int) max((var_28), ((-((-(arr_18 [i_10])))))));
            arr_37 [i_10] [i_10 - 1] [i_11] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_10 - 2] [i_10 - 2] [(short)17] [i_11 - 1] [i_10 - 2]))));
        }
        for (signed char i_12 = 0; i_12 < 11; i_12 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_13 = 0; i_13 < 11; i_13 += 2) 
            {
                for (unsigned short i_14 = 0; i_14 < 11; i_14 += 2) 
                {
                    {
                        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) (!((!(((/* implicit */_Bool) var_9)))))))));
                        var_30 -= ((((/* implicit */unsigned long long int) arr_35 [i_13])) - (var_3));
                        arr_46 [i_10] [i_13] [(unsigned short)6] [i_10] = ((/* implicit */unsigned short) var_12);
                    }
                } 
            } 
            arr_47 [i_10] = ((/* implicit */int) ((arr_32 [6ULL]) <= (((/* implicit */unsigned long long int) -1856232395))));
            arr_48 [i_10] [i_10] [(signed char)6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_10] [21ULL] [i_10 + 1] [i_10 - 1] [12ULL])) ^ (((/* implicit */int) arr_10 [(unsigned char)18] [i_12] [i_12] [i_10 - 2] [i_10]))));
        }
        for (signed char i_15 = 0; i_15 < 11; i_15 += 3) /* same iter space */
        {
            arr_53 [i_10] [i_15] [i_10] = ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (((/* implicit */int) arr_2 [i_10] [i_15] [i_15]))))) ? (var_6) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [12U] [12U] [(unsigned char)14] [(unsigned char)14] [12LL] [(unsigned short)18]))) - (var_1)))));
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 11; i_16 += 2) 
            {
                for (unsigned long long int i_17 = 0; i_17 < 11; i_17 += 2) 
                {
                    {
                        arr_60 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_39 [(short)8] [i_15] [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_6))) | (((/* implicit */unsigned long long int) (~(var_7))))));
                        var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) arr_50 [i_10]))));
                        var_32 -= ((/* implicit */int) arr_3 [i_10] [i_17]);
                    }
                } 
            } 
        }
        arr_61 [i_10] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_10 - 1])) || (((/* implicit */_Bool) arr_3 [(unsigned char)9] [(unsigned char)9])))))) - (((-6801883336258765228LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46937)))))));
    }
    var_33 += ((/* implicit */unsigned char) ((int) (-(((var_5) ^ (var_5))))));
}
