/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96936
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
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    {
                        arr_10 [i_0] [i_1] [(_Bool)1] [i_1] [i_1] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) min(((+(((/* implicit */int) var_0)))), (((/* implicit */int) var_6))))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)19027))))) : (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_9 [i_0] [(unsigned char)16] [i_1] [(unsigned char)16] [i_2] [i_3])), (arr_4 [i_1] [i_1] [i_0]))))))))));
                        var_12 = ((/* implicit */int) (((~(((((/* implicit */_Bool) (unsigned char)2)) ? (866378989U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(signed char)16] [i_1]))))))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3])))));
                    }
                } 
            } 
        } 
        var_13 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)92)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)17222))));
        var_14 = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) ((arr_2 [i_0]) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */int) (unsigned short)65535))))), (var_7))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((arr_4 [17] [i_0] [17]) - (((/* implicit */unsigned long long int) arr_5 [i_0] [(signed char)13] [i_0] [i_0]))))) || ((!(((/* implicit */_Bool) (signed char)-10))))))))));
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
    {
        var_15 = ((/* implicit */short) arr_12 [i_4] [(short)14]);
        var_16 ^= ((/* implicit */signed char) arr_12 [i_4] [i_4]);
        var_17 += arr_12 [(unsigned char)4] [(unsigned char)2];
    }
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65523)) ? (-7600481345761124775LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-32)))));
    var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((var_9) / (((/* implicit */int) max((var_10), ((short)-17222))))))) % (min((14386659462107751961ULL), (((/* implicit */unsigned long long int) (unsigned short)12))))));
    /* LoopNest 3 */
    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 3) 
    {
        for (unsigned short i_6 = 1; i_6 < 24; i_6 += 3) 
        {
            for (short i_7 = 0; i_7 < 25; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (int i_9 = 0; i_9 < 25; i_9 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((-(arr_16 [i_5]))) | (((/* implicit */int) arr_24 [i_6 - 1] [i_5] [(unsigned short)6] [i_8] [i_9] [i_6]))))) ? (arr_20 [i_8] [i_8]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65534))))) % (((arr_23 [i_7] [i_7] [4LL] [i_7] [i_7]) + (((/* implicit */int) (signed char)127)))))))));
                                var_21 *= ((/* implicit */short) var_7);
                                var_22 = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (arr_21 [(signed char)19] [i_6] [(signed char)19] [i_5])))) < (((/* implicit */int) var_10))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) min((1415443492), (((/* implicit */int) arr_15 [18LL] [18LL]))))) ? (((((((/* implicit */int) arr_15 [i_6 - 1] [16LL])) + (2147483647))) << (((((((/* implicit */int) arr_15 [4] [4])) + (896))) - (12))))) : (((((/* implicit */_Bool) 9651558210162692459ULL)) ? (((/* implicit */int) arr_15 [i_5] [(unsigned char)12])) : (((/* implicit */int) arr_15 [22] [(unsigned short)10])))))))));
                    arr_26 [i_5] [4LL] [i_7] = ((/* implicit */_Bool) (+(arr_25 [(signed char)22] [i_6 + 1] [i_6] [(signed char)22] [i_6])));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (!((_Bool)1)))) >> ((((~(((/* implicit */int) var_5)))) - (66)))))) ^ (((9651558210162692461ULL) - (((/* implicit */unsigned long long int) -1570356536)))))))));
}
