/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85785
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (signed char)-102)) : (((((/* implicit */int) var_0)) % (((/* implicit */int) (signed char)-108))))))) ? (((((/* implicit */_Bool) -2147483633)) ? ((~(((/* implicit */int) var_3)))) : ((+(((/* implicit */int) var_6)))))) : (max((((((/* implicit */_Bool) (signed char)95)) ? (-2147483642) : (((/* implicit */int) var_0)))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)62)))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_1)), (((((unsigned int) var_7)) >> ((((~(((/* implicit */int) (signed char)15)))) + (39)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((arr_1 [i_0]) * (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)22)), (var_6)))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (_Bool)0))))) : (arr_1 [i_0])))));
    }
    for (short i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        var_11 -= ((/* implicit */_Bool) (-(((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [10ULL])) : (-2147483641))) ^ (((arr_6 [i_1] [2ULL]) & (-1694171325)))))));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 9; i_2 += 2) 
        {
            for (short i_3 = 3; i_3 < 9; i_3 += 3) 
            {
                {
                    arr_12 [i_3] [i_1] [i_3 + 2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) & (max((arr_6 [i_2 + 2] [i_3 - 1]), (266338304)))));
                    var_12 = ((/* implicit */int) (unsigned char)0);
                    arr_13 [i_2] [i_2] = (short)-783;
                }
            } 
        } 
        arr_14 [i_1] [i_1] = ((/* implicit */signed char) (((+(var_8))) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_0)))))))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 18; i_4 += 3) 
    {
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_5)))))))));
        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) -1385196688))));
    }
    /* LoopSeq 2 */
    for (int i_5 = 0; i_5 < 21; i_5 += 4) 
    {
        var_15 += ((/* implicit */unsigned char) arr_18 [i_5] [i_5]);
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 2; i_6 < 17; i_6 += 2) 
        {
            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) var_3))));
            var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_23 [i_5] [i_5])) ? (((/* implicit */int) arr_20 [i_5])) : (((/* implicit */int) var_0))))))) ? (min((((((/* implicit */_Bool) arr_20 [i_5])) ? (arr_18 [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (short)30083))))), (((/* implicit */long long int) (signed char)-118)))) : ((~(var_8))))))));
        }
        for (signed char i_7 = 1; i_7 < 18; i_7 += 2) 
        {
            var_18 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_22 [i_7 + 1] [i_7])) != (var_7))))));
            var_19 += ((/* implicit */unsigned char) (unsigned short)2047);
            var_20 = ((/* implicit */long long int) max((var_20), (((((/* implicit */_Bool) (-(-1385196688)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_5] [i_5] [i_7]))) : (min((((/* implicit */long long int) ((short) arr_21 [i_5] [(signed char)19] [i_5]))), (((((/* implicit */_Bool) var_1)) ? (-1279605674731910099LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32767)))))))))));
        }
    }
    for (short i_8 = 1; i_8 < 7; i_8 += 3) 
    {
        var_21 = (-((((_Bool)0) ? (((/* implicit */int) (signed char)-45)) : (((/* implicit */int) (short)-627)))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_9 = 0; i_9 < 10; i_9 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_10 = 2; i_10 < 9; i_10 += 2) 
            {
                var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (~(2147483647))))));
                arr_34 [i_8] [i_9] = ((/* implicit */short) (+(((/* implicit */int) var_0))));
            }
            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (unsigned char)247))));
        }
        for (unsigned short i_11 = 0; i_11 < 10; i_11 += 3) 
        {
            arr_38 [0] [i_11] = ((/* implicit */signed char) min((((((/* implicit */_Bool) 0ULL)) ? (arr_2 [(short)8]) : (((((/* implicit */int) var_2)) << (((/* implicit */int) (signed char)0)))))), (15)));
            var_24 += ((/* implicit */long long int) 18446744073709551603ULL);
            arr_39 [i_8] [i_8] = ((/* implicit */long long int) (((((~(((/* implicit */int) arr_32 [i_11])))) + (2147483647))) << (((/* implicit */int) arr_9 [(_Bool)1] [(_Bool)0] [i_11]))));
        }
        /* vectorizable */
        for (short i_12 = 0; i_12 < 10; i_12 += 3) 
        {
            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((unsigned char) var_7)))));
            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
            var_27 += ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)23)) ? (arr_23 [i_8] [i_12]) : (((/* implicit */int) (signed char)-1))))) ^ (arr_36 [i_8 - 1] [i_8 + 1] [i_8])));
            arr_44 [i_12] [i_8] = ((/* implicit */unsigned long long int) ((unsigned short) (+(((/* implicit */int) arr_20 [i_8])))));
        }
    }
}
