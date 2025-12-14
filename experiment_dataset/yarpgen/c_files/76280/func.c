/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76280
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
    var_13 = ((/* implicit */_Bool) ((((var_12) + (9223372036854775807LL))) >> (((var_5) - (732473534)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_14 = var_8;
        arr_3 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) ((short) arr_1 [i_0]))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) ^ (arr_2 [i_0])))));
    }
    var_15 = ((/* implicit */long long int) (~(var_3)));
    /* LoopSeq 2 */
    for (long long int i_1 = 1; i_1 < 22; i_1 += 3) 
    {
        arr_8 [i_1 - 1] = ((signed char) ((signed char) arr_6 [i_1 + 1]));
        arr_9 [i_1] = ((/* implicit */long long int) (-((~(((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1]))))));
        /* LoopNest 3 */
        for (long long int i_2 = 3; i_2 < 20; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 23; i_4 += 2) 
                {
                    {
                        arr_18 [i_2 + 2] [i_3] [(short)3] = ((/* implicit */unsigned long long int) (short)28663);
                        arr_19 [i_1 + 1] [i_2] [i_3 - 1] [i_3 - 1] = ((/* implicit */long long int) arr_4 [(signed char)4]);
                    }
                } 
            } 
        } 
        arr_20 [i_1] = ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-24736)));
        arr_21 [(unsigned short)22] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)24721)))) <= (((/* implicit */int) ((unsigned short) arr_16 [i_1] [i_1 + 1] [i_1 + 1] [i_1])))))) ^ (((((/* implicit */int) arr_16 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])) & (((/* implicit */int) arr_16 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 - 1]))))));
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
    {
        var_16 = 5863235038312295502ULL;
        arr_24 [i_5] = ((/* implicit */unsigned short) ((_Bool) arr_0 [i_5] [i_5]));
    }
}
