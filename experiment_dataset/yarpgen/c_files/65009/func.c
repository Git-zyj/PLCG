/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65009
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_4 [i_0] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_3 [i_0])), (arr_1 [13U]))))) != (var_4))) ? ((~(((/* implicit */int) arr_0 [i_0])))) : ((-(((/* implicit */int) arr_1 [i_0])))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_15 |= ((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_11))) % (arr_5 [i_0])))));
                    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((max((-4834388856273596134LL), (((/* implicit */long long int) 1714416538U)))) + (min((((/* implicit */long long int) 1714416526U)), (-4834388856273596134LL))))))));
                }
            } 
        } 
        arr_9 [i_0] [i_0] = ((/* implicit */unsigned int) 127LL);
        arr_10 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [(signed char)6] [i_0])) ? (max((arr_7 [0LL] [i_0]), (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) arr_2 [i_0]))));
        arr_11 [(unsigned short)5] = ((/* implicit */signed char) max((max(((+(arr_8 [(unsigned short)17] [(unsigned short)17] [i_0]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) -4834388856273596134LL))))))), (2580550750U)));
    }
    var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (1714416526U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)13044)) : (673085364)))))) - (((/* implicit */unsigned int) ((/* implicit */int) (((~(((/* implicit */int) var_11)))) > (((((/* implicit */_Bool) (signed char)-93)) ? (((/* implicit */int) (unsigned char)21)) : (((/* implicit */int) var_5))))))))));
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_9)))) ? (((var_7) + (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
    var_19 = ((/* implicit */unsigned short) var_7);
    /* LoopSeq 3 */
    for (unsigned char i_3 = 2; i_3 < 8; i_3 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                for (int i_6 = 0; i_6 < 10; i_6 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) arr_3 [i_5]);
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) 4834388856273596133LL))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)90)) ? (((/* implicit */int) var_12)) : (arr_7 [i_3] [i_3])))) * (((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_20 [i_3] [i_3 - 1] [i_3 - 1] [i_3])))))) ? (((((((arr_15 [i_3 + 1] [5LL] [i_3 - 2]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41084))))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) 1714416538U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)97))) : (1039510896U))) - (78U))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(83893334)))) ? (((unsigned int) (signed char)-38)) : (var_14))))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? ((~(arr_20 [i_3] [(signed char)2] [i_3] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_3] [i_3] [i_3] [i_3])) && (((/* implicit */_Bool) arr_18 [i_3 + 1] [i_3 - 2] [i_3 - 2]))))))));
    }
    /* vectorizable */
    for (int i_7 = 3; i_7 < 13; i_7 += 2) 
    {
        arr_27 [i_7 - 1] = ((/* implicit */int) var_14);
        arr_28 [i_7 + 1] [i_7] = ((/* implicit */unsigned int) ((arr_6 [i_7 - 3] [i_7 - 2] [i_7]) + (arr_6 [i_7 - 1] [i_7 - 1] [(unsigned short)7])));
        var_24 = ((/* implicit */int) var_10);
        arr_29 [(unsigned char)8] = arr_5 [i_7];
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 21; i_8 += 2) 
    {
        arr_32 [i_8] = ((/* implicit */unsigned short) (-(arr_31 [i_8] [i_8])));
        arr_33 [(_Bool)0] = ((/* implicit */unsigned long long int) ((int) (!(var_13))));
    }
}
