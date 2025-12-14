/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82403
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
    var_17 = ((/* implicit */unsigned short) min((-3), (((/* implicit */int) var_12))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_18 -= ((/* implicit */unsigned char) arr_3 [i_0]);
        var_19 *= ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)111))));
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) -1562174667))));
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */int) max((max((max((arr_0 [(unsigned char)1]), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) arr_5 [i_0] [i_1]))));
            var_22 += ((/* implicit */unsigned char) min((((/* implicit */int) arr_4 [i_0] [8] [i_1])), ((+(((((/* implicit */int) arr_2 [(_Bool)1] [i_0])) / (1558337231)))))));
            var_23 = ((/* implicit */int) max((min((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))), (arr_0 [i_0]))), (((/* implicit */unsigned int) (+((((_Bool)0) ? (((/* implicit */int) (unsigned char)16)) : (arr_6 [i_1] [(unsigned char)12]))))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 1) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_24 *= ((/* implicit */unsigned char) (_Bool)1);
                            var_25 -= ((/* implicit */unsigned int) var_4);
                        }
                    } 
                } 
            } 
            arr_17 [i_0] [i_2] [i_2] |= ((/* implicit */_Bool) 4U);
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            var_26 = arr_12 [i_0] [i_6] [(signed char)6];
            var_27 += ((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0] [i_6]))));
            var_28 |= ((/* implicit */unsigned char) arr_8 [i_0] [i_0]);
        }
        for (unsigned long long int i_7 = 1; i_7 < 13; i_7 += 1) 
        {
            var_29 = ((/* implicit */int) arr_20 [(signed char)8]);
            var_30 -= ((/* implicit */short) arr_21 [i_7]);
            arr_23 [i_0] [i_0] [i_7] = ((/* implicit */unsigned short) (((_Bool)0) ? (arr_20 [i_0]) : (((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) (short)-437))))), (((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_7 [i_0])))))))));
        }
        arr_24 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)47786)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (max((((/* implicit */unsigned long long int) min((arr_5 [i_0] [i_0]), (((/* implicit */unsigned char) var_16))))), (arr_12 [8LL] [i_0] [6LL])))));
    }
    for (long long int i_8 = 0; i_8 < 18; i_8 += 2) 
    {
        var_31 -= ((/* implicit */unsigned short) (~(arr_25 [i_8])));
        var_32 = ((/* implicit */unsigned long long int) (-(min(((-(((/* implicit */int) (signed char)52)))), (((/* implicit */int) (_Bool)1))))));
        /* LoopSeq 1 */
        for (long long int i_9 = 0; i_9 < 18; i_9 += 1) 
        {
            var_33 |= ((/* implicit */long long int) min((-1402086836), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)26)), ((unsigned short)0)))) ? (((/* implicit */int) max((var_10), (var_15)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)182)))))))));
            var_34 += ((/* implicit */int) arr_28 [i_9] [i_9] [i_9]);
            arr_30 [i_8] [i_9] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))));
            var_35 -= ((/* implicit */unsigned char) (~(min((((((/* implicit */_Bool) 4294967286U)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (0LL))), (((/* implicit */long long int) 4U))))));
            arr_31 [i_9] &= ((/* implicit */int) (!(((/* implicit */_Bool) (+(4294967295U))))));
        }
        /* LoopSeq 1 */
        for (unsigned char i_10 = 2; i_10 < 17; i_10 += 2) 
        {
            arr_34 [(unsigned char)16] [i_10] [i_8] = ((/* implicit */int) arr_32 [i_8]);
            /* LoopNest 2 */
            for (int i_11 = 3; i_11 < 17; i_11 += 2) 
            {
                for (long long int i_12 = 3; i_12 < 16; i_12 += 4) 
                {
                    {
                        var_36 = ((/* implicit */_Bool) (signed char)51);
                        arr_42 [i_8] [i_10] [3U] [i_12] [i_12] [i_12 - 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */int) min((arr_39 [i_8] [i_10] [i_11] [i_12]), ((unsigned char)86)))), (max((((/* implicit */int) (unsigned char)29)), (arr_27 [i_10]))))))));
                        var_37 &= ((/* implicit */unsigned char) 11U);
                    }
                } 
            } 
        }
    }
}
