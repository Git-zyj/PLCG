/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92557
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) /* same iter space */
        {
            var_14 = ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? ((((((-2147483647 - 1)) / (((/* implicit */int) (unsigned short)51883)))) * (((((/* implicit */int) arr_5 [i_0] [i_0])) / (((/* implicit */int) var_11)))))) : (((/* implicit */int) ((unsigned short) arr_4 [i_0] [i_1]))));
            var_15 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-15178))) : (-8790199957060390037LL)))) != (var_8)));
            arr_7 [i_0] = ((/* implicit */int) ((1221499756638050271ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12812)))));
        }
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 10; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    {
                        arr_18 [i_0] [i_0] [i_2] [i_0] |= ((/* implicit */_Bool) ((((unsigned long long int) var_12)) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                        arr_19 [i_0] = (~(((/* implicit */int) (unsigned short)19540)));
                        var_16 = ((/* implicit */unsigned int) (unsigned char)0);
                    }
                } 
            } 
            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_14 [i_0])) : (((/* implicit */int) arr_5 [i_2] [i_0]))));
        }
        for (int i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            var_18 = ((/* implicit */_Bool) 184398636);
            var_19 -= ((/* implicit */unsigned short) min((((/* implicit */int) arr_5 [(signed char)8] [i_0])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_5] [i_0])) ? (((/* implicit */int) arr_14 [(short)8])) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_20 [(short)10] [i_5]))))));
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            for (unsigned short i_7 = 4; i_7 < 9; i_7 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        arr_29 [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */int) 10479450224897768652ULL);
                        var_20 = (~(((/* implicit */int) arr_3 [i_0] [10U])));
                    }
                    var_21 = ((/* implicit */signed char) ((((_Bool) arr_10 [i_0] [i_0])) && (((/* implicit */_Bool) ((unsigned long long int) arr_27 [i_6] [i_0] [i_6] [i_7 - 3] [i_7])))));
                    arr_30 [i_0] [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) 8256582124805321052ULL))) / (2147483617)))) ^ (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((unsigned int) arr_2 [i_7])) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_9))))))));
                    arr_31 [i_0] [(unsigned char)7] [i_7] [i_0] = ((/* implicit */signed char) (~((~(((/* implicit */int) max((arr_23 [i_7] [i_0]), (((/* implicit */unsigned short) var_1)))))))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)4722)) ? ((+(((/* implicit */int) var_2)))) : (((/* implicit */int) ((signed char) (unsigned short)45996)))));
        var_23 -= ((/* implicit */unsigned short) (signed char)-17);
        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */int) var_9)) / (((/* implicit */int) arr_23 [i_0] [i_0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_17 [i_0] [i_0] [(signed char)1] [i_0] [(short)1] [i_0])), (arr_0 [i_0])))))))) : (max((arr_21 [i_0] [i_0] [i_0]), (arr_21 [i_0] [i_0] [i_0])))));
    }
    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (637311135U)));
    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) | (4015752517U)))) ? (637311135U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
    /* LoopNest 2 */
    for (unsigned short i_9 = 3; i_9 < 9; i_9 += 4) 
    {
        for (unsigned char i_10 = 1; i_10 < 9; i_10 += 1) 
        {
            {
                var_27 |= ((/* implicit */unsigned short) (~(arr_13 [i_10] [(short)10] [(short)10] [i_9 - 3])));
                arr_37 [i_9 + 1] [i_10] [i_9 + 1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) 14160362375256088845ULL))) != (((/* implicit */int) ((((/* implicit */int) arr_20 [8U] [i_9 - 1])) != (((/* implicit */int) arr_24 [i_9 - 3] [i_9 - 3] [i_9 - 3])))))));
                arr_38 [i_10 - 1] [i_10] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_10)))) ? (arr_21 [i_9] [i_9] [4LL]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)128)) / (((/* implicit */int) (unsigned char)31))))))))));
                arr_39 [(signed char)6] [i_10 - 1] = ((((/* implicit */_Bool) arr_26 [i_10] [i_10 + 1] [(unsigned char)10] [i_9 - 2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 3592062830U)) ? (var_10) : (min((((/* implicit */int) var_3)), (var_12)))))) : (max((7665296691390990690LL), (((/* implicit */long long int) ((((/* implicit */_Bool) 2147483647)) ? (-1110798564) : (((/* implicit */int) arr_26 [i_10] [2U] [2U] [i_9]))))))));
            }
        } 
    } 
}
