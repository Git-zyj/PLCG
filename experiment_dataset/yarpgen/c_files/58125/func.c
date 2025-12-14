/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58125
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
    for (int i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) arr_0 [i_0 + 1])) && (((/* implicit */_Bool) arr_0 [i_0 + 2]))))));
        var_15 = ((/* implicit */short) max((var_15), (min((((short) arr_2 [i_0 - 3])), (min((min((arr_2 [i_0]), (arr_1 [8]))), (arr_1 [i_0 - 1])))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 7; i_2 += 3) 
            {
                {
                    var_16 = ((((((/* implicit */int) arr_1 [i_2])) >> (((((/* implicit */int) max((arr_5 [i_2 - 1] [i_1] [(short)2]), (((/* implicit */unsigned char) (signed char)0))))) - (199))))) + ((((!(((/* implicit */_Bool) arr_1 [i_2])))) ? (((((/* implicit */_Bool) (short)8)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1] [i_2])))) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 9; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) ((signed char) ((int) max((arr_10 [i_0]), (((/* implicit */int) (short)-8))))));
                                var_18 = ((/* implicit */long long int) 12213847666013102858ULL);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
    {
        var_19 = ((/* implicit */long long int) arr_14 [i_5]);
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 4) 
            {
                {
                    var_20 *= ((/* implicit */unsigned long long int) (+(((var_12) + (((/* implicit */int) arr_14 [i_7]))))));
                    var_21 = ((/* implicit */signed char) (!(((((/* implicit */int) (short)-1)) > (((/* implicit */int) (short)-2519))))));
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (short)28503)) ? (10634424214744863761ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2519)))));
                    var_23 = ((/* implicit */int) ((signed char) 16422887304709498775ULL));
                }
            } 
        } 
    }
    var_24 = ((/* implicit */signed char) ((int) var_2));
    /* LoopNest 2 */
    for (long long int i_8 = 2; i_8 < 10; i_8 += 2) 
    {
        for (unsigned char i_9 = 2; i_9 < 10; i_9 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 8; i_10 += 3) 
                {
                    for (unsigned char i_11 = 0; i_11 < 12; i_11 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_8 - 1])) % (((/* implicit */int) arr_24 [i_8 - 2]))))))))));
                            var_26 = ((/* implicit */short) (-(((/* implicit */int) (short)25473))));
                        }
                    } 
                } 
                arr_31 [i_8] [i_8] = ((((/* implicit */_Bool) arr_18 [i_8] [(short)3] [i_8 - 1])) ? (((/* implicit */int) arr_20 [i_8] [4LL])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_8] [i_8] [i_8 + 1] [i_9 - 2] [5LL])) && (((/* implicit */_Bool) arr_30 [i_8] [i_8 + 1] [i_8 - 2] [i_9 - 1] [(short)10]))))));
            }
        } 
    } 
}
