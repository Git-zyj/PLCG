/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87465
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) min((max((-3714994248046954076LL), (((/* implicit */long long int) (unsigned char)255)))), (((/* implicit */long long int) arr_0 [i_0] [i_0])))))));
        var_16 = ((/* implicit */long long int) (unsigned char)244);
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (signed char i_3 = 1; i_3 < 9; i_3 += 4) 
                {
                    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) var_9);
                            arr_14 [i_4] [(_Bool)1] [i_0] [i_2] [i_2] &= ((/* implicit */unsigned char) ((((((arr_8 [i_1 + 1] [i_1] [i_1] [(short)4]) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_1)))) + (2147483647))) >> (((((/* implicit */_Bool) -2827208711360695084LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1 + 1] [(short)7] [i_1 + 1] [i_1 + 1]))) : (-2827208711360695084LL)))));
                            arr_15 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_11)), ((-(arr_0 [i_3] [i_0])))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) arr_10 [i_0])) / (-2827208711360695084LL)))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) ((short) var_8))))) : (((/* implicit */int) ((((2827208711360695072LL) < (((/* implicit */long long int) ((/* implicit */int) var_8))))) && ((!(arr_3 [i_0]))))))));
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */short) ((arr_3 [i_0]) ? (((arr_11 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1]) ? (((/* implicit */int) arr_11 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1])) : (((/* implicit */int) arr_11 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 122657664837241482LL)))))));
            var_19 = ((/* implicit */long long int) (-(((/* implicit */int) arr_13 [i_1] [i_1] [(_Bool)1]))));
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                for (unsigned int i_6 = 0; i_6 < 11; i_6 += 1) 
                {
                    {
                        var_20 = ((/* implicit */short) max((arr_18 [i_5] [i_1] [i_6]), (((/* implicit */long long int) ((short) ((((/* implicit */int) (short)-8051)) * (((/* implicit */int) arr_11 [10LL] [10LL] [i_5] [i_6]))))))));
                        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_0))));
                    }
                } 
            } 
        }
    }
    var_22 = ((/* implicit */short) (((-(((/* implicit */int) var_9)))) * (((((/* implicit */int) max((var_10), (var_10)))) % (((/* implicit */int) var_6))))));
    var_23 *= ((/* implicit */_Bool) ((min((((/* implicit */unsigned int) (short)19243)), ((-(2339440912U))))) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)8050)))))))))));
    var_24 = (short)9915;
}
