/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74620
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
    var_10 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_8)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                var_11 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) -1955134321244233438LL))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) / (-1955134321244233438LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-124)))))) ? ((+(arr_3 [i_0 + 1] [3U]))) : (max((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [4ULL] [i_1])) && (((/* implicit */_Bool) var_2))))), (arr_3 [i_0 - 1] [i_0 - 1])))));
                var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_1 + 2]))))) + (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [(unsigned short)8])) || (((/* implicit */_Bool) arr_0 [i_1] [i_1 - 1])))))));
                var_13 = ((arr_2 [i_1] [i_1]) >= ((+(arr_3 [i_0 - 1] [i_0 - 1]))));
                var_14 = ((/* implicit */long long int) ((_Bool) max((arr_2 [i_1] [0]), (-1627118982))));
                var_15 = ((/* implicit */unsigned short) (_Bool)1);
            }
        } 
    } 
}
