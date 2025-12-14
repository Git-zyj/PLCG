/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77234
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
    var_20 = ((/* implicit */short) min((((/* implicit */long long int) max((var_1), (min((3555924286U), (((/* implicit */unsigned int) (short)-9868))))))), ((+(var_8)))));
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2347036938495070548LL)) | (7398283256683714984ULL))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) min((arr_1 [i_0]), (((/* implicit */int) (short)-27316))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 4; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1 + 2] [i_0] [i_1 + 2] = ((/* implicit */signed char) (~((((-(((/* implicit */int) (short)9855)))) ^ (((/* implicit */int) arr_3 [i_0] [i_0]))))));
                    arr_8 [17ULL] [i_0] [i_1] [i_0] = ((min((((int) 797819410U)), (((((/* implicit */int) arr_0 [i_0])) / (var_13))))) - (((/* implicit */int) (short)-9866)));
                    var_22 = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_9)) : (31744ULL))))))), ((+((-(((/* implicit */int) (short)9854))))))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned short) (-(var_13)));
}
