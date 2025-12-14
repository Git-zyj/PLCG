/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5976
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] = ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) > ((~(var_12)))))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))));
        arr_3 [15] &= ((/* implicit */int) 2017012036U);
    }
    for (unsigned int i_1 = 2; i_1 < 10; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2277955260U)) ? ((~(2277955260U))) : (min((2277955260U), (2277955260U)))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            arr_11 [i_1] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) arr_6 [i_1 + 1]))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                arr_14 [i_3] [i_1 + 2] [i_1 + 2] = ((/* implicit */int) max(((unsigned short)63337), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_2] [i_2] [i_3]))) : (arr_9 [i_1 + 1]))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_3)))))))))));
                arr_15 [i_1 + 2] [i_1 + 2] [i_2] [i_3] |= ((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)8)) ? (2017012036U) : (((/* implicit */unsigned int) 1260957351)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) (unsigned char)248)) : (-4))))));
            }
            /* vectorizable */
            for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                arr_18 [i_4] [i_2] [i_2] [i_1] = ((/* implicit */int) arr_0 [18]);
                arr_19 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) -302621667)) && (((/* implicit */_Bool) var_11))));
                arr_20 [i_1] [i_1 + 1] [i_1 - 2] = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2))) & (2017012036U))) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) -1260957351))))));
            }
            arr_21 [i_1 + 1] [i_2] [9] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_2])) ? (((/* implicit */int) arr_16 [3U])) : (((/* implicit */int) arr_13 [i_1 + 1] [i_2] [(unsigned char)1] [i_2]))))), (((((/* implicit */_Bool) 996547318)) ? (((/* implicit */unsigned int) var_14)) : (2017012036U)))))) ? (((((/* implicit */_Bool) (+(2277955259U)))) ? (((/* implicit */unsigned int) -1)) : (((((/* implicit */_Bool) 3581315111U)) ? (2017012037U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10507))))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)39)))))));
            arr_22 [i_2] = ((/* implicit */int) (-(2277955259U)));
        }
        arr_23 [i_1] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((int) var_2))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (var_13))) : (var_14)))));
    }
    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 3) 
    {
        arr_26 [i_5] = ((/* implicit */unsigned char) ((int) ((2277955260U) == (2017012036U))));
        /* LoopSeq 1 */
        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            arr_29 [(unsigned char)22] [(signed char)0] [i_5] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_25 [i_5] [i_5])) ? (((/* implicit */int) var_6)) : ((-(((/* implicit */int) (_Bool)1)))))));
            arr_30 [20] [i_6] [i_6] = ((/* implicit */unsigned char) min((min((((/* implicit */int) arr_27 [i_5] [i_6])), ((~(var_14))))), (((/* implicit */int) (!(((/* implicit */_Bool) min((var_9), (((/* implicit */int) var_5))))))))));
            arr_31 [i_5] = ((/* implicit */short) ((unsigned long long int) (unsigned char)3));
        }
    }
    /* LoopSeq 3 */
    for (unsigned short i_7 = 0; i_7 < 21; i_7 += 1) 
    {
        arr_36 [i_7] = ((/* implicit */short) ((int) arr_35 [i_7]));
        arr_37 [i_7] = ((/* implicit */unsigned char) min((var_2), (((int) 2017012036U))));
        arr_38 [i_7] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 2995094050U)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)1))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_8 = 0; i_8 < 21; i_8 += 2) 
        {
            arr_41 [i_8] [i_7] [i_7] = ((/* implicit */unsigned char) (~(2995094044U)));
            arr_42 [i_7] = (unsigned char)39;
        }
    }
    for (unsigned long long int i_9 = 3; i_9 < 18; i_9 += 2) 
    {
        arr_46 [5] = ((/* implicit */unsigned char) (-(((11923378467751760416ULL) + (((/* implicit */unsigned long long int) 2017012036U))))));
        arr_47 [i_9 - 3] [i_9 + 2] = (-(((((/* implicit */_Bool) ((unsigned int) var_2))) ? (((/* implicit */int) arr_27 [i_9 + 1] [(signed char)14])) : (((/* implicit */int) ((_Bool) (_Bool)0))))));
        arr_48 [i_9 - 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((2017012036U), (((/* implicit */unsigned int) arr_39 [i_9 - 2] [(signed char)20]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) (signed char)45))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [(short)0] [(unsigned short)18])) ? (1227539222) : (((/* implicit */int) arr_40 [(_Bool)1] [i_9 + 1]))))) : (var_0))))));
        arr_49 [i_9] = ((((/* implicit */_Bool) min((arr_43 [i_9 - 2] [i_9 - 2]), (arr_43 [i_9 + 2] [i_9 - 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)97)))))) : (arr_43 [i_9 + 2] [i_9 + 1]));
    }
    for (int i_10 = 0; i_10 < 19; i_10 += 1) 
    {
        arr_54 [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-9197)) || (((/* implicit */_Bool) (signed char)27))))) == (((/* implicit */int) (!(((/* implicit */_Bool) ((var_11) | (2277955260U)))))))));
        arr_55 [18U] |= ((/* implicit */int) arr_40 [(signed char)18] [i_10]);
    }
}
