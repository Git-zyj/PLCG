/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56260
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned long long int) 1590605886);
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((arr_0 [i_0]) | (((/* implicit */unsigned long long int) ((int) var_5))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                arr_6 [i_0] [9ULL] [i_0] = ((/* implicit */int) 11317277617088807720ULL);
                /* LoopSeq 1 */
                for (int i_3 = 2; i_3 < 17; i_3 += 2) 
                {
                    var_16 = ((-1351955799) | (arr_1 [i_3 + 3]));
                    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_3 + 2]))));
                    var_18 = ((/* implicit */int) ((arr_5 [i_3 + 3] [i_2] [2ULL]) == (arr_4 [i_0] [i_2] [i_3])));
                }
            }
            /* vectorizable */
            for (int i_4 = 1; i_4 < 19; i_4 += 4) 
            {
                var_19 -= ((/* implicit */int) ((arr_8 [i_4 + 1]) != (((/* implicit */unsigned long long int) -2147483644))));
                var_20 ^= ((/* implicit */int) ((unsigned long long int) arr_8 [i_0]));
                arr_12 [0ULL] [i_1] |= ((((/* implicit */_Bool) -1351955821)) ? (2009038365) : (2147483644));
                var_21 |= arr_11 [i_0] [i_0] [i_4];
            }
            for (int i_5 = 1; i_5 < 18; i_5 += 3) 
            {
                arr_15 [i_5] [i_5] [i_1] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) ((max((var_0), (((/* implicit */unsigned long long int) -1584567922)))) | (((/* implicit */unsigned long long int) ((int) 703712200))))))));
                arr_16 [i_5] [i_1] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_13) : (-1)))), (((10518654348885862692ULL) / (((/* implicit */unsigned long long int) var_7))))))) ? (((unsigned long long int) arr_10 [i_0] [i_1] [8ULL] [i_1])) : (var_10)));
                arr_17 [i_0] [i_5] = ((/* implicit */unsigned long long int) arr_3 [5] [i_1]);
            }
            arr_18 [i_0] [i_0] [i_0] = -1351955799;
        }
    }
    for (int i_6 = 1; i_6 < 14; i_6 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 4) 
        {
            var_22 = ((/* implicit */int) (~(var_2)));
            var_23 = arr_19 [i_6 + 2] [i_6];
        }
        arr_23 [2] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -221320112)) ? (arr_0 [i_6 + 1]) : (((/* implicit */unsigned long long int) 402337190))))) ? (((/* implicit */unsigned long long int) max((var_7), (-2074130099)))) : (max((9721463867985106044ULL), (arr_0 [i_6 + 1])))));
        arr_24 [i_6] = ((/* implicit */unsigned long long int) 811569723);
        var_24 = (~((+(2147483643))));
        arr_25 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_22 [i_6 + 2] [i_6])) ? (7129466456620743895ULL) : (((/* implicit */unsigned long long int) var_13)))) <= (((unsigned long long int) 7082847758512607116ULL))));
    }
    var_25 = 0;
    var_26 = ((/* implicit */int) min((var_26), (var_13)));
}
