/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63966
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (int i_3 = 4; i_3 < 14; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((signed char) 3130171855046470345LL)))));
                                arr_11 [i_0] [i_0] [i_2] [i_3] [i_4] = arr_6 [i_0] [i_1] [8] [i_2 + 1] [(_Bool)1] [i_4];
                                arr_12 [i_0] [i_0] [i_2 + 1] [i_2 + 1] [i_4] = ((/* implicit */unsigned int) max((((/* implicit */long long int) max((var_1), (1370531587)))), (min((((/* implicit */long long int) arr_8 [i_3 - 3] [1LL] [i_0] [i_4])), (-1LL)))));
                                arr_13 [i_0] [i_1] [i_1] [i_2 + 1] [i_3] [i_0] [i_4] = ((/* implicit */int) max(((((-(-1LL))) - (((/* implicit */long long int) (+(((/* implicit */int) var_4))))))), (((/* implicit */long long int) ((int) var_6)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 15; i_7 += 4) 
                        {
                            {
                                arr_22 [i_0] = ((((/* implicit */_Bool) ((int) (unsigned char)245))) ? ((-(((/* implicit */int) var_0)))) : (((/* implicit */int) var_0)));
                                arr_23 [i_0] [i_1] [i_5] [i_6] [i_7] [i_1] |= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_9)))) | (max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) < (-11LL)))), (min((4LL), (((/* implicit */long long int) (unsigned char)233))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_8 = 1; i_8 < 11; i_8 += 4) 
    {
        arr_27 [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) + (arr_18 [i_8 - 1] [i_8])));
        var_13 = ((/* implicit */signed char) ((int) (signed char)-17));
    }
    var_14 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) max((16LL), (((/* implicit */long long int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61398))) : (12931847878321005891ULL))));
    var_15 = (+(((/* implicit */int) (_Bool)1)));
}
