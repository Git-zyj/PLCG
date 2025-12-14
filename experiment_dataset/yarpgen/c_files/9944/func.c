/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9944
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */long long int) (+(var_9)))))) != (9223372036854775807LL)));
        var_14 ^= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_0 [i_0]))))));
    }
    for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) /* same iter space */
    {
        var_15 = (+((~((-(arr_3 [i_1] [6ULL]))))));
        /* LoopNest 2 */
        for (short i_2 = 1; i_2 < 13; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 14; i_4 += 3) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 1) 
                        {
                            {
                                arr_15 [i_2] [i_2] = ((/* implicit */unsigned short) max(((~(((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_3 [i_4] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? ((-(((/* implicit */int) arr_0 [i_1])))) : (((/* implicit */int) arr_13 [i_3] [i_3] [i_3] [i_3] [i_2 - 1])))))));
                                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((long long int) ((((/* implicit */unsigned long long int) (~(arr_9 [i_1] [i_1] [i_1] [i_1])))) / (((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1] [i_1])) ? (17173763124400631561ULL) : (((/* implicit */unsigned long long int) 889011781U))))))))));
                            }
                        } 
                    } 
                    arr_16 [i_1] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */long long int) var_9)) - (arr_5 [i_1] [i_2])))))) ? (275497057511184741ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_10 [i_2 - 1] [i_2] [i_3] [i_2]), (arr_10 [i_2 - 1] [i_2] [(unsigned short)4] [(unsigned short)4])))))));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535))));
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (unsigned short i_9 = 0; i_9 < 11; i_9 += 1) 
                {
                    {
                        var_18 = ((/* implicit */long long int) ((max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_6] [i_9]))) > (18446744073709551615ULL)))), (arr_24 [i_6]))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) 3041407848972314168LL)) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) arr_28 [i_6] [i_6] [i_6] [i_6])))) : (((/* implicit */int) arr_13 [i_6] [i_7] [i_8] [i_8] [i_8])))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_10 = 0; i_10 < 11; i_10 += 2) 
                        {
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_6])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_6] [i_6])) ? (((/* implicit */long long int) arr_9 [i_6] [i_7] [i_8] [i_7])) : (arr_1 [i_7])))) : (((unsigned long long int) (short)32767))));
                            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (~(1272980949308920032ULL))))));
                        }
                    }
                } 
            } 
            var_21 = ((/* implicit */short) max((((/* implicit */unsigned short) (!(((6545118004042713866ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26489)))))))), (var_1)));
            var_22 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_6]))) : (arr_17 [i_7]))) >= (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-1)))))));
        }
        for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 4) /* same iter space */
        {
            var_23 = ((/* implicit */long long int) max((((((/* implicit */_Bool) max((var_5), (((/* implicit */long long int) var_1))))) ? (arr_8 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((-1378275856) > (((/* implicit */int) (short)32767)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_4), ((short)27408)))) < (((/* implicit */int) (_Bool)1)))))));
            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) min((arr_12 [i_6]), (((/* implicit */signed char) arr_10 [i_6] [i_6] [i_11] [i_11])))))))) && (((((/* implicit */long long int) (~(((/* implicit */int) (signed char)-102))))) <= (((((/* implicit */_Bool) arr_8 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (19274712501080098LL)))))));
        }
        arr_33 [i_6] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) 1709904090)) ? (((/* implicit */unsigned long long int) 1925937268)) : (3896643519490532690ULL))));
        var_25 = ((/* implicit */unsigned int) var_7);
    }
}
