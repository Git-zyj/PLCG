/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56813
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
    var_12 += ((/* implicit */unsigned char) min((((max((((/* implicit */int) (unsigned char)1)), (var_8))) - (((var_1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))))), (((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned short i_3 = 3; i_3 < 21; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_1 - 1] [i_2] [i_0] = (((!(((-415870870) == (((/* implicit */int) var_7)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) & (((unsigned long long int) arr_8 [i_0] [i_1 - 2] [i_2] [i_3] [i_3 - 2])))) : (((/* implicit */unsigned long long int) max((arr_8 [i_0] [i_0 + 2] [i_0 + 1] [i_0] [i_0]), (((/* implicit */unsigned int) (signed char)117))))));
                            var_13 *= ((/* implicit */unsigned int) var_1);
                            var_14 += ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_4 [i_2] [i_1 + 2] [i_1])) && (((/* implicit */_Bool) var_3)))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_11)))) ? (arr_3 [i_3 - 2]) : (((/* implicit */long long int) var_3)))))));
                            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_11))) ? (min((var_4), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_10 [i_1 + 1] [i_2]) == (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
                            var_16 = ((/* implicit */unsigned short) ((int) arr_5 [i_0] [i_2] [i_0]));
                        }
                    } 
                } 
                arr_12 [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned int) ((-1007875208) / (((/* implicit */int) var_1))))) * (((unsigned int) var_3))))));
                var_17 += ((/* implicit */unsigned int) min((((var_2) ? (((/* implicit */long long int) arr_8 [i_1 + 1] [i_1] [i_1 + 2] [i_1 + 2] [i_1])) : (var_6))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_6)) != (max((((/* implicit */unsigned long long int) arr_3 [i_0 - 1])), (var_11))))))));
                arr_13 [i_1 - 2] [10] [i_0] &= ((/* implicit */int) (~(((long long int) arr_9 [2U]))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_5 = 1; i_5 < 11; i_5 += 1) 
        {
            var_18 += ((/* implicit */unsigned int) arr_19 [i_5] [i_5 - 1] [i_5 + 2]);
            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) max((var_3), ((-(((/* implicit */int) var_2)))))))));
            var_20 = (-((-(((((/* implicit */_Bool) arr_19 [i_4] [(_Bool)1] [5ULL])) ? (arr_10 [19LL] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)21))))))));
            var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2147483647))));
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))) : (((unsigned int) arr_0 [i_5 + 1]))));
        }
        for (int i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 2) 
            {
                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_6]))) : (0U))))));
                var_24 = ((/* implicit */unsigned long long int) ((unsigned short) arr_6 [i_4] [i_6]));
                var_25 *= ((/* implicit */_Bool) (unsigned short)16256);
            }
            /* LoopNest 3 */
            for (unsigned short i_8 = 0; i_8 < 13; i_8 += 3) 
            {
                for (long long int i_9 = 0; i_9 < 13; i_9 += 4) 
                {
                    for (short i_10 = 2; i_10 < 12; i_10 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned int) ((unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_0)), (arr_27 [i_6] [i_6] [(short)2] [i_9])))))));
                            var_27 = ((/* implicit */unsigned int) ((unsigned char) max((((unsigned int) var_5)), (((/* implicit */unsigned int) var_0)))));
                            var_28 += ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_32 [i_10 - 1] [i_10 - 2] [i_10 - 1] [i_10] [i_10 - 1] [i_10 + 1]), (var_8)))) ? ((-(var_9))) : (((((/* implicit */_Bool) arr_2 [i_10] [i_6] [i_8])) ? (arr_2 [i_10] [20LL] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_29 = ((/* implicit */unsigned short) (-(var_4)));
            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)49264)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967284U)));
            arr_37 [i_11] [i_11] [3LL] = ((/* implicit */unsigned long long int) (~(arr_36 [i_4] [i_11])));
        }
        var_31 += ((((/* implicit */_Bool) ((signed char) min((((/* implicit */long long int) (_Bool)1)), (-6094577107549188086LL))))) ? (((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) var_10)))))) : (((long long int) var_3)));
        var_32 -= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_27 [i_4] [i_4] [i_4] [i_4]))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 3) 
    {
        for (unsigned char i_13 = 1; i_13 < 9; i_13 += 4) 
        {
            for (unsigned char i_14 = 1; i_14 < 8; i_14 += 3) 
            {
                {
                    arr_47 [i_12] [i_13] [5] [i_14] = max((1729382256910270464ULL), (((/* implicit */unsigned long long int) ((unsigned short) var_7))));
                    var_33 = ((/* implicit */unsigned int) ((long long int) (!(((/* implicit */_Bool) arr_22 [i_13] [i_14 - 1])))));
                    var_34 -= ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)49270))));
                }
            } 
        } 
    } 
}
