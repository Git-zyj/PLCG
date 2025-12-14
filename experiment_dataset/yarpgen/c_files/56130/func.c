/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56130
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_11 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (-(var_8)));
                    arr_12 [i_0] [i_0] = ((/* implicit */unsigned char) (signed char)32);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 1; i_3 < 12; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 3; i_4 < 13; i_4 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        {
                            var_10 = var_8;
                            var_11 *= ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))) <= (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1908917066U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_16 [i_6] [i_6]))))), (min((14393129575355207966ULL), (3672917478325693211ULL))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 3) 
                {
                    arr_28 [i_3] [(_Bool)1] [i_4] = ((/* implicit */short) (_Bool)1);
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 2) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */long long int) max(((-(((/* implicit */int) arr_10 [i_3] [i_4] [i_4] [i_3])))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)0)), (arr_33 [i_3] [i_8] [(signed char)1] [i_8] [i_8] [i_3] [i_3])))) ? (((/* implicit */int) (short)-24878)) : (((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (var_7))))))));
                                var_13 = ((/* implicit */signed char) ((min((((1831938775U) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((var_6) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_3]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_3 - 1])) ? (10012884478797057293ULL) : (9424542480222016486ULL)))) ? (((((/* implicit */_Bool) 10888224199095045726ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (14773826595383858392ULL))) : (10012884478797057293ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) var_5);
    var_15 = ((/* implicit */unsigned long long int) var_7);
}
