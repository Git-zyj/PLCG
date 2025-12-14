/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71084
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_14 = ((/* implicit */short) 3796490887152074190LL);
        arr_3 [i_0] = ((/* implicit */signed char) (((!(arr_0 [i_0]))) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)133)))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */int) (short)-8033);
        arr_8 [i_1] [(unsigned char)13] = ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1])))))) : (arr_5 [i_1]));
        arr_9 [i_1] = ((/* implicit */unsigned long long int) ((long long int) arr_6 [i_1]));
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_5 [i_1]) : (arr_5 [i_1])));
    }
    for (int i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            for (long long int i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                for (signed char i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    {
                        arr_21 [i_5] [(signed char)6] = ((/* implicit */unsigned char) ((_Bool) arr_19 [i_2] [i_5] [i_2] [8] [i_2] [i_2]));
                        arr_22 [i_5] [i_5] = ((/* implicit */int) ((((arr_14 [i_3] [i_4] [i_5]) + (9223372036854775807LL))) >> (((/* implicit */int) ((_Bool) (_Bool)0)))));
                        arr_23 [(signed char)11] [i_3] [i_5] [i_5] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) (-(var_12)))) ? ((-(((/* implicit */int) arr_12 [(short)16])))) : (((/* implicit */int) (!(((/* implicit */_Bool) -4294870896322221772LL))))))));
                        arr_24 [i_5] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_12 [i_4])) ? (var_4) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)26820)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_19 [(signed char)4] [i_5] [i_3] [i_3] [i_4] [i_5])))))))));
                    }
                } 
            } 
        } 
        arr_25 [i_2] = ((/* implicit */short) (~(((/* implicit */int) arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))));
    }
    /* vectorizable */
    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 1) 
    {
        var_16 = ((/* implicit */short) (-(arr_27 [i_6] [i_6])));
        arr_28 [i_6] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (signed char)23)) >= (((/* implicit */int) (unsigned char)100)))))));
        arr_29 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_6])) ? (((/* implicit */unsigned long long int) arr_27 [i_6] [i_6])) : (15950204286487092546ULL)));
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_7))) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_6]))) : (((((/* implicit */_Bool) arr_27 [i_6] [i_6])) ? (((/* implicit */long long int) arr_27 [i_6] [i_6])) : (2047LL)))));
    }
    var_18 = ((/* implicit */long long int) (~(((var_10) << ((((-(((/* implicit */int) var_1)))) - (68)))))));
}
