/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68351
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
    var_15 = ((/* implicit */short) min((1082733950889465300ULL), (((/* implicit */unsigned long long int) var_14))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned short i_2 = 4; i_2 < 9; i_2 += 4) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */short) ((int) ((((arr_1 [i_0 - 3]) + (2147483647))) << (((/* implicit */int) arr_7 [i_0] [i_3] [i_0] [i_3] [i_3] [i_3 - 1])))));
                        var_17 = ((((/* implicit */_Bool) (unsigned short)42233)) ? (-2147483643) : (((/* implicit */int) (short)-21309)));
                    }
                    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) arr_10 [i_0 - 2] [i_2]))));
                        var_19 = ((/* implicit */unsigned char) min(((short)-12), (((/* implicit */short) (_Bool)1))));
                        var_20 = ((/* implicit */_Bool) ((int) 10523302220142518432ULL));
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)11)))))));
                    }
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4848184768629996264ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)134))));
                        var_23 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0 - 2] [i_0 + 1] [i_2 - 4] [i_5 - 1])) && (((/* implicit */_Bool) arr_14 [i_0 - 3] [i_0 - 1] [i_2 - 2] [i_5 - 1])))))));
                        arr_16 [i_1] [i_2 - 1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1865506964U)) ? (((((/* implicit */int) arr_10 [i_0 - 3] [i_0])) + ((-2147483647 - 1)))) : (((/* implicit */int) (signed char)-119))))) + (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 1138118160U))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_6 = 2; i_6 < 9; i_6 += 4) 
                    {
                        var_24 += ((/* implicit */short) ((((/* implicit */_Bool) (short)-2734)) ? (9223372036854775801LL) : (-4448821582850469636LL)));
                        var_25 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)218))));
                        var_26 = ((/* implicit */int) arr_19 [i_2 - 3] [i_2 - 3] [i_2] [i_2] [i_2 - 4]);
                    }
                    var_27 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned short) ((unsigned long long int) (unsigned char)64)))), ((-(((/* implicit */int) (_Bool)0))))));
                    var_28 += ((/* implicit */_Bool) ((arr_17 [i_0] [i_1] [i_2]) ? (((/* implicit */unsigned int) 937345307)) : (((((/* implicit */_Bool) 18446744073709551614ULL)) ? (2344696857U) : (arr_3 [i_0 + 1])))));
                    var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65535)) != (((/* implicit */int) (_Bool)0))));
                }
                for (unsigned short i_7 = 4; i_7 < 9; i_7 += 4) /* same iter space */
                {
                    var_30 = ((/* implicit */unsigned short) arr_11 [i_0 - 1] [i_1] [i_1] [i_7] [i_7] [i_1]);
                    var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_0] [i_0])) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_7]))) : (arr_6 [(unsigned char)6])))) ? ((-(((/* implicit */int) (short)32762)))) : (((/* implicit */int) ((1481814411) <= (((/* implicit */int) (unsigned char)255)))))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        var_32 ^= ((/* implicit */int) max(((unsigned short)43210), ((unsigned short)65523)));
                        var_33 = ((/* implicit */unsigned short) ((((8758864529183114631ULL) >= (((/* implicit */unsigned long long int) (-2147483647 - 1))))) ? (((/* implicit */int) (short)16537)) : (((/* implicit */int) ((-8982524663753356610LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)11))))))));
                        arr_27 [i_0] [i_0] [i_7] [i_8] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-64)));
                        var_34 = ((/* implicit */unsigned long long int) ((arr_1 [i_1]) | (((arr_1 [i_8]) / (arr_1 [i_8])))));
                    }
                    for (int i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (short i_10 = 0; i_10 < 11; i_10 += 2) 
                        {
                            arr_35 [i_0] [i_1] [i_0] [i_10] = ((/* implicit */unsigned short) arr_34 [i_0] [i_1] [i_0 - 1] [i_9] [i_1]);
                            var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)16)), ((short)-32757)))) ? (min((18446744073709551603ULL), (((/* implicit */unsigned long long int) (short)-30117)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2449619074U)) ? (-780464092) : (((/* implicit */int) (_Bool)1)))))));
                            var_36 *= ((/* implicit */short) ((((/* implicit */_Bool) (short)18046)) ? (0ULL) : (((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)14)))));
                            var_37 = ((/* implicit */unsigned short) max((var_37), (((unsigned short) ((((/* implicit */_Bool) max((arr_23 [i_0 + 1] [i_7 + 1] [i_0 + 1] [i_10]), (((/* implicit */int) arr_10 [i_0] [i_0]))))) ? (((/* implicit */int) arr_9 [i_7 + 2] [i_1] [9ULL] [i_9])) : (arr_1 [i_1]))))));
                        }
                        for (int i_11 = 1; i_11 < 10; i_11 += 3) 
                        {
                            var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) 15169154206671959102ULL))))))));
                            var_39 = ((/* implicit */int) max((arr_5 [i_0 - 2] [i_0]), (((/* implicit */unsigned long long int) max(((unsigned char)6), (((/* implicit */unsigned char) ((-2080874962) != (arr_23 [i_0] [i_0] [i_0] [i_0])))))))));
                            var_40 = ((/* implicit */unsigned long long int) max((var_40), (((/* implicit */unsigned long long int) arr_12 [i_11]))));
                        }
                        arr_38 [i_9] [i_9] [i_7] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)171))) : (((((/* implicit */_Bool) 3774338489908120556ULL)) ? (arr_31 [(signed char)9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29087)))))));
                        /* LoopSeq 4 */
                        for (long long int i_12 = 1; i_12 < 8; i_12 += 4) /* same iter space */
                        {
                            var_41 = ((/* implicit */int) arr_40 [i_0] [i_1] [i_1]);
                            var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_0])) ? (((((/* implicit */_Bool) (unsigned short)8)) ? (arr_31 [i_0 - 1]) : (((/* implicit */unsigned long long int) 868239555)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))));
                            var_43 = ((/* implicit */_Bool) max((var_43), (((/* implicit */_Bool) arr_1 [i_0 - 1]))));
                            var_44 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)255)) / (((/* implicit */int) (_Bool)1))));
                        }
                        for (long long int i_13 = 1; i_13 < 8; i_13 += 4) /* same iter space */
                        {
                            arr_45 [i_1] [i_9] = ((/* implicit */unsigned int) arr_23 [i_13 - 1] [i_0] [i_1] [i_0]);
                            var_45 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (unsigned short)65529)), (18446744073709551594ULL)));
                        }
                        for (long long int i_14 = 1; i_14 < 8; i_14 += 4) /* same iter space */
                        {
                            arr_48 [i_0] [i_1] [i_1] [i_0] [i_14 - 1] [i_0] [i_0] = ((arr_1 [i_0]) >= (((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 6583987920500109391LL)) > (17776215156865461224ULL)))), (arr_44 [i_0] [i_14 + 2] [i_7 + 1] [i_14 + 2] [i_7 - 4] [i_7 + 1] [i_9])))));
                            var_46 = ((/* implicit */unsigned short) (-((-(((((/* implicit */_Bool) 13407289685977451643ULL)) ? (((/* implicit */unsigned long long int) 3525063353U)) : (8265940932804783328ULL)))))));
                            arr_49 [i_0] [i_1] [i_7] [i_9] [i_9] [i_14 - 1] = (+(((/* implicit */int) min((((/* implicit */unsigned short) max((arr_28 [i_0] [i_1] [i_7] [i_14 + 3]), (((/* implicit */unsigned char) arr_36 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0]))))), (max((arr_10 [i_1] [i_7 + 1]), (arr_37 [i_0] [i_1] [i_7] [i_7 + 2] [i_9] [i_9] [(unsigned char)10])))))));
                            arr_50 [i_0] [i_1] [i_7] [i_0] [i_14] = ((/* implicit */unsigned char) arr_19 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_14] [i_14 + 1]);
                            arr_51 [(_Bool)1] [i_0] [i_1] [i_9] [i_9] [i_0] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) -772619245)) ? (576460752303423487ULL) : (8867211408657193727ULL)));
                        }
                        for (long long int i_15 = 1; i_15 < 8; i_15 += 4) /* same iter space */
                        {
                            arr_55 [i_9] [i_1] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
                            arr_56 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = max(((-(((((/* implicit */_Bool) arr_37 [i_0] [5U] [i_0 - 1] [i_1] [i_7] [i_9] [i_15 + 3])) ? (((/* implicit */int) arr_36 [i_9] [i_9] [i_9] [i_15] [i_9] [i_7])) : (((/* implicit */int) arr_19 [i_0] [i_0 - 2] [i_0 - 3] [i_0] [i_0])))))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_11 [i_0 - 3] [i_0 - 3] [i_0 - 2] [i_9] [i_15] [i_15 + 3])), (((unsigned short) 411212792520707731ULL))))));
                        }
                    }
                    var_47 = ((/* implicit */short) min((var_47), (((/* implicit */short) min((((/* implicit */int) min(((unsigned short)34787), (((/* implicit */unsigned short) (short)-32765))))), (min((118919272), (((/* implicit */int) (unsigned char)25)))))))));
                    /* LoopSeq 1 */
                    for (int i_16 = 2; i_16 < 8; i_16 += 3) 
                    {
                        var_48 = ((/* implicit */unsigned short) max(((-(min((arr_6 [i_16]), (((/* implicit */unsigned int) arr_33 [10LL] [i_1] [i_0] [i_16] [i_1])))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_20 [i_0] [i_1] [i_7 - 3] [i_7 - 3])) != (((/* implicit */int) arr_20 [i_16] [i_7 - 4] [i_1] [i_0 + 1])))))));
                        /* LoopSeq 1 */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            arr_63 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 2] [i_0] &= ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)18550))));
                            var_49 = ((/* implicit */_Bool) max((var_49), (((/* implicit */_Bool) ((unsigned long long int) (short)56)))));
                        }
                        /* LoopSeq 4 */
                        for (unsigned char i_18 = 0; i_18 < 11; i_18 += 3) /* same iter space */
                        {
                            var_50 = ((/* implicit */unsigned short) (+((((_Bool)1) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (_Bool)0))))));
                            var_51 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((-229104584) / (((/* implicit */int) (unsigned char)9))))), (((((/* implicit */_Bool) arr_10 [i_1] [i_16 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_7 - 1] [i_7]))) : (((((/* implicit */_Bool) arr_39 [i_18] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0 - 3] [i_1] [i_7 - 3] [i_1] [i_18]))) : (arr_40 [i_0] [i_1] [i_1])))))));
                            var_52 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_34 [i_0] [i_0 + 1] [i_18] [i_18] [i_18])), (((unsigned long long int) 12636845697542128106ULL))))) ? (((/* implicit */int) ((unsigned short) max((((/* implicit */int) (signed char)91)), ((-2147483647 - 1)))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0 - 2])) && (((((/* implicit */_Bool) (short)-26071)) || (((/* implicit */_Bool) (unsigned char)153)))))))));
                        }
                        for (unsigned char i_19 = 0; i_19 < 11; i_19 += 3) /* same iter space */
                        {
                            var_53 = ((/* implicit */short) ((min((12ULL), (((/* implicit */unsigned long long int) (_Bool)0)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_15 [i_7] [i_7 - 3] [i_7] [i_7 - 4] [i_7 - 4] [i_19]), (arr_15 [i_1] [i_1] [i_1] [i_7] [i_7 + 1] [i_7 + 1])))))));
                            arr_70 [i_0] [i_1] [i_7] [i_16 + 1] [i_19] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)0)))), ((-(arr_31 [i_0])))));
                        }
                        for (unsigned char i_20 = 0; i_20 < 11; i_20 += 3) /* same iter space */
                        {
                            var_54 = ((/* implicit */int) ((((/* implicit */_Bool) arr_46 [i_0 + 1] [i_1] [i_7 - 2] [i_16] [i_1])) ? (((unsigned long long int) ((((/* implicit */int) arr_61 [i_0] [i_0 - 2] [i_7] [i_0] [(unsigned char)3])) - (((/* implicit */int) arr_9 [i_0 - 3] [i_0 - 3] [0U] [i_16]))))) : (((((/* implicit */_Bool) min((((/* implicit */int) arr_30 [i_0] [i_1] [i_1] [i_0] [i_16 + 3] [i_20])), (arr_23 [i_20] [i_0 - 3] [i_0 - 3] [i_0 - 3])))) ? (((unsigned long long int) arr_30 [i_0] [i_0] [i_7] [i_0] [i_20] [i_20])) : (min((13890445542336242185ULL), (((/* implicit */unsigned long long int) (unsigned short)8389))))))));
                            var_55 = ((/* implicit */short) ((15782459394501419377ULL) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 25ULL)) ? (-2015158491) : (((/* implicit */int) (short)14894)))))));
                        }
                        for (int i_21 = 0; i_21 < 11; i_21 += 3) 
                        {
                            var_56 = ((/* implicit */_Bool) min((var_56), (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)1)))))));
                            var_57 = ((/* implicit */int) max((var_57), (((/* implicit */int) arr_37 [i_0] [i_1] [i_7] [i_0] [i_16 - 2] [i_21] [i_1]))));
                        }
                    }
                }
                for (unsigned short i_22 = 4; i_22 < 9; i_22 += 4) /* same iter space */
                {
                    var_58 = ((/* implicit */_Bool) ((unsigned long long int) (signed char)23));
                    var_59 = ((/* implicit */unsigned long long int) min((var_59), (((/* implicit */unsigned long long int) ((int) 255ULL)))));
                    var_60 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60668))) != (3009689914U)));
                    var_61 += ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) arr_28 [i_0 - 1] [i_0 - 2] [i_0 - 3] [i_0])) | (((/* implicit */int) arr_28 [i_0] [i_0] [i_0 - 2] [i_0])))));
                }
                /* vectorizable */
                for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
                {
                    arr_81 [i_0] [i_23] [i_23] = ((/* implicit */unsigned int) ((arr_75 [(_Bool)1] [i_0 - 1]) ? (((/* implicit */int) arr_75 [i_0] [i_0 - 1])) : (((/* implicit */int) arr_75 [i_0] [i_0 - 3]))));
                    arr_82 [i_0] [i_0] [i_0 - 3] [i_23] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_23] [i_23])) ? (((/* implicit */int) arr_29 [i_0] [i_1] [i_23])) : (((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1]))))));
                }
                var_62 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)0)) << (((((/* implicit */int) (short)-4266)) + (4285)))));
                var_63 = ((/* implicit */unsigned long long int) ((long long int) (short)24795));
                var_64 = ((/* implicit */unsigned char) min((((0ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (arr_75 [i_0] [i_1])));
            }
        } 
    } 
    var_65 = ((/* implicit */unsigned int) ((((((((/* implicit */int) (unsigned short)36320)) - (((/* implicit */int) (unsigned short)48192)))) - (((/* implicit */int) (!(((/* implicit */_Bool) -410803423))))))) | (((/* implicit */int) var_12))));
    var_66 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)-28825))))) ? (min((((/* implicit */unsigned long long int) 4294967289U)), (576460752303419392ULL))) : (((14724937181680489082ULL) - (((/* implicit */unsigned long long int) 0)))))));
}
