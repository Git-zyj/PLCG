/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66607
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
    var_14 ^= ((/* implicit */signed char) max((((/* implicit */unsigned short) (_Bool)0)), (((unsigned short) ((var_8) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 10; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((((unsigned int) arr_5 [i_0])), (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_1])) / (((/* implicit */int) (signed char)-18)))))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_6) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */int) (signed char)-60)) : (((/* implicit */int) (signed char)-46)))))))));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) /* same iter space */
                {
                    var_16 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [3LL] [i_1] [i_1 + 2])) ? (((/* implicit */int) arr_3 [(unsigned short)0] [(signed char)6])) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_1 - 1]))))) ? ((-(((/* implicit */int) arr_7 [i_1 + 2] [i_1 + 1] [(unsigned short)7])))) : ((-(((/* implicit */int) arr_7 [i_1 - 3] [(unsigned char)3] [i_1 + 1])))));
                    var_17 = ((/* implicit */int) ((_Bool) ((((((/* implicit */int) var_5)) * (((/* implicit */int) var_10)))) < (((/* implicit */int) ((short) arr_7 [(_Bool)1] [i_1] [i_0]))))));
                }
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) /* same iter space */
                {
                    var_18 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((((/* implicit */signed char) var_9)), (arr_1 [i_3])))) ? (((/* implicit */int) ((unsigned char) arr_5 [i_0]))) : (((/* implicit */int) arr_9 [i_1 - 2] [i_1 - 3] [i_1 - 3] [i_3])))) <= (((/* implicit */int) ((((((/* implicit */int) (signed char)-25)) < (((/* implicit */int) arr_8 [(signed char)10] [(signed char)10] [(signed char)10])))) || (arr_2 [i_1 - 4] [i_1 + 2]))))));
                    arr_10 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (~(((/* implicit */int) arr_3 [i_0] [i_3])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0]))))) <= (((/* implicit */int) ((signed char) var_13))))))) : (var_7)));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_0] [(_Bool)0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 3098200235U)) ? (3098200252U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))))), (((/* implicit */unsigned int) var_2))));
                                var_19 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_7 [i_0] [i_1 + 1] [i_0])) * (((/* implicit */int) arr_9 [3ULL] [i_1 + 1] [i_1 + 1] [i_1 + 1])))) + (((((/* implicit */_Bool) arr_9 [i_1] [i_1 + 1] [i_1 - 2] [i_1 - 2])) ? (((/* implicit */int) (signed char)121)) : (((/* implicit */int) arr_9 [i_1] [i_1 - 2] [i_1 - 2] [i_4]))))));
                                arr_17 [i_0] [i_0] [(short)11] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (-(((/* implicit */int) (signed char)3)))))) ? (19U) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_1 - 1])) + (((/* implicit */int) min((var_9), (var_1)))))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_12 [i_0] [i_0])) ? ((~(((/* implicit */int) arr_4 [i_0])))) : (((/* implicit */int) max((arr_4 [i_0]), (((/* implicit */unsigned short) arr_9 [i_0] [(short)4] [i_1] [i_3]))))))) + (2147483647))) << (((/* implicit */int) ((var_6) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_3]))))))));
                    arr_19 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-(var_7)));
                }
                for (unsigned char i_6 = 3; i_6 < 9; i_6 += 3) 
                {
                    var_20 = ((/* implicit */unsigned char) (_Bool)1);
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((-713366138) / (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((long long int) (short)11))) : (max((max((((/* implicit */unsigned long long int) arr_13 [i_0] [i_6])), (var_0))), (((/* implicit */unsigned long long int) 2996975930U))))));
                    arr_24 [i_0] [i_1 - 2] [i_0] = ((((((((/* implicit */int) (signed char)2)) + (((/* implicit */int) (signed char)7)))) * ((-(((/* implicit */int) arr_6 [i_0])))))) < (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [1U]))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_0] [i_1 + 1] [i_0])) * (((/* implicit */int) (_Bool)1)))))))));
                }
                /* LoopNest 2 */
                for (unsigned short i_7 = 2; i_7 < 10; i_7 += 3) 
                {
                    for (unsigned short i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */short) (signed char)1);
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0]))))) ? ((~(((/* implicit */int) ((signed char) 10459945899328979236ULL))))) : (((/* implicit */int) (short)-1))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_9 = 0; i_9 < 12; i_9 += 3) 
                {
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        for (unsigned short i_11 = 1; i_11 < 10; i_11 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */int) min((var_24), ((-(((/* implicit */int) (signed char)11))))));
                                arr_36 [i_0] [i_1] [i_0] [i_10] [i_11 + 1] = ((/* implicit */long long int) (unsigned char)61);
                                arr_37 [(signed char)5] [(signed char)5] [(signed char)5] [i_10] [i_10 + 1] [i_0] = ((/* implicit */signed char) ((min((((/* implicit */long long int) -601458476)), (arr_23 [6U] [(unsigned char)0] [i_10 + 1] [i_0]))) != ((~(arr_23 [i_1] [i_1] [i_10 + 1] [i_0])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_12 = 1; i_12 < 23; i_12 += 3) 
    {
        var_25 = ((/* implicit */signed char) ((long long int) (!(((/* implicit */_Bool) arr_38 [i_12 + 1])))));
        var_26 *= ((/* implicit */unsigned short) (unsigned char)61);
        /* LoopNest 2 */
        for (unsigned short i_13 = 0; i_13 < 25; i_13 += 3) 
        {
            for (short i_14 = 1; i_14 < 22; i_14 += 3) 
            {
                {
                    var_27 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) min(((unsigned char)61), (((/* implicit */unsigned char) var_1))))))) ? ((((!(((/* implicit */_Bool) arr_41 [i_12] [i_12 + 1])))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) arr_39 [i_12 - 1]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_15 = 1; i_15 < 23; i_15 += 3) 
                    {
                        arr_48 [i_12] [i_15] [i_15] [i_12] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-11)) ? (((/* implicit */int) arr_42 [i_12] [i_15 + 1])) : (arr_39 [(unsigned short)1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) arr_44 [(unsigned char)13] [i_14] [i_12]))))) : (((((/* implicit */_Bool) arr_39 [i_12 - 1])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_13] [i_14] [i_14] [i_13] [i_12])))))))) ? (max((max((var_12), (5ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_45 [i_12] [2U] [i_14] [i_12])) : (((/* implicit */int) arr_46 [1ULL] [i_13] [i_14] [5ULL] [i_15]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) + (((/* implicit */int) ((((/* implicit */_Bool) (signed char)9)) && (((/* implicit */_Bool) (signed char)-21))))))))));
                        var_28 = ((/* implicit */signed char) ((((/* implicit */int) arr_46 [i_15] [i_15 - 1] [i_15] [i_15] [i_15])) * (((/* implicit */int) arr_46 [i_15 + 1] [i_15 + 1] [(signed char)8] [i_14] [i_14]))));
                    }
                    var_29 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((_Bool) arr_42 [i_12 + 2] [i_14 + 3]))), (((((var_13) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_12] [i_12] [i_14] [i_14]))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)215), (((/* implicit */unsigned char) (signed char)97))))))))));
                    /* LoopNest 2 */
                    for (long long int i_16 = 0; i_16 < 25; i_16 += 3) 
                    {
                        for (unsigned char i_17 = 0; i_17 < 25; i_17 += 3) 
                        {
                            {
                                var_30 = ((/* implicit */_Bool) ((max((((((/* implicit */int) (signed char)3)) << (((((/* implicit */int) (short)-32767)) + (32787))))), (((((/* implicit */_Bool) arr_41 [i_13] [i_13])) ? (((/* implicit */int) (signed char)-46)) : (((/* implicit */int) (signed char)46)))))) / ((~(((/* implicit */int) (unsigned short)40510))))));
                                arr_56 [i_16] [i_16] [i_14] [i_14] [i_14] = ((/* implicit */unsigned short) (((~((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25016))) : (3ULL))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (signed char)-58))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_31 = ((/* implicit */signed char) min(((~(max((18446744073709551612ULL), (var_13))))), (((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) arr_47 [(signed char)12])))), (((((/* implicit */int) (unsigned short)65535)) < (((/* implicit */int) (unsigned short)1834)))))))));
    }
}
