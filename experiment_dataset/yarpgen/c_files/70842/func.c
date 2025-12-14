/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70842
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
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [17] [17] [17] = ((/* implicit */short) max((min(((+(((/* implicit */int) arr_0 [i_1] [i_1])))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)175))))))), (((/* implicit */int) min(((unsigned char)251), (var_1))))));
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_3 [6]) > (arr_3 [12]))) ? (((/* implicit */int) (unsigned char)23)) : (((/* implicit */int) ((_Bool) arr_2 [0] [14U])))))) ? (((long long int) ((((/* implicit */int) (unsigned char)232)) ^ (((/* implicit */int) (unsigned short)10583))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_4 [i_0] [14]))))));
                var_18 = ((/* implicit */unsigned short) max((arr_1 [i_0] [i_1]), ((!(((/* implicit */_Bool) arr_0 [i_0] [i_1]))))));
            }
        } 
    } 
    var_19 -= ((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned short)10557), (((/* implicit */unsigned short) (unsigned char)251))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) var_16)) + (var_10))))) : (((/* implicit */int) var_12))));
}
