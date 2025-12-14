/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75974
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */long long int) 2877572915U)), (var_15))));
                arr_7 [i_0] [i_1] [i_1] = (~(((/* implicit */int) ((signed char) var_11))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    var_19 += ((((/* implicit */_Bool) ((var_14) >> (((((/* implicit */int) var_11)) - (13921)))))) || ((!(((/* implicit */_Bool) max((arr_9 [i_0 - 3] [i_1] [i_2]), (((/* implicit */unsigned short) arr_0 [i_1]))))))));
                    arr_10 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (unsigned short)41515))))))), (max((((819092966809574592ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))))), (((/* implicit */unsigned long long int) arr_5 [i_0 - 2]))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        arr_14 [i_0] [i_1] [i_2] [(signed char)5] = ((/* implicit */unsigned long long int) (signed char)(-127 - 1));
                        var_20 = ((/* implicit */int) var_2);
                        var_21 ^= ((/* implicit */unsigned long long int) ((unsigned short) max((((/* implicit */int) var_8)), (((((/* implicit */_Bool) arr_9 [i_0] [14ULL] [i_0])) ? (((/* implicit */int) arr_2 [0])) : (((/* implicit */int) var_10)))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_17 [i_0] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) max((arr_1 [i_0 - 3] [i_0 - 2]), (((((/* implicit */int) var_8)) > (((/* implicit */int) arr_4 [i_4])))))))));
                        var_22 = ((/* implicit */unsigned short) max((var_22), (var_8)));
                    }
                }
                /* vectorizable */
                for (unsigned int i_5 = 2; i_5 < 17; i_5 += 1) 
                {
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_16 [i_5 + 2] [i_5] [i_5 + 2] [i_5 + 2] [i_5] [i_5])))) ? ((~(var_3))) : (((/* implicit */unsigned long long int) var_9))));
                    arr_20 [i_1] [i_0] = ((/* implicit */unsigned short) var_10);
                }
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) | (((((/* implicit */_Bool) 5868013574628926112ULL)) ? (var_6) : (((/* implicit */int) var_12))))))) ? (min((((/* implicit */int) var_17)), ((-(((/* implicit */int) (signed char)(-127 - 1))))))) : (((/* implicit */int) var_11))));
}
