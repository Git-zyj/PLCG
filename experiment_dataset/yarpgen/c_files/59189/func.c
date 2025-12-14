/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59189
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_11)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */int) arr_1 [i_0])))));
        arr_5 [i_0] = ((/* implicit */short) arr_0 [i_0] [i_0]);
        arr_6 [i_0] = ((/* implicit */unsigned int) (signed char)-95);
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        arr_9 [i_1] = ((/* implicit */int) arr_7 [i_1] [i_1]);
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) arr_8 [i_1]))));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (int i_3 = 1; i_3 < 16; i_3 += 2) 
            {
                for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    {
                        arr_16 [i_2] [i_4] [i_3] [i_2] [i_2] = ((/* implicit */int) var_10);
                        arr_17 [i_2] [i_4] [i_3] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((long long int) arr_15 [i_1] [i_1] [i_1] [i_1]));
                        arr_18 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) arr_14 [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 + 1]);
                        var_14 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_11 [i_3 + 1]), (((/* implicit */unsigned long long int) (unsigned char)237)))))));
                    }
                } 
            } 
        } 
    }
    var_15 = ((/* implicit */int) var_10);
    var_16 = ((/* implicit */short) var_10);
    /* LoopNest 3 */
    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 3) 
    {
        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 2) 
        {
            for (short i_7 = 0; i_7 < 19; i_7 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        var_17 = (-(((/* implicit */int) arr_23 [i_5] [i_5])));
                        arr_30 [i_5] = ((/* implicit */long long int) ((unsigned short) (unsigned char)225));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_34 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_32 [i_5]))) * (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)240))) / (arr_33 [i_5])))))) ? (((unsigned long long int) max((((/* implicit */int) (unsigned short)53715)), (var_0)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6603635438646009137LL)) ? (((/* implicit */int) var_10)) : (arr_29 [i_5] [i_5] [i_7] [i_9])))) ? (min((-32854845), (((/* implicit */int) arr_23 [i_5] [i_7])))) : ((+(((/* implicit */int) arr_23 [i_5] [i_5])))))))));
                        var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_7])) || (((/* implicit */_Bool) 32854828)))))) < (((((/* implicit */_Bool) (short)11533)) ? (arr_25 [i_7] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_22 [i_5] [i_6]))))))));
                        arr_35 [i_5] [i_5] [i_5] [i_9] = ((/* implicit */signed char) arr_19 [i_5] [i_6]);
                        var_19 = ((/* implicit */long long int) -32854836);
                    }
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((unsigned long long int) -6641708656411634476LL)))));
                }
            } 
        } 
    } 
}
