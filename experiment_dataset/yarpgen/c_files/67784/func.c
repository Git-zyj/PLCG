/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67784
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_3 [(signed char)11] = ((/* implicit */unsigned long long int) ((unsigned char) 2870864682814512268LL));
        arr_4 [(signed char)10] = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11636402600806213544ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-47))) : (var_9)))), (((((/* implicit */_Bool) arr_1 [21LL])) ? (arr_2 [i_0] [i_0]) : (9103941070212282076ULL))))) <= (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0])))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-60)) && (((/* implicit */_Bool) arr_7 [17ULL]))));
        arr_9 [i_1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned char)65)) ? (((/* implicit */int) (unsigned char)190)) : (((/* implicit */int) arr_5 [i_1]))))));
    }
    for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                {
                    arr_18 [i_2] [i_3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_12 [i_2] [i_2]) : (-5934829442649121255LL)))) ? (((var_10) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)62))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-47))))))) + (min(((+(arr_6 [i_2] [i_3]))), (((/* implicit */unsigned long long int) var_1))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 16; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            {
                                arr_25 [i_5] [i_3] [i_5] [(signed char)13] [i_6] = max(((+(((((/* implicit */int) (unsigned char)67)) + (((/* implicit */int) (unsigned char)238)))))), (((((/* implicit */int) ((unsigned char) arr_17 [17U] [14U]))) + (((((/* implicit */_Bool) (unsigned char)108)) ? (((/* implicit */int) (unsigned char)190)) : (((/* implicit */int) (signed char)33)))))));
                                var_11 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)64)) ? (((((/* implicit */_Bool) ((int) var_9))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))) : (((unsigned int) arr_11 [(unsigned char)5])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_0 [7ULL])) > (((/* implicit */int) min(((unsigned char)110), (arr_15 [i_4] [i_3] [i_3] [i_5 + 3]))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 18; i_7 += 2) 
                    {
                        for (signed char i_8 = 0; i_8 < 19; i_8 += 1) 
                        {
                            {
                                arr_31 [i_2] [i_3] [i_8] [9LL] [i_2] = ((/* implicit */long long int) ((2147483647) % (((/* implicit */int) (signed char)6))));
                                var_12 &= (-(7440984949451602465ULL));
                                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned long long int) arr_7 [i_3])) : (max((((/* implicit */unsigned long long int) var_2)), (var_10)))))) ? (6595023572420718404ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((var_1) / (((/* implicit */long long int) ((/* implicit */int) (signed char)119))))) > (arr_13 [4ULL])))))));
                                arr_32 [i_8] [i_8] [i_7 - 1] [i_7 - 2] [i_7 - 1] [i_4] [i_8] = ((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) arr_10 [3ULL])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_33 [i_2] = ((/* implicit */unsigned int) arr_13 [i_2]);
        var_14 = ((((((/* implicit */_Bool) 5161380091432418637LL)) && (((/* implicit */_Bool) arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))) ? (arr_2 [i_2] [(signed char)2]) : (arr_6 [i_2] [i_2]));
        /* LoopNest 2 */
        for (unsigned char i_9 = 0; i_9 < 19; i_9 += 2) 
        {
            for (long long int i_10 = 0; i_10 < 19; i_10 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 3; i_11 < 17; i_11 += 3) 
                    {
                        for (signed char i_12 = 0; i_12 < 19; i_12 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) (signed char)3);
                                arr_47 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) arr_21 [i_9] [i_9] [i_9] [(signed char)8] [i_12] [i_11 + 1]);
                                arr_48 [i_2] [i_9] [i_2] [i_11 + 1] [i_12] = ((/* implicit */signed char) ((((/* implicit */int) (!(((((/* implicit */int) (unsigned char)1)) >= (((/* implicit */int) arr_15 [i_2] [i_9] [(unsigned char)9] [(signed char)7]))))))) != (((/* implicit */int) max((var_6), ((signed char)-64))))));
                            }
                        } 
                    } 
                    arr_49 [i_10] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_37 [i_9]))))) ? (((/* implicit */int) ((((((-5934829442649121255LL) + (9223372036854775807LL))) << (((((((/* implicit */int) (signed char)-6)) + (45))) - (38))))) <= ((~(arr_17 [i_2] [i_10])))))) : (((/* implicit */int) ((signed char) arr_30 [i_2] [i_9] [i_9] [i_10] [i_10]))));
                }
            } 
        } 
    }
    var_16 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)24))) : (var_10))) | (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) -1304414364)) : (0ULL))))) != (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5)))))));
}
