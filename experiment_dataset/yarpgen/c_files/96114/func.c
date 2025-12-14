/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96114
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_4 [i_0] = ((arr_0 [i_0]) ? (((/* implicit */unsigned long long int) max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned int) ((arr_0 [i_0]) && (((/* implicit */_Bool) arr_3 [i_0] [i_0])))))))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((unsigned long long int) arr_0 [i_0])))));
        /* LoopNest 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    {
                        arr_14 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-24)) ? (var_10) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)63011)) ? (((/* implicit */int) var_5)) : (var_13))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_0] [i_1 - 1] [i_2])) ^ (var_13)))) ? (((/* implicit */int) (signed char)-35)) : ((-(((/* implicit */int) var_16)))))) : (((/* implicit */int) ((unsigned short) arr_6 [i_1 - 1] [i_1 - 1])))));
                        arr_15 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (-(min((((((/* implicit */_Bool) (signed char)39)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)20950)))), (((/* implicit */int) var_16))))));
                        arr_16 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_9)) + (2147483647))) >> (((((/* implicit */int) arr_13 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1])) + (85)))))) ? (((unsigned int) ((((/* implicit */int) arr_9 [i_1] [i_1 - 1])) ^ (((/* implicit */int) arr_9 [i_1] [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                        var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_2))));
                        var_18 = ((/* implicit */signed char) (+(var_6)));
                    }
                } 
            } 
        } 
        var_19 = (((_Bool)1) ? (max((arr_2 [i_0]), (((/* implicit */long long int) ((((var_6) + (2147483647))) >> (((((/* implicit */int) (signed char)-126)) + (147)))))))) : (((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)33373)) >> (((((/* implicit */int) var_9)) + (24))))) >> (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0]))) : (arr_2 [i_0]))) + (69LL)))))));
        /* LoopNest 2 */
        for (signed char i_4 = 1; i_4 < 16; i_4 += 1) 
        {
            for (unsigned int i_5 = 1; i_5 < 13; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        for (short i_7 = 2; i_7 < 14; i_7 += 1) 
                        {
                            {
                                arr_27 [i_0] [i_7] [i_5] [i_6] [i_0] [i_4] = ((/* implicit */int) arr_22 [i_0] [i_5] [i_6] [i_7 + 3]);
                                arr_28 [i_0] [i_7] [i_5] [(_Bool)1] [i_7] = ((/* implicit */unsigned char) 5312052433173985643LL);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_5])) ? (((((/* implicit */_Bool) var_9)) ? (arr_26 [(_Bool)1] [i_0] [(_Bool)1] [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))) : (((/* implicit */long long int) arr_23 [i_0] [i_0] [2] [i_0] [(_Bool)1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_5]))) : (var_10)));
                }
            } 
        } 
    }
    for (unsigned long long int i_8 = 2; i_8 < 15; i_8 += 1) 
    {
        arr_32 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_16))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_30 [i_8 - 1] [i_8 - 1]))))) ? (((/* implicit */int) arr_29 [i_8])) : (((/* implicit */int) ((((arr_31 [i_8]) || (arr_31 [i_8]))) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) var_11)), (arr_29 [i_8])))))))));
        var_21 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)34)) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) (signed char)-99))))) : (((2270830596U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64179)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -8649492430181665354LL)) ? (((/* implicit */int) arr_30 [i_8] [i_8])) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_8 - 1]))) : ((-(0ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((17845324759954112704ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [(_Bool)1] [i_8])))))) ? (((/* implicit */int) min((((/* implicit */short) var_0)), (arr_30 [i_8] [(unsigned char)0])))) : (((/* implicit */int) arr_30 [(_Bool)1] [i_8 + 3])))))));
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) arr_31 [i_8]))));
        var_23 = ((/* implicit */unsigned int) var_15);
    }
    var_24 = ((/* implicit */signed char) var_7);
    var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-2147483647 - 1)))));
}
