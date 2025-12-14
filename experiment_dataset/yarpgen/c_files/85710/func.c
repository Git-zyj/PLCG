/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85710
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 17; i_2 += 2) 
                {
                    for (long long int i_3 = 2; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)18781)) ? (((((var_1) <= (arr_15 [16U] [i_3 - 2] [i_4]))) ? (((/* implicit */int) (unsigned char)102)) : (max((((/* implicit */int) arr_3 [i_0] [i_0])), (-434606596))))) : (((/* implicit */int) max((((/* implicit */unsigned short) ((_Bool) var_4))), ((unsigned short)65123))))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned short)46080)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37484))) : (arr_5 [i_1 - 1] [2])))));
                                arr_18 [i_0] = ((((/* implicit */int) ((unsigned short) arr_14 [i_0] [i_1] [i_1] [i_1 + 3] [i_1 + 3] [i_1 + 3]))) * ((+(((/* implicit */int) (short)594)))));
                                var_16 -= ((/* implicit */long long int) (-(min((arr_14 [0LL] [i_0] [i_0] [0LL] [i_0] [i_0]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)46073)))))))));
                            }
                        } 
                    } 
                } 
                arr_19 [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned char) ((arr_13 [i_1 + 2] [(signed char)17] [i_1 + 1]) == (((/* implicit */unsigned long long int) arr_9 [i_0])))));
                arr_20 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */_Bool) (signed char)109)) ? (463015130) : (((/* implicit */int) (short)-32755)))) <= (((/* implicit */int) arr_3 [i_1 + 3] [i_0]))))) <= (var_1)));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 2) 
    {
        arr_24 [i_5] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
        var_17 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))), ((+(7412811156359417641ULL)))));
        var_18 *= ((/* implicit */signed char) max((3289433885U), (((/* implicit */unsigned int) arr_10 [i_5] [i_5] [(unsigned short)10] [i_5] [i_5]))));
    }
    /* vectorizable */
    for (long long int i_6 = 2; i_6 < 10; i_6 += 2) 
    {
        var_19 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) 434606589)) ? ((+(3299607274U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_6] [i_6] [i_6] [i_6] [i_6])))));
        arr_29 [i_6 - 2] |= ((/* implicit */_Bool) ((int) arr_13 [i_6] [i_6 - 2] [i_6]));
    }
}
