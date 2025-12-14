/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89845
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
    var_10 -= ((/* implicit */unsigned char) var_7);
    var_11 *= ((/* implicit */signed char) (+((~(2200902533U)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_12 *= ((/* implicit */short) ((((/* implicit */_Bool) 2200902542U)) ? (((/* implicit */int) (unsigned short)11)) : (((/* implicit */int) (short)3))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            arr_5 [i_1] [i_0] = ((/* implicit */long long int) (~(2094064766U)));
            var_13 = ((/* implicit */int) min((var_13), (var_5)));
        }
        for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)37)))))))) ? ((+(((/* implicit */int) var_4)))) : (min((((/* implicit */int) (signed char)-1)), ((-(((/* implicit */int) (signed char)36)))))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                for (unsigned int i_4 = 1; i_4 < 11; i_4 += 4) 
                {
                    {
                        var_15 *= ((/* implicit */long long int) (((~(((unsigned int) arr_7 [2ULL] [i_2])))) <= ((+(((2094064754U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [4] [i_0] [i_3] [4])))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
                        {
                            var_16 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)30720)), (arr_6 [i_0] [i_0] [i_3]))))));
                            var_17 -= ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) (unsigned short)30720)) ? (15U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_4 + 3]))))));
                        }
                    }
                } 
            } 
        }
    }
}
