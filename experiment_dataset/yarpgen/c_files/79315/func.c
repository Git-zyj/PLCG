/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79315
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
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (arr_0 [i_0] [i_0]) : (arr_0 [(unsigned short)2] [i_0])))))));
        var_18 = ((((/* implicit */unsigned int) arr_0 [i_0 - 2] [i_0 - 2])) - (((((/* implicit */_Bool) 1382186886U)) ? (((/* implicit */unsigned int) arr_0 [i_0] [i_0 + 1])) : (3144828399U))));
    }
    for (unsigned short i_1 = 1; i_1 < 15; i_1 += 2) 
    {
        var_19 &= ((/* implicit */unsigned short) min((min((((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))), (((((/* implicit */_Bool) arr_3 [6ULL] [i_1 + 1])) ? (1164684739U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))), (((/* implicit */unsigned int) ((short) min((2912780414U), (((/* implicit */unsigned int) var_13))))))));
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_2 [i_1]), (arr_3 [i_1] [i_1 - 1])))) ? (((((/* implicit */_Bool) arr_3 [i_1] [i_1 - 1])) ? (arr_2 [i_1 - 1]) : (arr_3 [i_1] [i_1 + 1]))) : (((arr_3 [i_1] [i_1 + 1]) | (arr_2 [i_1]))))))));
        var_21 = ((/* implicit */signed char) (-(min((((((/* implicit */_Bool) var_16)) ? (var_11) : (1382186886U))), (arr_3 [i_1] [i_1])))));
        var_22 = ((/* implicit */unsigned short) ((min((arr_3 [i_1] [i_1 + 1]), (arr_3 [i_1] [i_1 + 1]))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 + 1])) && (((/* implicit */_Bool) arr_3 [i_1] [i_1 + 1]))))))));
    }
    var_23 = ((/* implicit */unsigned short) var_0);
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_2 = 2; i_2 < 12; i_2 += 1) 
    {
        var_24 = ((/* implicit */signed char) arr_1 [i_2 - 1]);
        var_25 = ((/* implicit */short) (+(2912780434U)));
        var_26 = arr_2 [i_2 - 1];
        var_27 = (((!(((/* implicit */_Bool) arr_3 [i_2] [i_2])))) ? (((/* implicit */int) ((short) 3130282572U))) : (((/* implicit */int) (!(((/* implicit */_Bool) 34719731))))));
    }
    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        /* LoopSeq 3 */
        for (short i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            var_28 += ((/* implicit */unsigned short) ((1382186881U) + (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 1382186881U))))));
            var_29 = min((((/* implicit */unsigned int) (unsigned short)36050)), (min((((/* implicit */unsigned int) arr_6 [i_3])), (arr_3 [i_3] [i_3]))));
        }
        for (unsigned short i_5 = 1; i_5 < 9; i_5 += 4) 
        {
            var_30 = (~(((((((/* implicit */_Bool) 1382186881U)) ? (3130282572U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [10U]))))) ^ (9U))));
            var_31 = ((((/* implicit */_Bool) ((arr_2 [i_5 + 1]) / (arr_2 [i_5 + 1])))) ? (min((arr_2 [i_5 + 1]), (3130282533U))) : (arr_2 [i_5 - 1]));
        }
        for (signed char i_6 = 2; i_6 < 7; i_6 += 2) 
        {
            var_32 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)13033)) ? (((/* implicit */int) arr_4 [0])) : (((/* implicit */int) (unsigned short)25336))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-83))) + (arr_2 [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((short)-2462), (((/* implicit */short) arr_5 [i_3]))))))))) ? ((((-(arr_6 [i_6 - 1]))) | (((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) && (((/* implicit */_Bool) arr_5 [4U]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) (signed char)127)), (arr_16 [i_6])))))))));
            var_33 = ((/* implicit */int) arr_1 [i_6]);
            var_34 = ((/* implicit */unsigned int) ((((((3130282556U) * (var_11))) >> ((((-(arr_13 [(unsigned short)0] [i_6] [i_6]))) - (1474205998U))))) == (((((/* implicit */unsigned int) ((arr_6 [i_6 + 3]) >> (((1382186881U) - (1382186875U)))))) | (arr_3 [i_6 - 2] [i_3])))));
        }
        arr_17 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) -898766410)) & (arr_7 [i_3] [i_3])));
    }
    /* vectorizable */
    for (unsigned int i_7 = 3; i_7 < 15; i_7 += 2) 
    {
        arr_20 [i_7 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (arr_3 [i_7] [i_7 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))));
        /* LoopSeq 1 */
        for (short i_8 = 0; i_8 < 16; i_8 += 2) 
        {
            var_35 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_7] [i_8] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50162))) : (arr_3 [i_7] [i_8])));
            arr_23 [i_7] [i_8] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_21 [i_7 - 3] [i_7 - 2] [i_7 + 1])) : (((/* implicit */int) var_2))));
            var_36 += ((/* implicit */unsigned int) ((unsigned short) 2147483647));
        }
        var_37 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_7 - 2] [(short)9])) && (((/* implicit */_Bool) arr_3 [i_7 - 1] [i_7]))));
    }
    var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) var_16))));
}
