/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76782
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 7; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (short)-17391);
        var_13 += ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))));
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */_Bool) 8772410964159643679ULL)) ? ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1]))) : (arr_0 [2LL]))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 2]))))))));
        var_15 = arr_0 [i_0 - 1];
    }
    for (unsigned short i_1 = 1; i_1 < 11; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            var_16 += max(((-(max((arr_6 [i_2] [i_2]), (arr_6 [i_1] [i_2]))))), (max(((+(1375575051U))), ((-(arr_4 [i_2]))))));
            var_17 ^= ((/* implicit */long long int) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) (short)-12019)))))))));
        }
        var_18 = arr_7 [(signed char)2] [1];
        var_19 = ((((/* implicit */_Bool) (short)6)) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_7 [i_1] [i_1 + 2]) : (((/* implicit */int) (short)28066)))) : ((+((-(arr_7 [i_1] [i_1]))))));
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        arr_10 [i_3] = ((/* implicit */short) arr_8 [i_3]);
        var_20 |= ((/* implicit */unsigned long long int) (signed char)3);
        var_21 = ((/* implicit */unsigned short) arr_9 [i_3] [i_3]);
        var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)6))))) ? (arr_9 [i_3] [(unsigned char)12]) : (((/* implicit */long long int) (+(400629295))))));
        var_23 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2142724685U)) ? (((/* implicit */int) arr_8 [i_3])) : (((/* implicit */int) (signed char)110))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3]))) : (arr_9 [i_3] [i_3]));
    }
    var_24 = ((/* implicit */unsigned int) (+((~((~(((/* implicit */int) var_2))))))));
    /* LoopSeq 2 */
    for (unsigned int i_4 = 1; i_4 < 14; i_4 += 3) 
    {
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (+(min(((-(arr_11 [12U] [8ULL]))), (((/* implicit */unsigned long long int) max((arr_9 [i_4] [(short)2]), (arr_9 [i_4] [(unsigned char)8])))))))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            arr_16 [i_4] = (-(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_14 [i_5]))))))));
            arr_17 [i_4] [i_5] = ((/* implicit */int) ((unsigned char) arr_11 [i_4] [i_4]));
        }
        for (int i_6 = 2; i_6 < 15; i_6 += 2) 
        {
            arr_21 [i_4] [i_6] = ((/* implicit */short) arr_15 [9ULL]);
            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) (short)1316)) ? ((~(arr_9 [i_6 - 1] [i_4 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_6] [i_4])) ? (arr_11 [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23835)))))))))))))));
            arr_22 [i_4] = arr_11 [i_4] [i_4];
        }
        for (short i_7 = 2; i_7 < 12; i_7 += 4) 
        {
            arr_26 [i_4] [i_4 + 1] = ((/* implicit */unsigned int) ((_Bool) max((arr_24 [(signed char)3] [i_4 + 1] [i_4 + 1]), (((/* implicit */long long int) arr_15 [i_7])))));
            var_27 = ((((/* implicit */_Bool) arr_25 [i_4] [(signed char)7])) ? (min(((-(arr_9 [i_4] [i_7]))), (arr_9 [(signed char)11] [(signed char)11]))) : (((/* implicit */long long int) (-((-(-11)))))));
            var_28 ^= ((/* implicit */signed char) arr_12 [i_4]);
        }
        arr_27 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_24 [(short)4] [i_4] [i_4 - 1])) ? (((/* implicit */int) (short)30002)) : (arr_19 [i_4])))))) ? ((~(min((arr_11 [i_4] [14ULL]), (((/* implicit */unsigned long long int) (signed char)2)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_4 + 1]))))) ? (arr_13 [i_4 + 1]) : ((-(((/* implicit */int) arr_20 [i_4] [i_4])))))))));
    }
    for (int i_8 = 1; i_8 < 11; i_8 += 3) 
    {
        var_29 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) (_Bool)1))))));
        var_30 = ((/* implicit */unsigned int) arr_25 [i_8] [i_8 + 3]);
    }
}
