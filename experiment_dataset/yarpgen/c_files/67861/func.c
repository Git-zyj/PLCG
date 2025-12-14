/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67861
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
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_8))))) : (((/* implicit */int) (_Bool)1)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) (unsigned char)65)))));
        arr_3 [i_0] [12ULL] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)43437)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)10798)))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (unsigned char)58)) : (arr_1 [i_0])));
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((arr_1 [i_0]) <= (arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_5 [i_1] [i_1]) : (((/* implicit */unsigned int) arr_1 [i_1]))));
        var_19 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) arr_1 [i_1])) : (arr_5 [i_1] [i_1])))) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) var_15)) & (((/* implicit */int) var_12))))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                for (long long int i_5 = 3; i_5 < 13; i_5 += 4) 
                {
                    {
                        arr_19 [i_5] = ((/* implicit */short) (-(273644914U)));
                        arr_20 [i_2] [i_3] [i_4] [(unsigned char)1] [i_5] [i_5 - 1] = ((/* implicit */unsigned char) 273644914U);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_6 = 1; i_6 < 12; i_6 += 2) 
        {
            for (unsigned char i_7 = 0; i_7 < 14; i_7 += 1) 
            {
                {
                    arr_28 [i_7] [9] [i_7] = ((/* implicit */signed char) ((unsigned long long int) arr_15 [i_6 + 1] [12LL] [i_6 - 1] [i_6 + 2]));
                    /* LoopNest 2 */
                    for (int i_8 = 4; i_8 < 11; i_8 += 4) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 14; i_9 += 1) 
                        {
                            {
                                arr_33 [i_7] = ((/* implicit */short) (((+(arr_10 [i_9] [i_9] [(signed char)8]))) <= (((/* implicit */long long int) ((/* implicit */int) arr_25 [(unsigned short)8] [i_7] [i_6 + 1])))));
                                var_20 = ((/* implicit */_Bool) min((var_20), ((!(((/* implicit */_Bool) (unsigned short)27141))))));
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((_Bool) (unsigned char)66)))));
                                var_22 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_8 - 2] [i_6] [i_6 - 1]))) <= (7006123129561729147ULL)));
                                arr_34 [i_2] [(signed char)5] [i_7] [i_9] = ((/* implicit */unsigned short) var_2);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_2] [i_2] [5ULL] [i_2])) && (((/* implicit */_Bool) arr_32 [i_2] [i_2] [i_2] [i_2] [i_2]))));
    }
}
