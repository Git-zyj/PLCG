/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60313
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
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_16 ^= ((/* implicit */unsigned long long int) 65535U);
                var_17 = ((/* implicit */int) max((var_17), ((~(((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_3))));
    var_19 &= ((/* implicit */unsigned int) var_9);
    /* LoopSeq 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_20 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_8 [i_2])))) - (min((159746953), (((/* implicit */int) var_5)))))))));
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_10))))), (159746964))))));
    }
    for (unsigned int i_3 = 4; i_3 < 22; i_3 += 1) 
    {
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 23; i_4 += 1) 
        {
            for (int i_5 = 2; i_5 < 23; i_5 += 1) 
            {
                for (int i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    {
                        var_22 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_16 [i_6] [i_5] [7U]))));
                        arr_22 [i_3] [i_4] [i_4] [i_6] &= ((arr_18 [i_4 - 1]) >> (((((((/* implicit */_Bool) arr_18 [i_4 - 2])) ? (10659568565581980448ULL) : (((/* implicit */unsigned long long int) arr_18 [i_4 + 1])))) - (10659568565581980417ULL))));
                        var_23 -= ((/* implicit */unsigned long long int) var_9);
                        var_24 += ((/* implicit */_Bool) (((~(((/* implicit */int) arr_16 [i_5 - 1] [i_3 - 2] [i_4 - 1])))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_3 + 2] [i_3 + 2] [i_3 + 2])))))));
                    }
                } 
            } 
        } 
        var_25 ^= ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_3 - 4] [i_3 - 2] [i_3 - 3]))))) <= (((((int) var_13)) ^ (min((((/* implicit */int) arr_17 [i_3] [(_Bool)1] [i_3])), (arr_18 [(short)21])))))));
        var_26 += ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (-159746954)));
        var_27 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((arr_14 [i_3 - 1]) <= (1048572)))) / (arr_9 [i_3]))) & (((((/* implicit */int) var_5)) | (arr_14 [i_3 - 3])))));
        var_28 ^= ((((/* implicit */unsigned int) ((/* implicit */int) (short)-12202))) > (3428155677U));
    }
}
