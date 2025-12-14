/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60204
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_10 -= ((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (2147483648U)));
                            /* LoopSeq 4 */
                            for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
                            {
                                var_11 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) (unsigned short)24363)) : (((/* implicit */int) (unsigned short)64512))))));
                                var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) ((signed char) (_Bool)1))) * (((/* implicit */int) max((arr_0 [i_2]), (arr_0 [i_3]))))))) + (((long long int) var_7)))))));
                                var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_10 [i_2] [i_1] [(unsigned short)6] [i_2])) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [i_2])) : (((/* implicit */int) (_Bool)1))))))));
                                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)17037)) ? (((/* implicit */int) ((unsigned short) ((unsigned short) (unsigned short)46878)))) : (((/* implicit */int) max(((unsigned short)48499), ((unsigned short)1024))))));
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                            {
                                var_15 = ((/* implicit */unsigned short) var_1);
                                var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2147483647U))));
                                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) min((1793631945490361768ULL), (((/* implicit */unsigned long long int) var_4))))))) : (min((min((36028797018963967LL), (((/* implicit */long long int) arr_4 [i_1] [i_0] [i_1] [i_3])))), (((/* implicit */long long int) ((var_4) > (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_1] [(signed char)11] [i_5]))))))))));
                            }
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                            {
                                var_18 -= ((/* implicit */unsigned short) (signed char)42);
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (-1) : (((/* implicit */int) (unsigned short)64520))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_3] [i_2] [(signed char)4] [i_2])) + (((/* implicit */int) (unsigned short)37878))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_2] [12]))))) ? (((((/* implicit */_Bool) (unsigned short)7168)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17037))) : (3593609685774284162ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_2] [i_2] [(signed char)13] [i_2] [(_Bool)1] [i_2]))))))))));
                                arr_19 [i_0] [i_1] [i_0] = ((/* implicit */short) ((unsigned long long int) ((unsigned char) var_4)));
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) > (((int) ((((/* implicit */_Bool) arr_4 [(signed char)8] [i_0] [i_6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)75))) : (var_6))))));
                            }
                            for (short i_7 = 1; i_7 < 13; i_7 += 1) 
                            {
                                var_21 = ((/* implicit */unsigned long long int) (unsigned short)25);
                                var_22 = ((/* implicit */unsigned int) ((1793631945490361741ULL) * (((arr_16 [i_7] [i_7 - 1] [i_2] [i_3] [i_7] [i_0]) ? (((/* implicit */unsigned long long int) var_5)) : (min((18446744073709551595ULL), (((/* implicit */unsigned long long int) arr_6 [(signed char)9] [8LL] [i_0]))))))));
                            }
                            /* LoopSeq 4 */
                            for (unsigned short i_8 = 1; i_8 < 13; i_8 += 2) 
                            {
                                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1024)) ? ((-(((/* implicit */int) arr_20 [i_0] [i_0])))) : (((int) arr_4 [i_0] [i_0] [i_0] [11ULL]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                                var_24 = ((/* implicit */_Bool) var_4);
                                var_25 += ((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) arr_7 [i_2]))));
                                var_26 -= ((/* implicit */short) arr_17 [i_8 + 1] [(unsigned short)6] [i_8 + 1] [i_8 - 1] [i_8 - 1] [10U]);
                                var_27 = ((/* implicit */unsigned short) min((arr_10 [i_0] [i_1] [(_Bool)1] [i_0]), (((/* implicit */short) (!(arr_16 [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8 - 1] [12] [i_8 + 1]))))));
                            }
                            for (unsigned int i_9 = 0; i_9 < 14; i_9 += 2) 
                            {
                                var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((long long int) min((((/* implicit */unsigned short) arr_10 [i_0] [i_0] [i_2] [i_9])), ((unsigned short)24362)))))));
                                var_29 += ((/* implicit */int) arr_10 [i_0] [i_0] [(unsigned short)12] [i_9]);
                                var_30 = ((/* implicit */signed char) min((min((arr_6 [i_0] [(unsigned char)9] [i_2]), (arr_6 [i_0] [i_1] [i_2]))), (((/* implicit */unsigned int) ((short) (unsigned short)41163)))));
                                var_31 ^= ((/* implicit */unsigned short) arr_0 [i_1]);
                            }
                            for (short i_10 = 1; i_10 < 10; i_10 += 2) 
                            {
                                var_32 = arr_4 [i_0] [i_1] [i_1] [13LL];
                                var_33 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) arr_25 [i_3] [i_10 + 1] [i_10] [i_10] [i_10] [i_10])))));
                            }
                            for (unsigned short i_11 = 3; i_11 < 13; i_11 += 3) 
                            {
                                var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) ((arr_16 [(unsigned short)6] [i_1] [i_2] [(unsigned short)4] [i_11 - 1] [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)185))) : ((+(((3593609685774284162ULL) ^ (((/* implicit */unsigned long long int) arr_2 [i_2] [i_1])))))))))));
                                var_35 = ((/* implicit */unsigned long long int) arr_26 [i_11 - 2] [i_11] [i_11] [i_11 - 2] [i_11]);
                                var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) max((((((/* implicit */int) arr_13 [i_11 - 3] [i_11 - 1])) / (arr_18 [i_0] [i_1] [i_11 - 3] [(short)8] [1U]))), (((((/* implicit */int) arr_31 [i_11 - 2])) << (((((/* implicit */int) arr_24 [i_11 - 2] [i_11] [11ULL] [(short)5])) - (43264))))))))));
                                arr_33 [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-60))) + (-835589184281318048LL)))) ? (var_6) : (-792858435347098923LL))) > (((((/* implicit */_Bool) arr_21 [i_11 + 1] [i_0])) ? (((((/* implicit */_Bool) 618828198)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)246))) : (var_8))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_11 [i_0])), ((short)5057)))))))));
                            }
                            var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) % ((~(((/* implicit */int) arr_13 [i_0] [i_1]))))))) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) arr_27 [i_0] [i_0] [i_1]))));
                        }
                    } 
                } 
                var_38 = arr_28 [(signed char)8] [i_1] [i_0] [i_0] [i_0] [i_0];
            }
        } 
    } 
    var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) min((var_8), (-1155514832007048830LL)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_7))))) : (max((var_4), (var_9))))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
}
