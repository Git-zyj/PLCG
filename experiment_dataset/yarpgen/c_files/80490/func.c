/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80490
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
    for (short i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) 6063625020244315508LL)) >= (((((((/* implicit */int) arr_5 [i_0] [i_0])) >= (((/* implicit */int) var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_9)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (18446744073709551615ULL)))))));
                    arr_9 [i_0] [i_0] [16ULL] [i_0] = ((/* implicit */int) (unsigned char)15);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
    {
        arr_14 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)91)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-7447865303546624807LL)))) ? (((int) arr_6 [i_3] [i_3] [i_3] [i_3])) : (((arr_0 [i_3]) ? (((/* implicit */int) (short)-32763)) : (((/* implicit */int) var_10))))));
        arr_15 [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) arr_0 [i_3]))));
    }
}
