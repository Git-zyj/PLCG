/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91470
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
    var_18 = ((/* implicit */long long int) var_10);
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (int i_2 = 3; i_2 < 9; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */int) (-(arr_0 [i_2 - 3] [i_2 - 3])));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_20 |= ((/* implicit */long long int) var_13);
                                var_21 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((3887590547U) ^ (((/* implicit */unsigned int) 0))))) ? (var_17) : ((~(arr_10 [i_0] [i_1] [i_3] [(unsigned short)0])))));
                                var_22 = ((/* implicit */unsigned short) (~(var_4)));
                            }
                        } 
                    } 
                    arr_14 [i_0] = ((/* implicit */int) ((signed char) 750337518));
                    var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) || (((/* implicit */_Bool) -7337937887090793228LL)))))));
                    arr_15 [i_2 + 4] |= ((/* implicit */long long int) arr_11 [i_0] [i_1] [i_1] [i_1] [i_2 + 4]);
                }
            } 
        } 
        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) -2195955068960468835LL)) ? (-2020854825) : (((/* implicit */int) (unsigned short)39369))));
    }
    for (unsigned short i_5 = 4; i_5 < 17; i_5 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_6 = 1; i_6 < 15; i_6 += 2) 
        {
            /* LoopSeq 1 */
            for (int i_7 = 3; i_7 < 18; i_7 += 2) 
            {
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_16 [i_5]), (arr_16 [i_5])))) ? (((var_11) & (((/* implicit */unsigned long long int) arr_21 [i_5 + 2] [i_5] [i_6 - 1] [i_5])))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)30400)))))));
                var_26 = (i_5 % 2 == 0) ? ((((((-(((/* implicit */int) arr_23 [i_5 - 2])))) + (2147483647))) >> (((arr_21 [i_5 + 2] [i_6] [i_6 + 3] [i_5]) - (4457300465564955417LL))))) : ((((((-(((/* implicit */int) arr_23 [i_5 - 2])))) + (2147483647))) >> (((((arr_21 [i_5 + 2] [i_6] [i_6 + 3] [i_5]) - (4457300465564955417LL))) - (1910582488844760349LL)))));
                var_27 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((var_6) + (((/* implicit */unsigned long long int) arr_20 [i_7 - 2] [i_6]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_17 [i_5])))) : ((-(((7652307608153225379ULL) << (((((/* implicit */int) var_3)) - (35528)))))))));
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 19; i_8 += 4) 
                {
                    for (long long int i_9 = 0; i_9 < 19; i_9 += 3) 
                    {
                        {
                            var_28 = ((long long int) var_7);
                            var_29 = ((/* implicit */unsigned long long int) max((var_29), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1548213582)), (max((16225956645604629405ULL), (((/* implicit */unsigned long long int) -541470351))))))) ? (((/* implicit */unsigned long long int) (~(1955403828U)))) : (10401042707763349811ULL)))));
                            var_30 *= ((((/* implicit */_Bool) min((arr_19 [i_6]), (arr_19 [i_5 + 2])))) ? (((/* implicit */unsigned long long int) (+(arr_19 [i_5 + 2])))) : (min((var_11), (((/* implicit */unsigned long long int) var_13)))));
                            var_31 = max((((/* implicit */unsigned long long int) (~(((/* implicit */int) max((var_7), (((/* implicit */unsigned short) (signed char)127)))))))), ((-(arr_18 [i_5 + 1]))));
                        }
                    } 
                } 
            }
            /* LoopNest 3 */
            for (long long int i_10 = 1; i_10 < 18; i_10 += 1) 
            {
                for (unsigned short i_11 = 1; i_11 < 16; i_11 += 2) 
                {
                    for (unsigned short i_12 = 0; i_12 < 19; i_12 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17560))) : (arr_25 [i_10] [i_10 + 1] [i_5 - 1] [i_6 + 2] [i_11 - 1]))))));
                            arr_36 [i_5] [i_6 + 3] [i_10 + 1] [i_11] [i_12] [i_12] = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) arr_19 [i_5 - 1])), (var_14))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)55589))))));
                            var_33 = ((((/* implicit */_Bool) -1425898020)) ? (3788338226174482335LL) : (((/* implicit */long long int) 0)));
                            var_34 -= ((/* implicit */int) (short)-19503);
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 19; i_13 += 4) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 2) 
                {
                    for (unsigned long long int i_15 = 0; i_15 < 19; i_15 += 4) 
                    {
                        {
                            var_35 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(max((var_5), (((/* implicit */unsigned long long int) 4563864430976070636LL)))))))));
                            arr_46 [i_5 - 1] [i_5] = min((((/* implicit */unsigned long long int) (unsigned short)13885)), ((+(((((/* implicit */_Bool) var_1)) ? (var_11) : (var_14))))));
                        }
                    } 
                } 
            } 
        }
        var_36 = ((/* implicit */unsigned char) (+(min((((/* implicit */long long int) ((((/* implicit */_Bool) 128)) || (((/* implicit */_Bool) var_4))))), (min((arr_17 [i_5]), (((/* implicit */long long int) (signed char)54))))))));
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 11; i_16 += 4) 
    {
        var_37 = ((long long int) 11384714336469432315ULL);
        /* LoopNest 3 */
        for (signed char i_17 = 1; i_17 < 10; i_17 += 1) 
        {
            for (int i_18 = 3; i_18 < 9; i_18 += 1) 
            {
                for (unsigned short i_19 = 3; i_19 < 10; i_19 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (int i_20 = 0; i_20 < 11; i_20 += 2) 
                        {
                            arr_58 [i_16] [i_17] [i_18] [i_19 + 1] [i_20] = ((/* implicit */signed char) (-(arr_55 [i_20] [i_19 - 2] [i_19 - 2] [i_18 - 1] [i_17 + 1])));
                            var_38 = ((/* implicit */unsigned short) (+(arr_21 [i_16] [i_17 - 1] [i_19] [i_20])));
                        }
                        for (int i_21 = 0; i_21 < 11; i_21 += 1) 
                        {
                            var_39 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0))));
                            var_40 &= ((/* implicit */unsigned short) (+(arr_9 [i_17 + 1] [i_17 + 1] [i_17 + 1] [i_16] [i_17 + 1] [(unsigned short)10])));
                            var_41 = ((/* implicit */long long int) ((((/* implicit */int) arr_29 [i_21] [i_19 - 3] [i_18] [i_16])) + (((/* implicit */int) arr_29 [i_21] [i_19 - 2] [i_18 - 1] [i_17 + 1]))));
                        }
                        for (int i_22 = 0; i_22 < 11; i_22 += 4) 
                        {
                            arr_64 [i_16] [i_16] [i_17] [i_17] [i_16] [10ULL] [i_22] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_10))))));
                            var_42 = ((/* implicit */unsigned short) (-(arr_17 [i_16])));
                            var_43 -= ((/* implicit */unsigned long long int) ((unsigned char) (~(arr_57 [i_22] [i_19 - 3] [i_18] [i_17 - 1] [i_16]))));
                            var_44 = ((/* implicit */signed char) (-(arr_21 [i_19 - 2] [i_19 - 2] [i_19 + 1] [i_16])));
                        }
                        var_45 &= ((/* implicit */int) var_2);
                        var_46 = ((/* implicit */unsigned long long int) var_8);
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_23 = 1; i_23 < 11; i_23 += 3) 
    {
        var_47 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(max((1783037167), (-468087583)))))) * (max((((/* implicit */unsigned long long int) min((arr_24 [i_23] [18LL] [18LL] [i_23 + 2]), (arr_45 [(signed char)12] [i_23])))), (((((/* implicit */_Bool) var_9)) ? (var_14) : (arr_68 [1])))))));
        arr_69 [i_23 + 1] = var_15;
        var_48 = ((/* implicit */unsigned short) max((var_48), (((/* implicit */unsigned short) var_11))));
    }
    var_49 = ((/* implicit */int) min((var_49), (((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32760))))))) : (var_14))))));
}
