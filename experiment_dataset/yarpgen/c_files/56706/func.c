/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56706
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) (!(((max((5257932285514791183LL), (17004113612801762LL))) < (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_5)), (arr_14 [i_3] [i_3] [i_2] [14LL] [i_0])))))))));
                                arr_16 [i_0] [i_0] [i_0] [i_4] [i_0] [i_0] = ((/* implicit */long long int) (!((_Bool)0)));
                            }
                        } 
                    } 
                    var_14 = (!(((/* implicit */_Bool) arr_2 [i_0])));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_6] [i_5])) * (((/* implicit */int) (signed char)23))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_6])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))) : (((arr_19 [i_5]) << (((2785902341124407371LL) - (2785902341124407346LL)))))));
            var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_12) ? (arr_22 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
            var_17 = ((/* implicit */_Bool) ((unsigned short) (signed char)14));
        }
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_5])) ? (arr_19 [i_5]) : (arr_17 [i_5])));
        var_19 = ((/* implicit */unsigned int) (unsigned short)18729);
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_26 [i_7] [i_7] = ((/* implicit */unsigned short) ((arr_1 [i_7]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)127))))))))));
        var_20 = ((/* implicit */signed char) var_9);
        arr_27 [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)0))));
        var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)18729))));
    }
    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
    {
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [20U])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_31 [i_8])))) : (var_6)));
        arr_32 [16U] = ((/* implicit */long long int) min(((signed char)(-127 - 1)), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_6)))))));
        arr_33 [i_8] [(_Bool)1] = 2785902341124407371LL;
    }
    /* LoopNest 3 */
    for (unsigned int i_9 = 1; i_9 < 16; i_9 += 2) 
    {
        for (unsigned short i_10 = 1; i_10 < 17; i_10 += 4) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    arr_40 [i_9] [i_11] [i_9] [i_9] = ((/* implicit */unsigned short) max((0U), (((/* implicit */unsigned int) (_Bool)1))));
                    var_23 = ((/* implicit */long long int) ((_Bool) (!(var_0))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */_Bool) (unsigned short)15872);
}
