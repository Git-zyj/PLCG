/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83205
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
    var_12 = ((/* implicit */signed char) min(((~(((((((/* implicit */int) (short)-2500)) + (2147483647))) << (((1964942892) - (1964942892))))))), (((int) min((var_11), (((/* implicit */int) var_7)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */signed char) -1);
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned short) ((4) > (((/* implicit */int) arr_3 [i_0]))));
                    var_13 = ((/* implicit */int) min((var_13), (((((/* implicit */_Bool) ((unsigned short) ((14) << (((var_6) - (277142920))))))) ? (((((/* implicit */int) ((23) != (((/* implicit */int) var_9))))) & (((/* implicit */int) ((_Bool) arr_0 [i_1] [i_2]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8)) ? (((/* implicit */int) arr_4 [10LL])) : (((/* implicit */int) arr_4 [i_0]))))))))))));
                    var_14 = ((((/* implicit */_Bool) ((int) arr_1 [i_0]))) && (((/* implicit */_Bool) ((((/* implicit */int) ((arr_6 [(signed char)4] [i_1] [(signed char)16]) > (((/* implicit */int) arr_4 [13]))))) | (arr_5 [i_0] [i_1] [i_0] [i_1])))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) (signed char)109);
}
