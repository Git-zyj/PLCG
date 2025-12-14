/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81623
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
    for (signed char i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (signed char i_3 = 2; i_3 < 11; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */int) (+(max((((unsigned int) var_14)), (((/* implicit */unsigned int) max((var_6), (63116419))))))));
                            var_16 = ((/* implicit */long long int) ((int) max((((/* implicit */unsigned long long int) arr_1 [i_3])), (((9ULL) | (((/* implicit */unsigned long long int) 121232644)))))));
                            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_1] [i_3 + 3])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_3])) : (var_6)))) : (max((((/* implicit */unsigned int) var_1)), (4294967295U)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_0 - 3] [i_3 - 2])) / (arr_0 [i_0 - 3])))) : ((~(4294967291U)))));
                            var_17 = ((/* implicit */unsigned int) ((unsigned long long int) ((((((var_11) + (9223372036854775807LL))) << (((((-121232653) + (121232663))) - (5))))) | (((/* implicit */long long int) ((/* implicit */int) ((1899394393U) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)112))))))))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_1] = ((/* implicit */unsigned short) var_7);
                /* LoopNest 3 */
                for (unsigned char i_4 = 3; i_4 < 13; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        for (int i_6 = 3; i_6 < 10; i_6 += 3) 
                        {
                            {
                                arr_20 [i_0] [i_6] [i_0] [i_0] [i_0] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_3 [i_4])), (0U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_13 [i_5] [i_4 - 1] [i_1] [i_0])))) : (max((((/* implicit */unsigned int) var_14)), (var_7)))));
                                var_18 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */long long int) 4294967287U))))) > (((var_8) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)91))))))))));
                            }
                        } 
                    } 
                } 
                arr_21 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_0])), (0ULL))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) var_13);
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 10; i_7 += 3) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 2; i_9 < 7; i_9 += 4) 
                {
                    for (signed char i_10 = 0; i_10 < 10; i_10 += 1) 
                    {
                        {
                            arr_36 [i_7] [i_7] [i_7] [i_10] [i_7] [i_7] = ((/* implicit */long long int) (-((~(((/* implicit */int) (!((_Bool)1))))))));
                            arr_37 [i_7] [i_7] [i_7] [i_10] = ((/* implicit */unsigned short) 3107323021078025481LL);
                        }
                    } 
                } 
                var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) ((var_6) << (((((((/* implicit */int) var_5)) + (79))) - (31))))))));
                /* LoopNest 2 */
                for (short i_11 = 3; i_11 < 9; i_11 += 4) 
                {
                    for (unsigned long long int i_12 = 3; i_12 < 9; i_12 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */int) (+(max((max((var_12), (((/* implicit */long long int) (signed char)106)))), (((/* implicit */long long int) min((((/* implicit */int) var_14)), (var_13))))))));
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) var_0))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) var_5))));
}
