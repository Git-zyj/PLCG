/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72366
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))) * ((-(((/* implicit */int) var_3))))))) ? (((/* implicit */unsigned long long int) max((6017022959737213LL), (((/* implicit */long long int) (short)63))))) : (((((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (1718306255546094543ULL))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13871630100032505945ULL)) ? (8633870610052840698LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)239))))))))));
        arr_4 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)203))))) && (((/* implicit */_Bool) 2995231517646598922LL)))))));
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned char)175)))))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        var_20 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)67))) : (arr_7 [8U])))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_1]))))) : (((((/* implicit */_Bool) 2586136063U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))) : (-8633870610052840699LL)))));
        var_21 = ((/* implicit */signed char) (+(10357660730381379279ULL)));
        arr_8 [i_1] = ((/* implicit */long long int) (~((+(((/* implicit */int) arr_6 [i_1]))))));
    }
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)37)) && ((!(((/* implicit */_Bool) min(((signed char)54), ((signed char)39))))))));
}
