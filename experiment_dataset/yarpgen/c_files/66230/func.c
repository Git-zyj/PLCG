/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66230
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
    var_11 = ((/* implicit */unsigned short) min((max((((((/* implicit */long long int) var_2)) & (var_7))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_1))))))), (((((/* implicit */_Bool) min((-19LL), (var_7)))) ? (max((-24LL), (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) ((int) var_8)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        var_12 |= ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_1)) / (((/* implicit */int) var_0))))) * (23LL)));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)32767))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                for (unsigned char i_3 = 2; i_3 < 20; i_3 += 2) 
                {
                    {
                        var_13 = ((/* implicit */long long int) (((+(((/* implicit */int) (short)-30028)))) == (((/* implicit */int) arr_6 [i_2 - 2] [i_2] [i_2 - 2]))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 1; i_4 < 19; i_4 += 1) 
                        {
                            var_14 = ((/* implicit */int) max((var_14), ((((-(((/* implicit */int) arr_2 [i_3])))) / (((/* implicit */int) arr_10 [i_0 + 1] [i_0 + 1]))))));
                            var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) 3LL)) ? (((/* implicit */int) (short)32758)) : (var_2))))));
                        }
                    }
                } 
            } 
        } 
    }
}
