/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57371
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
    for (long long int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_1] [i_1] &= max((((/* implicit */unsigned long long int) min((max((arr_3 [(signed char)1] [i_0 + 1] [i_0 - 1]), (arr_3 [i_0] [i_0] [i_1]))), (((/* implicit */long long int) (short)18668))))), (((((/* implicit */_Bool) arr_4 [i_1] [i_0 + 1] [i_0])) ? (arr_4 [i_1] [i_0 + 1] [i_0]) : (7849034560378971960ULL))));
                var_15 += ((/* implicit */unsigned long long int) max((min((3365386741067537574LL), (arr_1 [i_0 + 2]))), (((((/* implicit */_Bool) var_7)) ? (4509310479374113976LL) : (arr_2 [i_0 + 1] [i_0 + 1])))));
                arr_7 [i_0 - 1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) (signed char)52)) : (((/* implicit */int) (short)-17))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_1 [i_0 + 2]))) : (((((arr_1 [i_0 + 2]) + (9223372036854775807LL))) >> (((/* implicit */int) (signed char)33))))));
            }
        } 
    } 
    var_16 *= ((/* implicit */short) var_6);
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        /* LoopSeq 3 */
        for (signed char i_3 = 1; i_3 < 17; i_3 += 4) 
        {
            var_17 ^= ((((((/* implicit */long long int) ((/* implicit */int) var_0))) <= (arr_2 [i_2] [i_2]))) ? (((((/* implicit */_Bool) (signed char)9)) ? (16621429716803126268ULL) : (((/* implicit */unsigned long long int) arr_2 [10ULL] [i_3 - 1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-42)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-122))) : (-4993730179959071561LL)))));
            arr_14 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-43)) + (2147483647))) >> (((((/* implicit */int) (short)-18668)) + (18679)))))) ? (2912943083970431662ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-32)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) var_9))))) ? (arr_2 [i_3 + 1] [i_3 + 1]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -1LL)) > (arr_0 [i_2] [i_2])))))))) : (max((var_5), (((/* implicit */unsigned long long int) arr_3 [i_3 + 1] [i_3 + 1] [i_3]))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_5 = 4; i_5 < 15; i_5 += 2) 
            {
                for (long long int i_6 = 0; i_6 < 18; i_6 += 2) 
                {
                    {
                        arr_24 [i_4] [i_4] [i_5] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_5 - 1] [i_5 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (0LL)))) ? (min((-64489960792328749LL), (((/* implicit */long long int) (signed char)49)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-20))) : (var_3)))));
                        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (signed char)-88)) ? (5870842463853928078ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-4))))) : (((/* implicit */unsigned long long int) arr_3 [i_5 - 2] [16LL] [16LL]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_2] [i_2] [i_2]))) : (2341083265464973837LL)))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_17 [10ULL] [(signed char)11] [10ULL])) : (((/* implicit */int) var_2)))) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((var_10) >= (var_1)))))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_7 = 2; i_7 < 17; i_7 += 4) 
            {
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_7] [i_7 - 1] [i_7] [i_7 + 1])) ? (((/* implicit */unsigned long long int) -2341083265464973831LL)) : (arr_20 [i_7] [i_7 - 1] [i_7 + 1] [(short)14])))) ? (((((/* implicit */_Bool) var_1)) ? (arr_20 [i_2] [i_7 + 1] [i_7] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)127))))) : (max((arr_20 [i_2] [i_7 - 2] [8LL] [i_7 - 2]), (((/* implicit */unsigned long long int) var_9))))));
                arr_27 [i_2] [i_4] [i_4] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((10875199246479483563ULL), (9729570702247279183ULL)))) ? (max((var_3), (var_1))) : (max((((/* implicit */long long int) arr_15 [i_7] [i_2] [i_7 + 1])), (arr_22 [i_7 - 1] [i_7 - 2] [i_7 - 1] [i_7 - 2] [i_7 - 1])))));
                /* LoopSeq 1 */
                for (signed char i_8 = 3; i_8 < 16; i_8 += 3) 
                {
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_17 [i_2] [i_2] [i_2])) != (((/* implicit */int) (signed char)-78)))) ? (arr_28 [i_7] [i_7 - 2] [i_7 - 2] [i_7] [i_7]) : (-2341083265464973849LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-57)) & (((/* implicit */int) (signed char)-70))))) : (((((/* implicit */_Bool) -2341083265464973849LL)) ? (arr_23 [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)66))))))))));
                    var_21 ^= ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) (signed char)-9)), (13240661996435127118ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (arr_1 [i_7 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_9 = 2; i_9 < 16; i_9 += 2) 
                {
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) var_1)) : (144115188075855871ULL)));
                    var_23 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_7 - 2])) && (((/* implicit */_Bool) 8812285144927598299ULL))));
                    var_24 -= ((arr_19 [i_9 - 1] [i_9 + 2]) / (var_3));
                    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)27)) ? (8831930837497535648LL) : (2341083265464973812LL))))));
                    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) -9223372036854775803LL)) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) 144115188075855871LL)) ? (((/* implicit */int) (short)-32762)) : (((/* implicit */int) (short)9613))))));
                }
                var_27 += ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_25 [i_7 - 1] [i_2] [i_7 - 1])) ? (3532506175204988323LL) : (2783382414484508825LL))) & (((var_1) % (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
            }
        }
        for (long long int i_10 = 2; i_10 < 16; i_10 += 3) 
        {
            /* LoopSeq 1 */
            for (signed char i_11 = 1; i_11 < 17; i_11 += 2) 
            {
                arr_36 [i_2] [i_2] [i_10] [i_11] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 13663906126613261655ULL)) ? (arr_18 [i_11 + 1] [(signed char)12] [i_11 - 1]) : (arr_18 [i_11 + 1] [i_11] [i_11 - 1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_10 - 1] [11LL] [i_10 + 2])) ? (((/* implicit */int) arr_10 [i_10 + 1] [i_11 + 1])) : (((/* implicit */int) var_8)))))));
                arr_37 [i_2] [i_11] [i_2] = ((/* implicit */short) ((((var_10) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)54))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)85)) + (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_32 [i_2]))))))) : (min((((/* implicit */unsigned long long int) (signed char)-103)), (max((arr_4 [i_2] [i_2] [(signed char)3]), (var_14)))))));
            }
            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2233785415175766016LL)) ? (max((3094634082888809571ULL), (((/* implicit */unsigned long long int) -4752822533580063803LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)102)))));
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_12 = 1; i_12 < 17; i_12 += 4) 
        {
            arr_41 [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_12 - 1])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_12 + 1])))));
            arr_42 [i_2] [i_12] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_25 [i_2] [i_12 - 1] [i_12 - 1])) != (((/* implicit */int) arr_33 [i_2] [i_12] [i_12 + 1]))));
        }
        for (long long int i_13 = 2; i_13 < 17; i_13 += 2) 
        {
            var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-19904)) + (2147483647))) >> (((-236306323927623276LL) + (236306323927623300LL))))))));
            var_30 ^= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) var_1)) ^ (36028796985409536ULL))) >= (((((/* implicit */_Bool) arr_4 [i_13 - 2] [i_13] [i_13 - 2])) ? (arr_4 [i_13 - 2] [i_13] [i_13 - 2]) : (var_13)))));
            var_31 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_17 [i_2] [i_2] [i_13 + 1])) : (((/* implicit */int) arr_17 [i_13] [i_13] [i_13 - 2]))))) ? (((((/* implicit */_Bool) min((((/* implicit */short) var_6)), (var_2)))) ? (((((/* implicit */_Bool) (short)17569)) ? (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_2]))) : (-4752822533580063822LL))) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) ((((/* implicit */int) (short)2331)) << (((((/* implicit */int) var_11)) - (103)))))));
        }
        for (short i_14 = 0; i_14 < 18; i_14 += 2) 
        {
            var_32 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 18410715276724142071ULL)) ? (4752822533580063807LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)63)))));
            arr_49 [i_2] = ((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_29 [i_2] [i_2] [i_2] [i_14] [i_14] [i_14]))))) + (max((9223372036854775805LL), (-2783382414484508852LL))))), (max((var_3), (var_1)))));
            arr_50 [i_2] = ((((/* implicit */_Bool) ((var_14) >> (((35184372087808LL) - (35184372087785LL)))))) ? (((((/* implicit */_Bool) arr_38 [i_2] [i_14] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-70))) : (max((((/* implicit */long long int) var_4)), (70931694131085312LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_2] [i_2] [i_2])) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) var_7))))));
        }
    }
    var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) ((var_3) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_3)) : (var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((var_10) % (-656847056880042727LL))))))))));
}
