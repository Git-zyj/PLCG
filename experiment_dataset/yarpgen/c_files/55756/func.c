/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55756
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
    var_12 = ((/* implicit */unsigned short) var_3);
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */signed char) max((((/* implicit */int) var_3)), ((+(((/* implicit */int) arr_6 [(_Bool)1] [i_1] [i_0]))))));
                var_13 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((short) (short)-8785))) ? (((unsigned long long int) (short)-8785)) : (((/* implicit */unsigned long long int) 2697841577U)))) << (((/* implicit */int) (_Bool)1))));
                arr_8 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-8794)) ? (((/* implicit */int) (signed char)-3)) : (((/* implicit */int) (unsigned short)13965))))), (min((((/* implicit */unsigned int) var_9)), (952561015U))))))));
                arr_9 [i_0 + 1] [i_1] = ((/* implicit */unsigned short) min(((~(((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_4))))))), ((((~(((/* implicit */int) arr_6 [i_0] [i_1] [i_1])))) & (((/* implicit */int) ((unsigned char) (short)8785)))))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3171258311U)) ? (((/* implicit */unsigned long long int) 7749426609943524366LL)) : (17161097504478643410ULL)));
                    var_15 = ((/* implicit */long long int) (~(max((arr_12 [i_0] [i_1] [i_1] [i_0 - 2]), (var_2)))));
                }
            }
        } 
    } 
}
