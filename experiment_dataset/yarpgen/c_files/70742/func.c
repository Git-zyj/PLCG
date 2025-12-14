/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70742
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
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        var_19 = ((/* implicit */signed char) ((unsigned int) 6175889553383604089ULL));
                        var_20 = ((/* implicit */unsigned long long int) ((long long int) max((12735266665147349186ULL), (((/* implicit */unsigned long long int) -1LL)))));
                        arr_11 [i_0] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_2]);
                        var_21 &= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_10))))) ? (max((arr_6 [i_3] [i_1] [i_3]), (((/* implicit */unsigned long long int) var_0)))) : ((~(11792150577820427571ULL))))), (max((arr_6 [i_0] [i_0] [i_3]), (arr_6 [i_0] [i_0] [i_1])))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        var_22 -= ((/* implicit */signed char) (!((!((_Bool)1)))));
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) var_8))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 12; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 11; i_6 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (~(min((arr_8 [i_6 - 1] [i_1] [i_1] [i_0]), (((/* implicit */unsigned long long int) ((signed char) arr_19 [i_6] [i_1] [i_2] [i_1] [i_6]))))))))));
                                arr_20 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8176)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (127ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_2 [i_5 - 3])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_7 = 1; i_7 < 12; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 2; i_8 < 12; i_8 += 4) 
                        {
                            {
                                arr_26 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) (+(((/* implicit */int) (signed char)127))))))) / (var_1)));
                                arr_27 [i_1] [i_0] = ((/* implicit */short) arr_13 [i_1] [i_1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_6)))));
}
