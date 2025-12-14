/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59149
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
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_4 [7ULL] [0] [7ULL] = ((/* implicit */long long int) var_8);
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_0]))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    arr_9 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)0))));
                    arr_10 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) -1576512364)))))));
                    arr_11 [i_2] [i_1] [i_0] = ((((/* implicit */int) ((short) -3631836634640711881LL))) != ((-(((/* implicit */int) arr_6 [i_0] [(short)6])))));
                    arr_12 [i_1] [i_1] = ((/* implicit */short) (+((+(-1576512364)))));
                }
            }
        } 
    } 
    var_12 = (!(((/* implicit */_Bool) var_10)));
}
