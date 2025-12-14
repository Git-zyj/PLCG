/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8111
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
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) max((max((min((((/* implicit */unsigned long long int) var_4)), (683224789611768428ULL))), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) var_5)))))));
    var_20 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) var_11)), (max((((/* implicit */unsigned long long int) var_5)), (var_18))))), (min((((/* implicit */unsigned long long int) var_3)), (min((var_15), (((/* implicit */unsigned long long int) var_8))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_21 = ((/* implicit */short) arr_0 [i_0]);
        /* LoopNest 2 */
        for (signed char i_1 = 4; i_1 < 18; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */signed char) max((max((arr_0 [i_1 - 3]), (var_4))), (min((arr_0 [i_1 - 1]), (arr_0 [i_1 - 2])))));
                    arr_8 [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (signed char)117)), (arr_6 [i_1 - 3])));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                var_22 = max((((/* implicit */unsigned int) var_12)), (max((((/* implicit */unsigned int) var_17)), (arr_5 [i_3] [i_4]))));
                arr_14 [i_3] [i_4] [i_4] = ((/* implicit */int) arr_6 [i_4]);
                arr_15 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) min((12970688483652725960ULL), (12970688483652725960ULL)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        for (signed char i_6 = 0; i_6 < 17; i_6 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_7 = 0; i_7 < 17; i_7 += 2) 
                {
                    for (unsigned int i_8 = 0; i_8 < 17; i_8 += 2) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 1) 
                        {
                            {
                                arr_26 [i_5] [i_6] [i_5] [i_7] [i_8] [i_9] = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) arr_1 [i_5 - 1] [i_5 - 1])), (var_15))), (((/* implicit */unsigned long long int) min((arr_18 [i_5] [i_6] [i_8]), (arr_4 [i_5] [i_6] [i_7]))))));
                                arr_27 [i_5] [i_6] [i_7] [i_7] [i_8] [i_5] = min((-158620832), (((/* implicit */int) (signed char)127)));
                                arr_28 [i_5] [i_5] [i_7] [i_8] = ((/* implicit */long long int) min((max((max((arr_16 [i_8]), (((/* implicit */unsigned int) arr_22 [i_8])))), (((/* implicit */unsigned int) var_10)))), (((/* implicit */unsigned int) (signed char)-92))));
                                arr_29 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) max((var_14), (((/* implicit */int) (signed char)-127))));
                            }
                        } 
                    } 
                } 
                var_23 = min((((/* implicit */unsigned int) (short)25619)), (max((((/* implicit */unsigned int) var_2)), (var_9))));
            }
        } 
    } 
}
