/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63287
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
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        var_10 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)-1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1])))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_8 [i_1] [i_1] [i_0] = max(((~(max((arr_6 [i_0] [i_1]), (((/* implicit */unsigned long long int) var_6)))))), (((/* implicit */unsigned long long int) var_1)));
            var_11 |= ((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0]);
            var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) (~((+(arr_3 [i_0 - 2] [i_1]))))))));
        }
        arr_9 [i_0 - 2] [i_0 - 2] = ((/* implicit */unsigned long long int) (~(max((((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 1])), (arr_2 [i_0] [i_0 + 2])))));
        var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) (!(((/* implicit */_Bool) max(((~(((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))), ((~(((/* implicit */int) (signed char)119))))))))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) || ((_Bool)1)))) << (((max((var_3), (((/* implicit */int) arr_11 [i_2] [i_2])))) - (242607150)))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? ((+(var_5))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (short)(-32767 - 1))), (111167601U))))))));
        arr_14 [i_2] [i_2] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_10 [i_2] [i_2])) ? (((/* implicit */int) arr_11 [i_2] [i_2])) : ((+(((/* implicit */int) var_1))))))));
    }
    var_15 = ((/* implicit */_Bool) (+((~((~(var_7)))))));
}
