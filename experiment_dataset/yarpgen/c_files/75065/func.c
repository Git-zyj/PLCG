/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75065
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
    var_19 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (short)-380))) ? (251658240) : ((+(((/* implicit */int) (unsigned short)896))))))), (((unsigned long long int) ((-251658227) | (654822831)))));
    var_20 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4294967272U))))) : (((/* implicit */int) ((unsigned short) var_1)))))) ? (((/* implicit */int) ((short) (unsigned short)64645))) : (var_12));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4]))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535)))) : (((((/* implicit */_Bool) 18073502463768260192ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_3 [i_1] [i_1] [1U]))))))) ? (((((/* implicit */_Bool) var_9)) ? (((373241609941291431ULL) - (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967269U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [0U]))) : (var_8)))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)6493))) + (373241609941291451ULL))) | (18073502463768260193ULL)))));
                                var_22 = ((/* implicit */unsigned short) (+(-2115125417966444175LL)));
                                var_23 = ((((/* implicit */_Bool) (short)13669)) ? ((~((~(((/* implicit */int) (unsigned short)865)))))) : (((/* implicit */int) arr_1 [i_0 + 1])));
                            }
                        } 
                    } 
                    var_24 *= ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) arr_6 [i_0 - 2] [4] [i_1])), (var_17))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 - 2] [i_0 - 2] [i_2 - 3])))));
                    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0])) ? ((~(min((arr_10 [i_2 - 3] [(unsigned short)6] [12U] [i_0] [i_0]), (((/* implicit */int) var_9)))))) : (min((251658227), (928984304)))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */_Bool) var_15);
}
