/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88841
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((_Bool) (_Bool)1)) ? (((/* implicit */long long int) var_4)) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)-93))) - (1222137957175638776LL)))))) ? (((long long int) min((var_12), (var_10)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -1222137957175638776LL)) ? (var_0) : (((/* implicit */unsigned int) var_13)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */signed char) ((1222137957175638776LL) << (((/* implicit */int) (_Bool)1))));
                var_17 = ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_1 [i_0] [i_0])), ((~(-1222137957175638767LL)))));
                var_18 = ((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (max((arr_1 [i_0] [i_1]), (arr_1 [i_0] [i_1])))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(_Bool)1] [i_1] [i_2] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_2]))) : (var_0)))) ? (((/* implicit */long long int) (+(var_4)))) : (min((1222137957175638775LL), (1222137957175638752LL)))));
                            var_19 = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) arr_10 [i_0] [i_1] [i_2] [i_3]))))))) | (max((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned short)63666))))), (min((-1222137957175638776LL), (-3327243276620191806LL))))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((_Bool) (~(((((/* implicit */long long int) ((/* implicit */int) var_8))) % (-213422546462233496LL))))));
            }
        } 
    } 
}
