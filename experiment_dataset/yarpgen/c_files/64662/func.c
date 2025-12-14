/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64662
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
    var_12 = (~(((/* implicit */int) var_0)));
    var_13 = ((/* implicit */unsigned int) (!(var_9)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (int i_2 = 4; i_2 < 16; i_2 += 4) 
                {
                    var_14 = ((/* implicit */_Bool) var_7);
                    var_15 &= ((/* implicit */_Bool) var_2);
                    var_16 += ((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_0] [i_1] [i_2 - 4]))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) var_9))));
                        arr_10 [i_0] [5ULL] [i_0] [i_3] [(unsigned short)3] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 4; i_4 < 15; i_4 += 2) 
                        {
                            arr_13 [i_1] [i_1] [i_0] [i_1] [i_1] = ((((arr_2 [i_0]) ? (144115188075593728ULL) : (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_3] [i_3])))) * (((/* implicit */unsigned long long int) ((((arr_8 [i_0] [i_1] [i_0] [i_3]) + (2147483647))) >> (((arr_8 [i_1] [i_2 - 3] [6U] [i_4]) + (391793406)))))));
                            arr_14 [i_0] [i_0] [6U] [(signed char)3] [i_0] = ((/* implicit */_Bool) ((((((arr_0 [i_0]) & (((/* implicit */long long int) ((/* implicit */int) var_6))))) + (9223372036854775807LL))) << (((1) - (1)))));
                        }
                    }
                    for (long long int i_5 = 1; i_5 < 16; i_5 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_15 [i_2 - 3] [i_5 + 1] [i_5 + 1])) ^ (((/* implicit */int) arr_15 [i_2 - 2] [i_5 - 1] [i_5 - 1]))));
                        arr_17 [i_0] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */long long int) var_11);
                        var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_1))));
                    }
                    arr_18 [(signed char)13] [i_0] [i_2] = arr_8 [0] [i_0] [0] [i_0];
                }
                for (signed char i_6 = 1; i_6 < 14; i_6 += 1) 
                {
                    var_19 ^= ((/* implicit */int) (-(-8028159002255086217LL)));
                    var_20 = ((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_6] [i_6 - 1])) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_6] [i_6 + 1] [i_0])) : (arr_7 [i_0] [i_1] [i_1] [i_6 + 3]))) + (arr_8 [14ULL] [14ULL] [i_1] [i_6]));
                }
                for (signed char i_7 = 0; i_7 < 17; i_7 += 3) 
                {
                    var_21 = ((/* implicit */unsigned short) max((((arr_5 [i_0]) ? (((/* implicit */unsigned int) -415868825)) : (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_7] [i_7])) ? (((/* implicit */unsigned int) arr_8 [i_7] [i_7] [i_1] [i_0])) : (1624903447U))))), (((/* implicit */unsigned int) arr_8 [i_1] [i_1] [i_1] [i_0]))));
                    var_22 *= ((/* implicit */signed char) arr_21 [(unsigned short)16] [i_1] [i_7] [i_7]);
                    var_23 = ((/* implicit */unsigned short) arr_5 [i_0]);
                }
                for (signed char i_8 = 0; i_8 < 17; i_8 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_9 = 1; i_9 < 16; i_9 += 1) 
                    {
                        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                        {
                            {
                                var_24 *= ((/* implicit */unsigned int) arr_25 [i_0] [i_1]);
                                arr_35 [i_0] [i_1] [i_8] [i_8] [i_8] = ((/* implicit */signed char) arr_6 [i_0] [i_0]);
                            }
                        } 
                    } 
                    arr_36 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((_Bool) 0ULL));
                }
                arr_37 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) arr_25 [i_0] [i_0]))) & (((/* implicit */int) arr_21 [i_0] [i_0] [(short)4] [i_1]))));
            }
        } 
    } 
}
