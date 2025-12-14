/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57816
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) /* same iter space */
    {
        var_20 = ((((/* implicit */_Bool) -1)) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]));
        /* LoopSeq 4 */
        for (int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (unsigned char i_3 = 1; i_3 < 13; i_3 += 1) 
                {
                    {
                        var_21 = ((((/* implicit */_Bool) 4294967295LL)) ? (((/* implicit */int) (unsigned short)65535)) : (arr_0 [i_1 + 1] [i_3 + 1]));
                        arr_9 [i_0] [(unsigned char)12] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))));
                        var_22 = ((/* implicit */unsigned long long int) (-(var_11)));
                        var_23 &= (~(((/* implicit */int) (unsigned short)65535)));
                    }
                } 
            } 
            var_24 = ((/* implicit */long long int) min((var_24), (((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_1 + 1])) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36435)))))));
            arr_10 [i_0] [i_0] [9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)36435)))))) : (((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51018)))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [8] [i_0])) ? (-1LL) : (((/* implicit */long long int) var_6)))))));
            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (arr_8 [i_4] [i_0] [i_4] [i_0]) : (arr_8 [i_0] [2LL] [i_0] [i_0])));
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 3; i_5 < 12; i_5 += 1) 
            {
                for (long long int i_6 = 0; i_6 < 15; i_6 += 3) 
                {
                    {
                        var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_18 [i_0] [i_4] [(unsigned short)7] [i_6]))));
                        arr_20 [i_4] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [0] [i_4] [i_0]))))) : (((/* implicit */int) (unsigned char)86))));
                        arr_21 [11] [i_4] [i_4] [i_6] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [i_4])) ? (arr_1 [i_4]) : (var_0)));
                    }
                } 
            } 
            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_13 [i_0] [i_4])))))));
            var_30 = ((/* implicit */unsigned char) (~(2147483642)));
        }
        for (unsigned char i_7 = 0; i_7 < 15; i_7 += 3) 
        {
            arr_25 [i_0] [i_7] [i_7] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_15 [i_0]))));
            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (unsigned short)65535)) : (arr_18 [i_0] [i_7] [i_7] [i_7])));
            /* LoopSeq 1 */
            for (unsigned char i_8 = 0; i_8 < 15; i_8 += 1) 
            {
                arr_28 [i_0] [0LL] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)170))));
                arr_29 [i_8] = (+(arr_14 [i_0] [i_0] [i_8]));
                var_32 = (~(((/* implicit */int) (unsigned short)29100)));
                arr_30 [i_8] [i_8] [i_8] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_19 [i_0] [i_7] [i_8] [i_8]))));
            }
        }
        for (long long int i_9 = 0; i_9 < 15; i_9 += 2) 
        {
            arr_33 [i_9] [8ULL] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_26 [i_9] [i_0] [i_0] [i_9]))))) ? (((/* implicit */unsigned long long int) var_10)) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48597))) : (2235978947462200606ULL)))));
            var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0])) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_17) : (var_6))) : ((-(arr_16 [i_9] [(unsigned short)6] [i_0])))));
            /* LoopNest 2 */
            for (long long int i_10 = 1; i_10 < 14; i_10 += 1) 
            {
                for (unsigned long long int i_11 = 2; i_11 < 14; i_11 += 1) 
                {
                    {
                        var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) (+(arr_22 [i_11 + 1] [i_10 + 1] [(unsigned short)9]))))));
                        arr_40 [i_9] [i_10] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_17)) : (var_18)));
                        arr_41 [i_0] [12ULL] [i_9] [i_10 + 1] [i_10] [i_11] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (18242267820928601883ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_0] [(unsigned short)10] [i_10 - 1] [i_11] [i_11]))))))));
                        var_35 += ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_16 [i_11 - 1] [i_10 - 1] [i_10 - 1]))));
                    }
                } 
            } 
            var_36 = ((/* implicit */long long int) (~(var_0)));
        }
        /* LoopNest 3 */
        for (long long int i_12 = 1; i_12 < 13; i_12 += 3) 
        {
            for (int i_13 = 1; i_13 < 14; i_13 += 3) 
            {
                for (unsigned long long int i_14 = 4; i_14 < 13; i_14 += 1) 
                {
                    {
                        var_37 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9223372036854775803LL)) ? (3) : (((/* implicit */int) arr_42 [i_13 - 1] [(unsigned char)0] [i_12 + 2]))));
                        var_38 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_14 - 1] [i_14 + 2] [i_14 + 2] [i_14]))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 3) /* same iter space */
    {
        arr_52 [i_15] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_50 [i_15]) : (arr_50 [i_15])))) ? (((((/* implicit */_Bool) 7455448562122030592ULL)) ? (arr_22 [i_15] [i_15] [i_15]) : (arr_22 [i_15] [i_15] [i_15]))) : (((((/* implicit */_Bool) arr_50 [i_15])) ? (var_12) : (((/* implicit */long long int) 1361859370))))));
        arr_53 [i_15] [i_15] = ((/* implicit */unsigned long long int) (-((+(1964510427)))));
        var_39 ^= ((/* implicit */int) (~(((((/* implicit */_Bool) 996365721)) ? (((/* implicit */unsigned long long int) var_11)) : (17315611843377666002ULL)))));
    }
    var_40 = ((/* implicit */int) var_1);
}
