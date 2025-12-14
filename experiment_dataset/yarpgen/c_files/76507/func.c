/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76507
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
    var_10 = ((/* implicit */unsigned long long int) var_1);
    var_11 = ((/* implicit */short) var_2);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (((/* implicit */int) arr_2 [i_1] [i_0])) : (((/* implicit */int) arr_2 [20ULL] [i_1]))))) && (((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) 458632241))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) (short)16383);
                            arr_14 [i_0] [i_2] [i_2] [i_3] &= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_6 [i_0] [i_0] [i_2])) != (((/* implicit */int) (unsigned short)27044)))) || (((/* implicit */_Bool) min((arr_7 [i_0] [i_2] [i_3]), (((/* implicit */unsigned char) (signed char)6)))))));
                            var_13 ^= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((arr_11 [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3]))) : (arr_12 [i_0] [i_1] [i_0] [i_0] [i_1])))) ? (arr_4 [i_0] [i_1]) : (((147065035U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0])))))))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) max((((((/* implicit */int) var_3)) < (((/* implicit */int) var_7)))), (((_Bool) (short)650))))) << (((((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-86)))))) : (((((/* implicit */unsigned long long int) -1LL)) & (arr_12 [i_1] [i_1] [i_1] [i_1] [i_1]))))) - (18446744073709551502ULL)))));
            }
        } 
    } 
    var_15 &= ((/* implicit */_Bool) min(((~(((/* implicit */int) var_2)))), (((/* implicit */int) var_9))));
}
