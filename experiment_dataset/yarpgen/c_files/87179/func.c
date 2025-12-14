/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87179
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
    var_19 = ((/* implicit */short) (+(var_4)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((_Bool) arr_1 [i_0 + 1]));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) arr_1 [i_0]);
            arr_6 [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */int) var_16)) << (((((arr_1 [i_1]) + (8148788515497516514LL))) - (10LL)))))) || (((/* implicit */_Bool) var_2)));
            arr_7 [i_0] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
            arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0 - 1]);
            arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) var_16);
        }
        for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    for (short i_5 = 3; i_5 < 17; i_5 += 1) 
                    {
                        {
                            arr_19 [(unsigned short)12] = ((/* implicit */unsigned short) ((arr_14 [i_0 - 1] [i_0] [i_0 + 1] [i_5 - 2]) ^ (arr_14 [i_0 - 1] [i_0] [i_0 - 1] [i_5 - 1])));
                            arr_20 [i_0] [(short)0] [(short)0] [i_4] [(short)0] = ((/* implicit */_Bool) arr_11 [(_Bool)1] [(_Bool)1] [i_4]);
                            arr_21 [i_5] [i_5] [(unsigned short)5] [i_5] [(_Bool)1] |= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [i_4] [(unsigned short)4] [(unsigned char)17]))));
                        }
                    } 
                } 
            } 
            arr_22 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_0 + 1] [(signed char)8] [i_0 - 1] [i_0 - 1] [i_2] [i_0])) >= (((/* implicit */int) arr_10 [i_0 + 1] [i_2] [i_2]))));
        }
        arr_23 [i_0 + 1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_0] [i_0] [(short)3]))));
    }
    var_20 = ((/* implicit */unsigned char) (-(((((/* implicit */int) ((signed char) var_6))) - (((/* implicit */int) max((var_11), (((/* implicit */unsigned char) var_5)))))))));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) / (min((((/* implicit */unsigned long long int) min((var_12), (((/* implicit */short) var_5))))), ((-(var_8)))))));
}
