/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83340
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */int) (short)0);
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((5685028012393059787ULL), (((/* implicit */unsigned long long int) (unsigned short)19282))))) ? (((((/* implicit */_Bool) 2061584302080ULL)) ? (((/* implicit */int) arr_0 [i_2 + 1] [i_1 + 1])) : (((/* implicit */int) arr_0 [i_2 + 2] [i_1 + 2])))) : (((/* implicit */int) ((short) arr_0 [i_0] [i_0])))));
                    /* LoopSeq 1 */
                    for (short i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_4 [i_1] [i_1] [i_0]);
                        var_15 = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) 1605361793)), (((((/* implicit */_Bool) (unsigned short)19277)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22))))))), ((-(((((/* implicit */unsigned long long int) var_9)) - (var_4)))))));
                        arr_11 [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_1] [i_3]))));
                    }
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) (+(max((((/* implicit */int) ((unsigned short) (short)-18111))), ((+(((/* implicit */int) (short)0))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_4 = 2; i_4 < 9; i_4 += 3) 
    {
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_2)) >= (((((/* implicit */_Bool) (short)-13)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4] [i_4] [i_4]))))))))));
        arr_14 [i_4] = ((((/* implicit */_Bool) arr_12 [i_4 - 2])) ? (-6136769754768394976LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))));
    }
    for (short i_5 = 0; i_5 < 21; i_5 += 2) 
    {
        var_18 = ((/* implicit */unsigned long long int) var_0);
        /* LoopSeq 1 */
        for (signed char i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_7 = 1; i_7 < 20; i_7 += 2) 
            {
                arr_23 [i_5] [i_5] [i_7] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_11))));
                /* LoopSeq 2 */
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    arr_27 [i_7] [i_8] [i_5] [i_5] [i_5] [i_7] = ((/* implicit */signed char) (+(arr_24 [i_5] [i_5] [i_5] [i_5])));
                    arr_28 [i_6] [i_6] [i_6] [i_6] &= ((/* implicit */unsigned long long int) ((arr_26 [i_8 - 1] [i_5] [i_6] [i_5]) >= (arr_20 [i_8] [i_8 - 1] [i_8 - 1])));
                    var_19 = ((/* implicit */unsigned long long int) arr_18 [i_7] [i_7]);
                }
                for (long long int i_9 = 0; i_9 < 21; i_9 += 1) 
                {
                    arr_31 [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_6] [i_7] [i_6])) < (((/* implicit */int) (short)-26453))));
                    arr_32 [i_9] [i_5] [i_7] [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) ? (13566401523050474973ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240)))));
                    var_20 ^= ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) (short)11)) ? (var_4) : (17895106637481150117ULL))));
                    var_21 = ((/* implicit */int) var_11);
                }
            }
            var_22 = ((/* implicit */unsigned long long int) ((arr_16 [i_5] [i_5]) << (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (max((18446744073709551615ULL), (15ULL))))) - (18446744073709532082ULL)))));
        }
    }
}
