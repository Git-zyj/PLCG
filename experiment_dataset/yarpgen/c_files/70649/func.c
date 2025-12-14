/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70649
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
    var_10 = ((/* implicit */unsigned int) ((unsigned char) ((unsigned int) (_Bool)1)));
    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(max((4069694566U), (225272724U)))))) <= (min((min((var_8), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) (unsigned char)246))))))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_12 = ((/* implicit */int) ((((/* implicit */_Bool) (~(1073741824U)))) ? (arr_0 [(_Bool)0] [8ULL]) : (((/* implicit */long long int) ((/* implicit */int) (short)4162)))));
        var_13 = ((/* implicit */int) ((unsigned int) arr_1 [i_0]));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) (~(arr_5 [i_0] [i_1] [i_1] [i_3])));
                                var_15 |= (-(arr_5 [i_1] [i_1 - 1] [i_4] [i_1 - 1]));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) var_5))));
                    var_17 = ((arr_0 [i_1 - 2] [i_1]) + (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 1]))));
                }
            } 
        } 
    }
    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 4) 
        {
            var_18 = (~(arr_14 [i_5]));
            var_19 = (-(arr_14 [i_5]));
            /* LoopSeq 1 */
            for (int i_7 = 0; i_7 < 17; i_7 += 1) 
            {
                var_20 ^= ((/* implicit */unsigned char) (+(var_4)));
                var_21 = ((/* implicit */int) (+(arr_12 [i_5])));
            }
        }
        for (unsigned short i_8 = 1; i_8 < 16; i_8 += 4) 
        {
            var_22 = ((/* implicit */unsigned int) min((var_4), (((/* implicit */int) (unsigned char)147))));
            var_23 = ((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_5]))) / (((((/* implicit */_Bool) (unsigned char)155)) ? (((/* implicit */unsigned int) var_4)) : (var_7))))), (((/* implicit */unsigned int) max((((signed char) var_1)), (((/* implicit */signed char) ((var_1) <= (((/* implicit */long long int) 4069694564U))))))))));
            var_24 = ((signed char) (-(((((/* implicit */int) (signed char)0)) / (((/* implicit */int) var_5))))));
        }
        var_25 = ((/* implicit */unsigned long long int) (unsigned char)147);
        var_26 -= ((/* implicit */short) (~((-(((/* implicit */int) arr_19 [(signed char)14]))))));
    }
    for (short i_9 = 0; i_9 < 21; i_9 += 2) 
    {
        var_27 ^= (_Bool)1;
        var_28 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(-1805507877)))) ? (arr_21 [3ULL]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) | (((/* implicit */long long int) (-(((/* implicit */int) var_6)))))));
        var_29 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((((-913754300) - (((/* implicit */int) (unsigned short)23847)))) + (2147483647))) << (((((1309929144) << (((((((/* implicit */int) var_5)) + (55))) - (15))))) - (1309929144)))))), (4069694588U)));
        var_30 = ((/* implicit */int) ((min((arr_21 [i_9]), (arr_21 [i_9]))) < (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_9] [i_9])))));
    }
    for (int i_10 = 0; i_10 < 10; i_10 += 1) 
    {
        var_31 ^= ((/* implicit */unsigned int) (-((+(((((/* implicit */long long int) ((/* implicit */int) (short)32759))) | (9223372036854775807LL)))))));
        var_32 -= ((unsigned long long int) min((((/* implicit */long long int) (short)-29888)), (arr_9 [i_10] [i_10] [i_10] [i_10] [i_10])));
    }
    var_33 ^= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))))) ? (var_7) : ((-(311284557U)))))));
}
