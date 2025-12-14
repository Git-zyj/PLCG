/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59383
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
    var_15 = ((/* implicit */long long int) var_13);
    var_16 = ((/* implicit */long long int) var_6);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3708563291343572860LL)) ? (var_14) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */int) (signed char)49)) : (((/* implicit */int) (_Bool)0)))))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_7))) - (arr_0 [i_0])))))));
        /* LoopSeq 3 */
        for (long long int i_1 = 3; i_1 < 23; i_1 += 1) /* same iter space */
        {
            arr_4 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((unsigned int) max(((short)-1), (((/* implicit */short) (signed char)(-127 - 1)))))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 3])))));
            /* LoopSeq 4 */
            for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (arr_3 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (max((min((arr_5 [i_0] [i_1] [i_1]), (((/* implicit */unsigned int) var_4)))), (min((((/* implicit */unsigned int) (_Bool)1)), (var_12)))))));
                arr_7 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_10))))) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_6 [i_0] [i_1] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)238)), ((short)0)))))))) ? (((((/* implicit */_Bool) arr_6 [i_1 - 3] [i_2 - 1] [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-61))) : (arr_6 [i_1 - 1] [i_2 + 1] [i_2 - 1]))) : (((((/* implicit */_Bool) 9302717907423427880ULL)) ? (arr_6 [i_1] [i_1 - 3] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)138)))))));
                var_19 = ((/* implicit */_Bool) min(((+((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_5 [14ULL] [(signed char)21] [i_2])) : (arr_3 [(unsigned char)22] [(unsigned char)22] [i_1 - 2]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)43506)))))));
            }
            for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                arr_11 [i_0] [i_1 - 3] [(unsigned short)19] = arr_3 [i_0] [i_0] [i_3];
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) (-((((_Bool)1) ? (((/* implicit */int) arr_14 [i_1] [i_1 - 2] [i_4] [10ULL] [i_4])) : (((/* implicit */int) arr_14 [(unsigned char)11] [i_1 - 2] [i_3] [i_5] [i_3]))))));
                            arr_16 [i_0] [i_1] [i_3] [9LL] [i_5] &= min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)255))))), (3854555372U));
                            var_21 += ((/* implicit */_Bool) var_14);
                        }
                    } 
                } 
            }
            for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 4) 
            {
                var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 - 1] [i_1 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1 - 2] [i_1 - 1] [i_1 - 3] [i_1 - 3] [i_1 + 1]))) : (arr_3 [i_1 - 3] [i_1 - 1] [i_1 - 3]))) % (((/* implicit */unsigned long long int) (-(arr_18 [i_1 + 1] [i_1 + 1] [(unsigned char)21]))))));
                arr_20 [i_1] [i_1 + 1] [i_1] [i_1 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_1 + 1] [i_1 - 2] [i_1 - 2])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)66))))) : (((((/* implicit */_Bool) arr_18 [i_1 - 1] [i_1 - 3] [i_1 - 1])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))));
                arr_21 [i_6] [i_1] [i_0] = ((/* implicit */long long int) var_7);
                arr_22 [i_0] [i_1] [i_6] [(short)7] = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned int) arr_8 [i_1 + 1] [i_1] [i_1 + 1])));
                arr_23 [i_0] [(_Bool)1] [i_6] = ((/* implicit */_Bool) ((9144026166286123736ULL) << (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [16U] [i_1] [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (8ULL)))));
            }
            for (unsigned char i_7 = 0; i_7 < 24; i_7 += 3) 
            {
                var_23 = ((/* implicit */unsigned int) arr_2 [(short)11]);
                /* LoopSeq 2 */
                for (unsigned int i_8 = 2; i_8 < 23; i_8 += 4) 
                {
                    var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned int) arr_9 [i_1 + 1] [16] [i_1])))))));
                    var_25 += ((((((/* implicit */unsigned long long int) 4095U)) != (18446744073709551615ULL))) ? (((unsigned int) ((((/* implicit */_Bool) (signed char)127)) ? (18325846055539441724ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_3 [i_0] [i_1] [i_7])))))))));
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */long long int) 2097024U)) + (min((6422758178922550546LL), (((/* implicit */long long int) ((((/* implicit */int) arr_1 [(unsigned short)8])) != (1264144754))))))));
                }
                for (unsigned int i_9 = 1; i_9 < 23; i_9 += 3) 
                {
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 3280830683884777753ULL)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)76)) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))))))))));
                    var_28 &= ((/* implicit */long long int) ((arr_3 [i_1] [i_7] [11]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                }
                var_29 += ((/* implicit */long long int) (_Bool)1);
                var_30 = ((/* implicit */unsigned char) (((!((_Bool)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (2305843009213693950ULL))))) : (max((((((/* implicit */_Bool) 2305843009213693956ULL)) ? (arr_28 [i_0] [i_0] [i_1] [i_1]) : (var_12))), (var_0)))));
            }
        }
        /* vectorizable */
        for (long long int i_10 = 3; i_10 < 23; i_10 += 1) /* same iter space */
        {
            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 127ULL)) ? (((/* implicit */unsigned long long int) 262143U)) : (arr_6 [i_0] [4] [i_10])))) ? ((-(var_0))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)17207)))))));
            var_32 += 12408329567151628894ULL;
            var_33 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)15)))));
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 24; i_11 += 4) 
            {
                for (unsigned long long int i_12 = 1; i_12 < 22; i_12 += 2) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            var_34 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -5601809595150841121LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_32 [(unsigned char)21] [i_10])))) & (((/* implicit */int) (signed char)-85))));
                            arr_40 [i_13] [i_13] [i_12] [i_13] [i_11] [6U] [i_0] = ((/* implicit */int) ((unsigned char) ((var_4) ? (arr_0 [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_14 = 3; i_14 < 22; i_14 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_15 = 0; i_15 < 24; i_15 += 1) 
            {
                for (unsigned int i_16 = 1; i_16 < 22; i_16 += 3) 
                {
                    {
                        var_35 = ((/* implicit */unsigned int) max((max((((((/* implicit */_Bool) arr_8 [i_16] [i_14] [i_0])) ? (0ULL) : (((/* implicit */unsigned long long int) 1094390831U)))), (((/* implicit */unsigned long long int) 349815798U)))), (((/* implicit */unsigned long long int) ((short) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) -362878825))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_17 = 0; i_17 < 24; i_17 += 3) 
                        {
                            arr_51 [i_16] [i_16] [i_16] [i_0] [i_16 + 1] [(_Bool)1] [i_16] &= ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_8)))) ? (arr_48 [i_0] [i_14 - 1] [i_15] [i_16 + 2] [i_17]) : (((/* implicit */int) arr_29 [i_0] [i_14] [i_15] [i_0] [18LL] [i_17]))));
                            var_36 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_19 [i_15] [(unsigned char)15] [i_16 + 1]))));
                        }
                    }
                } 
            } 
            arr_52 [i_0] [(_Bool)1] [i_14] = (~((-(((/* implicit */int) arr_49 [i_14 - 2] [i_0] [0U] [i_0] [i_14])))));
            arr_53 [i_0] [i_14] [0LL] = ((/* implicit */unsigned int) 2195199341425196365ULL);
            arr_54 [17LL] |= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_45 [i_14 - 2])) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)124))))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_13)) * (0ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1194351439856777004LL)) ? (-4806187980105444990LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))) : (max((arr_10 [i_0]), (((/* implicit */unsigned long long int) var_13))))))));
            var_37 ^= ((unsigned int) arr_47 [i_0] [i_0] [i_14] [6ULL] [i_14] [i_0]);
        }
    }
    for (long long int i_18 = 2; i_18 < 15; i_18 += 1) 
    {
        var_38 += ((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) arr_46 [i_18 - 1] [i_18 + 2] [i_18 - 2] [i_18] [i_18 + 2] [(unsigned char)12]))))));
        arr_57 [i_18] = max(((~((-(arr_25 [i_18 + 1] [i_18] [14LL] [i_18]))))), (var_13));
        var_39 = ((/* implicit */signed char) min((((unsigned int) ((unsigned int) arr_46 [18U] [i_18 - 1] [i_18] [i_18 - 1] [i_18] [(unsigned short)18]))), (max((((/* implicit */unsigned int) (!(var_5)))), ((((_Bool)1) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_18] [i_18])))))))));
        var_40 = max(((~(arr_38 [2U] [i_18 + 2] [8U] [i_18] [i_18]))), (((/* implicit */unsigned int) -709746451)));
    }
    for (unsigned char i_19 = 2; i_19 < 15; i_19 += 4) 
    {
        var_41 = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) (short)-17568)) && (((/* implicit */_Bool) (signed char)91))))));
        var_42 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_19 + 1] [i_19] [i_19 + 1] [i_19 - 1])) ? (arr_25 [i_19] [i_19] [i_19] [i_19 - 2]) : (arr_25 [i_19] [i_19 - 1] [i_19 - 1] [i_19])))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned char)65)) ? (((/* implicit */int) arr_55 [i_19])) : (((/* implicit */int) (_Bool)1))))))) : (((max((1189584279399486736ULL), (((/* implicit */unsigned long long int) (unsigned char)128)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_19] [i_19] [i_19] [i_19] [i_19] [(unsigned short)17])))))));
    }
    for (unsigned int i_20 = 0; i_20 < 17; i_20 += 4) 
    {
        arr_63 [i_20] = ((/* implicit */_Bool) ((unsigned int) arr_62 [i_20]));
        var_43 &= arr_29 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20];
    }
}
