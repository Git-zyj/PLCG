/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6510
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
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) var_2);
        var_11 = ((/* implicit */short) var_2);
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_2])), (arr_7 [i_0 + 1] [i_0 - 1] [i_0] [i_0])));
                    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_2]))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        arr_11 [i_0] [i_1] = ((/* implicit */signed char) ((((arr_8 [i_0 - 1] [i_1] [i_1] [i_3]) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_9 [i_0 + 1])) == (((/* implicit */int) var_1)))))))) ? (max((var_4), ((~(var_4))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_7)), (0U)))))))));
                        arr_12 [i_0] [i_1] [i_0] [i_3] [i_0] = (~(((/* implicit */int) var_1)));
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 12; i_4 += 4) 
                    {
                        var_14 = ((long long int) var_8);
                        var_15 -= ((/* implicit */unsigned int) (+(arr_4 [i_4] [i_1] [i_1])));
                    }
                    arr_15 [i_2] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((short) arr_0 [i_0 + 1]))), ((-(arr_0 [i_0 - 1])))));
                }
            } 
        } 
        var_16 = ((/* implicit */signed char) arr_8 [i_0] [i_0 - 1] [i_0] [i_0 + 1]);
    }
    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned int) var_0)), (12U))), (((/* implicit */unsigned int) max((var_4), (((/* implicit */int) arr_17 [i_5])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned int) var_0)))))))) : (((/* implicit */int) ((((var_2) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5]))))))));
        var_18 = ((/* implicit */unsigned long long int) ((unsigned short) max((var_9), (arr_16 [i_5]))));
        arr_18 [i_5] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */int) arr_17 [i_5])) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_17 [i_5])) : (((/* implicit */int) arr_17 [i_5]))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_16 [i_5])), (var_6)))) ? (max((4294967288U), (8U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5])))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_6 = 1; i_6 < 17; i_6 += 4) 
    {
        for (int i_7 = 0; i_7 < 18; i_7 += 2) 
        {
            for (unsigned int i_8 = 1; i_8 < 17; i_8 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) 0U)) : (var_8))))))));
                    var_20 ^= ((/* implicit */signed char) max((((arr_23 [i_6] [i_6 + 1] [i_7]) % (((/* implicit */unsigned long long int) arr_20 [i_6])))), (((arr_23 [i_6 + 1] [i_6 + 1] [i_6 + 1]) ^ (arr_23 [i_7] [i_6 + 1] [i_8 + 1])))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) var_4)), (min((((/* implicit */unsigned int) (signed char)-29)), (0U)))));
    /* LoopNest 2 */
    for (unsigned short i_9 = 2; i_9 < 19; i_9 += 3) 
    {
        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
        {
            {
                arr_32 [i_10] [i_9] = ((/* implicit */_Bool) 1073741823);
                arr_33 [i_10] [i_9] |= max((((((/* implicit */_Bool) arr_29 [i_10 + 1] [i_9])) ? (((/* implicit */int) arr_29 [i_10 + 1] [i_10])) : (((/* implicit */int) arr_29 [i_10 + 1] [i_9])))), (((/* implicit */int) max((var_0), (arr_29 [i_10 + 1] [i_10 + 1])))));
                arr_34 [i_9] = ((/* implicit */int) ((((((/* implicit */_Bool) max(((unsigned char)253), ((unsigned char)8)))) && ((!(((/* implicit */_Bool) var_7)))))) || (((/* implicit */_Bool) max((((/* implicit */short) var_7)), (arr_30 [i_9 - 2]))))));
            }
        } 
    } 
    var_22 |= ((/* implicit */signed char) var_0);
}
