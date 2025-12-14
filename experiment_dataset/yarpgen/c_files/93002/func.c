/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93002
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_11 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? ((+(arr_0 [i_0 + 1] [i_0 - 1]))) : (((((/* implicit */int) (_Bool)0)) * (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))))));
                var_12 = (((!(var_1))) && ((!(((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])))));
                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_8)))) ? (arr_3 [i_0] [i_1]) : (((/* implicit */long long int) ((arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1])))))));
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) var_4);
    /* LoopSeq 4 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) var_7);
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (long long int i_6 = 1; i_6 < 20; i_6 += 1) 
                        {
                            {
                                arr_16 [i_2] [i_3] [(short)23] [21LL] [i_5] [(_Bool)1] = ((/* implicit */unsigned char) var_5);
                                var_16 = ((/* implicit */unsigned short) var_4);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */long long int) (-(((/* implicit */int) ((signed char) arr_13 [i_2] [i_2] [i_2 - 1] [i_2])))));
                    /* LoopSeq 1 */
                    for (long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) arr_14 [i_2] [i_2] [i_4] [i_7] [i_2] [(_Bool)1] [i_2 - 1])) : (((/* implicit */int) arr_17 [i_2] [i_3] [i_3] [i_7] [i_3]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */int) arr_7 [i_2 - 1])) : (((/* implicit */int) ((signed char) var_4))))))));
                        arr_20 [i_2 - 1] [i_3] [i_4] [i_7] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */int) arr_19 [i_2] [i_3] [13] [i_7])))), ((+(((/* implicit */int) arr_19 [i_2] [(unsigned char)11] [i_4] [i_7]))))));
                        var_19 = ((/* implicit */_Bool) var_0);
                    }
                }
            } 
        } 
        var_20 = min((((long long int) arr_5 [i_2 - 1])), (((((/* implicit */_Bool) arr_5 [i_2 - 1])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2 - 1]))))));
    }
    for (long long int i_8 = 1; i_8 < 24; i_8 += 4) /* same iter space */
    {
        var_21 += ((/* implicit */long long int) arr_24 [i_8 - 1]);
        /* LoopNest 2 */
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                {
                    var_22 = ((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) var_3)))));
                    var_23 = ((long long int) (-(((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned int) var_0);
        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((_Bool) var_3)))));
    }
    for (long long int i_11 = 1; i_11 < 24; i_11 += 4) /* same iter space */
    {
        var_26 = ((/* implicit */_Bool) ((((/* implicit */int) ((3068416058U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [(_Bool)1] [(unsigned short)8])))))) - ((+(((/* implicit */int) var_6))))));
        arr_33 [23LL] = ((long long int) (~(((/* implicit */int) var_4))));
    }
    for (unsigned short i_12 = 0; i_12 < 22; i_12 += 3) 
    {
        var_27 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_7 [i_12])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_7 [i_12]))))));
        var_28 = ((/* implicit */_Bool) arr_30 [i_12] [i_12]);
        var_29 += ((/* implicit */long long int) arr_6 [i_12]);
    }
}
