/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88540
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
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) max((((/* implicit */unsigned int) (short)13864)), (((unsigned int) var_8)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            var_14 *= ((/* implicit */short) (~(((/* implicit */int) arr_1 [i_0 + 1]))));
            var_15 += ((/* implicit */short) (unsigned char)159);
        }
        for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((unsigned long long int) (!((_Bool)1))))));
            arr_11 [3ULL] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) - (((((/* implicit */_Bool) 2181866463U)) ? (((/* implicit */int) (unsigned char)207)) : (((/* implicit */int) (unsigned char)206))))));
        }
        var_16 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) 4527697231408267636ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)147))) : (-1035721554044118088LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4647))) : (max((((((/* implicit */_Bool) (unsigned char)235)) ? (4527697231408267650ULL) : (8388607ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2)))))))));
    }
    for (short i_3 = 1; i_3 < 16; i_3 += 1) 
    {
        var_17 += ((/* implicit */short) ((((/* implicit */_Bool) -7625239181692027226LL)) ? (13919046842301283978ULL) : (2025393467341325389ULL)));
        arr_14 [i_3] = ((((/* implicit */_Bool) (unsigned char)185)) ? (734715430U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)232))));
        /* LoopNest 3 */
        for (short i_4 = 1; i_4 < 17; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 18; i_5 += 1) 
            {
                for (long long int i_6 = 4; i_6 < 17; i_6 += 1) 
                {
                    {
                        var_18 = ((/* implicit */long long int) ((unsigned char) arr_12 [(short)4]));
                        arr_22 [i_6] [i_5] [i_3] [i_3] [7ULL] [7ULL] = ((/* implicit */unsigned int) arr_20 [i_3] [i_3] [i_5] [i_6]);
                    }
                } 
            } 
        } 
    }
    var_19 = ((/* implicit */short) (+(var_4)));
}
