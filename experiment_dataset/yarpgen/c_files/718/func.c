/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/718
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
    var_18 = ((/* implicit */unsigned int) var_11);
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (int i_3 = 1; i_3 < 18; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */_Bool) var_6);
                        var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) min((arr_0 [i_0] [20U]), (arr_7 [i_0] [i_1] [i_2] [i_3])))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)43101))))))) ? (((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1])) ? (((/* implicit */int) ((_Bool) var_12))) : (((/* implicit */int) arr_8 [i_0] [i_3 + 2] [i_0] [i_0 - 1] [i_0])))) : (((((/* implicit */_Bool) (unsigned short)22435)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_3] [i_3])) : (((/* implicit */int) arr_7 [i_0] [i_3 + 2] [i_0 - 1] [i_3]))))));
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (((var_2) * (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_1] [2])))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)221))));
                    }
                } 
            } 
        } 
        arr_9 [i_0 - 1] [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) (+((-(((/* implicit */int) var_10))))))), (var_0)));
    }
    var_22 ^= var_16;
    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) ((_Bool) ((unsigned char) var_7)))))))));
}
