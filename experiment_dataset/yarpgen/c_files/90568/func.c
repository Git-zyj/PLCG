/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90568
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
    for (int i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */long long int) ((((/* implicit */int) ((short) min((((/* implicit */unsigned int) (_Bool)0)), (0U))))) < (((/* implicit */int) min((((unsigned short) 3982096160139241574LL)), (((/* implicit */unsigned short) var_10)))))));
                    arr_7 [i_0] [i_2] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_0 [i_2])), (((unsigned short) var_1)))))));
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */short) ((((/* implicit */int) var_13)) * (((((/* implicit */_Bool) ((int) (unsigned short)10))) ? (((((/* implicit */int) var_12)) % (((/* implicit */int) var_13)))) : (((((/* implicit */int) (unsigned short)61440)) >> (((/* implicit */int) (_Bool)1))))))));
        arr_9 [i_0 - 2] = ((/* implicit */unsigned short) ((int) min((((((/* implicit */_Bool) 17348059438502850293ULL)) ? (((/* implicit */int) (unsigned short)39626)) : (((/* implicit */int) (unsigned short)64110)))), (((/* implicit */int) (_Bool)1)))));
        arr_10 [i_0] = ((/* implicit */signed char) min((arr_1 [i_0 - 2] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-6828)) ? (((/* implicit */int) arr_4 [i_0 + 1])) : (((/* implicit */int) var_6)))))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-1)), (8281707230897974653LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-32755))))) : (var_16)));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        arr_13 [i_3] = ((/* implicit */short) var_15);
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (3665524716U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)30577))))))) ? (((((/* implicit */int) (short)-9)) * (((/* implicit */int) var_17)))) : (min((((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_13)))), (min((0), (var_11)))))));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) min((((((/* implicit */_Bool) arr_12 [i_3] [i_3])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_3] [i_3])) - (((/* implicit */int) var_6))))) : (min((((/* implicit */long long int) (short)0)), (5666293626358998420LL))))), (((/* implicit */long long int) min(((-2147483647 - 1)), (((/* implicit */int) (signed char)89))))))))));
        var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))));
    }
    var_22 = ((/* implicit */short) var_5);
}
