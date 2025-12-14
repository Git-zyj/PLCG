/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65569
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
    var_10 -= ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned short) var_2))))) ? (((/* implicit */int) ((short) var_6))) : ((+(((/* implicit */int) var_3)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) -8065667765568695661LL))) ? (-8065667765568695682LL) : (((/* implicit */long long int) 0))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_0] [i_0] [(short)3] [i_2]))))) : (((arr_5 [i_0] [i_0] [i_1] [i_2]) ? (((unsigned int) (short)-24383)) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))));
                    var_12 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (-(arr_6 [4U] [i_2] [(short)12])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_2]))) : (((((/* implicit */_Bool) arr_7 [1LL] [i_1] [i_2] [8U])) ? (((/* implicit */long long int) var_8)) : (-3115756700726501334LL))))), (((/* implicit */long long int) min((arr_3 [i_2] [i_1]), (arr_3 [i_0] [i_1]))))));
                    arr_8 [i_2] [i_1] [i_2] = ((/* implicit */long long int) (-((-(max((var_8), (((/* implicit */int) var_2))))))));
                    arr_9 [i_0] [i_2] = ((/* implicit */_Bool) ((unsigned int) (-(arr_6 [i_0] [i_2] [i_0]))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        arr_12 [i_2] = ((/* implicit */short) (+((+(((/* implicit */int) (short)24386))))));
                        arr_13 [i_0] [i_2] = ((/* implicit */int) (+(((unsigned long long int) var_3))));
                    }
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_8)) : (8065667765568695670LL)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9)))));
    var_14 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4640835792432719680LL)) ? (max((((/* implicit */long long int) ((_Bool) var_0))), (min((var_4), (((/* implicit */long long int) var_6)))))) : (((long long int) var_5))));
}
