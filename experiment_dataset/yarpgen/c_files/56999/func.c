/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56999
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
    var_12 += ((/* implicit */unsigned char) min((((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_11)))))))), ((~(-3845592903127554234LL)))));
    var_13 = ((/* implicit */_Bool) (-((~(((/* implicit */int) var_9))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 2; i_3 < 19; i_3 += 4) 
                    {
                        arr_10 [i_3] &= ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)11447)), (((((/* implicit */_Bool) arr_4 [i_0])) ? ((-(((/* implicit */int) (signed char)110)))) : (2147483637)))));
                        arr_11 [i_2] [i_1] [i_2] [i_3] [i_2] [i_3] = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_3] [i_3] [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)11447)))) & (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0] [i_3])) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])) : (768475872))))) / (((int) (unsigned char)253))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 2; i_4 < 19; i_4 += 4) 
                    {
                        var_14 = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned char) (signed char)-58)))));
                        arr_14 [i_4] [i_1] [i_2] &= ((/* implicit */_Bool) var_1);
                    }
                    arr_15 [i_2] [3LL] [3LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_11))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))));
                    var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(min((var_2), (((/* implicit */int) arr_0 [i_0])))))))));
                    var_16 += ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_0])))));
                    arr_16 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0])) & ((~((~(((/* implicit */int) var_4))))))));
                }
            } 
        } 
    } 
}
