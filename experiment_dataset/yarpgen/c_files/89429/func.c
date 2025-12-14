/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89429
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
    for (long long int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        arr_4 [i_0 - 1] = ((/* implicit */unsigned long long int) min((6403530837003910196LL), (6267758789346860377LL)));
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) 8570861882438698014LL))));
        arr_5 [i_0] [i_0 - 2] &= ((/* implicit */long long int) var_15);
        arr_6 [i_0] [i_0 - 3] = ((/* implicit */short) (-(((/* implicit */int) (signed char)16))));
        arr_7 [i_0] = arr_1 [i_0];
    }
    for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            arr_13 [i_1] = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */unsigned short) var_15)), (var_7)))) == (((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) 4294967295U)) + (arr_0 [i_1 + 1])))))));
            var_18 += ((/* implicit */unsigned short) min((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned long long int) arr_0 [i_1 + 1]))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 6777765328925744486LL)), (var_1)))))))));
        }
        for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            var_19 -= (~(2501952181U));
            /* LoopNest 2 */
            for (signed char i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            arr_23 [(unsigned short)9] [i_3] [i_4] [i_5] [i_6] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2232759036U))));
                            var_20 = ((((/* implicit */_Bool) ((unsigned short) var_9))) ? (min((arr_17 [i_1]), (var_0))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1] [i_1]))) - (var_6)))));
                        }
                        var_21 *= ((/* implicit */unsigned int) ((max((arr_22 [i_1 - 1] [i_3] [i_4] [i_5] [i_4] [i_4] [i_5]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2557967036U)) ? (var_16) : (((/* implicit */long long int) var_4))))))) + (((/* implicit */unsigned long long int) max((arr_3 [i_1 - 1]), (arr_3 [i_1 - 1]))))));
                        var_22 = ((/* implicit */unsigned short) 2525352037U);
                        arr_24 [i_1 - 1] [i_1] [i_1 - 1] [i_4] [i_5] = ((/* implicit */unsigned int) (~(min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_3]))))), (var_16)))));
                        var_23 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_19 [i_5] [i_5] [i_4] [i_3] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? ((~(10776103119875068958ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_8)), (arr_8 [i_4] [i_3])))))) == (((/* implicit */unsigned long long int) arr_8 [i_1] [i_3]))));
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_1])), (min((var_1), (((/* implicit */unsigned long long int) var_16)))))))));
            var_25 = ((/* implicit */unsigned int) (+((-(arr_9 [i_1 - 1])))));
            arr_25 [i_1] [i_3] [i_3] = ((/* implicit */unsigned short) (+(max((((var_5) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_15 [i_1] [i_3])) : (((/* implicit */int) arr_2 [i_3])))))))));
        }
        for (unsigned short i_7 = 0; i_7 < 10; i_7 += 3) 
        {
            var_26 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_27 [i_1 - 1]))));
            arr_28 [i_1 + 1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12026))) == (7021691157051874711ULL))))));
            var_27 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) & (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) - (arr_14 [i_1 - 1] [i_1])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_15))))) : (((((/* implicit */_Bool) arr_16 [i_1] [i_1 + 1] [i_7] [i_7])) ? (arr_22 [i_1] [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))));
        }
        var_28 = ((/* implicit */unsigned short) (+(max((4436066988334156090ULL), (((/* implicit */unsigned long long int) (signed char)76))))));
        arr_29 [i_1] &= ((/* implicit */long long int) var_11);
        arr_30 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((((-5757828460517185429LL) - (((/* implicit */long long int) ((/* implicit */int) (short)-16364))))), (-8265147428411656622LL)))) * (min((((/* implicit */unsigned long long int) var_12)), (var_13)))));
        /* LoopNest 2 */
        for (signed char i_8 = 0; i_8 < 10; i_8 += 2) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 1) 
            {
                {
                    arr_36 [i_9] [i_8] [i_1] &= ((/* implicit */long long int) max((max((((/* implicit */unsigned int) ((short) var_2))), (3767186698U))), (((/* implicit */unsigned int) (unsigned short)64926))));
                    var_29 = ((/* implicit */unsigned short) arr_32 [i_1]);
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 10; i_10 += 2) 
                    {
                        for (short i_11 = 0; i_11 < 10; i_11 += 2) 
                        {
                            {
                                arr_42 [i_1 - 1] [i_8] [i_9] [i_10] [i_11] [i_8] [i_8] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 - 1])) ? (arr_39 [i_1] [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 + 1]) : (arr_39 [i_1] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1] [i_1 + 1])))) ? (((/* implicit */unsigned long long int) (+(arr_39 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1] [i_1] [i_1 + 1])))) : (16167685477288623013ULL));
                                arr_43 [i_1 + 1] [i_1] [i_1 - 1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(((arr_17 [i_1 - 1]) - (arr_17 [i_1 - 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned short i_12 = 0; i_12 < 19; i_12 += 4) 
    {
        var_30 = ((((/* implicit */_Bool) arr_45 [i_12])) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-4))) + (var_4)))) : (((((/* implicit */_Bool) var_10)) ? (min((arr_46 [i_12]), (((/* implicit */unsigned long long int) (signed char)-52)))) : (((/* implicit */unsigned long long int) var_16)))));
        arr_47 [i_12] = ((/* implicit */unsigned short) min((2762371402U), (((/* implicit */unsigned int) (unsigned short)27766))));
        /* LoopSeq 1 */
        for (long long int i_13 = 3; i_13 < 17; i_13 += 1) 
        {
            var_31 ^= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)37749))))) ? (arr_46 [i_13 - 2]) : (max((((arr_49 [i_13]) / (((/* implicit */unsigned long long int) var_16)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27754))) > (arr_46 [i_12]))))))));
            /* LoopNest 2 */
            for (long long int i_14 = 3; i_14 < 17; i_14 += 1) 
            {
                for (short i_15 = 0; i_15 < 19; i_15 += 1) 
                {
                    {
                        arr_55 [i_14] = ((/* implicit */signed char) ((((/* implicit */int) (((-(arr_52 [i_12] [9ULL]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_13 - 3])))))) == (((/* implicit */int) min((((unsigned short) var_4)), (min((var_8), (((/* implicit */unsigned short) arr_44 [i_14])))))))));
                        arr_56 [i_12] [i_13 + 1] [i_13 + 1] [i_15] &= ((/* implicit */short) max(((~(((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_45 [i_12]))))))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)27774)))))));
                    }
                } 
            } 
        }
    }
    var_32 = max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_11)))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) % (var_3))))), (((/* implicit */unsigned long long int) max((((/* implicit */signed char) ((((/* implicit */unsigned long long int) 1LL)) > (var_1)))), (var_2)))));
}
