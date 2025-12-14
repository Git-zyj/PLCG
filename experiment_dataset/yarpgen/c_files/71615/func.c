/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71615
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
    var_15 = ((/* implicit */long long int) min((var_15), (((((((((/* implicit */_Bool) var_12)) ? (3782986452544467644LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)133))))) - (((var_12) % (var_14))))) >> (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((var_12) - (((/* implicit */long long int) ((/* implicit */int) (short)5974)))))))))));
    var_16 = ((/* implicit */_Bool) (+(max((((var_6) / (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) min((var_8), (var_8))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) ((var_14) & (((((/* implicit */_Bool) ((var_3) % (((/* implicit */unsigned long long int) var_7))))) ? (arr_5 [i_0] [i_0]) : ((-(arr_1 [i_0])))))));
                    arr_8 [i_0] [(_Bool)1] [i_1] [i_0] = ((/* implicit */_Bool) (unsigned short)9950);
                    arr_9 [i_0] [11LL] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))) == (8249590435384557469ULL)));
                }
            } 
        } 
    } 
}
