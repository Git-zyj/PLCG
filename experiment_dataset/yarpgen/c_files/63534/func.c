/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63534
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 21; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_2] [i_2] [i_3] [i_3] [i_1] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1 + 1] [i_1 + 1]))))));
                            arr_11 [i_0] [i_1] [i_0] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((int) ((unsigned long long int) ((arr_4 [i_3]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
                            arr_12 [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_8 [i_2 + 1] [i_2 - 2] [i_1 + 1]), (((/* implicit */unsigned short) var_14))))) ? ((~(((/* implicit */int) (unsigned short)25641)))) : ((-(((/* implicit */int) arr_8 [i_2 - 2] [i_2 + 1] [i_1 + 1]))))));
                            arr_13 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (short)3)) ? (((/* implicit */int) arr_9 [i_1 + 1] [1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_9 [i_1 + 1] [i_2 - 2] [i_2] [i_3] [i_3] [i_3])))), (((/* implicit */int) ((short) var_0)))));
                        }
                    } 
                } 
                arr_14 [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_10)), (arr_6 [i_0] [i_1] [i_1 + 1] [i_1 + 1])))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_1 + 1] [i_0])) >= (((/* implicit */int) arr_0 [i_1 + 1] [i_0]))))) : (((/* implicit */int) min((arr_6 [i_0] [i_0] [i_0] [i_1]), (arr_0 [i_0] [i_1]))))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) (+(var_12)));
    /* LoopNest 2 */
    for (unsigned short i_4 = 3; i_4 < 13; i_4 += 1) 
    {
        for (unsigned short i_5 = 0; i_5 < 14; i_5 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_6 = 0; i_6 < 14; i_6 += 1) 
                {
                    for (short i_7 = 3; i_7 < 13; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 4) 
                        {
                            {
                                var_19 ^= ((/* implicit */signed char) arr_26 [i_7] [i_7] [i_6] [i_7] [i_8]);
                                var_20 -= ((/* implicit */unsigned long long int) ((signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))))), (max((8081611002475379406ULL), (var_12))))));
                                var_21 = ((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_8] [(signed char)19])) >> (((((unsigned int) arr_3 [i_4 + 1])) - (640809123U)))));
                                var_22 = ((/* implicit */unsigned short) ((long long int) arr_4 [i_8]));
                            }
                        } 
                    } 
                } 
                arr_28 [i_4] [i_4] [i_4] = ((unsigned long long int) var_12);
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) min((3458794838U), (((/* implicit */unsigned int) (_Bool)1)))))));
                arr_29 [(unsigned short)8] |= ((/* implicit */unsigned int) ((int) (+(((/* implicit */int) var_5)))));
            }
        } 
    } 
    var_24 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_17))))), ((~(var_7)))))) ? (var_2) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_14))))))))));
}
