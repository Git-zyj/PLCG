/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78412
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 24; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [9LL] [9LL] [(_Bool)1] [(_Bool)1] = ((/* implicit */short) (!(((/* implicit */_Bool) 7973144361620325126LL))));
                    arr_10 [i_1] [i_1] [i_1] [i_1] |= ((/* implicit */unsigned short) ((_Bool) (unsigned short)20924));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                arr_18 [i_0] [i_1 + 1] [i_4] [i_3] = ((/* implicit */signed char) arr_5 [11ULL] [i_1] [11ULL] [i_1]);
                                arr_19 [i_4] [i_4] [i_2] [i_4] [i_0] = ((/* implicit */int) ((unsigned int) arr_3 [i_1 + 1]));
                                arr_20 [i_0] [(unsigned char)24] [i_3] [i_0] [24U] [i_0] [24LL] |= ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) arr_5 [i_4] [i_4] [i_4] [(unsigned char)6])))));
                                arr_21 [i_4] [i_4] [i_4] [i_2] [i_4] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) arr_2 [i_0]));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_22 [i_0] [i_0] = ((/* implicit */int) var_12);
        arr_23 [(short)18] [i_0] = ((/* implicit */unsigned char) ((unsigned short) arr_16 [i_0] [i_0] [(unsigned char)24]));
    }
    var_16 = max((var_9), (((/* implicit */short) var_14)));
    var_17 = (+(((/* implicit */int) var_13)));
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31))) : (2653868668U)))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_14))))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
    var_19 = ((/* implicit */long long int) var_9);
}
