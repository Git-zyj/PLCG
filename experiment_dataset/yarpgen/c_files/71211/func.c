/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71211
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
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        arr_3 [i_0] = (-(((max((var_1), (((/* implicit */unsigned int) arr_1 [i_0 + 2] [i_0])))) >> (((((/* implicit */int) (unsigned short)65524)) - (65520))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 2])))))));
    }
    var_20 = ((/* implicit */signed char) var_10);
    /* LoopSeq 2 */
    for (short i_1 = 3; i_1 < 23; i_1 += 2) /* same iter space */
    {
        var_21 |= ((/* implicit */unsigned int) (unsigned short)21);
        var_22 = ((/* implicit */unsigned long long int) (-(min((arr_6 [i_1 - 1]), (arr_6 [i_1 - 1])))));
    }
    for (short i_2 = 3; i_2 < 23; i_2 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned int) arr_8 [i_2 + 1] [i_2]);
        var_24 *= ((/* implicit */unsigned int) ((signed char) arr_6 [i_2]));
        /* LoopNest 2 */
        for (unsigned short i_3 = 2; i_3 < 23; i_3 += 3) 
        {
            for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
            {
                {
                    var_25 = ((/* implicit */unsigned long long int) 4294967269U);
                    arr_16 [i_2] [i_3 + 1] [i_2] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_7 [i_2 - 3])) ? ((-(((/* implicit */int) (short)-32159)))) : (((/* implicit */int) (unsigned short)44814))))));
                    arr_17 [i_2] [i_2] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_11 [i_2 - 1] [i_2 - 1] [i_4]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_2 + 1]))))))) != ((((!(((/* implicit */_Bool) arr_5 [i_2 - 3] [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)-22018)), (var_18))))) : (arr_9 [i_2 + 2])))));
                    arr_18 [(short)0] [(short)0] [(short)0] |= ((/* implicit */short) (~(((/* implicit */int) (signed char)(-127 - 1)))));
                }
            } 
        } 
    }
}
