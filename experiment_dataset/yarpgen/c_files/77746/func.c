/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77746
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((16777215U) >> (((var_4) + (8786599058729964297LL))))), (((/* implicit */unsigned int) ((int) var_12)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) (~(var_4))))))) : (((/* implicit */int) ((unsigned short) arr_0 [i_0])))));
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_11)), ((unsigned short)65523)))))))) : ((~(max((((/* implicit */long long int) arr_1 [i_0])), (arr_0 [i_0])))))));
    }
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */short) max((((int) ((((/* implicit */int) arr_4 [i_1] [i_1])) >> (((((/* implicit */int) arr_5 [i_1])) - (62581)))))), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_1]))))))));
        arr_7 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_1])))))));
    }
    /* vectorizable */
    for (short i_2 = 1; i_2 < 17; i_2 += 4) 
    {
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) 18446744073709551610ULL))));
        var_17 ^= ((/* implicit */int) ((arr_10 [i_2 + 1]) > (arr_10 [i_2 + 1])));
        arr_12 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (16777207U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2])))))) ? (((((/* implicit */_Bool) arr_5 [i_2])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2 + 1])))));
        arr_13 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_2 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_0 [i_2 + 1])));
        arr_14 [i_2] = ((/* implicit */short) var_0);
    }
    /* LoopNest 2 */
    for (unsigned char i_3 = 1; i_3 < 9; i_3 += 4) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                arr_19 [i_3] [i_3] = arr_18 [i_3];
                var_18 = ((/* implicit */_Bool) ((((/* implicit */int) var_6)) - (((/* implicit */int) ((short) arr_11 [i_3 + 1])))));
                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) arr_3 [i_3]))));
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_17 [(short)2])) : (((/* implicit */int) (unsigned char)188))))) ? (((/* implicit */int) var_13)) : (((int) var_14)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 4) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_6])) ? (((/* implicit */int) var_11)) : (max((arr_24 [i_5] [i_6] [i_6]), (max((arr_20 [i_5] [i_6]), (arr_20 [i_6] [i_5])))))));
                var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_22 [i_5] [i_6])) ? ((+(arr_24 [i_6] [i_6] [i_5]))) : (arr_20 [i_5] [i_6]))) + (((/* implicit */int) arr_22 [i_5] [i_5]))));
            }
        } 
    } 
}
