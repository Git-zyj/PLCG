/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62208
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
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) var_2))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
                    /* LoopSeq 1 */
                    for (signed char i_3 = 3; i_3 < 20; i_3 += 1) 
                    {
                        var_21 = ((/* implicit */signed char) min(((((+(((/* implicit */int) (unsigned short)21473)))) ^ (((((/* implicit */_Bool) arr_4 [i_0] [(_Bool)1] [i_2])) ? (arr_1 [i_2]) : (((/* implicit */int) arr_3 [i_3] [i_1])))))), ((-(((/* implicit */int) ((signed char) arr_2 [i_3])))))));
                        arr_11 [i_0] [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
                        var_22 &= ((/* implicit */int) var_17);
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) max((((((/* implicit */int) arr_7 [i_1 + 1] [i_1 + 1] [i_3 - 2])) << (((((/* implicit */int) (unsigned short)23534)) - (23529))))), ((-(282157163))))))));
                    }
                    arr_12 [i_0] [i_1] [i_0] = ((/* implicit */int) min((((((/* implicit */unsigned int) arr_0 [i_1 + 1] [i_1 + 1])) | (arr_2 [i_1 + 1]))), (((/* implicit */unsigned int) ((int) arr_2 [i_1 + 1])))));
                }
            } 
        } 
    } 
}
