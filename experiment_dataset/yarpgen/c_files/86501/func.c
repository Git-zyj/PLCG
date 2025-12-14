/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86501
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
    var_13 = (!(((/* implicit */_Bool) 1152921504598458368LL)));
    var_14 = ((/* implicit */int) var_12);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0 - 1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) (unsigned char)141);
                    arr_9 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) & (((/* implicit */int) var_7))))) ? (var_9) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (9223372036854775807LL) : (((/* implicit */long long int) var_4))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_1] [i_4] = ((/* implicit */long long int) ((int) 9181220402419200774ULL));
                                var_15 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) > (((/* implicit */int) var_7))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((((/* implicit */int) (unsigned short)53041)) & (var_4))) : (((/* implicit */int) arr_6 [i_0 + 1]))));
                }
            } 
        } 
        var_16 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0 + 3] [i_0] [(_Bool)1] [i_0 + 2]))));
        arr_18 [i_0 + 2] = ((/* implicit */long long int) (~(((/* implicit */int) var_11))));
        var_17 = var_0;
    }
    for (unsigned int i_5 = 1; i_5 < 16; i_5 += 1) 
    {
        arr_22 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) max((9265523671290350820ULL), (((/* implicit */unsigned long long int) 7750110121113158153LL))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_1)))) : ((+(4604997533885681369LL))))));
        arr_23 [i_5] [i_5] = ((((/* implicit */_Bool) arr_19 [i_5 - 1])) ? (((((/* implicit */_Bool) var_11)) ? (arr_21 [i_5 - 1] [i_5 + 1]) : (arr_21 [i_5 - 1] [i_5 - 1]))) : ((-(arr_21 [i_5 - 1] [i_5 - 1]))));
        arr_24 [i_5] = ((/* implicit */int) ((((arr_21 [i_5] [i_5 + 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) % (min((arr_21 [i_5] [i_5 - 1]), (arr_21 [i_5] [i_5 - 1])))));
    }
}
