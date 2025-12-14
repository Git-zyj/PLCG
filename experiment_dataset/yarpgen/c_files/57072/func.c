/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57072
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
    var_17 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_6)) / (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))))) == (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (-4438406653568188750LL) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] &= ((/* implicit */unsigned long long int) (~((~(arr_0 [i_0])))));
        var_18 = ((/* implicit */_Bool) max((max((arr_0 [i_0]), (((/* implicit */long long int) arr_2 [i_0])))), (((((/* implicit */_Bool) (unsigned short)46189)) ? (4438406653568188771LL) : (4438406653568188771LL)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            arr_9 [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) (-(4438406653568188753LL)));
            var_19 = ((arr_5 [i_2]) % (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))));
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                for (int i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    {
                        arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_14)) ? (((((((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_3] [i_4])) && (((/* implicit */_Bool) (unsigned short)19377)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)238)) < (((/* implicit */int) (unsigned short)19347)))))) : (1698805058U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((max((arr_15 [i_1] [i_2] [i_4]), (arr_12 [i_4] [i_2] [i_1]))), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))) > (arr_6 [i_1]))))))))));
                        arr_18 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_11 [i_1] [i_2] [5ULL] [i_2]), (((/* implicit */short) var_7))))) ? ((-(((/* implicit */int) arr_11 [i_1] [i_4] [i_3] [i_4])))) : (((((/* implicit */int) var_10)) - (((/* implicit */int) arr_11 [i_1] [i_2] [i_3] [i_3]))))));
                        arr_19 [(signed char)3] [(signed char)3] [i_3] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned short)19377)) ? (min((1698805051U), (((/* implicit */unsigned int) (unsigned char)15)))) : (((/* implicit */unsigned int) min((152152241), (((/* implicit */int) (unsigned char)78))))))), ((+(((var_3) ? (1698805068U) : (var_15)))))));
                    }
                } 
            } 
        }
        for (signed char i_5 = 0; i_5 < 17; i_5 += 3) /* same iter space */
        {
            arr_24 [(short)0] [(short)0] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) var_10)))));
            arr_25 [i_1] [i_5] [i_5] = ((((/* implicit */_Bool) arr_11 [i_1] [15] [i_1] [i_1])) ? (min((4438406653568188771LL), (17LL))) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)61592), (((/* implicit */unsigned short) (unsigned char)18)))))));
            var_20 = ((/* implicit */unsigned short) (~(min((min((((/* implicit */unsigned long long int) arr_11 [i_5] [i_5] [i_1] [i_1])), (var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1] [i_5])) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15))))))))));
        }
        for (signed char i_6 = 0; i_6 < 17; i_6 += 3) /* same iter space */
        {
            var_21 *= ((/* implicit */signed char) max(((~(((/* implicit */int) ((signed char) arr_7 [i_1] [i_6] [i_6]))))), (((/* implicit */int) (unsigned short)3937))));
            arr_29 [i_1] &= ((/* implicit */signed char) ((((/* implicit */int) arr_20 [i_6])) & (((/* implicit */int) ((((/* implicit */int) arr_15 [i_6] [i_1] [i_1])) != (((/* implicit */int) arr_28 [i_1] [i_6])))))));
            var_22 = ((/* implicit */unsigned short) (signed char)-4);
        }
        /* LoopSeq 1 */
        for (long long int i_7 = 0; i_7 < 17; i_7 += 4) 
        {
            var_23 = ((/* implicit */signed char) 3871917597255277431LL);
            arr_34 [i_1] [i_1] [(signed char)15] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(2596162226U)))) ? (arr_8 [i_1]) : (min((arr_32 [i_1]), (((/* implicit */unsigned long long int) (!((_Bool)1))))))));
            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) var_11))));
        }
        arr_35 [i_1] = ((/* implicit */signed char) (-(((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_1]))) < (arr_8 [i_1])))) - (((/* implicit */int) arr_20 [i_1]))))));
        var_25 = ((/* implicit */_Bool) var_7);
    }
    for (long long int i_8 = 1; i_8 < 9; i_8 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_9 = 1; i_9 < 8; i_9 += 4) 
        {
            arr_43 [i_8] = ((/* implicit */unsigned long long int) ((-4438406653568188750LL) >= (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)35))))) + (((/* implicit */int) (unsigned short)19379)))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 3) 
            {
                var_26 *= ((/* implicit */signed char) ((17LL) % (((3871917597255277417LL) ^ (2577359280478505493LL)))));
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 10; i_11 += 3) 
                {
                    for (unsigned short i_12 = 3; i_12 < 8; i_12 += 3) 
                    {
                        {
                            arr_53 [i_12] [i_11] [i_10] [i_9] [i_8 - 1] [i_12] = ((/* implicit */short) arr_0 [i_9 + 1]);
                            arr_54 [i_12] [i_10] [i_9 - 1] [i_12] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_11]))) % (arr_8 [i_8 + 1])))))))));
                        }
                    } 
                } 
                var_27 ^= (-(((((/* implicit */_Bool) arr_26 [i_9] [i_8])) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_9 + 1] [i_8 + 1]))))));
            }
            for (short i_13 = 2; i_13 < 9; i_13 += 2) 
            {
                var_28 ^= ((/* implicit */signed char) ((unsigned short) (unsigned short)11497));
                arr_57 [i_8] [i_8] [i_8] [i_8] &= ((((((/* implicit */unsigned long long int) ((((arr_31 [i_8] [i_9]) + (2147483647))) << (((484537677) - (484537677)))))) & (((unsigned long long int) arr_27 [i_9] [i_9] [i_8])))) < (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_7 [i_8] [i_9] [(_Bool)1])) : (var_5))) + (((/* implicit */unsigned long long int) ((var_15) & (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
            }
            /* LoopNest 3 */
            for (signed char i_14 = 3; i_14 < 8; i_14 += 2) 
            {
                for (signed char i_15 = 0; i_15 < 10; i_15 += 2) 
                {
                    for (signed char i_16 = 1; i_16 < 8; i_16 += 3) 
                    {
                        {
                            var_29 -= ((/* implicit */signed char) max((((/* implicit */long long int) (+(((/* implicit */int) max((((/* implicit */unsigned short) arr_41 [i_8] [i_14])), ((unsigned short)16495))))))), (((((/* implicit */_Bool) (-(arr_16 [i_8] [i_8] [i_8] [i_8])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46159))) : (((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_8] [i_9]))) / (2577359280478505487LL)))))));
                            var_30 += ((/* implicit */long long int) (signed char)115);
                        }
                    } 
                } 
            } 
        }
        var_31 = ((/* implicit */unsigned long long int) min(((+(((((/* implicit */_Bool) var_6)) ? (8892016202219427468LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))), (((/* implicit */long long int) ((arr_0 [i_8 + 1]) <= (-1582990946358741111LL))))));
        arr_64 [i_8 - 1] = ((/* implicit */unsigned char) 1582990946358741110LL);
    }
    for (unsigned short i_17 = 0; i_17 < 15; i_17 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_18 = 2; i_18 < 13; i_18 += 3) 
        {
            /* LoopSeq 1 */
            for (long long int i_19 = 2; i_19 < 12; i_19 += 3) 
            {
                var_32 -= ((/* implicit */signed char) ((((min((((/* implicit */unsigned long long int) (signed char)23)), (12142518874294931602ULL))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3893428734072623158LL)) ? (((/* implicit */int) arr_13 [i_17] [i_18] [i_18] [i_19])) : (((/* implicit */int) arr_15 [i_19] [i_18] [i_19]))))))) << (((((/* implicit */int) ((((/* implicit */_Bool) 484537677)) || (((/* implicit */_Bool) 15831655135239207512ULL))))) & (((/* implicit */int) (signed char)-50))))));
                arr_73 [(signed char)9] [i_17] = ((/* implicit */int) var_14);
                /* LoopSeq 1 */
                for (unsigned int i_20 = 0; i_20 < 15; i_20 += 1) 
                {
                    arr_76 [i_18] [i_18] [i_17] = ((/* implicit */short) max((((long long int) arr_66 [i_17])), (((/* implicit */long long int) ((((/* implicit */_Bool) ((484537677) / (((/* implicit */int) (unsigned short)35694))))) ? (((arr_7 [i_17] [i_17] [i_19]) / (((/* implicit */int) (signed char)-50)))) : (((((/* implicit */int) var_14)) + (((/* implicit */int) arr_4 [i_19])))))))));
                    /* LoopSeq 1 */
                    for (signed char i_21 = 3; i_21 < 11; i_21 += 2) 
                    {
                        arr_80 [i_17] [i_17] [i_17] [i_17] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3896416229354105940LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)233)) < (((/* implicit */int) arr_79 [i_17])))))))) ? (((arr_31 [i_18 - 2] [i_21 - 3]) - (var_8))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_19 + 1] [i_18 + 1] [i_17] [i_17]))) >= (((6679545188816386020ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))));
                        var_33 = ((/* implicit */_Bool) var_11);
                    }
                }
            }
            var_34 ^= ((/* implicit */long long int) arr_33 [i_18] [i_18]);
        }
        arr_81 [i_17] = ((/* implicit */_Bool) (unsigned short)19383);
    }
    var_35 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (1073741568LL)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)94))))), ((~(((((/* implicit */unsigned int) 484537677)) ^ (var_15)))))));
    var_36 = var_2;
}
