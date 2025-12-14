/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87197
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
    var_19 = ((/* implicit */long long int) max((((var_8) * (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) var_1)), (var_12))) == (((((/* implicit */_Bool) 18446744073709551613ULL)) ? (var_9) : (((/* implicit */unsigned long long int) 8386845374928083306LL)))))))));
    var_20 = ((/* implicit */unsigned long long int) var_3);
    var_21 = ((((/* implicit */_Bool) ((max((10713092529598785037ULL), (var_2))) / (((/* implicit */unsigned long long int) ((var_1) - (var_17))))))) ? (((/* implicit */unsigned long long int) var_17)) : (((((/* implicit */unsigned long long int) (-(var_1)))) + (((unsigned long long int) -4084901515859750285LL)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_22 = ((((((/* implicit */_Bool) (+(10713092529598785027ULL)))) ? (((((/* implicit */unsigned long long int) arr_9 [7ULL] [4LL] [i_2])) ^ (7733651544110766596ULL))) : (max((((/* implicit */unsigned long long int) var_7)), (var_6))))) >> (((((long long int) arr_7 [i_0])) + (256927658117027851LL))));
                                arr_11 [i_0] [i_1] [i_1 + 3] [i_2] [i_0] [i_3] [i_4] = ((/* implicit */unsigned long long int) var_5);
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 3; i_5 < 21; i_5 += 1) 
                {
                    for (long long int i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 1) 
                        {
                            {
                                var_23 = (~(((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [14LL] [i_1] [i_1 + 1] [i_1])) && (((/* implicit */_Bool) arr_7 [i_5])))))) | (max((-1LL), (-360831463536485074LL))))));
                                var_24 ^= ((/* implicit */unsigned long long int) ((((((2305843009213693950ULL) == (((/* implicit */unsigned long long int) 0LL)))) ? (arr_17 [i_1 + 1] [i_5] [i_5 - 1] [6ULL]) : (arr_1 [i_7]))) < (((/* implicit */unsigned long long int) max((arr_15 [i_7] [i_6] [i_1 + 3] [i_0]), (var_0))))));
                                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_7])) && (((/* implicit */_Bool) 2305843009213693928ULL)))) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_7] [i_0]))))))))) || ((!(((/* implicit */_Bool) -4633703790289123669LL))))));
                            }
                        } 
                    } 
                } 
                arr_22 [i_0] = ((/* implicit */long long int) arr_7 [i_1]);
            }
        } 
    } 
    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) -4084901515859750285LL)) ? (((/* implicit */unsigned long long int) 4588604294625578072LL)) : (2305843009213693970ULL)));
}
