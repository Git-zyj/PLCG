/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58965
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
    var_13 = ((/* implicit */unsigned long long int) var_0);
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) 18133544571258508145ULL)) ? ((+(((int) (unsigned char)34)))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) var_4)), (-633840191115031334LL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((_Bool) (unsigned char)221)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 6; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) arr_2 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 8; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 2; i_3 < 9; i_3 += 1) 
                    {
                        arr_12 [(_Bool)1] [i_2] [i_1] [2] [(unsigned short)4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 917504U)) ? (((/* implicit */int) (unsigned char)221)) : (((/* implicit */int) (_Bool)0))));
                        var_15 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */unsigned long long int) var_10)) * (((5212717240882208942ULL) * (((/* implicit */unsigned long long int) var_11)))))));
                    }
                    var_16 *= ((/* implicit */unsigned long long int) arr_3 [i_0] [i_1]);
                }
            } 
        } 
        arr_13 [i_0 - 1] = ((/* implicit */short) var_11);
    }
}
