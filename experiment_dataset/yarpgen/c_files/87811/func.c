/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87811
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
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_14)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))));
                    arr_9 [i_0] [i_1 - 2] [i_0] = ((/* implicit */_Bool) ((((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_2)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) arr_4 [i_0] [i_1 - 1] [i_2])), (arr_5 [i_0] [i_0] [i_2])))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            {
                arr_14 [i_4] &= 707620884149558723ULL;
                var_16 = ((/* implicit */unsigned int) min(((-((~(4397509640192ULL))))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_13)) / (((/* implicit */int) var_0)))) / (arr_11 [i_3]))))));
            }
        } 
    } 
    var_17 = var_7;
    /* LoopSeq 3 */
    for (unsigned char i_5 = 4; i_5 < 18; i_5 += 3) 
    {
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 33554431U)) ? (((/* implicit */unsigned int) -530475515)) : (2935060499U)))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_12 [i_5])) : (((/* implicit */int) arr_10 [i_5] [i_5 - 2]))))))) : (min((((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [(_Bool)1] [i_5]))) : (var_2))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_18 [i_5] [i_5])), (var_4)))))))))));
        arr_19 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned short) var_5))))) ? ((+(((unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((((3687177275U) * (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_9)))))))));
        arr_20 [i_5] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_16 [i_5]))));
        var_19 = ((/* implicit */unsigned short) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) & (((unsigned int) arr_16 [i_5])))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? ((-(arr_2 [i_6] [0ULL] [2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_22 [i_6]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
        var_21 = ((/* implicit */unsigned short) arr_6 [(unsigned short)0] [i_6]);
    }
    for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 3) /* same iter space */
    {
        arr_27 [i_7] = ((/* implicit */long long int) (~(max((var_2), (((/* implicit */unsigned long long int) arr_1 [i_7]))))));
        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */unsigned int) max((((/* implicit */int) arr_10 [6LL] [i_7])), (147546794)))) ^ (min((arr_7 [(signed char)13] [i_7] [i_7]), (((/* implicit */unsigned int) ((unsigned char) arr_13 [i_7]))))))))));
        arr_28 [i_7] &= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) > (((607790024U) ^ (3687177296U)))));
    }
}
