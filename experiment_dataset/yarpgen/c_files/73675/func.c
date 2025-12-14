/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73675
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_3))) & (var_0)));
    var_11 = ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50858))) * (8349691177948735163ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_4), (var_4)))) - ((+(((/* implicit */int) var_7))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */int) max((1604844863778171908ULL), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 3565842123U)) ? (7406313311678828696LL) : (((/* implicit */long long int) 1605150952)))), (((/* implicit */long long int) ((unsigned int) var_9))))))));
                arr_8 [i_0] [i_0] &= ((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0]);
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */short) var_8);
                                arr_15 [i_1] = ((/* implicit */signed char) var_5);
                                var_14 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) / (((((/* implicit */_Bool) (unsigned short)14677)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14668))) : (2689497179U)))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned long long int i_5 = 2; i_5 < 16; i_5 += 2) /* same iter space */
                    {
                        arr_18 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) (!(((((/* implicit */_Bool) 9151314442816847872ULL)) && (((/* implicit */_Bool) var_8))))));
                        arr_19 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1 - 1] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)17678))))) ? (((((/* implicit */unsigned long long int) var_9)) ^ (var_1))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (arr_11 [i_1 - 1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62279))))))));
                    }
                    for (unsigned long long int i_6 = 2; i_6 < 16; i_6 += 2) /* same iter space */
                    {
                        var_15 *= ((/* implicit */unsigned int) ((min((max((arr_6 [i_6] [i_0] [i_6]), (((/* implicit */unsigned long long int) arr_21 [i_0] [i_0])))), (((/* implicit */unsigned long long int) var_3)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_6])))));
                        var_16 *= ((/* implicit */signed char) ((8908970710450874426ULL) + (((max((8908970710450874426ULL), (((/* implicit */unsigned long long int) (signed char)-41)))) - (10097052895760816457ULL)))));
                        var_17 += ((/* implicit */unsigned long long int) var_7);
                    }
                    for (short i_7 = 3; i_7 < 16; i_7 += 1) 
                    {
                        arr_26 [i_7] [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((8908970710450874426ULL) * (((/* implicit */unsigned long long int) 1119209455))))) ? (((/* implicit */long long int) (-((-(((/* implicit */int) (unsigned short)27872))))))) : ((-(((var_0) / (((/* implicit */long long int) -1119209456))))))));
                        var_18 = ((/* implicit */unsigned short) var_9);
                        var_19 *= min((max((1119209471), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-53)))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1] [i_1])) || (((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_2] [i_7] [i_0] [i_2])) || (((/* implicit */_Bool) var_4))))))));
                    }
                }
                arr_27 [i_1] = max((((/* implicit */unsigned long long int) ((var_0) & (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1])))))), (min((8349691177948735170ULL), (((/* implicit */unsigned long long int) (unsigned short)50859)))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_8 = 0; i_8 < 17; i_8 += 2) 
                {
                    arr_31 [i_1] [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((9537773363258677190ULL) / (((/* implicit */unsigned long long int) -1774296120))))) ? (((((/* implicit */int) (short)7)) + (((/* implicit */int) (signed char)30)))) : (130944)));
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_2)) : (var_1))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-25836)) : (((/* implicit */int) var_3)))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 0; i_9 < 17; i_9 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)142)) ^ (((/* implicit */int) (short)-22097))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 4) 
                        {
                            var_22 = ((/* implicit */int) arr_1 [i_0] [i_0]);
                            arr_37 [i_0] [i_1] [i_1] [i_1] [i_10] [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)25812)) ? (var_9) : (((/* implicit */unsigned int) arr_3 [i_8]))))) ^ (((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned long long int) var_9))))));
                            var_23 = ((/* implicit */short) -4966217840240374504LL);
                            var_24 = ((arr_14 [i_0] [i_10] [i_0] [i_8] [i_0] [i_8]) ^ (((/* implicit */long long int) ((/* implicit */int) var_5))));
                        }
                        var_25 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */long long int) var_9)))));
                    }
                    var_26 += ((/* implicit */short) ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_36 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_0]))));
                }
                for (unsigned char i_11 = 0; i_11 < 17; i_11 += 4) 
                {
                    var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (max((var_2), (((/* implicit */long long int) (+(((/* implicit */int) var_4))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)22092)) ^ (((/* implicit */int) (unsigned char)231))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (var_1)))))))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_12 = 1; i_12 < 15; i_12 += 1) /* same iter space */
                    {
                        arr_44 [i_1] = ((/* implicit */long long int) var_3);
                        var_28 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)114)) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_11 [i_0] [i_11]) != (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))))))) : (((var_0) % (var_8)))))) ? (((((/* implicit */_Bool) var_5)) ? (var_6) : (arr_43 [i_0]))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (11963402948757140123ULL)))) ? (((/* implicit */unsigned long long int) arr_11 [i_11] [i_11])) : (((((/* implicit */_Bool) (short)-22097)) ? (0ULL) : (arr_23 [i_11] [i_11] [i_11])))))));
                    }
                    for (unsigned long long int i_13 = 1; i_13 < 15; i_13 += 1) /* same iter space */
                    {
                        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -984713464)) ? ((~(14838337031147202923ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22096)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1 + 1] [i_1])))))) : (((((/* implicit */_Bool) ((-5824525794199321307LL) ^ (-5824525794199321307LL)))) ? (((var_2) | (arr_14 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_0] [i_0] [i_1] [i_11] [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))))))));
                        var_30 = ((/* implicit */short) min((max((((/* implicit */unsigned int) arr_32 [i_0] [i_0] [i_1 - 1] [i_0] [i_0])), (var_9))), (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) < (4030461876U)))))))));
                        arr_47 [i_1] = ((((/* implicit */_Bool) max((var_1), (8539207029555496270ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_3), ((unsigned short)10706))))) : (max((2468820662382550345LL), (-2468820662382550340LL))));
                    }
                }
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 2 */
    for (unsigned short i_14 = 1; i_14 < 20; i_14 += 4) 
    {
        for (short i_15 = 0; i_15 < 21; i_15 += 4) 
        {
            {
                var_32 = ((/* implicit */int) min((((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) var_8))))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) ((((/* implicit */int) (short)22097)) != (((/* implicit */int) arr_50 [i_14])))))));
                var_33 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_14] [i_15]))) != (((((127262886778863314ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)229))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)142)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */unsigned long long int) ((2637048278U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-38)))))) : (((unsigned long long int) 4966217840240374503LL))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned char)255)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0))))), (((/* implicit */long long int) (unsigned char)255))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */unsigned long long int) var_8))))))));
            }
        } 
    } 
}
