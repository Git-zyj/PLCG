/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96785
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
    var_13 = ((/* implicit */unsigned char) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) max((min((arr_3 [i_0] [i_0]), (arr_1 [i_0]))), (min((((/* implicit */long long int) (signed char)-12)), (arr_1 [i_1])))));
                var_15 = ((/* implicit */unsigned short) ((max((arr_4 [i_0] [i_0]), (((/* implicit */long long int) (unsigned short)23064)))) - (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */long long int) var_12)) : (arr_4 [i_0] [i_0])))));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned short i_3 = 2; i_3 < 17; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_3] [i_3] = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) (unsigned short)23053)), (4390371111997526415ULL))) < (((/* implicit */unsigned long long int) arr_4 [i_2] [i_3 - 1]))));
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((/* implicit */int) (!((_Bool)0)))) : (((/* implicit */int) arr_9 [i_2 - 1] [16LL] [i_3 - 1] [15LL]))));
                        }
                    } 
                } 
                arr_12 [(_Bool)1] [i_1] = ((/* implicit */short) arr_3 [i_0] [i_1]);
                var_17 = ((/* implicit */unsigned short) ((max((arr_4 [i_1] [i_0]), (((/* implicit */long long int) min((var_6), (((/* implicit */signed char) var_4))))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) 1270940340)) ? ((~(((/* implicit */int) var_8)))) : ((~(((/* implicit */int) (unsigned short)42471)))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned long long int) (unsigned short)23085))))) ? (((/* implicit */int) var_0)) : (((782592565) & (((/* implicit */int) (unsigned short)23064)))))));
    var_19 &= ((/* implicit */short) (+(((((/* implicit */_Bool) (~(2186691161658710323ULL)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) 8429687337070609934ULL)) ? (2870173509U) : (((/* implicit */unsigned int) -782592569))))))));
}
