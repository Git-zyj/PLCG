/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90688
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((long long int) (+(((int) arr_1 [i_0] [i_0])))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(arr_1 [i_0] [i_0]))))));
        arr_4 [i_0] = ((/* implicit */short) var_15);
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 18; i_1 += 3) /* same iter space */
    {
        var_18 = (((-(arr_0 [i_1] [i_1]))) / (arr_0 [i_1] [i_1]));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned int) arr_8 [i_1]);
    }
    for (unsigned long long int i_2 = 2; i_2 < 8; i_2 += 2) 
    {
        arr_13 [i_2] = ((/* implicit */_Bool) ((unsigned short) (~(1002920628))));
        /* LoopNest 3 */
        for (short i_3 = 1; i_3 < 8; i_3 += 3) 
        {
            for (unsigned int i_4 = 3; i_4 < 9; i_4 += 1) 
            {
                for (short i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    {
                        arr_21 [i_5] [i_5] [i_5] [i_2] |= ((/* implicit */int) (-(((arr_20 [i_3 + 2] [i_3]) | (((/* implicit */long long int) ((/* implicit */int) var_15)))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            arr_26 [i_6] [i_4 + 1] [i_4] [i_5] [i_3] [i_2 + 1] [i_3] = ((/* implicit */_Bool) ((long long int) ((short) (!(((/* implicit */_Bool) var_5))))));
                            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_17 [i_3] [i_3 - 1] [i_3 + 2]))) || (((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) arr_11 [i_2])))))))))));
                            arr_27 [i_2] [i_3] [i_4] [i_4 + 1] [i_5] [i_3] [i_3] = ((/* implicit */_Bool) arr_5 [i_2]);
                        }
                    }
                } 
            } 
        } 
        arr_28 [i_2 + 1] = ((/* implicit */long long int) ((_Bool) arr_25 [i_2] [i_2] [i_2 + 2] [i_2] [i_2]));
    }
    for (signed char i_7 = 0; i_7 < 15; i_7 += 2) 
    {
        arr_31 [i_7] = ((/* implicit */signed char) arr_30 [i_7]);
        arr_32 [i_7] = ((/* implicit */_Bool) var_1);
        var_20 = ((signed char) ((((/* implicit */int) var_15)) % (min((var_0), (var_3)))));
    }
    var_21 ^= ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_3)));
    var_22 = ((/* implicit */long long int) min((((unsigned long long int) var_5)), (((/* implicit */unsigned long long int) var_3))));
}
