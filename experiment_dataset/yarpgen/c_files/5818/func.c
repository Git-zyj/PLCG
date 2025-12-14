/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5818
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [0] [(short)10] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5067))) / (((unsigned long long int) (unsigned char)163))));
                    var_14 = (unsigned char)84;
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_0 [i_1] [i_1]);
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_8)) >> (((((/* implicit */int) arr_3 [i_0] [i_0])) - (41))))))))));
        var_16 = ((/* implicit */unsigned char) (-(arr_7 [i_0] [i_0])));
        arr_11 [i_0] [i_0] = ((/* implicit */unsigned long long int) (short)5066);
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            var_17 = ((/* implicit */int) arr_13 [i_0] [i_3]);
            arr_16 [i_3] [i_0] = ((/* implicit */unsigned long long int) ((int) arr_14 [i_0]));
        }
        for (int i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            var_18 += ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_18 [i_0] [(unsigned short)16] [i_4])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_19 [i_0] [i_4]))))));
            arr_20 [16LL] [14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)3280)) : ((+(((/* implicit */int) (short)-3303))))));
        }
    }
    var_19 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((signed char) 1267986114))), (max((((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-3303)) + (2147483647))) >> (((/* implicit */int) (unsigned char)0))))), (min((((/* implicit */unsigned long long int) var_1)), (var_5)))))));
}
