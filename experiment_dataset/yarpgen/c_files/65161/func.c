/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65161
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
    var_17 = ((/* implicit */int) (~((((~(var_2))) >> (((var_0) + (2021716016)))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (short i_3 = 2; i_3 < 17; i_3 += 4) 
                {
                    {
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) (-((-(arr_5 [i_1] [i_3])))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_1 + 1] [i_3 - 1] [i_3 + 1]))))) : ((-((~(var_14))))))))));
                        arr_12 [2] [2] [i_2] [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (arr_2 [i_1 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1 - 1])))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */int) var_7);
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(var_14))))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((var_13) >> (((var_9) - (889170738))))))));
        arr_15 [(signed char)4] [i_4] = ((/* implicit */unsigned long long int) (~((~(var_13)))));
        /* LoopSeq 2 */
        for (short i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) arr_5 [i_5] [i_4])) : (arr_9 [0] [i_5] [i_5]))))));
            arr_18 [4ULL] [4ULL] [4ULL] = ((/* implicit */int) var_15);
        }
        for (short i_6 = 0; i_6 < 18; i_6 += 3) /* same iter space */
        {
            var_23 &= ((/* implicit */short) (-(var_7)));
            /* LoopSeq 2 */
            for (int i_7 = 0; i_7 < 18; i_7 += 3) 
            {
                arr_23 [i_6] [i_6] [i_6] [i_7] = ((/* implicit */signed char) (~(arr_20 [i_4])));
                var_24 = ((/* implicit */signed char) (+(var_2)));
            }
            for (int i_8 = 2; i_8 < 17; i_8 += 3) 
            {
                var_25 += ((/* implicit */long long int) var_10);
                var_26 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_15))));
                var_27 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_22 [i_4] [i_8 + 1] [i_8 - 1]))));
                /* LoopSeq 1 */
                for (int i_9 = 0; i_9 < 18; i_9 += 4) 
                {
                    arr_29 [i_6] [i_6] [i_8] [i_9] = ((/* implicit */int) (~(arr_28 [i_8 + 1] [i_8] [i_8] [i_8 - 1] [i_9] [i_9])));
                    arr_30 [i_4] [i_6] = ((/* implicit */int) (-((+(var_5)))));
                    /* LoopSeq 1 */
                    for (int i_10 = 0; i_10 < 18; i_10 += 4) 
                    {
                        arr_33 [11U] [(signed char)6] [i_8 - 1] [i_9] [i_10] [i_6] [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_11 [i_8 + 1] [i_8 + 1] [17U] [i_8 - 2] [i_6]))));
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_8] [i_6] [11LL])) && (((/* implicit */_Bool) var_5))))) : (((/* implicit */int) (!(arr_31 [i_4] [(short)2] [i_4] [i_4] [i_4]))))));
                        var_29 = ((/* implicit */signed char) (~(var_2)));
                    }
                }
                /* LoopSeq 1 */
                for (signed char i_11 = 0; i_11 < 18; i_11 += 2) 
                {
                    arr_36 [i_4] [i_6] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_13)) ? (arr_3 [i_8]) : (((/* implicit */unsigned int) arr_21 [i_8])))) | (arr_25 [i_4] [i_4] [i_4] [i_11])));
                    var_30 += ((/* implicit */unsigned int) var_8);
                    var_31 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_6)))) || ((!(arr_24 [i_4] [i_4] [i_4])))));
                }
            }
            arr_37 [i_4] [i_6] [i_4] &= ((/* implicit */short) arr_21 [i_6]);
        }
    }
    for (unsigned int i_12 = 0; i_12 < 20; i_12 += 3) 
    {
        var_32 = ((/* implicit */unsigned int) (~((~(arr_39 [i_12])))));
        var_33 += ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && ((!(((/* implicit */_Bool) var_16))))));
        arr_40 [i_12] = ((/* implicit */int) (+((-(arr_39 [i_12])))));
    }
}
