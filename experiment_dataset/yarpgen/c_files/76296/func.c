/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76296
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
    var_18 = ((/* implicit */_Bool) ((var_12) & (((/* implicit */unsigned int) ((/* implicit */int) (short)8143)))));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_3)) & (((/* implicit */int) (short)1252)))) - (((((/* implicit */int) (short)-1253)) + (((/* implicit */int) (short)1252))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) 4294967295U)) ? (262143U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)1252))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)-1262)) | (((/* implicit */int) var_3))))))) : (((/* implicit */unsigned int) ((((_Bool) (short)-13214)) ? (((/* implicit */int) ((_Bool) (_Bool)0))) : (((((/* implicit */int) var_1)) | (((/* implicit */int) (short)-31453)))))))));
    var_20 = ((((/* implicit */int) (_Bool)1)) != ((-(((/* implicit */int) var_0)))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 = (short)26063;
                    arr_9 [i_0] [(_Bool)1] = ((short) (((_Bool)0) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (1357553089U))))));
                    arr_10 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */_Bool) ((min(((~(3675541787U))), (((/* implicit */unsigned int) (short)-1262)))) | (((/* implicit */unsigned int) ((/* implicit */int) (short)-5322)))));
                }
            } 
        } 
    } 
}
