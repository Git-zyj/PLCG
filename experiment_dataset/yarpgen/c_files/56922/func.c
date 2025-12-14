/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56922
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
    var_11 &= ((/* implicit */unsigned short) var_9);
    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)96)) ? (var_0) : (((/* implicit */int) (unsigned short)20731))))) ? (min((var_4), (var_4))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)511)) <= (((/* implicit */int) (_Bool)1)))))))) <= (((/* implicit */long long int) ((unsigned int) (~(var_10))))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned int) (_Bool)1)), (10690231U)));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)229)) >> (((/* implicit */int) ((((/* implicit */int) arr_1 [(short)14])) <= (((/* implicit */int) arr_0 [i_2])))))))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((long long int) var_10))))))))));
                    arr_8 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 10690228U)) ? (8160) : (734778959)));
                }
            } 
        } 
        /* LoopSeq 4 */
        for (short i_3 = 3; i_3 < 15; i_3 += 1) 
        {
            var_14 = ((/* implicit */int) ((unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) -734778972)) : (649771747U)))), (8609861608155918265LL))));
            var_15 += ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) & (((/* implicit */int) (short)63))))), (((((/* implicit */_Bool) 781291230)) ? (((/* implicit */unsigned long long int) 3315128652U)) : (18446744073709551608ULL))))) < (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned char)120)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))))))));
            arr_11 [i_0 - 1] [i_3] [i_3] = max(((unsigned char)65), (((/* implicit */unsigned char) (signed char)(-127 - 1))));
        }
        /* vectorizable */
        for (long long int i_4 = 1; i_4 < 15; i_4 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_5 = 3; i_5 < 17; i_5 += 4) 
            {
                for (unsigned long long int i_6 = 2; i_6 < 16; i_6 += 4) 
                {
                    {
                        var_16 = ((/* implicit */unsigned int) (-(var_5)));
                        var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 18446744073709551608ULL)) ? (((/* implicit */int) (signed char)80)) : (-734778945))) > (((((/* implicit */_Bool) arr_15 [i_4] [i_4])) ? (2147483647) : (((/* implicit */int) (unsigned char)255))))));
                        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (+(((/* implicit */int) arr_14 [i_6] [i_5] [i_4 + 1])))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned char i_7 = 1; i_7 < 17; i_7 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_8 = 2; i_8 < 17; i_8 += 2) 
                {
                    arr_28 [i_0] [i_7] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_22 [i_8] [i_8 - 2] [i_8 + 1] [i_7 + 1]))));
                    arr_29 [i_7] [i_4] [12LL] [i_4] = ((/* implicit */unsigned short) var_4);
                    /* LoopSeq 2 */
                    for (long long int i_9 = 3; i_9 < 18; i_9 += 1) 
                    {
                        arr_32 [i_7] = ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (1353136921808535366ULL)))) : (((int) -734778958)));
                        arr_33 [i_0] [i_4 + 2] [12ULL] [i_7] [i_9] = ((/* implicit */_Bool) ((((_Bool) (short)-30449)) ? (((((/* implicit */_Bool) arr_16 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (var_0) : (((/* implicit */int) (unsigned short)24358)))) : ((-(((/* implicit */int) (unsigned short)7680))))));
                        var_19 ^= var_10;
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_37 [i_7] [i_4] [i_7] [i_7] [i_7] [1ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_4 + 1] [i_8 + 1])) ? (arr_7 [i_0 + 1] [i_4 + 4] [i_8 - 1]) : (arr_12 [i_4 + 4] [i_8 - 1])));
                        var_20 = ((/* implicit */unsigned char) (~(2147483647)));
                    }
                    arr_38 [i_7] = ((/* implicit */signed char) ((var_5) & (((/* implicit */int) (signed char)60))));
                }
                for (unsigned int i_11 = 4; i_11 < 18; i_11 += 3) 
                {
                    var_21 = ((/* implicit */long long int) arr_34 [15ULL] [i_4] [i_4 - 1] [(unsigned char)18] [6LL] [i_7] [i_7 - 1]);
                    var_22 = ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) -2147483647)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_7])))) : (((((/* implicit */_Bool) -5793220781858153699LL)) ? (var_0) : (((/* implicit */int) (short)-30457)))));
                    var_23 -= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_22 [i_0] [i_0] [i_7 + 1] [i_11])) : (((/* implicit */int) var_2))))));
                }
                var_24 = ((/* implicit */long long int) min((var_24), (((((/* implicit */long long int) (-2147483647 - 1))) | (arr_25 [14LL] [14LL])))));
                arr_41 [i_0 - 1] [i_7] [i_7] [i_0 + 1] = ((/* implicit */long long int) ((unsigned char) -1042407918));
            }
        }
        for (short i_12 = 0; i_12 < 19; i_12 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned char i_13 = 0; i_13 < 19; i_13 += 3) 
            {
                for (unsigned int i_14 = 0; i_14 < 19; i_14 += 3) 
                {
                    for (unsigned int i_15 = 2; i_15 < 18; i_15 += 3) 
                    {
                        {
                            arr_52 [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */int) ((max((9087644696745323702LL), (9087644696745323702LL))) < (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (var_5) : (arr_13 [i_0]))))))) : (max((((/* implicit */int) arr_34 [i_0] [i_13] [i_13] [i_15] [i_15 + 1] [i_15] [i_15 - 1])), (((((/* implicit */_Bool) arr_17 [(_Bool)0] [(_Bool)0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (short)30439))))))));
                            arr_53 [i_0] [i_12] [i_0] [i_0] [i_13] = ((/* implicit */unsigned short) (+(max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (1412389887U)))), ((~(9223372036854775787LL)))))));
                            arr_54 [i_13] [i_13] [i_14] = ((/* implicit */long long int) (+((+(((/* implicit */int) min((var_1), (((/* implicit */short) var_6)))))))));
                            var_25 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (+(arr_36 [i_15 + 1] [i_14] [7LL] [i_12] [i_12] [7LL])))), (max((13603533490708456248ULL), (12688738427887805577ULL)))));
                            var_26 -= ((/* implicit */unsigned long long int) (-(max((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned char)158)) : (((/* implicit */int) arr_21 [i_12] [i_14] [i_0] [i_12])))), (((var_0) / (arr_12 [i_12] [i_12])))))));
                        }
                    } 
                } 
            } 
            arr_55 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 2054988985U)) ? (((/* implicit */int) (signed char)110)) : (734778940)));
            var_27 ^= ((/* implicit */_Bool) arr_46 [i_12] [i_12] [i_12]);
        }
        for (long long int i_16 = 2; i_16 < 18; i_16 += 3) 
        {
            /* LoopNest 3 */
            for (long long int i_17 = 0; i_17 < 19; i_17 += 4) 
            {
                for (long long int i_18 = 2; i_18 < 17; i_18 += 4) 
                {
                    for (unsigned long long int i_19 = 0; i_19 < 19; i_19 += 2) 
                    {
                        {
                            arr_68 [i_0] [i_0] [i_16] [i_18] [i_0] [i_0] = ((/* implicit */long long int) (~((~((-(2239978311U)))))));
                            arr_69 [i_16] [(_Bool)0] = ((/* implicit */long long int) 18446744073709551615ULL);
                        }
                    } 
                } 
            } 
            var_28 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) 4294967295U)) ? (9223372036854775787LL) : (((/* implicit */long long int) var_7)))));
        }
    }
    for (unsigned long long int i_20 = 0; i_20 < 12; i_20 += 3) 
    {
        var_29 -= ((/* implicit */unsigned int) arr_34 [i_20] [i_20] [i_20] [i_20] [i_20] [4LL] [i_20]);
        arr_74 [i_20] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) arr_57 [i_20])))))) ? (min((var_10), (((/* implicit */int) ((short) var_6))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) > (((int) var_9)))))));
    }
}
