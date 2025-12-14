/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68225
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
    var_12 = ((/* implicit */int) var_6);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0 + 1] [i_1] [i_0] [i_2] [i_3] [i_4] [i_4] = min((((unsigned long long int) arr_1 [i_0])), (min((arr_1 [i_0]), (arr_1 [i_0]))));
                                arr_14 [i_0] = ((/* implicit */signed char) var_7);
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) min((((1307592255) / (((/* implicit */int) (unsigned short)42178)))), (((/* implicit */int) max((arr_0 [i_1]), (arr_0 [i_0 + 2]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 4; i_5 < 16; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 3; i_6 < 14; i_6 += 4) 
                        {
                            {
                                arr_20 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1] = ((/* implicit */long long int) min((1307592262), (((/* implicit */int) (unsigned short)42178))));
                                arr_21 [i_0] [i_1] [i_0] [i_5 - 3] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((int) arr_12 [i_0 - 1] [i_1] [i_1] [i_1]))))) ? (max((arr_11 [i_6] [i_6 - 2] [i_0] [i_6] [i_0] [i_5 - 4] [i_1]), (arr_11 [i_6] [i_6 - 1] [i_0] [i_2] [i_0] [i_5 - 3] [i_2]))) : (((17868728789269280427ULL) % (15956109275947124103ULL)))));
                                arr_22 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) var_4);
                            }
                        } 
                    } 
                    arr_23 [i_0] [i_0] = ((/* implicit */unsigned int) (-(7906163019618410065LL)));
                    arr_24 [i_0 + 1] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_2] [i_0] [i_2])) ? (((/* implicit */unsigned long long int) arr_7 [i_0])) : (var_11)))) || (((/* implicit */_Bool) var_5))))), ((((-(576460752303423480LL))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1186714787))))))))));
                }
            } 
        } 
    } 
    var_13 += ((/* implicit */int) (signed char)115);
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) max((var_0), (((/* implicit */short) var_6))))) * (((/* implicit */int) var_8))))))))));
    var_15 -= ((/* implicit */long long int) (((+(max((((/* implicit */unsigned long long int) var_5)), (17868728789269280427ULL))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_4), (((unsigned short) 578015284440271189ULL))))))));
}
