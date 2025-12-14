/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88869
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) (-(((unsigned long long int) arr_3 [12U] [12U])))))));
            arr_5 [i_0] [i_0] = ((/* implicit */long long int) arr_2 [i_1] [i_1 - 1] [i_0]);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                for (short i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        {
                            var_14 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) arr_4 [i_3])))))) ? (arr_10 [i_2] [i_3] [i_4] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_5] [i_5])))));
                            var_15 ^= ((/* implicit */int) (-(3560750653083861539ULL)));
                            arr_16 [i_5] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) (((-(((/* implicit */int) arr_0 [i_0] [i_0])))) / (((/* implicit */int) arr_8 [i_4]))))) >= (((var_1) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_4] [i_2]))) : (var_4))) : (((/* implicit */long long int) ((unsigned int) arr_7 [i_0])))))));
                        }
                    } 
                } 
            } 
            var_16 ^= ((/* implicit */signed char) (-((+(((/* implicit */int) arr_15 [i_0] [i_2]))))));
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 15; i_6 += 1) 
            {
                for (int i_7 = 1; i_7 < 12; i_7 += 2) 
                {
                    {
                        var_17 = ((/* implicit */int) (((-((-(arr_12 [i_7 + 1] [i_0] [i_2]))))) << (((((/* implicit */int) var_6)) - (4481)))));
                        arr_23 [i_0] [i_0] [i_6] [i_7] [4U] [i_0] = ((/* implicit */_Bool) ((unsigned short) arr_10 [i_0] [i_0] [i_6] [i_7 - 1]));
                    }
                } 
            } 
            var_18 = ((/* implicit */unsigned short) var_8);
        }
        var_19 ^= ((/* implicit */signed char) (-(((/* implicit */int) (signed char)92))));
    }
    var_20 = var_1;
}
