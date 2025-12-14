/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64339
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] [11LL] = ((/* implicit */int) var_16);
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            var_20 -= ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) (unsigned char)238)) || (((/* implicit */_Bool) arr_1 [i_1])))));
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_2] [(unsigned char)15] = ((/* implicit */unsigned char) (-(((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [8LL] [i_1]))))) / (((int) arr_0 [i_1]))))));
                            arr_14 [i_0] [i_3] [i_0] [i_0] = ((/* implicit */unsigned char) var_9);
                        }
                    } 
                } 
            } 
            var_21 = arr_5 [i_1] [i_0] [17LL];
            arr_15 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((((long long int) 9223372036854775807LL)), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)179)) & (((/* implicit */int) (signed char)-61)))))));
        }
        for (long long int i_5 = 0; i_5 < 18; i_5 += 3) 
        {
            arr_18 [i_5] = ((/* implicit */int) 8527062938123656907LL);
            arr_19 [i_0] [3] [i_5] = (signed char)0;
        }
        /* vectorizable */
        for (long long int i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            arr_22 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_0))));
            var_22 = ((/* implicit */unsigned char) ((int) (unsigned char)157));
        }
    }
    var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-61))));
    var_24 = ((signed char) max((((((/* implicit */_Bool) var_19)) ? (681014592248535173LL) : (((/* implicit */long long int) ((/* implicit */int) var_18))))), (((/* implicit */long long int) max((((/* implicit */unsigned char) var_9)), (var_7))))));
}
