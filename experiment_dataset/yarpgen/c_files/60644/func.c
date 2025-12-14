/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60644
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
    var_12 -= ((/* implicit */int) var_6);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 3; i_1 < 19; i_1 += 1) /* same iter space */
        {
            arr_4 [i_1] [i_1] = ((((/* implicit */_Bool) var_11)) ? (arr_0 [i_1 - 1] [i_1 - 2]) : (arr_0 [i_1 - 2] [i_1 - 2]));
            var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) (_Bool)0))));
            arr_5 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_1 - 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [8] [19U])) ? (arr_0 [i_0] [i_1]) : (((/* implicit */int) (short)29631))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_0 [19LL] [3])) : (var_4)))));
        }
        for (long long int i_2 = 3; i_2 < 19; i_2 += 1) /* same iter space */
        {
            arr_9 [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) 15432615564043202105ULL)) ? (((((/* implicit */unsigned long long int) 1578669991)) / (var_8))) : (max((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0])), (var_3))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) min(((short)-372), (((/* implicit */short) (_Bool)1))))))))));
            var_14 = ((/* implicit */unsigned long long int) var_5);
            var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) max((max((((/* implicit */int) ((_Bool) arr_0 [i_0] [i_0]))), (arr_0 [i_2 - 3] [i_2 - 3]))), (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_8 [i_2] [i_0] [i_0]), (var_5))))))))))));
            arr_10 [i_2] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_8)))) ? (arr_6 [i_2 - 1]) : (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_2 - 3])))))))) ? ((-(((((/* implicit */_Bool) arr_6 [0ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_3))))) : (((((_Bool) var_6)) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_6 [i_2])) : (0ULL))) : (((arr_2 [i_0]) | (4ULL)))))));
        }
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (long long int i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    {
                        var_16 = min((((((/* implicit */_Bool) (unsigned char)22)) ? (max((((/* implicit */unsigned long long int) 1023)), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) var_2)));
                        var_17 = ((/* implicit */long long int) 5427670064655048404ULL);
                        arr_18 [i_0] [i_3] [i_5] = ((/* implicit */int) (-(max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_3])), (var_6)))));
                    }
                } 
            } 
        } 
    }
    var_18 = ((/* implicit */_Bool) var_5);
    var_19 = ((/* implicit */_Bool) min((var_11), (max((((/* implicit */int) var_0)), (((((/* implicit */int) var_1)) & (var_11)))))));
    var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -2109667351)), (var_9)));
}
