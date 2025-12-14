/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74828
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
    var_14 = ((/* implicit */unsigned short) (_Bool)0);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [(signed char)4] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_2] [i_2])))))), (((var_13) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))) : (min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_2])), (9167089663979710775ULL)))))));
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) 7601369439940753103LL)) ? (((/* implicit */unsigned int) 404706794)) : (3127205409U))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) ? (((((/* implicit */_Bool) arr_2 [i_2])) ? (arr_2 [(short)10]) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)240)) / (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))))) ? ((~(9279654409729840846ULL))) : (((/* implicit */unsigned long long int) (~(arr_2 [i_2]))))));
                }
            } 
        } 
    } 
}
