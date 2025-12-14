/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7019
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
    var_17 = ((/* implicit */short) var_5);
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_7))));
    var_19 = ((/* implicit */signed char) (-(var_5)));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((signed char) 15107945681007551640ULL)))));
            var_21 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) var_11)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (arr_1 [i_0])));
            var_22 += ((/* implicit */unsigned long long int) var_9);
            arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) var_15))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((unsigned short) var_2)))));
        }
        for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_7 [(short)7] [i_2])) : (((/* implicit */int) arr_3 [i_0] [i_0] [3ULL]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_3 [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_6))))))));
            arr_9 [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)2580))))) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_2])))))));
            arr_10 [i_0] [i_0] = ((/* implicit */short) (~((~(((/* implicit */int) arr_2 [i_0]))))));
            arr_11 [i_2] = ((/* implicit */long long int) var_8);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_3 = 1; i_3 < 11; i_3 += 2) 
            {
                var_24 = ((/* implicit */long long int) ((signed char) arr_13 [i_0] [i_3 + 1] [i_3 - 1]));
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_2 [i_3])) : (((/* implicit */int) var_7)))) : (((/* implicit */int) arr_13 [i_3] [i_3 - 1] [i_3]))));
            }
        }
        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            var_26 ^= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) (unsigned short)62967)) ? (14585344593159153966ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24776))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((unsigned char) var_13))), (arr_14 [i_4] [i_0] [i_0]))))));
            var_27 *= ((/* implicit */unsigned short) (+(max((((/* implicit */unsigned int) ((int) arr_0 [i_4] [i_4]))), (((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_1 [i_0])))))));
        }
        arr_16 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_7);
        arr_17 [i_0] = ((/* implicit */short) arr_6 [i_0]);
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        arr_20 [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_18 [i_5]))));
        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? ((-(var_8))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))))))));
        var_29 ^= ((/* implicit */unsigned short) arr_19 [i_5]);
    }
    /* vectorizable */
    for (unsigned int i_6 = 2; i_6 < 11; i_6 += 2) 
    {
        var_30 &= ((/* implicit */short) arr_22 [i_6 - 2]);
        arr_23 [(signed char)3] [10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_22 [i_6 - 1]))));
        /* LoopSeq 3 */
        for (short i_7 = 1; i_7 < 12; i_7 += 2) 
        {
            var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) arr_18 [i_6]))));
            arr_26 [i_6] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_22 [i_6 - 2])) : (((/* implicit */int) var_3))));
        }
        for (long long int i_8 = 1; i_8 < 11; i_8 += 2) 
        {
            arr_31 [i_6 - 2] [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1870351856U)) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) (unsigned short)2580))));
            /* LoopSeq 1 */
            for (short i_9 = 0; i_9 < 13; i_9 += 2) 
            {
                arr_34 [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)78)) ? (16970925612195860475ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)125)))));
                var_32 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) var_0))) ? (((/* implicit */int) arr_27 [i_6] [2U] [i_9])) : ((~(((/* implicit */int) var_2))))));
            }
        }
        for (unsigned short i_10 = 0; i_10 < 13; i_10 += 2) 
        {
            var_33 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_9))));
            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)29844))))) : (arr_28 [i_6] [i_6])));
        }
    }
    /* vectorizable */
    for (signed char i_11 = 0; i_11 < 17; i_11 += 2) 
    {
        var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) ((((/* implicit */_Bool) arr_38 [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_39 [i_11]))))));
        var_36 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_38 [(short)16])) : (((/* implicit */int) var_7)))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_12 = 2; i_12 < 16; i_12 += 2) 
        {
            var_37 = ((/* implicit */unsigned char) arr_40 [i_11] [i_12 + 1]);
            arr_44 [i_11] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)231)) ? (13453453822695508053ULL) : (((/* implicit */unsigned long long int) 2289464165U))));
        }
        for (unsigned int i_13 = 2; i_13 < 14; i_13 += 2) 
        {
            var_38 = arr_48 [i_13 - 1];
            arr_49 [(short)5] = ((/* implicit */unsigned int) ((short) arr_47 [i_13 + 1]));
        }
    }
}
