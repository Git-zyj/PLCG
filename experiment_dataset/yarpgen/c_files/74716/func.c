/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74716
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */int) max(((unsigned char)35), ((unsigned char)46)));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((12429510078947444661ULL) < (((/* implicit */unsigned long long int) -264579075))));
                    arr_10 [i_0] = ((/* implicit */_Bool) ((arr_2 [i_0]) & (((((arr_8 [1ULL] [i_1]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3)))) << (((arr_1 [i_0]) + (2117633252)))))));
                    var_13 *= (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) / (((((/* implicit */_Bool) 12429510078947444645ULL)) ? (((/* implicit */unsigned long long int) var_9)) : (arr_0 [i_0] [i_1])))))));
                }
            } 
        } 
        var_14 += ((/* implicit */int) (_Bool)1);
        arr_11 [i_0] &= ((/* implicit */int) (unsigned char)0);
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) /* same iter space */
    {
        arr_14 [(short)9] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) / ((-(arr_6 [i_3] [7] [7] [0])))));
        /* LoopNest 3 */
        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            for (short i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                for (unsigned char i_6 = 2; i_6 < 18; i_6 += 1) 
                {
                    {
                        arr_24 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_5 [i_6 + 2] [i_6 + 2] [(unsigned char)4] [i_6 - 1]);
                        arr_25 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_6 + 2] [i_6 - 2])) ? (arr_13 [i_6 + 2]) : (var_9)));
                        var_15 = ((/* implicit */_Bool) ((15702805560772493091ULL) << (((((((/* implicit */_Bool) (unsigned char)127)) ? (arr_2 [i_5]) : (arr_4 [(unsigned char)8]))) - (1480257444)))));
                        arr_26 [i_3] [i_4] [i_4] [i_6 + 2] = ((/* implicit */_Bool) arr_4 [i_3]);
                    }
                } 
            } 
        } 
        var_16 = arr_21 [i_3] [i_3] [i_3] [i_3];
    }
    for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_8 = 2; i_8 < 19; i_8 += 4) 
        {
            var_17 = ((/* implicit */unsigned char) ((arr_17 [i_7] [i_8 - 2]) & (arr_17 [i_7] [i_8 + 1])));
            /* LoopNest 2 */
            for (short i_9 = 0; i_9 < 20; i_9 += 3) 
            {
                for (unsigned char i_10 = 0; i_10 < 20; i_10 += 4) 
                {
                    {
                        var_18 = ((/* implicit */unsigned char) ((arr_27 [i_7] [i_8 - 2]) ? (arr_22 [i_8] [i_8 - 2] [i_8 + 1] [(unsigned char)11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_8] [i_8 - 1])))));
                        var_19 *= ((/* implicit */unsigned char) (~(((var_9) << (((((/* implicit */int) (unsigned char)127)) - (126)))))));
                        arr_35 [3ULL] [3ULL] [(unsigned char)16] [i_10] [i_9] = ((unsigned long long int) var_11);
                        arr_36 [i_7] [i_8] [12ULL] [i_9] [18] [i_10] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_7] [i_7]))));
                    }
                } 
            } 
        }
        arr_37 [i_7] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_2 [i_7])) ? (((/* implicit */int) ((unsigned char) -264579063))) : (((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) (_Bool)1)))))))));
        arr_38 [i_7] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_6))))) * (min((18446744073709551594ULL), (((/* implicit */unsigned long long int) var_4)))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
    }
    var_20 = ((/* implicit */unsigned char) 6017233994762106945ULL);
    var_21 &= ((/* implicit */int) var_6);
}
