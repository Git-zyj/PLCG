/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80329
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
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_4);
                    arr_8 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)31377))));
                    arr_9 [i_0] [i_1 - 1] [i_2] [0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((int) arr_1 [i_2])), (((/* implicit */int) var_0))))) ? (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-15504)) || (((/* implicit */_Bool) var_0)))))) * (max((((/* implicit */long long int) (unsigned char)85)), (8977565173153830405LL))))) : (min((arr_3 [i_1 + 1]), (arr_3 [i_0])))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 12; i_3 += 3) 
    {
        for (short i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            {
                arr_14 [i_4] = ((/* implicit */short) 13349510065869584947ULL);
                arr_15 [i_3] [8LL] = ((/* implicit */int) min((arr_1 [i_3]), (((/* implicit */short) ((((/* implicit */int) var_0)) > ((+(((/* implicit */int) arr_0 [i_4])))))))));
                arr_16 [i_4] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)113))) ^ (var_7)));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) var_7);
}
