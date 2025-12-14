/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78621
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) min((arr_0 [i_0]), (((/* implicit */unsigned int) (short)-24162)))))));
        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
    }
    for (int i_1 = 1; i_1 < 13; i_1 += 1) /* same iter space */
    {
        var_14 += (signed char)123;
        arr_7 [i_1 + 1] = (short)24155;
    }
    for (int i_2 = 1; i_2 < 13; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_3 = 1; i_3 < 14; i_3 += 1) 
        {
            arr_14 [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */long long int) min((arr_2 [i_2 + 2]), (arr_2 [i_2 + 1])))) : (((((/* implicit */_Bool) (+(arr_11 [i_2] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2 + 2]))) : (((((/* implicit */_Bool) (short)24178)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3] [i_2]))) : (var_11)))))));
            var_15 = ((/* implicit */unsigned char) min((var_8), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0)))))));
            var_16 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9475)) ? (((/* implicit */int) arr_9 [i_2 + 2] [i_2])) : (((/* implicit */int) (unsigned char)226))))) ? (((((/* implicit */_Bool) (signed char)78)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-48))) : (arr_5 [i_2 + 1]))) : (var_11)))) ? (((((((/* implicit */_Bool) arr_2 [i_3 + 1])) ? (((/* implicit */int) (signed char)-98)) : (((/* implicit */int) arr_6 [(unsigned short)0])))) + (((/* implicit */int) (unsigned char)162)))) : (((/* implicit */int) arr_6 [i_3]))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_4 = 1; i_4 < 14; i_4 += 4) 
            {
                var_17 += ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) != (8014482378863077628ULL))) || (((/* implicit */_Bool) ((long long int) arr_3 [i_2])))));
                arr_18 [i_2 + 1] [(unsigned char)4] |= ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10))));
            }
        }
        arr_19 [i_2] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2 + 2])) ? (var_3) : (((/* implicit */long long int) var_9))))) ? ((+(var_11))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)17433)) ? (arr_0 [i_2]) : (((/* implicit */unsigned int) var_0))))))), (((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (short)-24155)), (2130150992U)))) : (((((/* implicit */_Bool) (unsigned char)101)) ? (((/* implicit */long long int) 2130150996U)) : (var_3)))))));
        var_18 += ((/* implicit */unsigned int) arr_6 [i_2]);
    }
    for (int i_5 = 1; i_5 < 13; i_5 += 1) /* same iter space */
    {
        arr_22 [i_5] [i_5 + 2] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-28664)) * (((/* implicit */int) (signed char)66))));
        arr_23 [i_5] [i_5] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_10 [i_5 - 1]) : (arr_21 [i_5 + 2] [i_5])))) ? (var_3) : (((/* implicit */long long int) ((((/* implicit */unsigned int) var_0)) + (arr_0 [i_5 + 1]))))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_5 + 2]))) : (((((/* implicit */_Bool) var_4)) ? (15726066350734038845ULL) : (((/* implicit */unsigned long long int) arr_10 [i_5 + 2]))))))));
        arr_24 [i_5] = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) ((((/* implicit */int) arr_1 [i_5])) != (((/* implicit */int) var_7))))))));
    }
    /* LoopNest 3 */
    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 2) 
    {
        for (unsigned short i_7 = 0; i_7 < 15; i_7 += 2) 
        {
            for (short i_8 = 2; i_8 < 14; i_8 += 3) 
            {
                {
                    var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(2849742594U)))) ? (((((/* implicit */_Bool) arr_26 [i_6])) ? (-7098221498633604482LL) : (((/* implicit */long long int) ((/* implicit */int) (short)8394))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)70)))))) ? (((/* implicit */long long int) (((~(((/* implicit */int) (_Bool)0)))) / (((/* implicit */int) ((signed char) var_5)))))) : (((((/* implicit */_Bool) arr_21 [i_8 + 1] [i_8 - 2])) ? (arr_16 [i_8 - 2] [i_8 - 2] [i_8 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))));
                    arr_34 [i_7] [i_7] [i_7] [i_8 - 2] = ((/* implicit */unsigned int) min((((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_6]))) != (var_11)))) & (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))), (min(((+(((/* implicit */int) var_2)))), (((/* implicit */int) min((arr_29 [i_6] [i_6] [i_6]), (((/* implicit */unsigned char) var_2)))))))));
                    arr_35 [i_6] [i_6] = ((((/* implicit */_Bool) ((signed char) arr_16 [i_8] [i_8 + 1] [i_8 + 1]))) ? (min((((/* implicit */long long int) arr_33 [i_8] [i_8 + 1] [i_8] [i_8 + 1])), (arr_16 [i_8] [i_8 + 1] [i_8]))) : (((((/* implicit */_Bool) arr_16 [i_8] [i_8 + 1] [i_8 + 1])) ? (arr_16 [i_8] [i_8 + 1] [i_8 + 1]) : (arr_16 [i_8] [i_8 + 1] [i_8 + 1]))));
                }
            } 
        } 
    } 
}
