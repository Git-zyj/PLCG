/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61225
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
    var_13 = ((/* implicit */int) min((var_13), (((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (short)-32752)) >= (((/* implicit */int) var_9))))) >> (((min((((/* implicit */int) (short)5047)), (var_3))) - (5026)))))) ? (((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_10)), (var_7))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_2), (((/* implicit */unsigned short) var_11)))))) != (max((7460606927982723766ULL), (var_6))))))))));
    var_14 = ((/* implicit */unsigned char) ((min((((-2104667949) / (((/* implicit */int) var_5)))), (((var_3) - (var_8))))) * (min((max((((/* implicit */int) (_Bool)1)), (1345684557))), (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 1; i_2 < 13; i_2 += 4) 
                {
                    var_15 = (i_0 % 2 == 0) ? (((/* implicit */_Bool) min((-2104667949), (((max((((/* implicit */int) arr_0 [i_0])), (arr_2 [i_0]))) * (((/* implicit */int) min((((/* implicit */short) arr_4 [(unsigned short)7] [(unsigned short)7])), (arr_3 [i_0] [i_0] [2U]))))))))) : (((/* implicit */_Bool) min((-2104667949), (((max((((/* implicit */int) arr_0 [i_0])), (arr_2 [i_0]))) / (((/* implicit */int) min((((/* implicit */short) arr_4 [(unsigned short)7] [(unsigned short)7])), (arr_3 [i_0] [i_0] [2U])))))))));
                    arr_6 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) -1073085357)) || (((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_2 - 1] [i_1])) + (((/* implicit */int) arr_5 [i_2 + 1])))))));
                    var_16 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0])))) | (((/* implicit */int) arr_4 [i_2 - 1] [7U]))))));
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_4 = 1; i_4 < 11; i_4 += 4) 
                    {
                        var_17 = ((/* implicit */short) (((!(((/* implicit */_Bool) max((arr_2 [i_0]), (((/* implicit */int) (unsigned char)14))))))) && (((((((/* implicit */_Bool) arr_9 [(signed char)3] [i_0] [i_1] [i_0])) || (((/* implicit */_Bool) arr_0 [i_0])))) && ((((_Bool)1) && (((/* implicit */_Bool) arr_2 [i_0]))))))));
                        arr_11 [i_0] [(_Bool)1] [(short)11] = ((/* implicit */unsigned char) (_Bool)1);
                    }
                    var_18 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) -672551207)) != (((arr_8 [(signed char)5] [(_Bool)0] [(signed char)5]) + (7734675542190391750ULL))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32754))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) % (((/* implicit */int) (signed char)3))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-46)) ? (2104667948) : (((/* implicit */int) arr_0 [i_0]))))) : (((arr_9 [i_0] [i_0] [i_0] [i_0]) << (((((arr_2 [i_0]) + (1650555031))) - (38)))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_19 &= ((((/* implicit */int) min((arr_13 [9ULL] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_13 [i_5] [1U] [i_1] [i_0] [i_0] [i_0])))) % (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) | (arr_9 [i_0] [i_0] [i_3] [i_5]))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)32748)) && (((/* implicit */_Bool) (short)-18469))))))))));
                        var_20 = ((/* implicit */_Bool) arr_7 [i_5] [(short)9] [9] [(short)9]);
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        var_21 += ((/* implicit */_Bool) arr_12 [i_6] [i_6] [i_6] [(signed char)2] [i_6] [i_6]);
                        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [(_Bool)1]))));
                    }
                }
                for (int i_7 = 2; i_7 < 10; i_7 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 3; i_8 < 12; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 1; i_9 < 13; i_9 += 4) 
                        {
                            {
                                arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (-(max((((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [(_Bool)1] [i_0] [i_1] [(short)0] [(_Bool)1] [i_9])) < (((/* implicit */int) (signed char)114))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0]))) / (arr_15 [i_8] [i_8])))))));
                                var_23 = ((/* implicit */_Bool) min((var_23), (arr_1 [i_7 + 1])));
                                var_24 = ((/* implicit */unsigned short) arr_19 [i_0] [i_0] [10ULL]);
                                arr_26 [i_0] [i_1] [i_1] [i_0] [i_0] = min((((/* implicit */unsigned int) max((arr_19 [i_7] [i_7 + 1] [i_7]), (arr_19 [i_7] [i_7 + 4] [i_7 + 3])))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [(unsigned short)5] [i_7 + 3] [i_7]))) / (arr_15 [(short)5] [i_9 + 1]))));
                                var_25 ^= ((/* implicit */int) ((((/* implicit */_Bool) max((524287), (((/* implicit */int) arr_4 [i_8 + 2] [i_8 + 1]))))) ? ((-(arr_8 [13] [7ULL] [i_9 - 1]))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned short)44717)) ? (133693440) : (((/* implicit */int) arr_14 [i_7] [i_7])))), (max((((/* implicit */int) arr_14 [i_7] [i_7])), (arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                            }
                        } 
                    } 
                    var_26 = ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)49))) & (arr_22 [i_0] [i_1] [i_7]))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32730))) ^ (12995792393259025990ULL)))))) ? (((((((/* implicit */_Bool) arr_20 [i_0] [13] [i_0])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0])))) & (((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) arr_4 [i_0] [i_0])))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_21 [i_0] [i_0]))))) ? (((/* implicit */int) arr_12 [i_7] [i_7] [i_7] [i_7 - 1] [i_7 + 1] [i_7 + 1])) : (arr_24 [(unsigned short)0] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))));
                }
                var_27 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) arr_3 [i_1] [i_1] [9ULL])) < (((/* implicit */int) arr_17 [i_0] [(unsigned short)8] [i_1] [i_1]))))), ((+(((/* implicit */int) arr_19 [i_1] [i_1] [i_0])))))))));
                var_28 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1] [(unsigned char)3] [(unsigned char)3] [i_1] [i_0] [i_0]))) > (arr_22 [i_0] [i_0] [i_0])))) | (((/* implicit */int) max((arr_1 [i_0]), (arr_10 [i_0] [i_0] [i_0]))))));
            }
        } 
    } 
}
