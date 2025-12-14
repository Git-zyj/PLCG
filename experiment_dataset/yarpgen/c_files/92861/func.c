/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92861
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
    var_11 &= ((/* implicit */unsigned int) (~(((((/* implicit */int) min((((/* implicit */signed char) var_2)), (var_8)))) - (((/* implicit */int) var_1))))));
    var_12 = ((/* implicit */short) (+(max((((/* implicit */int) var_3)), (((var_3) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))))));
    var_13 = ((/* implicit */signed char) min((14U), (4294967269U)));
    var_14 = ((/* implicit */short) ((unsigned char) var_7));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) -6622186486602977428LL)))));
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_10 [i_0] [i_1 + 2] [i_1] [(signed char)1] [i_1 + 2] [i_3] = ((/* implicit */short) max((((/* implicit */long long int) arr_5 [i_0] [i_1] [i_2] [i_0])), (arr_9 [i_0] [i_1 + 2] [i_0] [i_3] [i_3] [i_1 + 2])));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_3] [i_3] [i_3] = ((/* implicit */short) ((unsigned char) (-(((-6622186486602977428LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)128))))))));
                            arr_15 [i_3] [i_1] [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_1 + 1] [i_1]))))) ? (((/* implicit */long long int) min((2141586879U), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)116))) - (4294967240U)))))) : ((-(arr_9 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1]))));
                            arr_16 [i_3] [i_2] [i_2] [(unsigned char)2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [(unsigned char)1] [i_2] [(short)4] [i_4])) ? (arr_3 [i_4] [i_2] [i_0]) : (arr_3 [i_4] [i_3] [i_0])))) ? (((/* implicit */int) min((arr_5 [i_0] [i_1] [i_2] [i_3]), (((/* implicit */signed char) min(((_Bool)1), ((_Bool)1))))))) : ((-(((/* implicit */int) arr_4 [i_0] [i_1 - 1]))))));
                        }
                    }
                } 
            } 
        } 
        arr_17 [i_0] = ((/* implicit */unsigned char) (!(((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) != (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) var_8)))))))));
    }
    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 1) 
    {
        arr_20 [i_5] [(signed char)10] &= arr_18 [i_5] [i_5];
        arr_21 [i_5] [i_5] = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_7))))) ? ((+(arr_19 [i_5]))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
        arr_22 [i_5] [i_5] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)128))) : (-6622186486602977458LL)))))))));
    }
    for (unsigned char i_6 = 1; i_6 < 16; i_6 += 3) 
    {
        arr_25 [i_6] = ((/* implicit */unsigned int) (((~(arr_19 [i_6 - 1]))) / (((long long int) var_9))));
        arr_26 [i_6] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_23 [i_6 - 1])) ? (((/* implicit */int) arr_23 [i_6 + 1])) : (((/* implicit */int) arr_23 [i_6 + 1])))) | (((/* implicit */int) arr_23 [i_6 - 1]))));
        arr_27 [13U] [i_6] = ((/* implicit */signed char) (-(((/* implicit */int) min((arr_24 [i_6 + 2]), (arr_24 [i_6 + 2]))))));
        arr_28 [i_6] [i_6] = ((/* implicit */unsigned int) max((((arr_19 [i_6]) - (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_6 + 2]))))), (((/* implicit */long long int) arr_23 [i_6 - 1]))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_31 [i_7] = ((/* implicit */signed char) arr_18 [i_7] [i_7]);
        arr_32 [i_7] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (((unsigned int) 16773120U))));
        arr_33 [i_7] &= ((signed char) arr_19 [i_7]);
    }
}
