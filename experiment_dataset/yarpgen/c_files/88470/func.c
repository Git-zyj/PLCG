/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88470
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
    for (long long int i_0 = 2; i_0 < 21; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 21; i_2 += 4) 
            {
                for (int i_3 = 3; i_3 < 24; i_3 += 3) 
                {
                    {
                        var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_0])), (4867986019169599714ULL)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)60562)))))))));
                        var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)29))) / (-6382964439583207442LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_2 [i_2 - 1] [i_2 - 1]) != (((/* implicit */int) arr_1 [i_0 + 2])))))) : (min((((/* implicit */unsigned int) arr_0 [i_2 + 2])), (630869503U)))));
                    }
                } 
            } 
        } 
        var_13 = ((/* implicit */unsigned long long int) arr_5 [i_0 + 4] [i_0 + 2] [i_0]);
        /* LoopSeq 2 */
        for (signed char i_4 = 1; i_4 < 23; i_4 += 3) /* same iter space */
        {
            arr_13 [i_4] = min((((((/* implicit */_Bool) arr_6 [i_4 - 1] [i_0 + 3])) ? ((-(22298146U))) : ((-(var_7))))), (((/* implicit */unsigned int) ((unsigned short) arr_3 [i_0 + 4]))));
            /* LoopSeq 4 */
            for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                arr_18 [i_0] = ((/* implicit */unsigned char) ((max((var_8), (((/* implicit */unsigned long long int) ((-1308655796) + (((/* implicit */int) (unsigned short)4953))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_4), ((!(((/* implicit */_Bool) arr_9 [16] [i_5] [i_5] [i_0]))))))))));
                var_14 = ((/* implicit */_Bool) ((((/* implicit */int) ((arr_12 [i_5]) < (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_10))))))) / (((/* implicit */int) ((_Bool) arr_16 [i_0 + 1] [i_0 + 2] [i_4 - 1] [i_5])))));
                var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (unsigned short)27397)) : (((/* implicit */int) (signed char)-40)))))));
                arr_19 [(signed char)9] [i_0] [i_4] [i_5] = ((/* implicit */unsigned short) ((((-277147529) + (2147483647))) >> (((((/* implicit */int) (unsigned short)768)) - (759)))));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 21; i_7 += 1) 
                {
                    for (signed char i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        {
                            var_16 *= ((((/* implicit */unsigned long long int) ((22298146U) * (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) / (((((/* implicit */_Bool) ((int) 167095678))) ? (((/* implicit */unsigned long long int) (+(arr_12 [3ULL])))) : (((arr_8 [i_4]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
                            var_17 = ((/* implicit */int) ((unsigned long long int) ((_Bool) ((var_4) ? (((/* implicit */int) arr_5 [20ULL] [20ULL] [20ULL])) : (arr_7 [(unsigned short)10] [i_4] [i_4] [i_4])))));
                        }
                    } 
                } 
                arr_27 [i_6] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60562))) / (22298134U)));
                arr_28 [(unsigned short)10] [(unsigned char)4] [(unsigned short)10] &= ((/* implicit */int) arr_10 [(short)14] [i_4 + 2] [i_4] [(short)14]);
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 25; i_10 += 3) 
                {
                    for (signed char i_11 = 3; i_11 < 21; i_11 += 4) 
                    {
                        {
                            arr_39 [i_11] [i_10] [i_0] [(short)10] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60599))) | (arr_12 [i_10])));
                            var_18 = ((/* implicit */signed char) var_0);
                        }
                    } 
                } 
                var_19 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) max(((_Bool)1), ((_Bool)1)))), (arr_34 [(signed char)17] [i_9])));
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+((-(((/* implicit */int) (unsigned char)147))))))) | (((long long int) (unsigned short)59144))));
                /* LoopNest 2 */
                for (unsigned short i_12 = 2; i_12 < 22; i_12 += 3) 
                {
                    for (long long int i_13 = 0; i_13 < 25; i_13 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) arr_20 [i_0] [i_0] [i_0 + 2] [(_Bool)1]);
                            arr_46 [i_0] [(unsigned short)14] [i_9] [i_12 - 2] [i_12] [(unsigned char)21] [10ULL] = ((/* implicit */unsigned short) (-(max((((/* implicit */int) arr_6 [0ULL] [i_4 - 1])), (773515797)))));
                        }
                    } 
                } 
                var_22 -= ((/* implicit */unsigned char) min((((/* implicit */long long int) min((((/* implicit */int) (unsigned char)223)), ((-(((/* implicit */int) (_Bool)1))))))), (arr_38 [i_4] [i_4])));
            }
            for (unsigned int i_14 = 0; i_14 < 25; i_14 += 3) 
            {
                arr_50 [i_14] [i_4 + 2] [21U] [(_Bool)1] |= ((/* implicit */unsigned long long int) max(((unsigned char)1), (((/* implicit */unsigned char) (signed char)-16))));
                /* LoopSeq 1 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    var_23 = ((/* implicit */unsigned short) (!(max((arr_31 [i_4] [i_0 + 1] [i_4 + 2] [i_15]), (arr_31 [i_0] [i_0 - 1] [i_4 + 1] [i_15])))));
                    var_24 = ((/* implicit */_Bool) 15254525582677545525ULL);
                }
                arr_53 [i_4] [i_4] [i_14] [(signed char)16] = (!(((/* implicit */_Bool) ((unsigned short) var_5))));
                arr_54 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~(-277147529)));
            }
            arr_55 [i_4] = ((/* implicit */int) min(((!(((/* implicit */_Bool) (short)21722)))), ((!(((/* implicit */_Bool) arr_10 [i_0] [i_4 + 2] [i_0 - 1] [(unsigned char)12]))))));
        }
        for (signed char i_16 = 1; i_16 < 23; i_16 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_17 = 1; i_17 < 21; i_17 += 2) 
            {
                for (unsigned long long int i_18 = 2; i_18 < 22; i_18 += 3) 
                {
                    {
                        var_25 += ((/* implicit */int) min(((short)-21722), ((short)-22789)));
                        var_26 = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)21597))))) || (((/* implicit */_Bool) (signed char)38)));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                for (int i_20 = 2; i_20 < 24; i_20 += 3) 
                {
                    {
                        arr_67 [i_0] [i_0] [i_20] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_21 [i_0 + 1] [i_20 + 1] [i_19] [i_20 + 1])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_20 + 1] [i_19] [i_16 + 1] [i_0 + 2]))))), (((/* implicit */unsigned int) (short)438))));
                        var_27 -= ((/* implicit */long long int) ((((/* implicit */_Bool) 277147506)) ? (((/* implicit */unsigned long long int) 277147529)) : (max((((unsigned long long int) -277147538)), (((/* implicit */unsigned long long int) ((-2076730763) == (((/* implicit */int) (short)21722)))))))));
                    }
                } 
            } 
            arr_68 [i_16] [i_16] [i_0] = ((/* implicit */unsigned int) ((max((arr_2 [i_16 - 1] [i_0 + 1]), (((((/* implicit */_Bool) -277147523)) ? (65536) : (((/* implicit */int) arr_16 [i_16] [(unsigned char)3] [(unsigned char)3] [(unsigned char)3])))))) / (((/* implicit */int) (unsigned short)19917))));
            var_28 &= ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_62 [i_0 + 4] [i_0] [i_0 + 3])) ? ((-(var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) arr_3 [i_16]))) / (((/* implicit */int) min((((/* implicit */short) arr_29 [(unsigned char)21] [(unsigned char)21] [i_16 + 2])), (arr_52 [i_0] [i_16] [i_0] [i_0])))))))));
            var_29 ^= ((/* implicit */unsigned int) (+(min((max((((/* implicit */long long int) 280632363)), (-6847800336509471570LL))), (((/* implicit */long long int) 38594368))))));
        }
        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1762372629)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (18ULL)))) : (((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (long long int i_21 = 2; i_21 < 21; i_21 += 1) /* same iter space */
    {
        var_31 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_21] [i_21 + 1] [i_21])) ? (15875278465273019434ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_21] [i_21] [i_21]))))))));
        var_32 += ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)45637))) <= (-7559827136205178256LL));
    }
    for (unsigned long long int i_22 = 1; i_22 < 22; i_22 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_23 = 0; i_23 < 23; i_23 += 1) 
        {
            for (short i_24 = 2; i_24 < 20; i_24 += 1) 
            {
                for (unsigned int i_25 = 0; i_25 < 23; i_25 += 2) 
                {
                    {
                        var_33 += ((/* implicit */signed char) (-(((((/* implicit */_Bool) (unsigned short)59703)) ? ((+(((/* implicit */int) (unsigned char)182)))) : ((-(((/* implicit */int) (unsigned short)45619))))))));
                        /* LoopSeq 1 */
                        for (short i_26 = 0; i_26 < 23; i_26 += 2) 
                        {
                            var_34 ^= ((/* implicit */unsigned int) 11846721169068491346ULL);
                            arr_83 [i_23] [i_22] [i_22] [(short)19] = ((/* implicit */unsigned char) (-(((unsigned long long int) (((_Bool)1) ? (6071989045263711937ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36772))))))));
                            arr_84 [i_22] [(unsigned short)10] [i_22] [10ULL] [(unsigned short)10] [i_22] = min((min((15875278465273019425ULL), (12681560036063421415ULL))), (((/* implicit */unsigned long long int) arr_2 [i_24 - 2] [10ULL])));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_27 = 1; i_27 < 19; i_27 += 1) 
        {
            arr_87 [i_22] [i_22] [i_22] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) ^ (var_8)));
            arr_88 [i_22] [i_22 + 1] = ((/* implicit */_Bool) ((unsigned long long int) 7944855748129070358ULL));
            arr_89 [i_22] [i_22] = ((/* implicit */int) ((((/* implicit */_Bool) 2723437068488323417LL)) ? (((/* implicit */unsigned long long int) -2147483646)) : (10501888325580481257ULL)));
            arr_90 [i_22] [i_22] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) 10431632179962360840ULL))) ? (((((/* implicit */long long int) ((/* implicit */int) var_4))) ^ (var_5))) : (((/* implicit */long long int) 3508897849U))));
        }
    }
    /* LoopNest 2 */
    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
    {
        for (int i_29 = 4; i_29 < 15; i_29 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_30 = 0; i_30 < 17; i_30 += 3) 
                {
                    for (unsigned long long int i_31 = 0; i_31 < 17; i_31 += 4) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_1)))) / ((-(var_5))))) / (((/* implicit */long long int) ((/* implicit */int) min(((signed char)-68), (((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)41)))))))))));
                            var_36 -= ((/* implicit */short) arr_2 [i_30] [i_28]);
                            var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((+(((/* implicit */int) arr_95 [(_Bool)1] [(_Bool)1] [(_Bool)1])))) >> (((((((/* implicit */_Bool) var_1)) ? (15875278465273019425ULL) : (((/* implicit */unsigned long long int) 1073741312U)))) - (15875278465273019422ULL)))))) ? ((~(min((((/* implicit */unsigned long long int) arr_82 [i_28] [5U] [i_29 - 3] [i_28])), (8123856840945551539ULL))))) : (((/* implicit */unsigned long long int) -2147483646))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_32 = 0; i_32 < 17; i_32 += 3) 
                {
                    for (unsigned long long int i_33 = 0; i_33 < 17; i_33 += 4) 
                    {
                        {
                            arr_106 [12] [i_33] [i_29] [i_29] [i_28] = ((/* implicit */unsigned int) (~(-277147505)));
                            var_38 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_29 [i_29 + 1] [i_29 + 1] [i_29 - 3])))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)234)), (arr_62 [i_28] [i_28] [i_29 + 1])))) : (((/* implicit */int) min((arr_29 [i_28] [i_32] [i_29 + 2]), (arr_29 [i_28] [i_29] [i_29 - 4]))))));
                            arr_107 [i_33] [i_29] [i_28] = ((/* implicit */_Bool) 2147483646);
                            arr_108 [(_Bool)1] [i_29] [i_29] = ((/* implicit */int) (!(((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) arr_103 [i_28])) : (((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
                arr_109 [i_29] = ((/* implicit */unsigned long long int) max((((unsigned int) arr_100 [i_29 - 1])), (((/* implicit */unsigned int) (signed char)-16))));
                arr_110 [i_28] = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)47054)) != (((/* implicit */int) (signed char)39)))) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (unsigned short)28764))));
            }
        } 
    } 
    var_39 = ((/* implicit */unsigned long long int) var_1);
    var_40 = (unsigned char)240;
}
