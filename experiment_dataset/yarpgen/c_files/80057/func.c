/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80057
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
    var_19 = ((/* implicit */unsigned long long int) var_17);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) /* same iter space */
    {
        arr_2 [(short)14] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((unsigned long long int) arr_1 [i_0])) : (((/* implicit */unsigned long long int) ((3034972841U) - (3019403085U)))))), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))));
        var_20 += ((/* implicit */short) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)14)) && (arr_0 [i_0] [1U]))))) == (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) var_5)) : (arr_1 [i_0])))))));
        var_21 = arr_1 [(signed char)5];
    }
    for (short i_1 = 0; i_1 < 23; i_1 += 3) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */long long int) arr_4 [i_1]);
        arr_6 [i_1] = ((/* implicit */unsigned int) max(((+(((long long int) arr_3 [i_1] [i_1])))), (((/* implicit */long long int) max((((short) (unsigned short)41365)), (((/* implicit */short) arr_0 [i_1] [i_1])))))));
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (signed char)-100)), (max((max((((/* implicit */unsigned char) arr_0 [i_1] [i_1])), ((unsigned char)249))), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_1]))) > (2409918098U)))))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    {
                        arr_14 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) arr_13 [15U] [15U]))))));
                        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) arr_10 [i_2]))));
                    }
                } 
            } 
        } 
    }
}
