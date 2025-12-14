/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6630
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */short) var_15)), (((short) (~(((/* implicit */int) (unsigned char)147)))))));
        var_16 ^= ((((/* implicit */unsigned int) ((/* implicit */int) (short)0))) * (4294967295U));
    }
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 1; i_2 < 14; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                for (unsigned short i_4 = 4; i_4 < 15; i_4 += 3) 
                {
                    {
                        var_17 *= ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_2 [i_2 + 2])))), (((/* implicit */int) min((((/* implicit */signed char) var_15)), (arr_2 [i_2 + 1]))))));
                        arr_14 [i_1] = ((/* implicit */_Bool) min((max((((/* implicit */long long int) min((((/* implicit */unsigned short) arr_8 [i_1] [i_2] [(short)1])), (var_3)))), (arr_0 [(short)1]))), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
                        var_18 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)220))) == (arr_5 [i_1] [(_Bool)1]))))));
                        var_19 = ((/* implicit */signed char) ((unsigned short) var_4));
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) * (1293750125)));
                    }
                } 
            } 
        } 
        var_21 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((2147483647) != (((/* implicit */int) (unsigned short)2603)))) ? (((((/* implicit */_Bool) arr_7 [(short)12] [(unsigned short)3])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [14])))) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned short)41583)))))))) ? (((/* implicit */int) max((((unsigned short) var_4)), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1] [16ULL])) && (((/* implicit */_Bool) var_5)))))));
        var_22 ^= ((/* implicit */unsigned int) (+(min((((unsigned long long int) var_1)), (((((/* implicit */unsigned long long int) arr_0 [i_1])) / (arr_10 [i_1] [i_1])))))));
        var_23 = ((/* implicit */short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 584235413U)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (7361645354168349574ULL))))))), (min((min((var_13), (((/* implicit */unsigned int) (signed char)4)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 126172661U)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (short)-26293)))))))));
        var_24 *= ((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) -1535514813)))) && (((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_15)) - (((/* implicit */int) var_5))))))) : (max((max((arr_6 [i_1] [(_Bool)1]), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) (unsigned char)229))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_25 *= (_Bool)1;
        var_26 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)32767))));
        /* LoopSeq 1 */
        for (long long int i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            var_27 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((2983858626U), (((/* implicit */unsigned int) (unsigned short)274))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)45489)) : (((/* implicit */int) (_Bool)1))))) : (((long long int) var_3))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)(-32767 - 1))) * (((/* implicit */int) (_Bool)0))))) : (((unsigned long long int) ((unsigned short) 24ULL)))));
            arr_21 [i_5] = ((/* implicit */unsigned short) ((short) arr_13 [i_6]));
        }
        arr_22 [i_5] = ((/* implicit */unsigned short) arr_1 [i_5]);
    }
    for (unsigned char i_7 = 2; i_7 < 12; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_8 = 2; i_8 < 13; i_8 += 2) 
        {
            for (int i_9 = 4; i_9 < 15; i_9 += 4) 
            {
                {
                    arr_31 [i_7] [i_7 + 1] [i_7] = min((((((/* implicit */_Bool) (~(16210840698146733532ULL)))) ? ((+(11796451414601216258ULL))) : (((arr_10 [i_7] [i_7]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_7])) ? (((((/* implicit */_Bool) arr_5 [i_7] [(signed char)7])) ? (4294967295U) : (arr_25 [i_9]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) < (7175786870403635153LL)))))))));
                    arr_32 [(unsigned short)4] [(short)10] [(_Bool)1] [6U] = (+((-(max((2155514346U), (((/* implicit */unsigned int) (_Bool)1)))))));
                    arr_33 [(_Bool)1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_8])) >> (((((/* implicit */int) min((var_11), (arr_29 [i_7] [i_8 + 3] [i_8 + 3])))) + (122)))))), (((arr_10 [i_7 + 1] [i_7 - 1]) >> (((arr_10 [i_7 + 1] [i_7 + 3]) - (17511447436660907852ULL)))))));
                }
            } 
        } 
        var_28 ^= ((/* implicit */long long int) max((((/* implicit */int) arr_29 [i_7] [i_7] [i_7])), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)63)), (0U)))) ? (((((/* implicit */_Bool) arr_15 [i_7])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_7])))))))));
        arr_34 [(_Bool)1] [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(14317678958255927729ULL))))));
        var_29 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_4 [8U]))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) (unsigned char)119))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [(unsigned short)6])) || (((/* implicit */_Bool) 1259682100U)))))));
        var_30 = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [(unsigned char)6])) && (((/* implicit */_Bool) -1152921504606846976LL))))), (min((arr_0 [i_7]), (((/* implicit */long long int) var_7)))))) == (((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) arr_1 [(_Bool)1]))))))));
    }
    /* LoopNest 3 */
    for (signed char i_10 = 0; i_10 < 22; i_10 += 2) 
    {
        for (unsigned int i_11 = 0; i_11 < 22; i_11 += 3) 
        {
            for (signed char i_12 = 0; i_12 < 22; i_12 += 2) 
            {
                {
                    var_31 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_2 [i_10])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_36 [i_10])))), ((((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_36 [i_12]))))));
                    arr_44 [i_12] [4U] [4U] = ((/* implicit */_Bool) ((unsigned char) ((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) 10801916592255532256ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_37 [i_10] [(signed char)14] [i_12]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)2040))))))));
                }
            } 
        } 
    } 
    var_32 = ((/* implicit */unsigned long long int) min((max((min((var_8), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) ((unsigned int) var_15))))), (((/* implicit */long long int) ((unsigned short) (unsigned char)241)))));
    var_33 = ((/* implicit */_Bool) min((max((((/* implicit */int) min((var_10), (((/* implicit */unsigned char) var_6))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5)))))), (((/* implicit */int) var_9))));
}
