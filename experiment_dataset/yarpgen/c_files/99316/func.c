/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99316
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(max((var_6), (((/* implicit */unsigned int) (short)16368))))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))));
    var_21 = ((/* implicit */_Bool) (short)16368);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) (~(412420912)));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        var_23 ^= ((/* implicit */int) var_12);
                        arr_9 [i_3] = ((/* implicit */unsigned short) -5424532751983661024LL);
                        arr_10 [i_0] [(signed char)4] [i_1] [i_2 + 1] [(unsigned short)10] [i_2 + 1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((+(var_19))), (((/* implicit */unsigned int) ((unsigned short) 1891495544)))))) ? (((/* implicit */int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) var_0)), (var_12)))) >= (max((arr_0 [i_1] [i_3 - 1]), (((/* implicit */long long int) var_9))))))) : (((((/* implicit */_Bool) (unsigned short)56490)) ? (((/* implicit */int) var_16)) : (((int) -995448656359748227LL))))));
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        var_24 += ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)7989)) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) arr_11 [i_1]))))), (((((/* implicit */_Bool) 1813910313)) ? (915958589U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        arr_13 [i_0] [i_1] [8U] [i_2 + 1] [i_4] = (~(((unsigned int) (!(((/* implicit */_Bool) 3379008707U))))));
                    }
                    arr_14 [(unsigned short)2] [i_0] [i_0] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)45)) ? (((/* implicit */unsigned int) 1813910323)) : (var_19)))) ? (((/* implicit */int) (unsigned short)51278)) : (max((1813910313), (156543019)))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) 4294967284U))))), (((int) var_2))))) : ((((~(4294967284U))) / (((((/* implicit */_Bool) (short)-8910)) ? (915958577U) : (1916485431U))))));
                    var_25 = ((/* implicit */signed char) max((-8874873568515986829LL), (((/* implicit */long long int) 3379008718U))));
                }
            } 
        } 
    } 
    var_26 -= ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) max((49152), (((/* implicit */int) var_1))))) ? ((~(((/* implicit */int) (unsigned short)31669)))) : (((((/* implicit */_Bool) (unsigned short)29469)) ? (((/* implicit */int) (signed char)-104)) : (((/* implicit */int) (short)-2204)))))));
}
