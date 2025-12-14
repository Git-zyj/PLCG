/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63975
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
    var_11 = ((/* implicit */long long int) var_5);
    var_12 = max((((/* implicit */unsigned long long int) var_8)), (3791923118827840403ULL));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                arr_4 [i_0 + 1] [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) min((arr_2 [i_0] [i_1 + 3]), (arr_2 [i_0] [i_1 + 2]))))));
                arr_5 [(short)12] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [(_Bool)0] [(short)6]))));
                arr_6 [(short)4] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [0LL] [0LL]))));
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1] [4ULL] [i_3] [i_0] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)12957)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (max((((/* implicit */long long int) arr_1 [i_0])), (arr_3 [5ULL] [i_0])))));
                                arr_16 [i_0] [(signed char)8] [(short)6] [(short)10] [i_0] |= ((/* implicit */short) arr_13 [i_2] [14ULL] [i_1 + 2] [14ULL] [i_1 + 2]);
                                arr_17 [i_0] [i_0] [i_0] [(short)4] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(max((((/* implicit */long long int) (short)-18818)), (8048979960674347355LL)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min(((short)4), ((short)30476)))) ? (((/* implicit */int) arr_7 [1ULL] [1ULL] [1ULL] [1ULL])) : ((~(((/* implicit */int) arr_14 [i_1])))))))));
                            }
                        } 
                    } 
                } 
                arr_18 [i_1] [2LL] &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) var_2)) >= ((+(((/* implicit */int) var_4)))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) (~(((/* implicit */int) var_1))));
}
