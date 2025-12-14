/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59459
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
    var_13 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_4)), (7583418173003289284LL)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */long long int) (short)-19946);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_15 = arr_2 [i_3] [i_1];
                                var_16 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_8)) ? (arr_4 [i_0]) : (arr_8 [i_0] [i_1] [i_1] [i_0] [i_3] [i_4])))));
                                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (short)-19950))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        var_18 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)161)) | (((/* implicit */int) (unsigned char)94))))), ((-(arr_6 [i_0]))))) | (((/* implicit */unsigned long long int) (((+(((/* implicit */int) (short)(-32767 - 1))))) * (((/* implicit */int) var_2)))))));
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) >> (((((/* implicit */int) var_7)) + (9310)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_2] [i_2] [i_5]))))) : (max((((/* implicit */int) (_Bool)0)), (-2100993407)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0]))))) : (((/* implicit */int) ((unsigned short) (short)32765)))));
                        arr_16 [i_0] [i_1] [i_0] [i_5] = ((/* implicit */int) max((((unsigned long long int) arr_2 [i_1] [i_2])), (((/* implicit */unsigned long long int) max((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) var_11)))))));
                        arr_17 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_13 [i_2] [i_0]))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_6 = 1; i_6 < 13; i_6 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)102)) > (((/* implicit */int) (short)-32766)))))));
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_6))))) : (((/* implicit */int) (_Bool)0)))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 3) 
    {
        var_22 = ((/* implicit */long long int) arr_22 [i_7] [i_7]);
        arr_24 [i_7] = ((/* implicit */unsigned long long int) ((((var_6) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (short)32765)))) >> (((9223372036854775803LL) - (9223372036854775790LL)))));
    }
}
