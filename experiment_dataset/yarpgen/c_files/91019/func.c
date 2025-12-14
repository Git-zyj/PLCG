/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91019
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_18 &= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((-35744735), (((/* implicit */int) (unsigned char)156))))) ? (((/* implicit */long long int) ((0U) >> (((((/* implicit */int) (unsigned char)100)) - (100)))))) : (arr_1 [i_0] [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)22988)) ? (((/* implicit */int) (unsigned char)156)) : (((/* implicit */int) (unsigned short)22992)))))));
        arr_4 [4ULL] [i_0] &= ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) > (arr_1 [i_0] [i_0]))) ? (((/* implicit */unsigned int) max(((-(((/* implicit */int) var_11)))), (((((/* implicit */_Bool) (signed char)-85)) ? (((/* implicit */int) (unsigned short)40244)) : (var_15)))))) : (var_7)));
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 20; i_1 += 3) 
    {
        arr_8 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1 + 3])) << (((((/* implicit */int) arr_6 [i_1 + 3])) - (14)))));
        arr_9 [i_1 - 1] &= ((/* implicit */unsigned int) (-(arr_5 [i_1 - 2])));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)42548)) & (((/* implicit */int) var_14))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_1])) >> (((6625924171995205856LL) - (6625924171995205826LL)))))) : (((((/* implicit */_Bool) 3862544531U)) ? (2673188404U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)156)))))));
    }
    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            var_21 = arr_12 [i_2] [i_3];
            arr_16 [i_3] [(_Bool)1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_11 [i_3]))));
            arr_17 [i_2] [16U] [i_3] = ((/* implicit */signed char) arr_15 [i_2] [i_3]);
            arr_18 [(signed char)21] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35393))) : ((+(var_17)))));
        }
        arr_19 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_2] [i_2])) ? (((((/* implicit */_Bool) var_4)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) (signed char)85))))) : (((/* implicit */long long int) (~(2673188404U))))));
        var_22 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)156))));
        var_23 -= ((((/* implicit */_Bool) arr_12 [i_2] [i_2])) ? ((-(5U))) : (arr_11 [i_2]));
    }
    for (unsigned long long int i_4 = 2; i_4 < 22; i_4 += 3) 
    {
        var_24 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_21 [i_4])))) && (((/* implicit */_Bool) 0U))))), (((((/* implicit */_Bool) var_17)) ? ((-(1025079435511704444ULL))) : (((/* implicit */unsigned long long int) min((2254318901U), (((/* implicit */unsigned int) (signed char)82)))))))));
        var_25 = ((/* implicit */unsigned int) (((+(((89169460U) | (arr_21 [20]))))) != (((arr_20 [i_4 + 3] [17U]) % (arr_20 [i_4 - 1] [i_4])))));
        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1073737728U)) ? ((~(arr_20 [i_4 - 1] [i_4 + 1]))) : (max((arr_20 [i_4 + 2] [i_4 + 2]), (((/* implicit */unsigned int) (unsigned char)96))))));
        /* LoopNest 3 */
        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            for (unsigned int i_6 = 2; i_6 < 23; i_6 += 3) 
            {
                for (long long int i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    {
                        arr_30 [i_4] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (17421664638197847168ULL)))) ? (((/* implicit */int) arr_25 [i_4 + 3])) : (((/* implicit */int) (signed char)85))))));
                        var_27 = arr_21 [i_7];
                    }
                } 
            } 
        } 
    }
    var_28 = ((/* implicit */_Bool) min((((/* implicit */long long int) max((var_15), (((((/* implicit */_Bool) (signed char)72)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)66))))))), (var_9)));
}
