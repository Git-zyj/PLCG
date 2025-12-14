/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85115
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (short i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_19 |= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_3])))))) ? ((-(1201965820))) : (((/* implicit */int) ((((/* implicit */int) (short)12774)) <= (-1201965820))))))));
                            var_20 &= ((/* implicit */unsigned long long int) arr_8 [i_3 - 1] [i_1] [i_2] [i_1 - 1]);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_4 = 1; i_4 < 20; i_4 += 3) 
                {
                    for (signed char i_5 = 2; i_5 < 22; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 21; i_6 += 3) 
                        {
                            {
                                var_21 += ((/* implicit */_Bool) var_3);
                                var_22 = ((/* implicit */short) arr_3 [2ULL] [i_4]);
                                arr_19 [i_6] [i_4] [i_6] [i_5] [i_0] [i_4] [i_0] = min((7407011370535345650LL), (((/* implicit */long long int) (unsigned char)71)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    for (long long int i_8 = 0; i_8 < 23; i_8 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)185))))) ? (max((((/* implicit */unsigned long long int) (unsigned char)184)), (15590703492100631379ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_1] [i_7] [i_1] [i_0])) || (arr_8 [i_0] [i_1] [i_7] [i_8])))))));
                            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) arr_16 [i_0] [i_0] [i_1 + 1] [(_Bool)1] [i_8]))));
                            arr_25 [i_0] [i_0] [i_1] [i_7] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)14127)) & (1201965816)));
                            var_25 = arr_4 [i_1] [i_1];
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_9 = 0; i_9 < 24; i_9 += 2) 
    {
        for (unsigned int i_10 = 2; i_10 < 21; i_10 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_11 = 4; i_11 < 22; i_11 += 1) 
                {
                    for (unsigned char i_12 = 1; i_12 < 23; i_12 += 4) 
                    {
                        for (short i_13 = 1; i_13 < 21; i_13 += 2) 
                        {
                            {
                                arr_42 [i_12] [i_13] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */_Bool) max((((/* implicit */short) arr_40 [i_13] [i_10] [i_12 + 1] [(signed char)20] [i_11 - 4])), ((short)-1)));
                                var_26 = ((/* implicit */long long int) (!(((-612165659303546336LL) == (((/* implicit */long long int) 2140861949U))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_14 = 0; i_14 < 24; i_14 += 2) 
                {
                    for (long long int i_15 = 0; i_15 < 24; i_15 += 1) 
                    {
                        {
                            arr_49 [i_9] [i_9] [i_9] [i_14] [i_9] [22U] = ((/* implicit */unsigned long long int) arr_48 [i_9] [i_10] [i_9] [i_15] [i_9]);
                            arr_50 [i_15] [i_10] [i_10] [(short)22] [i_10] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) 2608977838239483578LL)) && (((/* implicit */_Bool) (unsigned char)206))));
                            var_27 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_32 [i_9] [i_9] [i_10 - 1] [i_15])) : (((/* implicit */int) arr_32 [(_Bool)1] [i_10] [i_10 - 2] [5]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
