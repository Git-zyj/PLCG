/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57363
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-83)) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) var_4))));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_12 += ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_3 [i_0] [1U] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_0 [10ULL])))));
                arr_7 [i_0] [i_1] [i_2] = ((/* implicit */signed char) arr_1 [i_0 + 3] [i_1 - 1]);
            }
            arr_8 [(signed char)6] [i_1 - 2] |= ((/* implicit */unsigned char) (+(arr_3 [i_1 - 2] [i_1] [i_0 - 2])));
        }
        for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            var_13 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [7ULL] [i_0 + 1] [i_0 + 2]))))) - ((+(arr_9 [i_0 + 3])))));
            var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) 3206918024U)) % (-7883530579729566558LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)121))) : ((((_Bool)1) ? (2688966005781100705ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)80)))))));
            var_15 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1543)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 2]))) : (2688966005781100711ULL)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0 + 3] [i_0 - 1]))))) : ((-(11299083235556240388ULL)))));
        }
        /* vectorizable */
        for (long long int i_4 = 3; i_4 < 10; i_4 += 3) 
        {
            var_16 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + ((+(var_0)))));
            var_17 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 80095966U)) <= (arr_9 [i_4 + 1])));
            arr_16 [i_4] = ((/* implicit */signed char) ((arr_9 [i_4 + 1]) != (arr_9 [i_4 + 1])));
            arr_17 [i_4] [5] = ((/* implicit */unsigned short) ((_Bool) arr_12 [i_0 - 2]));
            var_18 = ((/* implicit */signed char) (+(-74338940481423792LL)));
        }
        for (unsigned int i_5 = 4; i_5 < 9; i_5 += 2) 
        {
            arr_20 [i_0] [i_0] = ((/* implicit */long long int) arr_11 [i_0 - 2] [i_0 + 3] [i_0 + 1]);
            var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) (-(max((arr_3 [i_0] [i_0] [i_0]), (arr_5 [0U] [0U])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_5] [i_5 - 2] [i_5 + 1]))) <= (11659562948011561991ULL))))) : (max((max((((/* implicit */unsigned int) (signed char)(-127 - 1))), (2717492540U))), (((/* implicit */unsigned int) var_3))))));
            var_20 = ((/* implicit */unsigned long long int) (~(((long long int) min((arr_14 [i_5]), (((/* implicit */unsigned int) var_10)))))));
            /* LoopSeq 1 */
            for (unsigned char i_6 = 0; i_6 < 11; i_6 += 2) 
            {
                var_21 += ((/* implicit */long long int) arr_13 [i_0 - 2] [i_0 + 1]);
                /* LoopSeq 2 */
                for (unsigned int i_7 = 1; i_7 < 9; i_7 += 3) 
                {
                    arr_26 [i_0] [6LL] [i_0 + 1] [5LL] = ((/* implicit */signed char) (+(2147483648U)));
                    /* LoopSeq 3 */
                    for (signed char i_8 = 3; i_8 < 10; i_8 += 1) 
                    {
                        arr_30 [i_0 + 1] [i_5] [(unsigned char)2] [i_7] [(signed char)0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_5])) ? (((((/* implicit */_Bool) arr_24 [i_5 + 1])) ? (((/* implicit */long long int) arr_5 [i_7 + 1] [i_8 - 2])) : (arr_24 [i_5 + 1]))) : (((/* implicit */long long int) arr_12 [i_7]))));
                        var_22 = ((/* implicit */unsigned char) var_9);
                        var_23 = ((/* implicit */_Bool) 14365723310638955829ULL);
                    }
                    /* vectorizable */
                    for (unsigned char i_9 = 3; i_9 < 9; i_9 += 3) 
                    {
                        var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
                        arr_33 [i_7] [i_6] = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-98))));
                        var_25 ^= ((/* implicit */unsigned short) 72040001851883520LL);
                    }
                    for (signed char i_10 = 3; i_10 < 10; i_10 += 1) 
                    {
                        arr_36 [i_7] [i_6] = ((/* implicit */signed char) (~((~((+(((/* implicit */int) (unsigned short)32590))))))));
                        arr_37 [i_10] [i_7] [i_6] [i_0] [i_0] = ((((/* implicit */_Bool) arr_9 [4ULL])) ? (((arr_35 [i_0] [i_5] [i_7 + 1] [i_10] [i_10 - 2]) ^ (arr_35 [i_7] [i_7] [i_7 + 1] [(unsigned short)0] [i_10 - 2]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)6))));
                        arr_38 [i_0] [i_0] [i_0] [0U] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_34 [i_0 - 1] [8U] [i_10 - 3] [7] [i_10])) : (1605185856)))));
                    }
                    var_26 *= ((/* implicit */unsigned short) (((-(-8371148554370070146LL))) != ((~(((long long int) var_6))))));
                    var_27 += (_Bool)1;
                }
                /* vectorizable */
                for (unsigned long long int i_11 = 1; i_11 < 8; i_11 += 4) 
                {
                    var_28 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_13 [i_0] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10)))) != (((/* implicit */int) ((((/* implicit */int) arr_28 [i_0 + 2] [i_11])) == (((/* implicit */int) arr_6 [i_0] [i_5 - 1] [i_6] [i_11])))))));
                    var_29 = ((/* implicit */int) 2533821372U);
                }
            }
            /* LoopNest 2 */
            for (signed char i_12 = 0; i_12 < 11; i_12 += 2) 
            {
                for (unsigned int i_13 = 0; i_13 < 11; i_13 += 3) 
                {
                    {
                        var_30 -= ((/* implicit */long long int) (-(((((/* implicit */int) ((8371148554370070146LL) == (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_12] [(signed char)0] [i_13] [i_13])))))) << (((((-8371148554370070146LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_1))))) - (8371148554370070195LL)))))));
                        /* LoopSeq 1 */
                        for (signed char i_14 = 0; i_14 < 11; i_14 += 2) 
                        {
                            var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -830719321)) ? (((/* implicit */long long int) arr_14 [i_14])) : ((-(8371148554370070145LL)))));
                            var_32 = ((/* implicit */signed char) max((min((((/* implicit */unsigned short) var_10)), ((unsigned short)51029))), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_31 [i_0] [i_5 + 2] [i_0 - 1] [i_13] [7] [i_12] [i_12])) <= (16091499866279871767ULL))))));
                        }
                        arr_49 [i_0] [i_5] [5LL] = min((0ULL), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) (signed char)-44)))))) >= (var_0)))));
                    }
                } 
            } 
        }
        var_33 = ((/* implicit */unsigned long long int) arr_28 [i_0 + 3] [i_0 - 1]);
        var_34 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_15 = 3; i_15 < 13; i_15 += 2) 
    {
        var_35 = ((/* implicit */_Bool) (((((_Bool)1) ? (12827136503396472740ULL) : (((/* implicit */unsigned long long int) 7047512478879659338LL)))) % (((/* implicit */unsigned long long int) 4254929680U))));
        arr_53 [i_15] [i_15] = ((/* implicit */signed char) (((+(2513065891U))) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) arr_50 [i_15 - 1])))))));
        arr_54 [i_15] = (i_15 % 2 == 0) ? (((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)50)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_15]))) : (4214871318U))) >> (((((/* implicit */int) arr_51 [i_15])) - (41912)))))) : (((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)50)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_15]))) : (4214871318U))) >> (((((((/* implicit */int) arr_51 [i_15])) - (41912))) - (4448))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
        {
            var_36 += ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_50 [i_16]))))) : (((((/* implicit */_Bool) 2510142511U)) ? (5619607570313078876ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
            arr_57 [(unsigned short)6] [(signed char)6] |= ((/* implicit */signed char) 80095991U);
        }
    }
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        arr_61 [(unsigned char)7] [i_17] = (!(((/* implicit */_Bool) ((((/* implicit */int) var_9)) % (((/* implicit */int) (signed char)107))))));
        arr_62 [i_17] = (-(((((/* implicit */unsigned int) ((/* implicit */int) var_9))) % (arr_58 [i_17]))));
        var_37 += ((/* implicit */long long int) ((((/* implicit */_Bool) (~((+(var_0)))))) ? (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) 4214871316U)))) : (((/* implicit */unsigned long long int) max((261632), (((/* implicit */int) (signed char)-111)))))));
    }
    var_38 = ((/* implicit */signed char) var_7);
    var_39 = ((/* implicit */signed char) var_8);
}
