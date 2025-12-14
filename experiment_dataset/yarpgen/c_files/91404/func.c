/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91404
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
    var_11 = ((/* implicit */unsigned long long int) (unsigned char)255);
    /* LoopSeq 2 */
    for (long long int i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    {
                        var_12 = var_10;
                        arr_9 [i_0 - 3] [i_2] [i_2 - 1] [i_0 - 3] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((var_9), (((/* implicit */unsigned short) var_8))))), (min((9223372036854775807LL), (((/* implicit */long long int) (unsigned char)174))))))), (((((/* implicit */_Bool) arr_6 [i_2 + 4] [i_0 - 3] [i_1 - 1])) ? (((/* implicit */unsigned long long int) min((-9223372036854775792LL), (((/* implicit */long long int) arr_7 [i_0 - 1] [i_0 + 4] [(short)12] [i_0 + 3] [i_0 - 1] [i_0 + 3]))))) : ((+(18446744073709551611ULL)))))));
                        arr_10 [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((unsigned long long int) arr_6 [i_0] [i_1] [i_3]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? ((-(((/* implicit */int) arr_0 [i_2 - 1])))) : (((((/* implicit */int) var_1)) ^ (((/* implicit */int) arr_3 [i_0]))))))) : (arr_1 [2LL] [2LL])));
                    }
                } 
            } 
        } 
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_4 [i_0 - 1])))) ? (arr_1 [i_0] [i_0 - 3]) : (((/* implicit */long long int) ((0U) >> (((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)(-127 - 1))), (arr_7 [i_0 + 2] [(unsigned char)11] [(unsigned char)6] [(unsigned char)11] [14U] [i_0])))) - (65392))))))));
        arr_11 [i_0 + 2] = ((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(arr_1 [i_0 + 4] [(short)12])))))))));
        arr_12 [7LL] = ((/* implicit */signed char) ((min((var_0), (((/* implicit */unsigned int) arr_0 [i_0 + 4])))) + (((/* implicit */unsigned int) ((/* implicit */int) (((+(((/* implicit */int) (unsigned char)91)))) <= (((/* implicit */int) (unsigned short)7023))))))));
    }
    for (short i_4 = 0; i_4 < 13; i_4 += 2) 
    {
        arr_17 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_8 [i_4])), ((~(arr_14 [i_4])))))) ? (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) var_10))))))) : (((min((arr_14 [2LL]), (((/* implicit */unsigned long long int) (unsigned char)174)))) | (((/* implicit */unsigned long long int) var_0))))));
        var_14 = min((max((((((/* implicit */_Bool) -6860919666582665285LL)) ? (-9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((((/* implicit */_Bool) arr_6 [i_4] [i_4] [13ULL])) ? (((/* implicit */long long int) arr_13 [i_4] [i_4])) : (9223372036854775807LL))))), (((/* implicit */long long int) min((arr_13 [i_4] [i_4]), (arr_13 [i_4] [i_4])))));
        var_15 = ((/* implicit */signed char) var_5);
        /* LoopSeq 2 */
        for (unsigned int i_5 = 4; i_5 < 12; i_5 += 3) 
        {
            var_16 = ((/* implicit */short) var_0);
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) && ((!(((/* implicit */_Bool) min((((/* implicit */short) arr_15 [i_4] [i_4])), (arr_3 [i_5 - 3]))))))));
        }
        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            var_18 = ((/* implicit */signed char) (+((~(((((/* implicit */int) (unsigned short)62871)) / (((/* implicit */int) arr_15 [i_4] [5U]))))))));
            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_6])) && (((/* implicit */_Bool) var_9))))) : ((((!(arr_0 [1ULL]))) ? (((/* implicit */int) min((var_10), (((/* implicit */unsigned short) arr_18 [i_4]))))) : (((((((/* implicit */int) (short)-31885)) + (2147483647))) << (((((/* implicit */int) arr_8 [(short)6])) - (139)))))))));
            /* LoopSeq 1 */
            for (unsigned int i_7 = 0; i_7 < 13; i_7 += 2) 
            {
                arr_27 [i_4] = ((/* implicit */unsigned int) var_8);
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_4] [i_6] [i_7])) ? (((/* implicit */int) arr_24 [i_4] [i_6])) : (((((arr_20 [10U] [i_6]) + (2147483647))) >> (((1623393279U) - (1623393278U)))))));
                var_21 = ((/* implicit */unsigned int) arr_21 [i_6] [i_7]);
            }
            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (~((~(((((/* implicit */_Bool) arr_26 [i_4])) ? (((/* implicit */int) (unsigned short)40222)) : (((/* implicit */int) var_3)))))))))));
            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) min(((-((+(18446744073709551594ULL))))), (((/* implicit */unsigned long long int) (!(((((/* implicit */int) (signed char)23)) <= (((/* implicit */int) (short)-28280))))))))))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_8 = 2; i_8 < 11; i_8 += 2) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned int) arr_0 [i_4]);
            var_25 = ((/* implicit */unsigned long long int) var_7);
            /* LoopNest 2 */
            for (unsigned int i_9 = 1; i_9 < 11; i_9 += 4) 
            {
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    {
                        arr_38 [i_8] [(_Bool)1] = (~(arr_32 [i_10 - 1] [i_10 - 1] [i_10 - 1] [(unsigned short)6]));
                        arr_39 [i_4] [i_8 - 1] [1ULL] [i_10] [i_8 + 1] [(signed char)2] = ((/* implicit */unsigned int) arr_3 [i_4]);
                        var_26 = ((/* implicit */long long int) ((arr_20 [(unsigned short)10] [i_8 - 2]) >= (arr_20 [i_4] [i_8 - 1])));
                    }
                } 
            } 
        }
        for (unsigned long long int i_11 = 2; i_11 < 11; i_11 += 2) /* same iter space */
        {
            arr_44 [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), (min((arr_1 [i_4] [i_4]), (arr_36 [(unsigned char)6] [1ULL] [1ULL])))))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)16737)) ^ ((+(arr_20 [i_4] [i_4]))))))));
            arr_45 [i_4] = ((/* implicit */unsigned char) (~(min((4294967295U), (((/* implicit */unsigned int) (signed char)23))))));
        }
    }
    var_27 = ((/* implicit */unsigned long long int) (~(0U)));
}
