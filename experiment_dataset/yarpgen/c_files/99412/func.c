/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99412
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
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_5))));
    var_18 = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */int) (signed char)41)) > (((/* implicit */int) var_0))))) : (((/* implicit */int) ((unsigned short) var_8))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-((~(((/* implicit */int) (signed char)0))))))) ? (((/* implicit */int) arr_2 [i_0] [(unsigned char)4])) : (((/* implicit */int) arr_0 [i_0 - 1]))));
                var_19 = ((/* implicit */int) ((((((/* implicit */int) arr_0 [i_0 - 1])) >= (((/* implicit */int) arr_3 [i_0] [i_0] [i_1])))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_0 [i_0 + 2]), (var_12))))) : (((9157456874243013321LL) + (-9157456874243013321LL)))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            arr_12 [i_2] [i_2] [i_2] [i_3] = (!(((/* implicit */_Bool) arr_0 [i_0])));
                            arr_13 [(_Bool)0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (short)2370)) : (-663449868)));
                            var_20 *= ((/* implicit */short) ((((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */short) (signed char)72)), (arr_2 [i_0] [9LL]))))))) - (((arr_7 [i_0 + 2] [i_1] [i_2] [i_3]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3]))) : (((((/* implicit */_Bool) arr_8 [i_3] [i_0 + 2])) ? (arr_6 [i_0] [i_1] [i_0] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_2] [i_3])))))))));
                            var_21 = ((/* implicit */int) min((var_21), ((~(((((/* implicit */_Bool) ((arr_6 [i_0 + 1] [i_0] [i_0] [i_3]) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)31)))))) ? (((/* implicit */int) arr_3 [i_3] [i_2] [i_1])) : (((/* implicit */int) (_Bool)0))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) var_0);
    var_23 = ((/* implicit */int) (-(((var_11) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
}
