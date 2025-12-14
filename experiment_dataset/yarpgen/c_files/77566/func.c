/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77566
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
    var_20 &= ((/* implicit */short) var_6);
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        var_21 = ((/* implicit */short) ((_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_19))) / (var_11))) | (((/* implicit */long long int) ((/* implicit */int) ((short) var_6)))))));
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((signed char) (_Bool)1)))));
        var_23 = ((/* implicit */unsigned int) min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)0))));
        var_24 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (min((((/* implicit */int) max((var_13), (((/* implicit */short) (_Bool)1))))), (((var_0) ? (arr_0 [i_0]) : (((/* implicit */int) var_17)))))) : (arr_0 [i_0])));
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) arr_3 [i_1]))));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 10; i_2 += 2) 
        {
            for (short i_3 = 1; i_3 < 9; i_3 += 4) 
            {
                for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            var_26 &= ((/* implicit */short) arr_4 [i_3] [i_4]);
                            var_27 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_16)) || ((_Bool)1))))));
                            var_28 = ((/* implicit */short) ((_Bool) (_Bool)1));
                        }
                        var_29 = ((((/* implicit */_Bool) arr_10 [7U] [i_2] [i_2 - 1] [i_2])) ? (min((var_15), (((/* implicit */unsigned int) var_17)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (-(var_5)))))));
                    }
                } 
            } 
        } 
    }
}
