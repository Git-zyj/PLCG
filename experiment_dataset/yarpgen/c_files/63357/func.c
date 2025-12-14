/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63357
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
    for (long long int i_0 = 4; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_4 [i_0] [i_1])))) - (((/* implicit */int) var_8))));
                arr_5 [i_0 + 1] = ((/* implicit */unsigned long long int) var_8);
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0] [i_0 - 4] [i_0 + 1]))))) ? (((var_6) ? (((var_9) >> (((-3004517684720614551LL) + (3004517684720614610LL))))) : (((/* implicit */unsigned long long int) min((-3004517684720614551LL), (-3004517684720614551LL)))))) : (16969338778288323765ULL)));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
    {
        var_12 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((1755797722U) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)20)))))) & (min((max((((/* implicit */int) arr_10 [i_2])), (arr_8 [i_2]))), ((~(((/* implicit */int) (signed char)-20))))))));
        var_13 -= ((max((((/* implicit */long long int) ((unsigned short) -3004517684720614558LL))), ((~(arr_9 [(unsigned char)7]))))) / (((((arr_7 [(unsigned char)0]) ? (arr_9 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2]))))) * (((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_2])) << (((/* implicit */int) var_7))))))));
        var_14 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (arr_8 [i_2]) : (((/* implicit */int) ((_Bool) var_2))))), (((/* implicit */int) var_5))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            arr_14 [i_3] = ((/* implicit */signed char) (((!(arr_10 [(_Bool)1]))) ? (((/* implicit */long long int) ((arr_7 [i_3 + 1]) ? (((/* implicit */int) arr_13 [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_11 [i_2]))))) : (6624489830659224392LL)));
            var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) var_5))));
        }
    }
    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned short) arr_17 [i_4]);
        arr_18 [i_4] = ((((((/* implicit */_Bool) arr_17 [i_4])) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_8 [i_4])) | (var_9)))))) ? (((unsigned int) arr_9 [i_4])) : (var_0));
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            var_17 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) <= ((+(((/* implicit */int) (unsigned char)95))))));
            /* LoopSeq 3 */
            for (unsigned char i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) arr_13 [i_4] [i_5 + 1] [i_5 + 1])) ? (((/* implicit */int) arr_13 [i_4] [i_5 + 1] [i_5 + 1])) : (((/* implicit */int) arr_13 [i_4] [i_5 + 1] [i_5 + 1])))) : (((/* implicit */int) (signed char)-126))));
                arr_23 [i_4] [i_4] [(unsigned char)7] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) 13962727570106685425ULL)))))) / (((/* implicit */int) max((((unsigned char) var_8)), (((/* implicit */unsigned char) (_Bool)1)))))));
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 13; i_7 += 3) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) ((unsigned long long int) (((_Bool)1) ? (7629205771607649519LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                            var_20 -= ((/* implicit */signed char) var_9);
                            var_21 -= ((/* implicit */_Bool) (~(-6624489830659224397LL)));
                            var_22 &= ((/* implicit */int) max((-6624489830659224411LL), (((/* implicit */long long int) 2147483647))));
                        }
                    } 
                } 
                var_23 = ((((/* implicit */_Bool) ((int) arr_17 [i_4]))) ? (((arr_28 [i_6] [i_5] [i_6] [i_5 + 1] [i_6] [i_5]) ? (arr_9 [i_5 + 1]) : (arr_9 [i_5 + 1]))) : (((/* implicit */long long int) 1755797722U)));
            }
            for (unsigned short i_9 = 0; i_9 < 13; i_9 += 1) 
            {
                var_24 += ((/* implicit */unsigned short) arr_27 [i_4] [i_4] [i_5] [i_4] [(signed char)12] [i_9] [i_9]);
                /* LoopNest 2 */
                for (long long int i_10 = 1; i_10 < 11; i_10 += 3) 
                {
                    for (signed char i_11 = 1; i_11 < 10; i_11 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) 1311747120U))));
                            var_26 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((arr_12 [0] [i_5]), (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) arr_8 [i_5 + 1]))))) ? (((/* implicit */unsigned long long int) (+(((((-3004517684720614545LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned char)255)) - (229)))))))) : (max((((arr_33 [(signed char)11] [i_5] [i_9] [i_9] [i_9] [i_11]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)20))))), (arr_33 [i_5 + 1] [i_10 - 1] [i_11 - 1] [(_Bool)0] [i_11 - 1] [11U])))));
                            var_27 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((arr_28 [i_10 - 1] [5LL] [i_5 + 1] [(_Bool)1] [(unsigned short)7] [(unsigned char)2]) ? (((((/* implicit */_Bool) (signed char)-20)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)7)) : (((/* implicit */int) var_3))))))) : (arr_33 [0U] [(signed char)7] [i_9] [i_9] [(signed char)0] [i_11])));
                        }
                    } 
                } 
                var_28 = arr_28 [i_4] [7ULL] [(unsigned short)9] [i_5] [i_5] [i_9];
            }
            for (unsigned char i_12 = 0; i_12 < 13; i_12 += 4) 
            {
                arr_39 [i_4] [i_4] [i_4] = ((/* implicit */long long int) (signed char)105);
                var_29 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_1)), (var_9)));
                var_30 ^= ((/* implicit */int) max((((((/* implicit */_Bool) (unsigned char)188)) ? (((/* implicit */unsigned long long int) 3004517684720614562LL)) : (((((/* implicit */_Bool) -3004517684720614551LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (5782076374956009388ULL))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)12))))), (arr_31 [i_4] [i_5] [i_12]))))));
            }
            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 4294967277U)) ? (((/* implicit */int) arr_32 [i_4] [i_4] [(_Bool)1] [i_5 + 1] [i_5] [i_5])) : (((/* implicit */int) arr_19 [i_4] [(unsigned short)0] [i_5 + 1]))))))) || (((/* implicit */_Bool) arr_33 [i_4] [i_5] [5] [i_4] [8U] [i_4])))))));
            /* LoopNest 2 */
            for (unsigned int i_13 = 0; i_13 < 13; i_13 += 1) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        var_32 = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_27 [i_4] [(unsigned short)10] [i_5 + 1] [i_14] [i_5 + 1] [i_5] [i_14])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -3004517684720614558LL)) ? (arr_27 [i_4] [10] [i_5 + 1] [i_5 + 1] [(unsigned char)1] [i_13] [2ULL]) : (arr_27 [i_4] [i_5] [i_5 + 1] [i_4] [i_14] [i_13] [i_5])))) : (((((/* implicit */long long int) arr_27 [i_4] [i_4] [i_5 + 1] [(unsigned char)3] [(signed char)6] [(signed char)6] [i_5])) - (3004517684720614550LL)))));
                        /* LoopSeq 2 */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                        {
                            var_33 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) | (var_9)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((unsigned char) var_7))))))));
                            var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))))) ? (arr_37 [i_4] [0LL] [i_5 + 1] [i_5 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_49 [i_4] [i_5] [10U] [(_Bool)1]) <= (((/* implicit */long long int) ((/* implicit */int) var_5)))))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3LL)) ? (((/* implicit */int) arr_35 [3U] [i_5] [0LL] [i_14] [i_14] [i_5])) : (((/* implicit */int) arr_7 [(signed char)12]))))) || (((((/* implicit */_Bool) -1LL)) && (arr_7 [i_14])))))) : (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)66))))) << (((((((/* implicit */_Bool) -3004517684720614587LL)) ? (arr_48 [i_5 + 1]) : (2112218838))) + (1593928141))))))))));
                        }
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                        {
                            arr_53 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((((((/* implicit */int) (signed char)-52)) + (2147483647))) << (((max((((((/* implicit */_Bool) var_4)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_4] [i_5]))))), (((/* implicit */long long int) (_Bool)1)))) - (9223372036854775807LL))));
                            arr_54 [i_4] [i_5 + 1] [i_13] [i_4] [i_16] [(unsigned short)5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_5] [i_5 + 1] [i_5] [i_5 + 1]))) + (((arr_10 [i_13]) ? (5782076374956009388ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-103)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (-5884949061142702595LL) : (((/* implicit */long long int) 1891353150U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (((((/* implicit */_Bool) 4006186813745323339LL)) ? (arr_12 [i_4] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) -1LL)) != (5782076374956009404ULL)))))))));
                            var_35 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((9223372036854775807LL), (((/* implicit */long long int) arr_8 [i_5 + 1]))))) ? (((/* implicit */int) (_Bool)1)) : ((+(-1615316645)))));
                            var_36 = ((/* implicit */unsigned int) (((_Bool)1) ? (-9223372036854775807LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)190))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (!((_Bool)1)))))))));
                        }
                    }
                } 
            } 
        }
    }
    var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_0)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_9)))))))));
    var_38 = ((/* implicit */unsigned char) (((+(var_0))) * (((/* implicit */unsigned int) (-((+(((/* implicit */int) var_8)))))))));
    var_39 = ((/* implicit */unsigned long long int) (_Bool)0);
}
