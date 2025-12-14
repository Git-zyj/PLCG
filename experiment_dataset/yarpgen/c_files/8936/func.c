/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8936
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
    var_12 = var_2;
    var_13 = var_11;
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) var_8);
        var_15 = ((/* implicit */signed char) var_0);
    }
    for (unsigned char i_1 = 1; i_1 < 15; i_1 += 1) 
    {
        var_16 -= ((/* implicit */signed char) var_9);
        var_17 &= ((/* implicit */unsigned char) arr_4 [i_1] [i_1]);
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (-(((/* implicit */int) ((_Bool) var_1))))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            arr_10 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((unsigned long long int) ((var_7) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_8 [i_2] [(signed char)7])))));
            arr_11 [i_2] [i_2] = ((/* implicit */unsigned char) arr_8 [i_2] [i_3]);
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */int) (signed char)96)) : (-1989258280)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_6 [i_2]))));
            arr_12 [i_2] [i_2] = ((/* implicit */unsigned char) arr_9 [i_2]);
        }
        var_20 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2]))) : (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_2])))))));
        arr_13 [(_Bool)1] |= ((/* implicit */unsigned char) ((((_Bool) arr_6 [i_2])) ? (((unsigned int) var_2)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 367657387)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-52)))))));
        /* LoopNest 2 */
        for (short i_4 = 2; i_4 < 24; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_21 ^= ((/* implicit */int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) arr_18 [(signed char)18] [2] [i_4 - 1])) ? (((/* implicit */unsigned long long int) ((int) var_2))) : (((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4])))))))));
                    arr_20 [i_2] [i_4] [i_2] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~((+(((/* implicit */int) var_6)))))))));
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) var_5))));
                }
            } 
        } 
    }
}
