/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89495
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
    var_16 = ((/* implicit */unsigned short) var_10);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 2; i_2 < 21; i_2 += 4) 
                {
                    arr_7 [i_0] = ((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_17 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)153))));
                                var_18 = ((/* implicit */int) var_10);
                            }
                        } 
                    } 
                    var_19 &= ((/* implicit */int) (unsigned short)7645);
                }
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((((((/* implicit */int) var_8)) != (((/* implicit */int) arr_8 [i_0 + 2] [i_1] [16ULL] [i_1])))) ? (4611686018427387840ULL) : ((+(13835058055282163777ULL))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_11 [18] [i_1] [18])))))))));
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) arr_10 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0 - 1] [i_0] [i_0 + 3] [i_0 + 3]))));
            }
        } 
    } 
    var_22 = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)7627)));
    var_23 = ((/* implicit */long long int) var_8);
}
