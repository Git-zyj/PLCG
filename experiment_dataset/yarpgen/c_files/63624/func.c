/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63624
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        arr_2 [(unsigned char)18] = ((/* implicit */short) ((arr_0 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (((2207685881019032563ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
        var_16 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            for (signed char i_3 = 1; i_3 < 20; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    {
                        arr_18 [i_1] [i_1] [i_1] [i_1] [i_2] = var_2;
                        var_17 = ((/* implicit */unsigned char) arr_12 [i_2] [i_3 + 1]);
                        var_18 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_14 [i_1] [i_2] [i_3] [i_4])), (16239058192690519065ULL)));
                        arr_19 [i_2] [i_2] [i_2] [i_2 + 1] [i_2] = ((/* implicit */long long int) (!((_Bool)1)));
                    }
                } 
            } 
        } 
        arr_20 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_4)))) ? (-8692228359750557059LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1]))))))));
        arr_21 [i_1] = arr_4 [(_Bool)1] [i_1];
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        var_19 *= ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_5] [i_5])) + (((/* implicit */int) arr_12 [i_5] [i_5]))));
        var_20 = (_Bool)1;
        arr_25 [(unsigned short)7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_5] [i_5])) && (((/* implicit */_Bool) arr_15 [i_5] [i_5] [i_5] [i_5]))));
    }
}
