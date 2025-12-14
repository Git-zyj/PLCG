/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83867
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_13 = ((/* implicit */signed char) var_8);
        arr_3 [i_0] = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_0])), (arr_0 [i_0])))) ? (((/* implicit */long long int) max((arr_0 [i_0]), (((/* implicit */unsigned int) arr_1 [i_0]))))) : ((~(arr_2 [i_0]))));
        arr_4 [i_0] [i_0] &= ((/* implicit */unsigned short) (~((~(((16760832) | (((/* implicit */int) (unsigned short)0))))))));
        arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (~(5))))))) ^ (((((int) (unsigned short)25214)) & (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-60)) : (((/* implicit */int) (signed char)-17))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        arr_9 [i_1] = ((/* implicit */unsigned short) ((long long int) (!(((/* implicit */_Bool) arr_8 [i_1])))));
        var_14 |= ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_8 [i_1])), (arr_6 [i_1]))))))), (992)));
    }
    var_15 = var_4;
}
