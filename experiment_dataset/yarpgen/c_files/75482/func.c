/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75482
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
    var_13 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12))))) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) var_12)) / (((/* implicit */int) var_0))))))));
    var_14 = var_6;
    var_15 = (!(((var_4) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) ((((/* implicit */int) var_2)) & ((((-(((/* implicit */int) (_Bool)1)))) | ((((_Bool)0) ? (((/* implicit */int) arr_1 [i_0] [(_Bool)1])) : (((/* implicit */int) (_Bool)1))))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_17 ^= ((((((/* implicit */int) var_0)) * (((/* implicit */int) var_4)))) == (((/* implicit */int) (!((_Bool)1)))));
                            var_18 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_0] [(_Bool)1] [(_Bool)1] [i_1] [i_0]))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!((_Bool)1)))))) & (((((arr_10 [(_Bool)1] [i_1] [(_Bool)1] [i_3] [i_1] [(_Bool)1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) arr_1 [i_0 + 1] [i_1]))))));
                            var_19 ^= arr_1 [i_0] [(_Bool)1];
                            arr_14 [i_1] = ((/* implicit */_Bool) (((+(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0)))))) / (((/* implicit */int) (_Bool)1))));
                            var_20 = ((/* implicit */_Bool) (+((+(((/* implicit */int) ((_Bool) (_Bool)1)))))));
                        }
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (((_Bool)1) || ((_Bool)1)))) : (((arr_5 [i_0]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_2 [i_0 + 1])))) == ((+(((/* implicit */int) var_12))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [(_Bool)1] [(_Bool)1]))))));
                    }
                } 
            } 
        } 
    }
}
