/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7215
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
    var_18 = ((/* implicit */short) var_10);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 - 1])) ? (((((/* implicit */int) arr_2 [i_0])) / (((/* implicit */int) arr_2 [(short)13])))) : (((/* implicit */int) (unsigned char)206))))));
        arr_3 [i_0] = ((/* implicit */signed char) 3805064061U);
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [18ULL])), (((var_14) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (1442118493) : (((/* implicit */int) (short)17549))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_0 [i_0] [(unsigned char)21])), ((unsigned char)122))))))) : (((/* implicit */int) var_0))));
            var_21 ^= ((/* implicit */short) ((((/* implicit */int) ((signed char) arr_1 [i_0 - 1] [i_0 + 1]))) - (((arr_0 [i_0 + 1] [i_0 - 1]) ? (((/* implicit */int) arr_5 [i_0 + 1] [i_0] [i_0])) : (((/* implicit */int) ((6810230009245803550ULL) < (var_11))))))));
        }
        for (unsigned int i_2 = 2; i_2 < 22; i_2 += 1) 
        {
            var_22 = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [i_2])) & (((/* implicit */int) var_4))))), (min((((/* implicit */unsigned long long int) arr_4 [16ULL])), (357393499566461504ULL))))), (((/* implicit */unsigned long long int) min((-1207180115), (((/* implicit */int) (short)-32764)))))));
            var_23 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) ((627389370U) / (((/* implicit */unsigned int) (-2147483647 - 1))))))) ? (1926274124) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)14813)))))));
        }
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        var_24 = ((/* implicit */int) min((((/* implicit */long long int) ((unsigned short) var_15))), (((((/* implicit */long long int) ((/* implicit */int) (signed char)90))) - (((((/* implicit */_Bool) var_4)) ? (arr_7 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
        var_25 = ((/* implicit */unsigned long long int) ((5010215804398578747ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)-20), (var_7)))))));
    }
    var_26 = ((/* implicit */unsigned int) ((((-1207180115) + (2147483647))) >> (((var_5) - (13458108275718118225ULL)))));
    /* LoopSeq 3 */
    for (long long int i_4 = 0; i_4 < 17; i_4 += 1) 
    {
        var_27 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((((/* implicit */int) var_3)) >= (((/* implicit */int) var_8)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-26)), (var_8))))))), (min((max((arr_4 [i_4]), (((/* implicit */long long int) var_17)))), (((/* implicit */long long int) var_8))))));
        arr_14 [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) var_3)) & ((((_Bool)1) ? (((/* implicit */int) arr_5 [i_4] [i_4] [i_4])) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0)))))))));
        var_28 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4] [i_4]))) & (9223372036854775807LL))) & (((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_4] [(signed char)7])) ^ (((/* implicit */int) var_2)))))));
        var_29 = ((/* implicit */_Bool) ((((_Bool) ((((/* implicit */_Bool) (short)-17550)) && (((/* implicit */_Bool) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 7LL)) || (arr_0 [(_Bool)1] [i_4]))))) : (var_11)));
    }
    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
    {
        var_30 = ((/* implicit */short) arr_17 [i_5]);
        var_31 = ((/* implicit */short) arr_4 [i_5]);
        var_32 &= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_5]))) ^ (((long long int) var_2))));
        var_33 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_7 [i_5])) || (((/* implicit */_Bool) arr_7 [i_5])))) ? (((/* implicit */unsigned long long int) min((arr_7 [i_5]), (9223372036854775807LL)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (var_6)))));
        var_34 &= ((/* implicit */signed char) arr_0 [i_5] [i_5]);
    }
    for (unsigned short i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
    {
        var_35 = ((/* implicit */short) var_9);
        var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) (((-(((arr_20 [i_6] [i_6]) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_2 [i_6])) ? (((/* implicit */unsigned long long int) arr_20 [i_6] [i_6])) : (16531373651799931019ULL)))))))))));
    }
}
