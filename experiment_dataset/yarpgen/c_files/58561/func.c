/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58561
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_3 [i_0]))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            var_14 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4)))))))));
            var_15 = ((/* implicit */long long int) min((var_15), (var_5)));
        }
        arr_7 [i_0] [(unsigned char)8] = ((/* implicit */long long int) ((((arr_0 [i_0]) - (((/* implicit */long long int) ((/* implicit */int) var_6))))) < (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_1 [i_0]))))))))));
        /* LoopNest 2 */
        for (long long int i_2 = 2; i_2 < 6; i_2 += 3) 
        {
            for (unsigned char i_3 = 2; i_3 < 8; i_3 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_6 [i_2 + 4] [i_2 + 4] [i_2 + 1]))));
                    var_17 += ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_3]))));
                    arr_12 [(unsigned char)8] [i_0] [(unsigned char)1] = ((/* implicit */long long int) var_0);
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) arr_1 [i_4]);
                                var_19 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_0))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_20 &= min((((/* implicit */long long int) max((arr_11 [i_0] [i_0] [8LL] [i_0]), (arr_11 [i_0] [i_0] [0LL] [i_0])))), (min((var_5), (((/* implicit */long long int) var_9)))));
    }
    for (unsigned char i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */long long int) ((((((/* implicit */int) arr_18 [i_6])) << (((var_5) + (417951593261757030LL))))) >= ((~(((/* implicit */int) (unsigned char)243))))));
        arr_21 [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_6])) ? (((((/* implicit */_Bool) arr_17 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-406471449221824692LL))) : ((-(var_7)))));
        var_22 = (((-(min((-406471449221824682LL), (var_3))))) / (((/* implicit */long long int) (+((+(((/* implicit */int) var_4))))))));
    }
    for (unsigned char i_7 = 1; i_7 < 17; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 19; i_8 += 1) 
        {
            for (unsigned char i_9 = 1; i_9 < 18; i_9 += 3) 
            {
                {
                    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_22 [i_8])))))));
                    var_24 = ((/* implicit */unsigned char) 4309710234785991379LL);
                    var_25 = ((/* implicit */unsigned char) 8053773907926305521LL);
                }
            } 
        } 
        var_26 = arr_27 [2LL] [i_7] [i_7 + 1] [2LL];
    }
    var_27 = (~(((1034100028678966432LL) >> (((-4508089588197348835LL) + (4508089588197348897LL))))));
}
