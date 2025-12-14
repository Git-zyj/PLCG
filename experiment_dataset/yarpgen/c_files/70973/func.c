/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70973
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
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 9; i_3 += 4) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [(unsigned short)3] [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned short) (-(((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))));
                                arr_14 [i_0] [i_4 - 1] [i_0] [i_3] = ((/* implicit */short) ((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-1))))) - (min((((/* implicit */unsigned int) arr_3 [i_1 - 2] [i_2] [i_3 - 1])), (var_11)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 1; i_5 < 10; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            {
                                arr_21 [i_0] [i_2] [6U] = ((/* implicit */unsigned int) min(((+(((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 2])))), (((/* implicit */int) ((unsigned char) ((signed char) arr_1 [i_1 + 1] [i_1 + 1]))))));
                                arr_22 [i_6] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */short) arr_4 [i_5 - 1] [i_1 + 1] [i_1 + 1])), ((short)12659)));
                            }
                        } 
                    } 
                    arr_23 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (short)24647)) ? (((/* implicit */int) (short)13835)) : (((/* implicit */int) arr_16 [(_Bool)1] [(short)1] [i_1 - 2] [i_0 + 2] [i_0 + 2]))))));
                    arr_24 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_18 [i_2] [i_0 - 1] [i_1 - 1] [i_0 - 1])) && (((/* implicit */_Bool) (-(((/* implicit */int) var_1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9729))) : (((((/* implicit */_Bool) arr_11 [i_2] [i_1 + 2] [i_0] [i_0] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))) != (var_9))))) : (arr_2 [i_1 + 2] [i_0 + 1])))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? ((+(var_11))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_13))))))) == (((/* implicit */unsigned int) var_12))));
    /* LoopNest 2 */
    for (signed char i_7 = 0; i_7 < 12; i_7 += 4) 
    {
        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
        {
            {
                arr_29 [i_7] = ((/* implicit */unsigned int) arr_26 [i_8]);
                arr_30 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_8 + 1] [i_8 + 1])), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_8)) : (arr_15 [0U] [i_7] [i_7] [i_7])))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) - (arr_2 [i_7] [i_8]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)2))) ? (arr_18 [i_8] [i_8] [i_7] [i_7]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)71)) ? (((/* implicit */int) (signed char)-3)) : (((/* implicit */int) (short)32767))))))))));
            }
        } 
    } 
}
