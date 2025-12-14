/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92956
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
    var_17 = ((/* implicit */unsigned long long int) var_7);
    var_18 = var_2;
    /* LoopSeq 1 */
    for (unsigned short i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */int) arr_1 [i_0 + 1])) > (((/* implicit */int) arr_0 [i_0 - 4])))), ((!(((/* implicit */_Bool) arr_0 [i_0 - 4]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (signed char i_2 = 3; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_10 [i_1] [i_2] [i_2] [i_1] = ((/* implicit */unsigned short) (~((+(((/* implicit */int) var_7))))));
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)26328)) | (((/* implicit */int) (short)10415))))) ? (((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [(unsigned char)9] [7ULL]))))), (arr_0 [i_0])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((214737645U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49184)))))) != (max((((/* implicit */unsigned long long int) var_1)), (arr_9 [i_0] [i_1] [i_0])))))))))));
                    var_20 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_2 - 2] [i_2 - 3] [i_2 - 3])) > (((/* implicit */int) arr_5 [i_2 - 2] [i_2 + 1] [i_2 - 1])))))) % (((arr_7 [i_2 + 1] [i_0] [i_2 + 2]) * (((/* implicit */unsigned long long int) var_5))))));
                }
            } 
        } 
    }
}
