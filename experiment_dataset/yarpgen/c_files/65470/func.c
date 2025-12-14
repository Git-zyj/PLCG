/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65470
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) arr_12 [i_3] [i_1] [i_2] [i_3])))));
                                arr_15 [i_0] [i_4] [i_0] [10U] [i_0] &= ((/* implicit */unsigned int) var_9);
                                arr_16 [i_0] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (min((((/* implicit */long long int) (unsigned char)161)), (-5063989373470868961LL))) : (var_6)));
                            }
                        } 
                    } 
                    arr_17 [i_2] [16U] [16U] [i_0] |= ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_9 [4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_1] [18LL] [18LL]))) : (2111248855U))));
                }
            } 
        } 
    } 
    var_15 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? ((-(((/* implicit */int) var_7)))) : (var_13)))), (((unsigned long long int) (-(var_0)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 2; i_6 < 21; i_6 += 2) 
        {
            for (long long int i_7 = 2; i_7 < 24; i_7 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 3; i_8 < 24; i_8 += 2) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 25; i_9 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) arr_30 [i_5] [i_6] [i_6] [i_8] [i_8] [i_9]);
                                var_17 = ((/* implicit */_Bool) 7373506133682639308ULL);
                                var_18 += ((/* implicit */short) var_11);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned long long int) ((long long int) arr_30 [i_6 + 1] [i_7 - 2] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1]));
                    arr_32 [i_5] [i_6] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (~(-5063989373470868978LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 5017614854384970469LL)) && (((/* implicit */_Bool) 0ULL)))))) : ((~(arr_22 [i_5] [i_5] [i_5])))));
                    arr_33 [i_7] [i_6] |= ((/* implicit */signed char) (+(arr_21 [i_6 + 1] [i_7 + 1])));
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_10 = 0; i_10 < 25; i_10 += 1) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 1) 
            {
                for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 1) 
                {
                    {
                        arr_43 [i_5] [i_5] [i_5] [i_5] = (+(arr_35 [(signed char)12] [i_10] [4ULL]));
                        arr_44 [i_5] = ((/* implicit */unsigned char) (~(var_12)));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (((~(2113254537660922559ULL))) >> (((8618054404294975606ULL) - (8618054404294975543ULL))))))));
        var_21 = ((/* implicit */unsigned char) arr_35 [i_5] [i_5] [i_5]);
        var_22 = arr_23 [i_5] [i_5];
    }
    for (unsigned int i_13 = 0; i_13 < 22; i_13 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) arr_24 [i_13]))));
        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((arr_40 [4LL] [8ULL]) / (max((arr_40 [i_13] [6LL]), (((/* implicit */unsigned int) arr_45 [i_13] [i_13])))))))));
    }
    for (unsigned int i_14 = 0; i_14 < 22; i_14 += 3) /* same iter space */
    {
        arr_50 [i_14] = ((((/* implicit */_Bool) (~(arr_19 [i_14] [i_14])))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_24 [i_14])) : (((/* implicit */int) arr_49 [i_14]))))), (max((((/* implicit */long long int) var_9)), (var_6))))) : (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_14] [i_14] [4U] [i_14] [i_14]))));
        var_25 = ((/* implicit */unsigned char) (short)7168);
    }
}
