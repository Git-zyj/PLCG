/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72750
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
    var_15 = ((/* implicit */unsigned short) var_13);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        var_16 = (+(((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */long long int) (unsigned short)65533))))) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)65519), (((/* implicit */unsigned short) var_13)))))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((unsigned short) (!(arr_6 [i_0 + 2])))))));
            arr_7 [i_0] [i_1] [i_1] = ((/* implicit */short) (unsigned short)65533);
            arr_8 [i_1] [i_0] [i_0] = ((/* implicit */int) ((unsigned int) ((signed char) (~(666702130U)))));
            arr_9 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((unsigned long long int) var_7))))) ? (((/* implicit */unsigned long long int) min(((+(var_7))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_1)))))))) : (min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_1])), (var_1)))));
        }
    }
    for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_3 = 2; i_3 < 12; i_3 += 4) 
        {
            var_18 = ((((/* implicit */_Bool) ((var_7) + (((/* implicit */long long int) arr_13 [i_3 + 2] [i_3 + 1]))))) ? (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 6)) ? (((/* implicit */int) arr_4 [i_2] [i_3] [i_3])) : (((/* implicit */int) var_3))))))) : (0U));
            var_19 = ((/* implicit */int) arr_3 [i_3]);
            var_20 ^= ((/* implicit */unsigned long long int) min((min((2147483647), (((/* implicit */int) (unsigned short)65533)))), (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_12 [i_3] [i_3 - 1] [i_3 + 1]))))));
            arr_15 [i_2] [i_3] [i_3] = ((/* implicit */short) arr_13 [i_3 + 1] [i_3 - 2]);
            /* LoopNest 2 */
            for (short i_4 = 1; i_4 < 11; i_4 += 4) 
            {
                for (unsigned int i_5 = 0; i_5 < 14; i_5 += 1) 
                {
                    {
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (_Bool)1))));
                        var_22 *= ((/* implicit */short) ((((var_11) | (((/* implicit */long long int) arr_20 [i_3 - 1] [i_4 + 2])))) % (((long long int) (_Bool)1))));
                    }
                } 
            } 
        }
        for (long long int i_6 = 0; i_6 < 14; i_6 += 1) 
        {
            var_23 = ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (max((arr_20 [i_2] [i_6]), (14U))));
            arr_25 [i_2] = ((/* implicit */unsigned short) ((((arr_19 [i_6]) ? (5547441628314673691LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_6]))))) >= (((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_2])) << (((4294967295U) - (4294967280U))))))));
            arr_26 [i_2] [i_2] [i_2] = ((/* implicit */short) 23ULL);
        }
        arr_27 [i_2] [i_2] = ((/* implicit */unsigned int) (((!((_Bool)1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_2]))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) < ((-(18446744073709551612ULL))))))));
        var_24 += ((/* implicit */unsigned short) (+((~(var_0)))));
    }
    for (long long int i_7 = 1; i_7 < 18; i_7 += 4) 
    {
        arr_31 [i_7] = var_12;
        /* LoopNest 2 */
        for (short i_8 = 0; i_8 < 21; i_8 += 4) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 2) 
            {
                {
                    var_25 += ((/* implicit */short) arr_35 [i_7] [i_8]);
                    var_26 += ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(4294967286U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_8] [i_8] [i_9]))) : (2535890854U)))), (((((((/* implicit */_Bool) 2535890854U)) ? (0ULL) : (((/* implicit */unsigned long long int) 7LL)))) << (((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 2 */
                    for (short i_10 = 0; i_10 < 21; i_10 += 4) /* same iter space */
                    {
                        var_27 |= ((/* implicit */_Bool) arr_34 [i_10]);
                        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_7 + 3])) ? (((/* implicit */int) arr_32 [i_7 + 3])) : (((/* implicit */int) arr_32 [i_7 + 3]))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_32 [i_7 + 3])) ? (((/* implicit */int) arr_32 [i_7 + 2])) : (((/* implicit */int) arr_32 [i_7 + 1]))))));
                    }
                    for (short i_11 = 0; i_11 < 21; i_11 += 4) /* same iter space */
                    {
                        arr_43 [i_7] = ((/* implicit */unsigned int) (+(((5547441628314673683LL) & (var_10)))));
                        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) min((((unsigned long long int) (short)32640)), (((/* implicit */unsigned long long int) ((arr_37 [i_7 - 1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_11] [i_9] [i_8] [i_7])))))))))));
                    }
                }
            } 
        } 
        var_30 *= ((/* implicit */_Bool) arr_37 [i_7]);
    }
    for (unsigned short i_12 = 0; i_12 < 23; i_12 += 4) 
    {
        var_31 = ((/* implicit */unsigned short) (~(1759076441U)));
        var_32 *= ((/* implicit */short) (-(arr_45 [i_12])));
        arr_47 [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_45 [i_12]) / (arr_45 [i_12])))) && (((18446744073709551615ULL) <= (arr_45 [i_12])))));
    }
}
