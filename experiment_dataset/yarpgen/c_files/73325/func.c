/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73325
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
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(-2051478215)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 2051478215)) ? (-2051478216) : (((/* implicit */int) var_12)))))))), (var_12))))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */short) ((2051478214) >> (((((/* implicit */int) (unsigned short)65531)) - (65506)))));
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) arr_3 [(short)7])) ? (((/* implicit */long long int) var_11)) : (-8491924362535920759LL))), (((/* implicit */long long int) arr_6 [i_0] [i_1] [i_2])))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            for (int i_4 = 1; i_4 < 21; i_4 += 1) 
            {
                for (short i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    {
                        var_18 = ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)4))))) ? (((/* implicit */int) arr_12 [i_3] [(short)0] [i_3] [i_3])) : (((/* implicit */int) arr_12 [i_3] [i_4 + 2] [i_4] [i_4 + 2])))) | ((((!(((/* implicit */_Bool) 7503603021088572068LL)))) ? (min((arr_6 [i_0] [i_5] [i_3]), (arr_2 [i_0] [(short)0] [(short)12]))) : (((/* implicit */int) (short)-16844)))));
                        var_19 ^= ((/* implicit */short) (+((-(((((/* implicit */_Bool) (short)-22901)) ? (arr_11 [(short)18] [(short)8] [i_4] [i_4]) : (((/* implicit */int) arr_0 [i_4]))))))));
                    }
                } 
            } 
        } 
        var_20 = ((int) arr_13 [i_0 + 1] [i_0 + 1]);
        arr_14 [i_0] = ((/* implicit */long long int) var_6);
    }
    for (int i_6 = 0; i_6 < 18; i_6 += 2) 
    {
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (~(arr_1 [i_6]))))));
        var_22 = ((/* implicit */short) ((((((/* implicit */int) arr_8 [i_6])) / (arr_11 [i_6] [i_6] [i_6] [i_6]))) | (((/* implicit */int) var_10))));
    }
}
