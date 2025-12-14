/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84008
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
    var_11 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((var_7), (((/* implicit */short) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_1))))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_12 = ((/* implicit */long long int) ((unsigned int) 15702589559114978135ULL));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            arr_5 [i_1] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) (unsigned short)2132)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31092))) : (2744154514594573480ULL))));
            var_13 = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) (unsigned short)2132)))));
            arr_6 [i_0] [i_1] = ((/* implicit */short) (~((~(((((/* implicit */_Bool) 15702589559114978122ULL)) ? (arr_4 [i_0]) : (arr_1 [i_1])))))));
        }
        for (short i_2 = 1; i_2 < 13; i_2 += 2) 
        {
            var_14 = ((/* implicit */unsigned int) arr_7 [i_0]);
            arr_9 [i_0] [i_0] = ((/* implicit */_Bool) arr_4 [i_0]);
        }
        /* vectorizable */
        for (short i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            arr_13 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((2744154514594573485ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4887)))))));
            var_15 = ((/* implicit */_Bool) ((var_1) % (((/* implicit */unsigned int) ((/* implicit */int) ((arr_4 [i_0]) != (((/* implicit */int) (unsigned short)65508))))))));
        }
    }
    for (unsigned int i_4 = 1; i_4 < 12; i_4 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_16 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((short) -2485365459637068279LL))))))));
            arr_21 [i_4] [i_5] [i_4] = ((/* implicit */short) arr_20 [i_4] [i_4]);
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 2; i_6 < 10; i_6 += 2) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_26 [i_4] [(short)12] [(short)12] [i_5] [(unsigned char)8] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)2111))));
                        arr_27 [i_4] = ((/* implicit */short) arr_23 [i_4] [i_5] [i_6] [i_7]);
                        arr_28 [i_4] [i_5] [i_4] [i_5] [(short)1] [i_7] = ((/* implicit */short) (!(((((/* implicit */_Bool) arr_25 [i_4] [i_5] [i_4] [i_7])) && ((!(((/* implicit */_Bool) arr_22 [i_4] [i_5] [i_6]))))))));
                    }
                } 
            } 
            var_17 ^= ((/* implicit */short) ((unsigned char) ((unsigned long long int) arr_11 [i_4 - 1] [i_4] [i_4 + 1])));
        }
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((short) (signed char)-22)))));
        arr_29 [i_4] = ((/* implicit */unsigned short) arr_1 [i_4 - 1]);
    }
    /* vectorizable */
    for (short i_8 = 2; i_8 < 21; i_8 += 2) 
    {
        arr_32 [(_Bool)1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)38406)))))));
        /* LoopSeq 2 */
        for (long long int i_9 = 4; i_9 < 22; i_9 += 2) 
        {
            arr_36 [i_9] [i_8 - 1] = ((((/* implicit */int) arr_31 [i_9 + 1])) & (((/* implicit */int) arr_31 [i_9 - 4])));
            arr_37 [i_8] [i_8] = ((unsigned char) arr_31 [i_9 + 1]);
        }
        for (int i_10 = 1; i_10 < 21; i_10 += 1) 
        {
            arr_41 [i_8] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)212)) << (((((arr_35 [i_8] [i_8] [i_10]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_8]))))) - (14810683526419446392ULL)))));
            arr_42 [i_8] [i_8 - 2] [i_10] = ((/* implicit */short) ((((((/* implicit */int) arr_39 [(short)10])) * (((/* implicit */int) (unsigned char)0)))) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)27155)))))));
            var_19 = ((/* implicit */_Bool) ((((_Bool) (unsigned short)2132)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)247))))) : ((-(4784543638186471594ULL)))));
        }
    }
}
