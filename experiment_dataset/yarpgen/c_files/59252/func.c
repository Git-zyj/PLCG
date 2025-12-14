/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59252
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
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */long long int) ((9223372036854775808ULL) * (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)29180)))))));
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-51)) < (((/* implicit */int) (short)8128))));
                    var_16 = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) (signed char)51)), (arr_0 [i_0 - 2])));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */_Bool) max((arr_6 [i_1] [i_0 - 2]), (min((arr_6 [i_2 - 2] [i_2]), (((/* implicit */int) var_5))))));
                        var_18 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (unsigned char)152)), (arr_5 [i_1] [i_2] [i_2])));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        var_19 = ((/* implicit */signed char) var_12);
                        var_20 = ((/* implicit */int) var_7);
                        var_21 = ((/* implicit */long long int) arr_3 [i_0]);
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
    {
        arr_14 [i_5] = ((/* implicit */int) (-(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [(signed char)0])) ? (arr_12 [(_Bool)1]) : (((/* implicit */int) var_0))))) ^ (min((6291456ULL), (((/* implicit */unsigned long long int) (signed char)127))))))));
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((min((((/* implicit */long long int) (~(((/* implicit */int) var_7))))), (min((((/* implicit */long long int) (unsigned char)61)), (var_9))))) >= (((/* implicit */long long int) arr_12 [i_5])))))));
        arr_15 [i_5] [i_5] = ((/* implicit */unsigned long long int) max((arr_13 [i_5]), (min((arr_13 [i_5]), (arr_13 [i_5])))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 3) 
    {
        var_23 = ((/* implicit */unsigned short) min((min((((/* implicit */long long int) arr_1 [i_6] [i_6])), (arr_11 [i_6]))), (((/* implicit */long long int) (signed char)51))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_7 = 0; i_7 < 11; i_7 += 3) 
        {
            arr_22 [i_7] [i_6] [i_6] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_18 [i_6] [i_6]))));
            var_24 = ((/* implicit */unsigned short) ((arr_19 [i_6] [i_6] [i_7]) >> (((((/* implicit */int) var_7)) - (23603)))));
            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_6] [i_7])) | (((/* implicit */int) arr_7 [i_7] [i_7])))))));
            var_26 = ((((/* implicit */int) arr_4 [i_6] [i_7] [i_7])) + (((((/* implicit */int) arr_8 [i_6] [i_6] [i_6] [i_7])) - (((/* implicit */int) arr_18 [i_6] [i_6])))));
            var_27 = ((/* implicit */signed char) var_2);
        }
        for (unsigned char i_8 = 2; i_8 < 9; i_8 += 2) 
        {
            arr_25 [i_6] [i_6] [(signed char)2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)56))) : (8486123677342232786ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_6] [(signed char)3]))) : (arr_24 [i_6] [i_8 + 2] [i_8]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(((/* implicit */int) (unsigned char)199)))) >= (((/* implicit */int) (signed char)-38))))))));
            arr_26 [i_6] [i_6] [i_6] = ((/* implicit */signed char) arr_24 [i_6] [i_8 + 1] [i_8]);
            arr_27 [i_6] = ((/* implicit */_Bool) arr_4 [i_6] [i_6] [i_8 - 1]);
        }
        var_28 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_20 [i_6] [i_6])) - ((-(((/* implicit */int) arr_0 [i_6])))))) ^ (((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)0)), (var_4)))) ? (((/* implicit */int) arr_5 [i_6] [i_6] [i_6])) : (arr_19 [i_6] [i_6] [i_6])))));
    }
    var_29 = ((/* implicit */int) var_7);
    var_30 = ((/* implicit */unsigned short) max((((/* implicit */signed char) ((((/* implicit */int) var_2)) >= (min((var_1), (((/* implicit */int) var_6))))))), (var_6)));
}
