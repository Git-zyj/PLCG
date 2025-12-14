/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79704
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
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((signed char) var_0)))));
    var_15 = ((/* implicit */short) ((748829405U) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_11)))))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        var_16 |= ((/* implicit */short) (-(((long long int) ((((/* implicit */int) (short)-7097)) * (((/* implicit */int) arr_1 [i_0 + 1] [(short)10])))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_8 [(short)17] [i_2] [(signed char)4] = ((/* implicit */signed char) arr_6 [i_2] [i_1] [i_1] [i_0]);
                    arr_9 [(signed char)6] [(_Bool)1] [(short)8] [(signed char)6] &= ((/* implicit */long long int) ((short) ((((/* implicit */int) ((short) var_13))) + (((/* implicit */int) ((short) var_5))))));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned int) ((signed char) ((_Bool) (_Bool)0)));
        arr_10 [i_0 - 2] = ((/* implicit */signed char) 8885112492136786328LL);
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            for (signed char i_4 = 1; i_4 < 17; i_4 += 4) 
            {
                for (unsigned int i_5 = 0; i_5 < 19; i_5 += 1) 
                {
                    {
                        arr_20 [(short)16] [i_4 + 2] [i_3] [(short)16] &= ((/* implicit */signed char) (+(((((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(short)15]))) / (var_7))) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))))));
                        arr_21 [i_3] [(signed char)14] [i_4 - 1] = var_0;
                        var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_11 [i_5] [i_0] [i_0]))));
                    }
                } 
            } 
        } 
    }
}
