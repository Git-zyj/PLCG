/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69442
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_13 = (-(1202219013859964270LL));
                            var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_3 [i_0] [18U]) / (arr_7 [i_0] [i_1 - 2] [i_3]))) >> ((((-(-313921214))) - (313921205)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1] [i_1 + 1])))))) : (((((/* implicit */_Bool) arr_7 [i_1] [i_1 - 2] [i_1 - 2])) ? (min((((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_3])), (2538782041716157654ULL))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) arr_8 [i_0] [3ULL] [4ULL] [20LL])) : (632118513000639073ULL))))))))));
                            arr_10 [i_2] [i_1] [i_1] [i_1] [3ULL] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) var_9)))))) ? ((~(1202219013859964278LL))) : (((min((1202219013859964278LL), (arr_7 [i_0] [(short)7] [18LL]))) / ((+(1202219013859964295LL)))))));
                        }
                    } 
                } 
                arr_11 [16] |= ((/* implicit */unsigned int) ((int) ((var_11) < (min((arr_8 [2] [2] [2] [i_1]), (((/* implicit */long long int) arr_9 [i_0] [(unsigned short)2] [16ULL])))))));
                var_15 = ((/* implicit */signed char) ((1202219013859964286LL) <= (((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1] [i_1 - 1])) ? ((~(1202219013859964270LL))) : (((/* implicit */long long int) 2147483647))))));
                /* LoopNest 2 */
                for (long long int i_4 = 4; i_4 < 20; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        {
                            var_16 &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)13793))) | (3065949767300459479ULL)));
                            arr_17 [i_0] [i_0] [11LL] [12U] [12U] [i_1] = ((/* implicit */unsigned int) max((max((6375134320590325060ULL), (((/* implicit */unsigned long long int) -1202219013859964247LL)))), (((/* implicit */unsigned long long int) min((((unsigned int) (unsigned short)18824)), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-12))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) (-((-(((/* implicit */int) var_9))))));
    var_18 -= (-(min((((/* implicit */long long int) ((signed char) 1202219013859964283LL))), (max((var_5), (var_5))))));
}
