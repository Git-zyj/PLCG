/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61051
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
    for (unsigned long long int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        arr_4 [(_Bool)1] |= ((/* implicit */unsigned char) arr_1 [6LL]);
        /* LoopNest 2 */
        for (short i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */signed char) (-(min((max((-177074252), (1764968558))), ((+(-177074252)))))));
                    arr_12 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(min((arr_0 [i_0]), (((/* implicit */unsigned int) arr_7 [i_0]))))))) ? (((/* implicit */int) min((arr_5 [i_2 + 3] [i_2 + 1] [i_2 + 2]), (arr_5 [i_2 + 1] [i_2 + 2] [i_2 + 3])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1 - 3] [i_2 + 3] [i_0 - 2])) || (((/* implicit */_Bool) arr_7 [i_0])))))));
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0 + 2] [i_2 + 3] [i_0 + 2])) ? (arr_11 [i_0 - 1] [i_0 - 1] [i_0]) : (-297984171)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0 - 2] [i_1])) ? (arr_9 [i_0 + 2] [i_1]) : (arr_9 [i_0 - 2] [i_0])))) : (557906959U)));
                }
            } 
        } 
    }
    for (unsigned short i_3 = 2; i_3 < 17; i_3 += 3) 
    {
        var_15 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned long long int) 510)), (13355518940403625959ULL)))))) : (((unsigned long long int) (signed char)-8))));
        var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */short) ((signed char) arr_15 [i_3 + 1]))), (max(((short)-8834), (((/* implicit */short) (signed char)6))))));
        var_17 = ((/* implicit */unsigned char) max((var_17), (var_1)));
    }
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) var_7))));
    /* LoopSeq 1 */
    for (int i_4 = 4; i_4 < 23; i_4 += 2) 
    {
        arr_19 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4] [i_4] [i_4 - 4])) ? (((/* implicit */int) arr_16 [i_4 - 4])) : (arr_11 [i_4] [i_4] [i_4 - 1])))) ? (max((arr_6 [i_4] [i_4]), (((/* implicit */int) (_Bool)0)))) : (max((arr_6 [i_4] [i_4]), (arr_6 [i_4] [i_4])))));
        var_19 ^= ((/* implicit */short) max(((unsigned short)7680), (((/* implicit */unsigned short) (signed char)-47))));
        /* LoopSeq 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_23 [i_4] [21] [i_5] = ((/* implicit */_Bool) ((unsigned char) var_12));
            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) var_1))));
            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) min((arr_18 [i_4 - 4] [i_4 - 4]), (((/* implicit */long long int) (_Bool)1)))))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 24; i_6 += 3) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_27 [i_4 - 4] [i_4 - 4]), (((/* implicit */short) var_12))))) ? (max((arr_28 [i_5]), (((/* implicit */int) var_7)))) : (arr_7 [i_4])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */int) var_10)) : (arr_10 [i_6])))) ? (((unsigned long long int) arr_28 [22ULL])) : (((/* implicit */unsigned long long int) max((arr_22 [i_4] [i_4 - 1] [i_4]), (((/* implicit */int) (signed char)12))))))))))));
                        var_23 = ((/* implicit */unsigned int) ((unsigned short) 3731542418U));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (short i_8 = 0; i_8 < 24; i_8 += 3) 
        {
            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((unsigned int) 8786878483915891905LL)))));
            var_25 = ((/* implicit */signed char) (unsigned short)20027);
        }
        /* vectorizable */
        for (long long int i_9 = 0; i_9 < 24; i_9 += 1) 
        {
            var_26 = ((/* implicit */long long int) (((+(((/* implicit */int) (signed char)-124)))) > (((/* implicit */int) arr_24 [i_4]))));
            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) var_3))) ? (((/* implicit */int) ((2368674691U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_9])))))) : (((/* implicit */int) ((_Bool) arr_11 [(_Bool)1] [(unsigned char)10] [i_9])))));
        }
    }
}
