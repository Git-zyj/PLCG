/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63189
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
    var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_14))) ? (var_5) : (max((((/* implicit */unsigned long long int) var_14)), (5997094665419472706ULL)))))) ? (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_8))))) : (var_8));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1]))));
            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_4 [i_0 + 3] [i_1])) : (((/* implicit */int) arr_4 [i_0 + 3] [i_0])))), (((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_1])) ? (((/* implicit */int) arr_2 [i_0 + 3] [i_0 + 2])) : (((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1])))))))));
            arr_5 [i_1] [i_0] = ((/* implicit */unsigned short) max((((_Bool) (-(arr_3 [i_1])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_1]), (((/* implicit */unsigned short) arr_4 [i_1] [i_0])))))) > (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))))));
            arr_6 [i_0] = ((/* implicit */unsigned long long int) var_10);
            /* LoopSeq 2 */
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                var_22 |= ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1] [i_0 - 1])))))));
                arr_11 [i_0 + 1] [i_1] [i_2] = ((/* implicit */unsigned short) min((15ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0] [i_0 + 2])))))));
            }
            /* vectorizable */
            for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                var_23 = 0ULL;
                var_24 += ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)39644)) >> (21ULL)));
            }
        }
        var_25 |= max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0 + 3]))))), (((((((/* implicit */unsigned long long int) -1860072329073291656LL)) * (var_11))) - (((/* implicit */unsigned long long int) (+(1479169067)))))));
        var_26 *= arr_14 [i_0] [i_0] [i_0];
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            for (long long int i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    {
                        var_27 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((15960807222091545406ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 + 2] [i_4]))))))))), ((-(arr_14 [i_0] [i_0 + 2] [i_0 + 2])))));
                        arr_23 [i_4] [i_4] [i_4] [i_4] [i_4] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_6]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_16 [i_0 + 3] [i_4] [i_5])) ? (((/* implicit */int) arr_19 [i_4] [i_6])) : (arr_21 [i_6] [i_5] [i_4] [4LL])))))) : (max((((((/* implicit */_Bool) arr_20 [i_4] [i_4] [i_4] [i_4] [i_4])) ? (arr_9 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)93))))), ((~(18182952556732813286ULL)))))));
                        var_28 *= ((/* implicit */unsigned long long int) ((long long int) arr_9 [(unsigned char)6]));
                        var_29 = ((/* implicit */unsigned int) (unsigned short)8546);
                    }
                } 
            } 
        } 
        var_30 = ((((/* implicit */_Bool) ((long long int) 130944U))) ? (((((/* implicit */_Bool) ((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2368)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 + 2] [i_0 + 2]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3))) + (arr_10 [i_0 - 1] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_16 [i_0 + 1] [i_0 + 3] [i_0 + 3])))));
    }
    var_31 = ((/* implicit */unsigned short) var_15);
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_7 = 0; i_7 < 11; i_7 += 1) /* same iter space */
    {
        var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_7])))))));
        var_33 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_7]))));
    }
    for (int i_8 = 0; i_8 < 11; i_8 += 1) /* same iter space */
    {
        arr_32 [i_8] = (-(arr_29 [i_8]));
        arr_33 [i_8] = max((((((/* implicit */long long int) ((((/* implicit */int) arr_19 [2] [i_8])) << (((var_4) + (1244218263)))))) < (max((((/* implicit */long long int) arr_22 [i_8] [i_8] [i_8] [i_8])), (-5240157173716781052LL))))), (((((arr_27 [i_8] [i_8]) - (((/* implicit */unsigned long long int) arr_22 [i_8] [i_8] [i_8] [i_8])))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [(unsigned short)0] [(unsigned short)0]))) >= (arr_16 [i_8] [i_8] [i_8]))))))));
        var_34 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)56989))));
        var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(4160827709427126429LL)))) && (((/* implicit */_Bool) ((((_Bool) var_17)) ? ((+(arr_14 [i_8] [i_8] [5ULL]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_8] [i_8])) ? (arr_15 [13ULL] [i_8] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_8])))))))))));
    }
    for (int i_9 = 0; i_9 < 11; i_9 += 1) /* same iter space */
    {
        var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) ((int) ((((((/* implicit */_Bool) (unsigned short)25912)) ? (14321425505271637607ULL) : (264921129882100268ULL))) / (((((/* implicit */unsigned long long int) 4294836351U)) ^ (1481888863239204948ULL)))))))));
        arr_37 [i_9] = min((((((/* implicit */_Bool) arr_0 [i_9])) ? (((/* implicit */int) arr_0 [i_9])) : (((/* implicit */int) arr_0 [i_9])))), (((/* implicit */int) max((arr_0 [i_9]), (arr_0 [i_9])))));
    }
}
