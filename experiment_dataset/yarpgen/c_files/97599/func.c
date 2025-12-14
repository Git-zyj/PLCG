/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97599
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_1 [i_0 - 1] [i_0])))) ? (var_14) : (((((/* implicit */_Bool) var_10)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */int) var_9))))))) ? (max((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned short)57631)))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (134217727) : (arr_1 [i_0] [i_0]))))) : (min((2147483647), (var_8))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) (_Bool)1))))) - ((~(((/* implicit */int) ((var_13) == (((/* implicit */int) var_2)))))))));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_17) ? (((/* implicit */int) max((var_6), (((/* implicit */signed char) var_17))))) : (arr_1 [i_0] [i_0 - 1])))) ? (max((((/* implicit */int) arr_2 [15U])), (((((/* implicit */_Bool) -1)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_2)))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        var_21 = max((var_3), (((/* implicit */int) ((unsigned short) arr_2 [i_1]))));
        var_22 += ((/* implicit */unsigned short) arr_1 [i_1] [i_1]);
        var_23 = ((/* implicit */short) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) - (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (arr_6 [i_1] [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */int) ((max((((/* implicit */unsigned int) arr_1 [i_2] [i_2])), (arr_6 [i_2] [i_2]))) >> (((((/* implicit */int) ((unsigned short) arr_1 [i_2] [i_2]))) - (9317)))));
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 11; i_3 += 3) 
        {
            for (unsigned int i_4 = 1; i_4 < 12; i_4 += 4) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_24 = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) var_7))))))) ? (var_0) : (((((/* implicit */_Bool) min((arr_8 [i_2]), (((/* implicit */int) arr_17 [i_2] [i_3] [i_4] [i_5]))))) ? (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) arr_2 [i_2])) : (arr_8 [i_2]))) : (((((/* implicit */_Bool) arr_15 [i_2] [(unsigned char)5] [i_3] [i_4 + 2] [i_4 + 2])) ? (((/* implicit */int) arr_12 [i_2] [i_3] [i_2])) : (((/* implicit */int) arr_13 [i_2] [i_3] [i_3])))))));
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            arr_22 [i_2] [i_5] [i_3] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (short)-1)))) - (((/* implicit */int) (_Bool)1))));
                            var_25 = ((/* implicit */int) ((short) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_2] [i_2] [i_4])) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) arr_11 [i_2] [i_4] [i_6]))))), (((arr_20 [i_3]) | (((/* implicit */long long int) arr_1 [i_4] [i_4])))))));
                        }
                        /* LoopSeq 4 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned int) ((unsigned short) -729257234));
                            arr_25 [i_3] [i_3] [i_4] [i_5] [i_5] [(short)1] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((unsigned short) var_6))), (((unsigned long long int) ((((/* implicit */_Bool) 134217727)) ? (arr_16 [(signed char)12] [i_3] [i_3] [i_3]) : (arr_1 [i_4] [i_7]))))));
                        }
                        for (signed char i_8 = 0; i_8 < 14; i_8 += 3) 
                        {
                            arr_29 [i_3] [i_8] = (+(((((/* implicit */_Bool) ((int) arr_16 [i_2] [i_5] [i_4] [i_5]))) ? (((((/* implicit */int) var_2)) / (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_28 [i_4 - 1] [i_4 + 2] [i_4 - 1] [i_4 + 2] [i_3])))));
                            var_27 = var_3;
                            var_28 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_15)))) & (((unsigned long long int) arr_10 [i_4]))))) ? (((((/* implicit */_Bool) 25)) ? (((((/* implicit */int) arr_26 [i_4 - 1])) % (((/* implicit */int) arr_0 [i_2])))) : (((int) var_3)))) : (((/* implicit */int) var_10))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_32 [i_3] [i_3] [i_3 + 3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_3 + 2] [(short)5] [i_4 + 2])) ? (((/* implicit */int) ((signed char) ((unsigned int) var_17)))) : (((/* implicit */int) ((_Bool) var_12)))));
                            var_29 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) -565529527)) ? (arr_8 [(unsigned short)6]) : (-26)))) ? ((+(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) var_13))))));
                            arr_33 [i_2] [i_3] [i_3 - 2] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) ((int) ((int) min((((/* implicit */int) (short)-32765)), (arr_1 [i_4] [i_9])))));
                        }
                        for (signed char i_10 = 4; i_10 < 13; i_10 += 1) 
                        {
                            var_30 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_16 [i_2] [i_3 - 2] [(unsigned short)8] [i_5])) ? (((((/* implicit */_Bool) var_13)) ? (-113172470) : (var_16))) : (arr_16 [i_3 - 1] [i_4 + 1] [i_4 + 1] [i_10 - 3]))), (((((/* implicit */int) (short)-1)) - (((arr_8 [i_2]) - (((/* implicit */int) arr_26 [i_2]))))))));
                            var_31 = ((/* implicit */short) (~((-(((/* implicit */int) (_Bool)1))))));
                        }
                    }
                } 
            } 
        } 
    }
    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
    {
        var_32 += ((/* implicit */unsigned int) arr_8 [i_11 - 1]);
        arr_38 [i_11] = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) arr_0 [(_Bool)1]))) * ((((-(((/* implicit */int) arr_28 [i_11] [i_11] [4] [i_11] [2ULL])))) % ((((_Bool)1) ? (((/* implicit */int) arr_14 [i_11] [i_11] [i_11] [i_11])) : (arr_7 [i_11] [i_11])))))));
    }
    var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((signed char) var_7)))));
    var_34 = var_0;
    var_35 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (((((/* implicit */_Bool) ((int) var_17))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)56)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12))))) : (max((8188275482640076601ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
}
