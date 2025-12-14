/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78039
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_4 [i_0] [7U] = ((/* implicit */short) ((((((((/* implicit */int) var_6)) & (((/* implicit */int) (unsigned char)149)))) % (((((/* implicit */int) arr_2 [i_0] [i_0] [i_1])) % (((/* implicit */int) arr_3 [i_0] [i_1])))))) % (((((/* implicit */int) ((((/* implicit */int) arr_2 [(short)1] [i_0] [i_0])) >= (((/* implicit */int) var_6))))) * ((-(((/* implicit */int) arr_0 [i_0]))))))));
                var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) min(((!((!(((/* implicit */_Bool) arr_3 [i_1] [i_1])))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (short)21762))))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_1))))))))))));
            }
        } 
    } 
    var_11 &= ((/* implicit */short) ((((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)-24424))) % (655317446U))) << (((((var_4) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-108))))) - (2216105011647466318ULL)))))) == (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) != (var_4))))) * (min((-838566323268350941LL), (137434759168LL)))))));
}
