/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72483
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
    var_11 = ((/* implicit */int) var_6);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned char) min(((_Bool)1), ((_Bool)1)));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */_Bool) arr_0 [i_0]);
                            var_12 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */int) (short)16508)) : (((/* implicit */int) (unsigned short)3))))) ? (((((/* implicit */_Bool) var_3)) ? (arr_8 [i_0] [i_1] [i_2] [i_3]) : (arr_8 [i_4] [(short)16] [i_2] [i_1]))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_14 [i_3] [i_3] [i_3] [i_3])), ((unsigned char)116))))));
                            arr_16 [i_0] [i_0] [i_0] [i_3] [i_3] [i_0] = ((/* implicit */unsigned short) ((signed char) min((arr_8 [i_3] [i_3] [(signed char)14] [i_3]), (((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_6 [i_2] [i_2] [i_2]) : (arr_6 [i_3] [(unsigned char)1] [(unsigned char)1]))))));
                        }
                    } 
                } 
            } 
            var_13 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned short) (unsigned char)223)), (var_7))), (((/* implicit */unsigned short) ((arr_6 [i_0] [i_1] [i_0]) != (arr_9 [i_0] [i_0] [13]))))))) ? (((((/* implicit */_Bool) max((var_0), (arr_11 [i_1] [i_1] [(signed char)22] [i_1])))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6)))))) : (((/* implicit */int) (_Bool)1))));
            arr_17 [i_0] [i_0] = ((/* implicit */unsigned char) arr_10 [i_0] [i_0] [i_0] [i_1]);
        }
        for (signed char i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_6 = 0; i_6 < 23; i_6 += 3) 
            {
                arr_23 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (signed char)72)))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_5] [(_Bool)1])) ? (arr_8 [i_0] [i_0] [i_0] [(unsigned char)14]) : (((/* implicit */int) var_7)))))), (min((((/* implicit */int) (unsigned char)255)), ((~(((/* implicit */int) arr_12 [i_0] [i_5] [i_5] [(unsigned char)21]))))))));
                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((unsigned char) -343270911)))));
                arr_24 [i_0] [i_0] [i_6] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_2))) ? (((/* implicit */int) var_10)) : ((-(arr_8 [i_0] [i_0] [i_0] [i_0])))));
            }
            for (int i_7 = 1; i_7 < 21; i_7 += 3) 
            {
                arr_28 [i_0] [(_Bool)1] [i_5] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_26 [i_0] [i_5] [i_7 - 1] [i_0]), (arr_26 [i_0] [i_0] [i_0] [i_0])))) << ((((+(var_8))) - (1724711363)))));
                var_15 = (-(((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */int) var_3)))))))));
            }
            var_16 = ((/* implicit */unsigned short) ((unsigned char) max((arr_11 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) arr_22 [i_5] [i_5] [i_0] [i_0])))));
            var_17 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_5])) / (arr_5 [i_5] [i_0] [i_0]))) * (((((((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_5])) / (((/* implicit */int) var_10)))) * ((-(-1727822890)))))));
        }
    }
    for (signed char i_8 = 0; i_8 < 12; i_8 += 2) 
    {
        var_18 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_31 [i_8])) ? (((/* implicit */int) arr_11 [i_8] [i_8] [i_8] [2ULL])) : (((/* implicit */int) (short)-3261))))))) ? (((/* implicit */int) (unsigned short)32429)) : (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) arr_4 [i_8] [14ULL] [i_8])) ? (((/* implicit */int) var_1)) : (var_8))) : (((((/* implicit */int) var_3)) - (((/* implicit */int) (unsigned short)33994))))))));
        arr_33 [i_8] [i_8] = ((/* implicit */int) arr_14 [i_8] [i_8] [i_8] [i_8]);
        arr_34 [i_8] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_19 [i_8])) ? ((~(1415742103))) : (((((/* implicit */_Bool) (unsigned char)59)) ? (((/* implicit */int) arr_26 [i_8] [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_13 [i_8] [i_8] [i_8] [i_8] [i_8])))))) == ((((!(((/* implicit */_Bool) 18446744073709551615ULL)))) ? (((/* implicit */int) (_Bool)1)) : (((arr_27 [i_8]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9))))))));
    }
    for (unsigned char i_9 = 3; i_9 < 11; i_9 += 2) 
    {
        var_19 = ((/* implicit */signed char) 16ULL);
        var_20 |= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) -1790681552)) ? (arr_6 [i_9] [i_9] [i_9 + 2]) : (var_5)))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_9 + 2] [i_9 - 1] [i_9 - 2] [i_9]))) : (((((/* implicit */_Bool) 4837453584799724372ULL)) ? (6438336235139163717ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))))))));
        arr_37 [i_9 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((1619052055), (((/* implicit */int) (signed char)-16))))) ? (((((/* implicit */int) (_Bool)1)) << (((18446744073709551594ULL) - (18446744073709551569ULL))))) : (((/* implicit */int) (_Bool)1))));
    }
    var_21 = ((/* implicit */short) var_8);
    var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_4))))));
    var_23 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) var_6)) >> (((/* implicit */int) (unsigned char)28)))) : (((((/* implicit */int) var_0)) >> (((((/* implicit */int) var_7)) - (31075))))))));
}
