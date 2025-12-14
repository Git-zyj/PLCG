/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80068
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_10 = ((/* implicit */signed char) (_Bool)1);
            var_11 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned short)52645)) : (((/* implicit */int) arr_2 [i_0]))))));
        }
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */_Bool) min((arr_7 [i_0] [i_2]), (((/* implicit */int) (unsigned short)61182))))) && (((((/* implicit */_Bool) (unsigned short)45466)) && (arr_8 [i_2] [i_2]))))))));
            var_13 = ((/* implicit */_Bool) max((var_13), (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) arr_6 [i_2])) / (624194920))) : ((~(((/* implicit */int) var_3)))))) == ((~(((((/* implicit */_Bool) arr_3 [i_0] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))))));
        }
        for (short i_3 = 2; i_3 < 11; i_3 += 3) 
        {
            var_14 = ((/* implicit */int) max((var_14), (max((max((var_6), (((/* implicit */int) arr_9 [i_3 - 1] [i_3 - 1] [i_3 - 1])))), ((+(((/* implicit */int) (unsigned short)12900))))))));
            var_15 += ((/* implicit */short) var_4);
            /* LoopNest 2 */
            for (long long int i_4 = 2; i_4 < 10; i_4 += 3) 
            {
                for (unsigned int i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    {
                        var_16 |= ((/* implicit */_Bool) var_3);
                        var_17 = ((/* implicit */unsigned long long int) arr_11 [i_0] [i_0]);
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (((_Bool)1) ? (3352827587U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)61525))))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) min(((unsigned short)61496), (((/* implicit */unsigned short) arr_0 [i_0] [i_0])))))))))))));
                    }
                } 
            } 
        }
        arr_18 [i_0] [i_0] = ((/* implicit */short) ((min((arr_10 [i_0]), (arr_10 [i_0]))) || (((/* implicit */_Bool) max((var_3), (((/* implicit */short) arr_10 [i_0])))))));
        var_19 = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) ((1528351892) << (((arr_7 [i_0] [i_0]) - (1102076827)))))) : (((/* implicit */unsigned char) ((1528351892) << (((((((arr_7 [i_0] [i_0]) - (1102076827))) + (860175390))) - (2))))));
    }
    for (long long int i_6 = 0; i_6 < 11; i_6 += 1) 
    {
        var_20 += ((/* implicit */unsigned short) (~((~(173645658)))));
        var_21 |= (((!(((/* implicit */_Bool) arr_16 [i_6] [i_6] [i_6] [i_6] [i_6] [0ULL])))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((_Bool) var_2))));
    }
    var_22 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1528351899)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (2097151ULL)));
    /* LoopSeq 2 */
    for (signed char i_7 = 0; i_7 < 21; i_7 += 2) /* same iter space */
    {
        var_23 += ((/* implicit */short) -2734017312027142431LL);
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (_Bool)1))));
        var_25 = ((/* implicit */signed char) (unsigned short)4011);
    }
    for (signed char i_8 = 0; i_8 < 21; i_8 += 2) /* same iter space */
    {
        arr_26 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)26554)), ((unsigned short)8)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_23 [i_8]))) : (((/* implicit */long long int) var_1))));
        var_26 = ((/* implicit */unsigned char) arr_22 [i_8] [i_8]);
        var_27 = ((/* implicit */int) min((var_27), (min(((-(((/* implicit */int) (_Bool)1)))), ((-(1528351899)))))));
    }
    var_28 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 2769182058U)) : (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? ((~(var_0))) : (((/* implicit */unsigned long long int) var_1))))));
}
