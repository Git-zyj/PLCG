/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90928
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 4; i_2 < 21; i_2 += 4) 
            {
                {
                    var_15 -= ((/* implicit */short) (-(((((/* implicit */_Bool) arr_0 [i_2 - 2] [i_2 + 1])) ? (((/* implicit */int) arr_0 [i_2 + 1] [i_2 - 4])) : (((/* implicit */int) var_11))))));
                    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) max((((((/* implicit */_Bool) arr_6 [i_2] [i_2 - 1] [i_2 - 2] [i_2 - 1])) ? (arr_6 [i_2] [i_2 + 1] [i_2 + 1] [i_2 - 4]) : (arr_6 [i_2] [i_2 + 1] [i_2 - 2] [i_2 + 1]))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_8 [i_0] [i_1] [i_0])), (((((/* implicit */long long int) ((/* implicit */int) var_1))) - (-5680231338864530845LL)))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_3 = 1; i_3 < 7; i_3 += 4) 
    {
        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 3; i_5 < 10; i_5 += 2) 
            {
                {
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((5680231338864530858LL) | (((/* implicit */long long int) ((/* implicit */int) min((var_12), (((/* implicit */signed char) (_Bool)1)))))))) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-105)))))));
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 7; i_6 += 4) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_18 -= ((/* implicit */short) ((((/* implicit */long long int) (-(((/* implicit */int) (short)20265))))) & (((((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) % (((long long int) arr_6 [i_3 - 1] [i_3] [7ULL] [i_3]))))));
                                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((max((arr_12 [i_6] [i_6]), (((/* implicit */long long int) arr_5 [i_7] [i_5] [i_4])))) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3]))))))));
                                arr_22 [i_4] [i_4] [i_5] [i_6] [i_7] = var_1;
                            }
                        } 
                    } 
                    arr_23 [i_3] [i_3] [i_4] = max((((((/* implicit */_Bool) arr_19 [i_3] [i_3] [i_3] [i_3 + 2] [i_3])) ? (5680231338864530858LL) : (-2512966430522401153LL))), (((/* implicit */long long int) var_5)));
                    arr_24 [i_3 + 3] [i_4] [i_4] = ((/* implicit */unsigned char) ((int) -2512966430522401153LL));
                }
            } 
        } 
    } 
    var_20 -= ((/* implicit */int) ((((long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (5680231338864530858LL)))) & (var_8)));
}
