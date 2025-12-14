/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94810
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
    var_13 |= ((/* implicit */unsigned long long int) (+(124105095U)));
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) max((((/* implicit */unsigned short) var_10)), (min((((/* implicit */unsigned short) var_6)), (min((var_2), (((/* implicit */unsigned short) var_7)))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_15 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -9223372036854775787LL)) ? (2206209665675112026ULL) : (((/* implicit */unsigned long long int) 396043807)))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_1 [i_0])))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            var_16 |= arr_3 [i_0] [i_1] [i_1];
            arr_6 [i_1] [i_1] [i_1] = var_1;
        }
        /* LoopNest 3 */
        for (signed char i_2 = 3; i_2 < 14; i_2 += 3) 
        {
            for (unsigned char i_3 = 2; i_3 < 15; i_3 += 3) 
            {
                for (short i_4 = 3; i_4 < 15; i_4 += 4) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) arr_9 [i_0]);
                        var_18 = ((/* implicit */unsigned char) var_6);
                    }
                } 
            } 
        } 
        var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_0] [i_0] [(short)14] [(short)14]))))) ? (((((/* implicit */_Bool) 2431508332U)) ? (124105093U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
    }
    var_20 = ((/* implicit */signed char) (~((~(((/* implicit */int) var_2))))));
}
