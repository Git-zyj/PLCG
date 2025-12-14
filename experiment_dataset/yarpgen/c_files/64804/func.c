/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64804
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)(-127 - 1))) - (((/* implicit */int) (signed char)(-127 - 1)))))), (max((var_9), (((/* implicit */unsigned long long int) (unsigned char)255)))))) : (((((/* implicit */_Bool) (+(var_15)))) ? ((+(12657647282679846810ULL))) : (((/* implicit */unsigned long long int) (-(1387864873U))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */_Bool) var_6);
                arr_6 [i_0] [3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) ^ (((((/* implicit */_Bool) var_1)) ? (var_9) : (arr_3 [i_0] [i_1] [1ULL])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        for (unsigned int i_3 = 1; i_3 < 20; i_3 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    arr_16 [i_2] [i_3] [i_4] [i_4] = ((/* implicit */_Bool) var_3);
                    arr_17 [i_2] = ((/* implicit */unsigned char) ((unsigned int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) 12197307579834473240ULL)) || (((/* implicit */_Bool) (unsigned char)255))))), (max((((/* implicit */unsigned short) var_2)), ((unsigned short)20413))))));
                }
                for (unsigned int i_5 = 1; i_5 < 19; i_5 += 4) 
                {
                    var_22 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned short)20413)))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 3) 
                        {
                            {
                                arr_26 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) (unsigned char)255)))) || ((!(((/* implicit */_Bool) var_15))))))) : (((((/* implicit */_Bool) max((arr_13 [i_5] [i_2]), (1888870785)))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (signed char)-123)) : (((/* implicit */int) var_2))))))));
                                var_23 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_15 [i_2] [i_3] [i_5 + 3] [i_6]))))), (max(((unsigned short)20400), (arr_15 [i_3] [21] [i_5 - 1] [i_5 + 2])))));
                                var_24 = ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) arr_9 [i_3] [i_2])) ? (8661514337781619416ULL) : (((/* implicit */unsigned long long int) 2855519005U)))), (((/* implicit */unsigned long long int) var_1)))) ^ (((/* implicit */unsigned long long int) 400311488))));
                            }
                        } 
                    } 
                    arr_27 [i_5] [i_5] [i_5 + 3] = ((/* implicit */unsigned long long int) (unsigned char)1);
                }
                arr_28 [i_2] [i_2] = (~(((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */int) arr_15 [1ULL] [(_Bool)1] [i_3 + 1] [i_2])) : (((/* implicit */int) arr_15 [i_2] [i_3 + 1] [i_3 + 1] [i_2])))));
                arr_29 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (~(((unsigned int) var_18))));
            }
        } 
    } 
}
