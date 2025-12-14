/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88740
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
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_0] [i_0] = ((((/* implicit */_Bool) ((min((144115188075855871ULL), (0ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */long long int) (+(-1073741824)))) ^ (arr_3 [i_0 + 2]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)(-127 - 1)))))) <= (max((arr_1 [i_1 + 1]), (((/* implicit */unsigned long long int) 2097151)))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 21; i_2 += 2) 
                {
                    for (long long int i_3 = 3; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_13)) ? (var_3) : (var_17))) / (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-1LL))))) << ((((+(((/* implicit */int) var_0)))) - (9213))))))));
                            arr_11 [i_3] = ((/* implicit */_Bool) ((((/* implicit */long long int) (-(arr_9 [i_3 - 2] [i_3] [i_3] [i_3 + 1] [i_3] [i_3])))) ^ (min((max((-14LL), (10LL))), (((/* implicit */long long int) ((var_2) != (((/* implicit */int) var_7)))))))));
                            arr_12 [18LL] [i_1 - 1] = ((/* implicit */_Bool) (+(((((/* implicit */int) (_Bool)0)) << (((2147483647) - (2147483636)))))));
                            var_20 = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((arr_1 [i_0]), (var_1)))) && (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))) == (((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_6 [i_3] [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 1) 
            {
                {
                    arr_23 [i_4] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (-13LL) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_5] [i_6])))))) || (((_Bool) arr_13 [i_4] [i_4]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 3) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_8 = 3; i_8 < 13; i_8 += 2) 
                        {
                            arr_29 [i_7] [i_5] [i_6] [i_7] [i_6] [i_4] [i_4] = ((/* implicit */int) (-(((18446744073709551599ULL) / (var_10)))));
                            var_21 = ((/* implicit */long long int) arr_18 [i_4] [i_4] [(signed char)6]);
                            arr_30 [i_6] [i_6] [i_7] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_4] [i_4] [i_4] [9ULL] [i_5])) ? (arr_28 [i_4] [i_5] [i_6] [i_4] [i_6]) : (((/* implicit */long long int) arr_9 [i_8] [i_5] [i_6] [i_7] [i_8 + 2] [i_8 - 2]))));
                            arr_31 [i_4] [i_7] = var_5;
                            var_22 = ((/* implicit */long long int) (-(((/* implicit */int) var_15))));
                        }
                        /* vectorizable */
                        for (short i_9 = 0; i_9 < 15; i_9 += 1) 
                        {
                            arr_35 [i_4] [i_4] [i_4] [8LL] [(_Bool)1] |= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_0)) ? (18446744073709551598ULL) : (67108863ULL)))));
                            arr_36 [i_7] [i_7] [i_6] [i_4] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_8)) : (-1)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_18))));
                            arr_37 [i_9] [i_7] [i_6] [i_7] [i_4] = ((((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_24 [i_4] [i_5] [i_6] [i_7] [i_6]) : (var_12))) + (2147483647))) << (((((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_6 [i_5] [i_6] [i_5]) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))) - (1513062347574048851ULL))));
                            arr_38 [3LL] [i_5] [i_6] [i_7] [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)3)) ? (arr_27 [i_4] [i_4] [i_4] [i_7] [14]) : (-2147483643))))));
                        }
                        for (unsigned short i_10 = 0; i_10 < 15; i_10 += 3) 
                        {
                            arr_41 [(_Bool)1] [i_10] [i_7] [i_7] [i_5] = ((/* implicit */long long int) 18);
                            var_23 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)31)) == (((/* implicit */int) (_Bool)1)))))) - (((min((arr_26 [i_5] [i_6] [i_7] [i_10]), (((/* implicit */unsigned long long int) 1LL)))) - (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), ((-2147483647 - 1)))))))));
                            var_24 = ((/* implicit */int) ((long long int) ((signed char) (unsigned char)243)));
                        }
                        var_25 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_4] [i_5] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_5] [i_6] [i_7])))) ? (((/* implicit */int) ((((/* implicit */int) var_15)) == (((/* implicit */int) var_18))))) : ((+(((/* implicit */int) (unsigned char)42))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 15; i_11 += 1) 
                    {
                        for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((unsigned long long int) var_17)))));
                                var_27 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))), (max((((/* implicit */long long int) var_8)), (var_17)))))) ? (arr_1 [9ULL]) : (((/* implicit */unsigned long long int) var_17))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_13 = 1; i_13 < 23; i_13 += 2) 
    {
        for (signed char i_14 = 3; i_14 < 23; i_14 += 4) 
        {
            for (unsigned short i_15 = 0; i_15 < 25; i_15 += 4) 
            {
                {
                    var_28 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) ((((((/* implicit */_Bool) arr_54 [i_13] [i_14] [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) arr_50 [i_13]))) : (9223372036854775807LL))) == (((/* implicit */long long int) ((/* implicit */int) arr_52 [i_14]))))))));
                    var_29 -= ((/* implicit */long long int) var_9);
                    arr_55 [i_13] [i_14] [i_13] [12ULL] = ((/* implicit */short) ((((((((/* implicit */int) var_8)) + (2147483647))) << (((((/* implicit */int) var_11)) - (1))))) ^ (((int) arr_47 [i_13 + 2]))));
                }
            } 
        } 
    } 
}
