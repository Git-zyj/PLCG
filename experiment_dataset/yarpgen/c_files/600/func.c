/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/600
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(2742611814U)))) && (((/* implicit */_Bool) var_10)))))) == (var_4)));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((-15LL) != (((/* implicit */long long int) 2674416451U))))) > (((/* implicit */int) min((var_2), (((/* implicit */unsigned char) arr_0 [i_0]))))))))) - (max((14494003334746655892ULL), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))))));
        var_17 = arr_0 [i_0];
    }
    for (short i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned int) -1811861060)) != (2674416462U)));
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (-(3952740738962895738ULL)))) ? (((((/* implicit */int) (unsigned short)46753)) | (((/* implicit */int) ((signed char) 15LL))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (23LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-23514))))) == (((/* implicit */long long int) ((/* implicit */int) (short)32765))))))));
        /* LoopNest 3 */
        for (short i_2 = 3; i_2 < 16; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                for (unsigned int i_4 = 4; i_4 < 17; i_4 += 1) 
                {
                    {
                        var_20 -= ((/* implicit */_Bool) arr_2 [i_1]);
                        var_21 &= ((/* implicit */unsigned int) max((arr_9 [i_4] [i_1] [i_1] [i_4 - 2]), (((short) 14494003334746655892ULL))));
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) arr_9 [i_1] [i_1] [i_1] [i_4]))));
                    }
                } 
            } 
        } 
    }
    for (short i_5 = 1; i_5 < 19; i_5 += 4) 
    {
        var_23 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max(((unsigned char)73), ((unsigned char)73)))), (max((((((/* implicit */_Bool) var_13)) ? (3952740738962895718ULL) : (((/* implicit */unsigned long long int) 44LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_5] [i_5])) | (((/* implicit */int) arr_7 [i_5] [i_5 + 1])))))))));
        var_24 = ((((min((var_8), (((/* implicit */long long int) (unsigned char)0)))) / (((/* implicit */long long int) (-(((/* implicit */int) var_13))))))) <= (max((max((arr_13 [i_5] [i_5] [i_5] [i_5]), (-5LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)24233)) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) arr_15 [i_5]))))))));
    }
    var_25 = ((/* implicit */int) var_6);
    var_26 = ((/* implicit */long long int) (-(((/* implicit */int) var_2))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 1) 
    {
        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_6])) ? (arr_2 [i_6]) : (arr_2 [i_6])));
        /* LoopSeq 3 */
        for (unsigned int i_7 = 3; i_7 < 12; i_7 += 1) 
        {
            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_7 - 3] [i_7 - 3])) ? (((/* implicit */int) arr_1 [i_7 - 1] [i_7 - 2])) : (((/* implicit */int) arr_1 [i_7 - 3] [i_7 - 3]))));
            var_29 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_7 - 3])) ? (((/* implicit */int) arr_11 [i_7 - 3] [i_7 - 2] [i_7 - 1])) : (((/* implicit */int) arr_11 [i_7 - 2] [i_7 + 1] [i_7 - 1]))));
        }
        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 1) 
        {
            var_30 = ((/* implicit */long long int) max((var_30), (((long long int) ((((/* implicit */_Bool) arr_8 [i_6] [i_8] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-5))) : (var_14))))));
            /* LoopSeq 1 */
            for (unsigned int i_9 = 1; i_9 < 11; i_9 += 1) 
            {
                var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_9 + 1] [i_9 + 1] [i_9 + 1])) ? (((/* implicit */int) arr_11 [i_9 + 2] [i_9 + 2] [i_9 + 2])) : (((/* implicit */int) arr_9 [i_9 - 1] [i_9 - 1] [(short)6] [i_9 - 1])))))));
                var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) arr_7 [8U] [i_8]))));
                var_33 ^= ((/* implicit */unsigned int) (-(arr_13 [i_9] [i_9] [i_9 - 1] [(unsigned short)0])));
            }
            var_34 = ((/* implicit */long long int) var_2);
            var_35 = ((/* implicit */unsigned long long int) 440302471U);
        }
        for (long long int i_10 = 0; i_10 < 13; i_10 += 1) 
        {
            var_36 = ((/* implicit */signed char) ((unsigned char) var_1));
            var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (2728657990U)))) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_10] [i_6])))));
            var_38 = ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_23 [i_6])) : (((/* implicit */int) arr_23 [i_6])));
        }
    }
}
