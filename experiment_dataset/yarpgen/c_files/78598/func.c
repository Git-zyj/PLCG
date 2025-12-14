/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78598
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
    var_15 = ((/* implicit */unsigned char) min((6656670359074012895ULL), (((/* implicit */unsigned long long int) (unsigned char)103))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    arr_7 [(unsigned short)4] [i_1] [i_2] [i_2] &= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned char)103)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_6 [i_0] [(short)10] [i_2] [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) ((short) -7054771534873276205LL))))))));
                    arr_8 [i_1] [i_1] [i_0] [i_1] = ((/* implicit */int) ((short) var_11));
                    var_16 = ((/* implicit */short) min((18446744073709551615ULL), (4ULL)));
                }
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(9ULL)))) ? (((((/* implicit */int) (unsigned short)50569)) << (((((/* implicit */int) (unsigned short)4981)) - (4981))))) : (((/* implicit */int) arr_6 [i_0] [i_1] [9] [i_1]))));
            }
        } 
    } 
}
