/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99963
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 11; i_1 += 4) 
        {
            {
                var_11 &= max((((max((((/* implicit */long long int) var_7)), (2305280059260272640LL))) ^ (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_2 [i_0])), (var_1)))))), (((/* implicit */long long int) (!((_Bool)1)))));
                var_12 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_5 [i_1 + 1] [i_1 - 3] [i_1]))) ? (min((var_1), (((/* implicit */unsigned int) arr_5 [i_1 - 3] [i_1 - 4] [i_1])))) : (min((var_8), (((/* implicit */unsigned int) arr_5 [i_1 + 1] [i_1 + 1] [i_1 - 1]))))));
                arr_6 [i_0] [i_1] [i_1] |= ((/* implicit */unsigned char) min((arr_1 [i_0]), (arr_1 [i_0])));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (long long int i_3 = 3; i_3 < 10; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned short) arr_3 [i_1 - 1]);
                            arr_12 [i_2] [i_2] |= ((/* implicit */signed char) (((((!(((/* implicit */_Bool) -3437504123141111379LL)))) || ((_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_6)), (arr_9 [i_1 + 1] [i_3 + 2]))))) : (((((/* implicit */_Bool) (+(arr_5 [i_3 + 2] [i_2] [i_0])))) ? (((long long int) var_3)) : (((arr_4 [i_2]) % (((/* implicit */long long int) arr_3 [i_3]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 |= ((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_4 = 1; i_4 < 8; i_4 += 2) 
    {
        var_15 -= ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_8 [i_4 + 1] [i_4] [i_4 - 1])) ? (((/* implicit */int) arr_14 [i_4 - 1])) : (((/* implicit */int) arr_9 [i_4] [i_4 + 2]))))));
        var_16 -= ((/* implicit */int) var_10);
    }
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((max((var_9), (((/* implicit */unsigned long long int) var_7)))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) + (((/* implicit */int) var_3)))))))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
    var_18 -= ((/* implicit */unsigned long long int) var_6);
}
