/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9931
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
    var_13 += ((/* implicit */unsigned long long int) var_1);
    var_14 &= ((/* implicit */_Bool) ((unsigned char) var_1));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) arr_1 [i_0]))));
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) arr_0 [i_0]))));
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((4806346427455490371LL) ^ (((/* implicit */long long int) ((unsigned int) 1154442907)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4499824350407401633ULL)))))) : (16U)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_1 [i_1])))) : (((((/* implicit */_Bool) 16808688919341656432ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) : (arr_0 [i_1])))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        arr_15 [i_3] = ((((/* implicit */_Bool) arr_13 [i_3] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_4] [i_3]))) : (var_10));
                        arr_16 [2ULL] [i_2] [i_3] [2ULL] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)3378)) | (((/* implicit */int) (unsigned short)31930))));
                        arr_17 [i_2] [i_2] [i_3] [i_3] = ((((/* implicit */_Bool) arr_14 [i_1] [i_2] [i_2] [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned char)19]))) : (arr_9 [i_1] [i_2] [i_1] [i_4]));
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) 11110342019055578432ULL))));
                    }
                    arr_18 [i_3] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (unsigned char)139))) ? ((-(var_5))) : (3758096384U)));
                }
            } 
        } 
    }
}
