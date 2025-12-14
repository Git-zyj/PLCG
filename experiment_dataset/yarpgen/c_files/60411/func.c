/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60411
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
    for (signed char i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (((((-(((/* implicit */int) (signed char)-43)))) ^ (((/* implicit */int) arr_1 [i_0 + 3])))) != (((/* implicit */int) ((((/* implicit */int) max((arr_5 [i_1]), (arr_5 [i_0 - 1])))) <= (((((/* implicit */_Bool) arr_3 [13LL])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_0 - 3])))))))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 1; i_2 < 15; i_2 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned int) ((((long long int) arr_1 [i_0])) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0 - 3]))))))));
                        arr_13 [i_0] [i_2] [i_0] = ((/* implicit */short) (~(((/* implicit */int) arr_10 [i_0 - 3]))));
                    }
                    var_21 = ((unsigned int) ((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_0 + 3])) : (((/* implicit */int) arr_10 [i_0]))));
                }
                for (unsigned int i_4 = 1; i_4 < 15; i_4 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) /* same iter space */
                    {
                        arr_20 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [(short)4]))) & (1455872139U)))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) - (1455872139U))))));
                        arr_21 [i_0] [i_1] [i_1] [i_5] [i_5] = ((/* implicit */unsigned long long int) (signed char)-37);
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (long long int i_7 = 1; i_7 < 15; i_7 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_14 [i_0 - 3])) || (((/* implicit */_Bool) arr_8 [i_0 - 3] [i_4 - 1] [i_7 - 1] [i_4 - 1]))))))));
                            arr_26 [i_0] [i_1] [i_0] [i_6] [i_6] = ((/* implicit */short) ((min((((/* implicit */long long int) arr_24 [i_0 + 2] [i_4 + 1] [i_4] [i_0 + 2] [i_6])), ((-9223372036854775807LL - 1LL)))) + (((/* implicit */long long int) ((/* implicit */int) min((arr_24 [i_0 + 3] [i_4 + 1] [i_6] [i_6] [i_7]), (arr_24 [i_0 + 1] [i_4 - 1] [i_6] [i_7] [7U])))))));
                        }
                        var_23 = ((/* implicit */unsigned int) max((var_23), (2839095156U)));
                        var_24 = ((/* implicit */signed char) var_15);
                    }
                    arr_27 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) arr_2 [i_1]);
                }
                var_25 ^= ((/* implicit */signed char) 1455872114U);
            }
        } 
    } 
    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((((((/* implicit */_Bool) var_16)) ? (4721569672181845659ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))) << (((max((((/* implicit */unsigned long long int) var_8)), (17235454952936256250ULL))) - (17235454952936256234ULL))))) : (((/* implicit */unsigned long long int) var_5))));
    var_27 = ((/* implicit */signed char) var_2);
}
