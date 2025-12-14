/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87145
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
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0 - 1])))))));
        var_11 &= ((/* implicit */short) ((((/* implicit */int) arr_3 [i_0 - 1])) >> (((((/* implicit */int) arr_2 [10LL])) - (35278)))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            var_12 = ((/* implicit */unsigned short) (_Bool)1);
            var_13 = ((/* implicit */long long int) ((unsigned int) (~(((/* implicit */int) arr_3 [i_0])))));
        }
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((unsigned long long int) arr_1 [0])))));
    }
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        for (unsigned short i_3 = 3; i_3 < 9; i_3 += 3) 
        {
            {
                arr_14 [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)7)) & (((/* implicit */int) ((_Bool) (unsigned short)39397)))));
                var_15 = ((/* implicit */int) ((((0ULL) < (((/* implicit */unsigned long long int) 7325979959926889149LL)))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2]))) & (arr_0 [i_2]))))));
                /* LoopSeq 3 */
                for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    var_16 += ((/* implicit */int) ((((long long int) var_1)) < (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_13 [i_2])) && (((/* implicit */_Bool) var_0)))))))));
                    arr_17 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) var_7);
                }
                /* vectorizable */
                for (long long int i_5 = 2; i_5 < 8; i_5 += 2) 
                {
                    var_17 = ((int) ((((/* implicit */int) (unsigned short)26135)) << (((/* implicit */int) arr_9 [i_3]))));
                    var_18 = ((/* implicit */unsigned int) ((long long int) (short)-32750));
                    arr_21 [i_2] [i_2] [i_5] |= ((/* implicit */short) ((arr_1 [i_2]) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_5])) || (((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_5]))))))));
                    arr_22 [i_2] = ((/* implicit */unsigned short) ((6385839168986461314ULL) % (((/* implicit */unsigned long long int) 1862215198U))));
                    var_19 = ((var_3) && (((((/* implicit */_Bool) 1445282100U)) && (((/* implicit */_Bool) 3538743211U)))));
                }
                /* vectorizable */
                for (long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                {
                    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_1))));
                    var_21 = ((/* implicit */unsigned int) ((arr_12 [i_3 - 2] [i_3 - 3] [i_3 + 1]) | (arr_12 [i_3 - 3] [i_3 - 2] [i_3 - 1])));
                }
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) max((var_22), (var_7)));
    var_23 = (-(((((/* implicit */int) ((unsigned short) var_9))) >> ((((-(((/* implicit */int) (short)20913)))) + (20943))))));
}
