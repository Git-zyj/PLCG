/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97840
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
    var_12 = ((/* implicit */signed char) (+(((long long int) (signed char)-109))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 11; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) arr_1 [i_0] [i_0])) : (arr_0 [i_0]))) : (((/* implicit */long long int) arr_1 [i_0] [i_0]))));
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (-(1088965925))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 3; i_1 < 11; i_1 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */_Bool) ((((unsigned long long int) var_9)) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
        var_15 = ((/* implicit */unsigned long long int) var_1);
        var_16 = ((/* implicit */unsigned short) arr_4 [i_1]);
    }
    for (short i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        var_17 += ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (arr_5 [i_2] [i_2]) : (((/* implicit */int) var_11)))))));
        /* LoopNest 2 */
        for (short i_3 = 4; i_3 < 21; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) var_2)), (9789445280382160119ULL))) << (((/* implicit */int) arr_15 [i_2] [i_3] [i_3]))));
                            var_19 = ((/* implicit */short) arr_11 [i_4] [i_4]);
                        }
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) arr_12 [i_3] [i_3] [i_3] [i_3]))));
                        var_21 |= (-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_3] [i_3] [i_3] [i_4] [i_2] [i_3] [i_2]))) % (8855200562008637202ULL))));
                    }
                    var_22 &= ((/* implicit */unsigned long long int) arr_6 [i_3]);
                }
            } 
        } 
    }
    var_23 &= ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-64)) % (((/* implicit */int) ((unsigned char) var_4)))));
}
