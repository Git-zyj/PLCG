/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97286
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
    var_17 = ((/* implicit */unsigned short) (~(((((((/* implicit */_Bool) (unsigned char)241)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23273))))) ^ (max((var_2), (((/* implicit */unsigned long long int) var_10))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (unsigned char)241);
        arr_3 [9LL] = ((/* implicit */unsigned short) arr_1 [i_0]);
        var_18 -= ((/* implicit */unsigned int) var_3);
    }
    for (unsigned char i_1 = 1; i_1 < 15; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-24351))) % (944859310U)));
        /* LoopSeq 4 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    {
                        var_19 = ((/* implicit */signed char) 1008);
                        arr_18 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_13 [i_1]) + (((/* implicit */long long int) ((/* implicit */int) (short)23261)))))) ? (arr_16 [i_4] [9U] [i_2] [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1])))));
                    }
                } 
            } 
            var_20 &= ((/* implicit */unsigned short) ((arr_10 [14]) % (((/* implicit */int) (short)23273))));
        }
        for (long long int i_5 = 1; i_5 < 15; i_5 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_6 = 0; i_6 < 16; i_6 += 2) 
            {
                arr_24 [i_1] [13] [i_5] [i_1] = ((/* implicit */long long int) max((((/* implicit */int) (short)-23292)), (max((((/* implicit */int) ((arr_21 [i_1] [i_1]) == (((/* implicit */long long int) -1438965784))))), ((+(((/* implicit */int) arr_17 [i_6] [i_6] [i_5 - 1] [i_5] [i_1 + 1] [i_1]))))))));
                var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_6 [i_1 + 1]) >> (((arr_6 [i_1 - 1]) - (1256700581U)))))) ? (((/* implicit */int) min(((unsigned char)239), ((unsigned char)48)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-23292))) <= (4294967295U))))));
                arr_25 [i_1 - 1] [i_1] [i_1] [i_1 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((unsigned char) arr_23 [i_1] [i_1] [i_1])), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_9 [i_1] [i_5 + 1])))))))) && ((!((!(((/* implicit */_Bool) 6625302508445767425ULL))))))));
                arr_26 [i_1] [i_1] [10U] [i_6] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */long long int) 1392354829U)) : (var_10))) : (((/* implicit */long long int) (+(1438965783)))))), (((/* implicit */long long int) ((((/* implicit */int) ((signed char) (_Bool)1))) / (((/* implicit */int) (short)-23639)))))));
                var_22 = ((/* implicit */signed char) arr_13 [i_1]);
            }
            arr_27 [i_1] [i_1] = ((/* implicit */short) arr_1 [i_5 + 1]);
            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) 9223372036854775807LL)) + (arr_8 [i_1] [i_1 + 1] [i_5 - 1]))), (((/* implicit */unsigned long long int) (+(var_8))))))) ? (arr_21 [i_1] [12U]) : (arr_21 [i_1] [(short)4]))))));
        }
        for (int i_7 = 0; i_7 < 16; i_7 += 2) 
        {
            var_24 ^= ((/* implicit */int) ((((/* implicit */_Bool) (-((~(((/* implicit */int) (short)19823))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-118))))) : (min((arr_20 [i_7]), (min((var_4), (((/* implicit */unsigned long long int) arr_10 [i_7]))))))));
            arr_30 [i_1] = ((/* implicit */short) (-((-(((unsigned int) arr_15 [i_7]))))));
        }
        for (unsigned short i_8 = 0; i_8 < 16; i_8 += 2) 
        {
            arr_33 [i_1] [i_1] = ((/* implicit */unsigned long long int) (unsigned short)23645);
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 1) 
            {
                for (unsigned char i_10 = 0; i_10 < 16; i_10 += 4) 
                {
                    {
                        arr_41 [3LL] [i_1] [i_9] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)14)) / (((/* implicit */int) (short)(-32767 - 1)))));
                        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 3405814827842161163LL)) ? (((/* implicit */int) (signed char)-67)) : (((/* implicit */int) (signed char)127))))) <= (((var_10) >> (((((/* implicit */int) arr_37 [i_1])) + (2202))))))))));
                    }
                } 
            } 
            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (short)-23292)), (arr_39 [14LL] [i_1 + 1] [i_8] [5LL])))) ? (min((((/* implicit */unsigned long long int) (signed char)-16)), (17200780119782666616ULL))) : (((/* implicit */unsigned long long int) 4294967295U))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) max(((short)-14012), (((/* implicit */short) (unsigned char)248))))))) : (((((/* implicit */_Bool) arr_36 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) : (var_10)))));
            arr_42 [i_1] = ((/* implicit */unsigned char) ((int) max(((-(((/* implicit */int) (short)-23253)))), (((/* implicit */int) ((var_11) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
        }
    }
    for (long long int i_11 = 0; i_11 < 18; i_11 += 2) 
    {
        arr_46 [i_11] = (-((((~(((/* implicit */int) arr_44 [i_11] [i_11])))) + (((/* implicit */int) (short)23622)))));
        arr_47 [i_11] = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((arr_45 [i_11]), (((/* implicit */unsigned long long int) 4U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-26758))) : (((((/* implicit */_Bool) var_8)) ? (arr_1 [(unsigned short)5]) : (var_8))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
    }
    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((var_9), (((/* implicit */long long int) var_7))))) ^ ((+(var_16)))))) && (((/* implicit */_Bool) var_5))));
    var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) min((((/* implicit */long long int) (~(((/* implicit */int) ((signed char) var_12)))))), (var_10))))));
    var_29 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))));
}
