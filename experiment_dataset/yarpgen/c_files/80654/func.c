/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80654
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
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((int) (!(((/* implicit */_Bool) var_4))))) | (var_2))))));
    var_21 = ((/* implicit */int) var_16);
    var_22 = ((/* implicit */int) max((var_22), (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)15663)) : (-1041431257)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                var_23 = ((/* implicit */int) min((var_23), (((((/* implicit */_Bool) (unsigned short)45579)) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)53610))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    arr_8 [i_0] [i_0 - 1] [i_1] = ((((/* implicit */_Bool) var_3)) ? (var_5) : (var_18));
                    var_24 = arr_3 [i_1 + 1] [i_2] [14];
                    arr_9 [i_1] [i_1 + 2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_7 [(unsigned short)15] [i_1] [i_1])))) ? (var_14) : (((int) arr_5 [1] [i_2]))));
                }
                /* vectorizable */
                for (int i_3 = 2; i_3 < 18; i_3 += 2) 
                {
                    arr_13 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (((-(((/* implicit */int) (unsigned short)31801)))) <= (((/* implicit */int) ((unsigned short) (unsigned short)45579)))));
                    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_1 + 1] [i_3 + 1])) ? (((/* implicit */int) var_16)) : (arr_7 [i_0 - 1] [i_1 + 1] [i_3 - 1]))))));
                    arr_14 [i_0] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_12 [i_0] [i_1 + 1] [i_3 - 2]))));
                }
            }
        } 
    } 
    var_26 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)42297)) ? (935627854) : (((/* implicit */int) (unsigned short)16822))));
}
