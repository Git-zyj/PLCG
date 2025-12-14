/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75728
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    var_12 = ((/* implicit */signed char) (+(min((((/* implicit */unsigned long long int) (unsigned short)15471)), (max((((/* implicit */unsigned long long int) arr_5 [i_0] [i_2] [i_2] [i_0])), (var_4)))))));
                    var_13 &= ((/* implicit */unsigned long long int) (~(((unsigned int) arr_0 [i_0] [i_0]))));
                }
                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) min((arr_3 [i_0]), ((~(var_6))))))));
                /* LoopSeq 1 */
                for (short i_3 = 3; i_3 < 19; i_3 += 4) 
                {
                    arr_10 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) max((max((var_3), (((/* implicit */unsigned short) (short)24588)))), (((unsigned short) var_8)))))));
                    arr_11 [i_0] [i_1] [i_3 + 1] [(short)5] = ((/* implicit */unsigned short) var_6);
                }
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)28100))))), (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))) : (var_10)))))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)15471))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) var_11))));
    var_17 = ((/* implicit */unsigned short) var_10);
}
