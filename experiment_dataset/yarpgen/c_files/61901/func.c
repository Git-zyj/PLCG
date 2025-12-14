/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61901
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_10 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) <= (((((/* implicit */int) var_1)) + (((/* implicit */int) var_1)))))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    {
                        var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) % (max((var_3), (((/* implicit */int) var_5)))))))));
                        var_12 = ((/* implicit */unsigned char) max(((+(arr_6 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) arr_1 [i_1]))));
                        /* LoopSeq 4 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_13 = ((/* implicit */_Bool) ((int) ((_Bool) var_7)));
                            var_14 = ((/* implicit */unsigned char) max((((/* implicit */int) min((arr_8 [i_0] [i_0] [i_0] [(short)10]), (arr_8 [i_4] [i_2] [i_2] [(short)11])))), (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_0))))) ? (((/* implicit */int) max((((/* implicit */short) var_5)), (var_9)))) : ((~(arr_15 [i_0] [i_1] [8U] [i_3] [i_4])))))));
                            var_15 |= ((/* implicit */unsigned short) max((arr_9 [i_2] [i_2] [i_2] [(signed char)16]), (((/* implicit */short) arr_10 [11LL] [i_4]))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_11 [i_2] [i_2] [i_2] [i_2])) != (((/* implicit */int) arr_17 [(short)0] [i_1] [i_1] [i_1] [i_1] [(signed char)11])))), (((((var_3) - (((/* implicit */int) var_8)))) == (((/* implicit */int) arr_7 [i_0] [i_0] [(_Bool)1] [i_0]))))));
                            var_17 = ((/* implicit */signed char) ((((/* implicit */int) ((short) max((((/* implicit */unsigned long long int) arr_8 [1ULL] [i_1] [1ULL] [i_3])), (arr_16 [i_0] [i_1] [i_2] [i_5] [i_5] [0U] [i_1]))))) != (((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_8 [i_5] [i_2] [(_Bool)1] [(_Bool)1])))) != (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7)))))))));
                            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) min((((/* implicit */int) max((((/* implicit */unsigned short) arr_11 [i_0] [i_1] [i_3] [i_5])), (arr_8 [i_0] [18] [i_2] [i_3])))), ((~(((((/* implicit */int) var_9)) | (((/* implicit */int) var_0)))))))))));
                        }
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_19 = ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((_Bool) arr_2 [i_0]))));
                            arr_21 [i_2] = ((/* implicit */unsigned char) var_5);
                        }
                        for (signed char i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            var_20 ^= ((/* implicit */signed char) ((short) ((((unsigned int) var_8)) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_6)))))));
                        }
                        var_22 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) (signed char)-101)))), (((((/* implicit */_Bool) (short)-3435)) && (((/* implicit */_Bool) (short)8384))))));
                        var_23 = ((/* implicit */unsigned short) var_2);
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */int) ((_Bool) (short)-8371));
        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) (signed char)-63))))))));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) max((((/* implicit */int) var_6)), (var_3)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))));
        arr_28 [i_8] = ((/* implicit */long long int) min((min((((/* implicit */int) max((((/* implicit */short) arr_20 [i_8] [i_8] [i_8] [i_8] [i_8])), (var_7)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (var_3))))), (((/* implicit */int) var_5))));
        arr_29 [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_9 [i_8] [i_8] [i_8] [i_8]))) ? (((/* implicit */int) max(((short)27802), (((/* implicit */short) (_Bool)0))))) : (min((((/* implicit */int) arr_18 [i_8] [(unsigned char)8] [i_8] [i_8] [i_8])), (((((/* implicit */_Bool) arr_4 [i_8] [11U] [i_8])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4))))))));
        arr_30 [i_8] = ((/* implicit */_Bool) min((((unsigned int) var_6)), (((/* implicit */unsigned int) max((min((var_2), (((/* implicit */short) var_4)))), (((/* implicit */short) arr_11 [5] [i_8] [i_8] [(unsigned char)21])))))));
        var_27 = ((/* implicit */int) max((var_0), (((var_0) || (((/* implicit */_Bool) arr_9 [i_8] [i_8] [i_8] [i_8]))))));
    }
    /* vectorizable */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_28 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
        var_29 = ((/* implicit */_Bool) (~(((/* implicit */int) var_9))));
        arr_34 [i_9] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_24 [i_9] [i_9] [i_9] [i_9]))));
        /* LoopSeq 2 */
        for (signed char i_10 = 0; i_10 < 11; i_10 += 3) 
        {
            arr_38 [10U] [i_10] [i_9] = ((/* implicit */unsigned int) (-((+(((/* implicit */int) var_1))))));
            var_30 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) & (arr_6 [19U] [(unsigned short)14] [(unsigned short)14])))) ? (arr_23 [i_9] [i_9] [(_Bool)1] [i_9] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
        }
        for (int i_11 = 0; i_11 < 11; i_11 += 2) 
        {
            /* LoopNest 3 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (int i_13 = 2; i_13 < 8; i_13 += 2) 
                {
                    for (unsigned int i_14 = 0; i_14 < 11; i_14 += 3) 
                    {
                        {
                            var_31 |= ((/* implicit */unsigned short) ((_Bool) var_5));
                            arr_49 [i_9] [i_9] [i_12] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_48 [i_11] [i_12] [i_13 - 2] [1U] [i_13 + 1]))));
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_13] [i_13] [i_13] [i_13 + 1] [i_13 + 1] [i_13 - 2])) || (((/* implicit */_Bool) arr_44 [i_13] [i_13] [(short)1] [i_13 - 1] [i_13 + 1]))));
                            var_33 = ((_Bool) var_0);
                            arr_50 [i_13] [i_11] |= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_8))))) % ((~(((/* implicit */int) arr_12 [i_9] [i_9]))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (int i_15 = 2; i_15 < 10; i_15 += 2) 
            {
                for (unsigned long long int i_16 = 2; i_16 < 9; i_16 += 3) 
                {
                    {
                        var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_7))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_4))))))))));
                        arr_55 [i_9] [i_11] [6ULL] = ((((/* implicit */_Bool) (+(18446744073709551615ULL)))) ? (6543293846185050541ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))));
                        var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) var_0))))))));
                        var_36 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_9] [i_11]))) == (arr_48 [5U] [(signed char)3] [(unsigned short)0] [i_15] [i_16]))))));
                    }
                } 
            } 
            var_37 = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)63))));
            var_38 = ((/* implicit */unsigned int) ((var_3) % (arr_15 [i_11] [i_11] [i_11] [i_9] [i_9])));
        }
    }
    var_39 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((signed char) var_8))))) ? (((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (var_3)))) ? (((/* implicit */int) var_6)) : (min((var_3), (((/* implicit */int) var_7))))))));
    var_40 ^= ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */int) var_6)))) + (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)8385))) != (3521876194U)))))), ((~(((((/* implicit */int) var_7)) & (((/* implicit */int) var_2))))))));
    var_41 = var_4;
}
