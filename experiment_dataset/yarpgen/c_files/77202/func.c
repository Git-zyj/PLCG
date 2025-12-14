/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77202
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] &= ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 + 1])))) + (2147483647))) << (((((/* implicit */int) ((var_5) > (-3808259568233844395LL)))) - (1)))));
        var_13 = (short)7936;
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 15; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_14 -= max((((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */signed char) var_1)), ((signed char)-94))))))), (((((/* implicit */_Bool) ((arr_8 [i_0] [i_0] [i_0] [i_0] [8ULL]) / (18446744073709551611ULL)))) ? (((arr_0 [i_0 - 1] [i_2 + 1]) & (arr_0 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 15LL)) != (arr_9 [i_0] [i_1] [i_2] [i_2]))))))));
                                var_15 = ((/* implicit */long long int) ((int) ((((15397110259979293511ULL) <= (((/* implicit */unsigned long long int) 3087371733U)))) ? (max((385212133749216711ULL), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))))));
                                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_7 [i_4] [i_1] [i_1])) ? (arr_8 [i_4] [(_Bool)1] [i_1] [i_1] [6U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25243))))) == (((unsigned long long int) 3087371733U)))))) % (var_9))))));
                                var_17 = ((/* implicit */signed char) (-(max((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (-31LL) : (((/* implicit */long long int) var_2)))), (max((15LL), (((/* implicit */long long int) (short)-25243))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 2; i_5 < 14; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 4; i_6 < 14; i_6 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) (~((((_Bool)1) ? (((/* implicit */int) arr_4 [i_0 - 1])) : (((/* implicit */int) arr_4 [i_0 + 2]))))));
                                var_19 = ((/* implicit */_Bool) (-(((var_5) / (((/* implicit */long long int) arr_12 [i_6] [i_1] [i_6] [i_6 + 2] [i_5 + 2] [i_1] [i_5 + 1]))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_1] [i_1] [16ULL] [(_Bool)1])) ? (((/* implicit */long long int) var_2)) : (var_5)))) ? (((((/* implicit */_Bool) arr_6 [(_Bool)1] [i_2 + 3] [i_2 + 2])) ? (1023ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (~(var_4)))) || (((/* implicit */_Bool) arr_1 [i_0]))))))));
                }
            } 
        } 
    }
    for (unsigned char i_7 = 1; i_7 < 10; i_7 += 3) 
    {
        arr_20 [i_7] = ((/* implicit */unsigned int) (_Bool)1);
        /* LoopNest 3 */
        for (long long int i_8 = 1; i_8 < 10; i_8 += 2) 
        {
            for (long long int i_9 = 1; i_9 < 11; i_9 += 2) 
            {
                for (short i_10 = 3; i_10 < 9; i_10 += 3) 
                {
                    {
                        arr_29 [i_7] [i_9] [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((int) ((var_9) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42984))))))) > ((((!(((/* implicit */_Bool) arr_19 [i_7])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (1619648865) : (((/* implicit */int) arr_4 [i_7]))))) : (max((var_8), (((/* implicit */unsigned long long int) var_12))))))));
                        var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((arr_12 [i_10] [(short)14] [(unsigned char)10] [i_7] [i_7] [(short)14] [i_7]), (((/* implicit */int) (_Bool)0)))) >> (((((((/* implicit */_Bool) -9223372036854775793LL)) ? (((/* implicit */int) arr_24 [(_Bool)0])) : (((/* implicit */int) (unsigned short)51519)))) - (63841)))))) ? (max((((/* implicit */long long int) max((((/* implicit */unsigned int) 1982003651)), (8386560U)))), ((-(-1LL))))) : (((/* implicit */long long int) ((((((/* implicit */int) arr_21 [i_10 - 2])) + (2147483647))) << (((((((/* implicit */int) arr_21 [i_10 - 3])) + (88))) - (14))))))));
                        arr_30 [i_7] [i_8 + 1] [9LL] [i_7] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) (short)32749)), (5938228261800270615ULL))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -778171353)) ? (((/* implicit */long long int) 1207595562U)) : (var_0))))))), (max((((4ULL) / (((/* implicit */unsigned long long int) -678361706345404484LL)))), (((/* implicit */unsigned long long int) var_7))))));
                        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (-(((min((var_3), (((/* implicit */unsigned int) 1296623966)))) >> (((((((/* implicit */_Bool) 494139122697542165ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (18446744073709551611ULL))) - (24419ULL))))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (signed char i_11 = 1; i_11 < 9; i_11 += 2) 
        {
            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((arr_26 [i_7] [6U] [8U]) | (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
            /* LoopNest 3 */
            for (long long int i_12 = 1; i_12 < 11; i_12 += 3) 
            {
                for (signed char i_13 = 0; i_13 < 12; i_13 += 3) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            arr_41 [i_7] [i_7] [7LL] [i_7] [i_11] [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */int) (short)1298)) < (((/* implicit */int) max((arr_24 [i_7]), (((/* implicit */unsigned short) (short)(-32767 - 1))))))));
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((unsigned short) ((((((/* implicit */int) (signed char)(-127 - 1))) + (((/* implicit */int) (signed char)(-127 - 1))))) != (((((((/* implicit */int) (short)-17693)) + (2147483647))) << (((8386560U) - (8386560U)))))))))));
                        }
                    } 
                } 
            } 
        }
        for (short i_15 = 3; i_15 < 11; i_15 += 1) 
        {
            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((((/* implicit */_Bool) 3049633813730258105ULL)) ? (arr_6 [i_15 - 1] [i_15 + 1] [i_15 - 1]) : (((/* implicit */unsigned int) 810540810)))) + (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_1)), ((short)-17153))))))))));
            arr_46 [i_7 + 2] [i_7 + 2] [(unsigned char)4] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((arr_18 [i_15]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32759))))))))));
            /* LoopSeq 3 */
            for (unsigned int i_16 = 2; i_16 < 11; i_16 += 1) /* same iter space */
            {
                var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((/* implicit */int) (short)-1298)) > (((/* implicit */int) (!(((/* implicit */_Bool) max((-1904335359), (((/* implicit */int) (unsigned char)0)))))))))))));
                arr_49 [i_7] [i_15] [i_16] = ((/* implicit */signed char) arr_19 [i_7]);
            }
            for (unsigned int i_17 = 2; i_17 < 11; i_17 += 1) /* same iter space */
            {
                arr_52 [i_7] [i_15] [(_Bool)1] [i_15] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (unsigned short)13730)), (((3049633813730258105ULL) & (((/* implicit */unsigned long long int) arr_23 [i_7]))))));
                /* LoopNest 2 */
                for (unsigned char i_18 = 2; i_18 < 11; i_18 += 4) 
                {
                    for (unsigned int i_19 = 0; i_19 < 12; i_19 += 1) 
                    {
                        {
                            arr_59 [i_18] [i_15 - 3] [(unsigned char)8] [i_15] [i_15 - 1] &= var_2;
                            arr_60 [2ULL] [i_15] [i_7] [9LL] [i_19] [i_15] = ((/* implicit */short) max((var_11), (((/* implicit */long long int) (((~(8386552U))) * (((((/* implicit */_Bool) arr_16 [i_7 + 1] [i_18] [i_7] [i_7] [i_15] [i_7 + 1])) ? (0U) : (((/* implicit */unsigned int) -1)))))))));
                            var_27 = ((/* implicit */long long int) (-(6836154215203103678ULL)));
                        }
                    } 
                } 
            }
            for (long long int i_20 = 1; i_20 < 11; i_20 += 2) 
            {
                var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((((/* implicit */int) var_10)), (arr_55 [i_20 - 1] [i_20] [i_20 + 1] [i_7])))) ^ (max((arr_17 [i_20 - 1] [i_20 - 1] [i_7] [i_20 - 1] [i_20]), (((/* implicit */long long int) (unsigned short)51792))))));
                arr_63 [2ULL] [i_7 + 2] [i_15 - 1] [(_Bool)0] &= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_7 - 1]))) < (((15397110259979293490ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))))))) & ((-(((12525715553533168876ULL) + (((/* implicit */unsigned long long int) arr_26 [(short)10] [i_15] [(short)10])))))));
                arr_64 [i_7] [i_7] [i_7] [2ULL] = ((/* implicit */_Bool) arr_22 [(unsigned short)0] [i_20 - 1]);
                var_29 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((arr_55 [i_7] [i_15 - 3] [i_7 + 1] [i_7]) / (((/* implicit */int) (short)-26696))))) / (min((((/* implicit */unsigned long long int) var_6)), (18446744073709551602ULL)))));
            }
            var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)51805)))))));
        }
        var_31 ^= ((/* implicit */unsigned char) max((3049633813730258105ULL), ((-(((((/* implicit */_Bool) arr_36 [2] [2] [2] [i_7])) ? (15397110259979293511ULL) : (((/* implicit */unsigned long long int) arr_12 [2ULL] [14] [2ULL] [i_7] [14] [i_7] [14LL]))))))));
    }
    var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) var_5))) ? (var_9) : (((((/* implicit */unsigned int) (-2147483647 - 1))) ^ (var_3))))))));
}
