/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81611
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
    var_12 |= ((/* implicit */signed char) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_9)))) : (0LL)));
    var_13 = ((/* implicit */unsigned char) -13LL);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) var_6))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) (unsigned char)239))) >> (((arr_3 [i_2] [i_2] [i_2]) - (1250783993)))));
                    var_16 = ((/* implicit */unsigned int) ((unsigned char) ((unsigned int) var_8)));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */short) ((((/* implicit */int) max((arr_5 [i_0] [i_1] [i_2]), (arr_11 [(_Bool)1] [i_2] [i_2] [i_3])))) / (((/* implicit */int) max((arr_11 [i_0] [i_2] [i_0] [i_0]), (arr_11 [i_0] [i_2] [i_2] [i_3]))))));
                        var_18 = ((/* implicit */_Bool) ((((-13LL) != (((/* implicit */long long int) ((/* implicit */int) ((short) var_5)))))) ? (((((/* implicit */_Bool) ((unsigned int) 5LL))) ? (((/* implicit */long long int) ((unsigned int) -33LL))) : (((((/* implicit */_Bool) arr_4 [6LL])) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))))))) : (((long long int) 8403634104150558258ULL))));
                    }
                    var_19 &= ((/* implicit */short) ((((/* implicit */_Bool) 0LL)) ? (5330097269355446917ULL) : (max((((/* implicit */unsigned long long int) arr_10 [i_2] [i_1] [i_0])), (var_7)))));
                    var_20 = ((/* implicit */int) ((unsigned short) max((((((/* implicit */_Bool) -1318319369)) ? (16696638606202356261ULL) : (((/* implicit */unsigned long long int) -7LL)))), (((/* implicit */unsigned long long int) max((arr_0 [i_2]), (var_9)))))));
                }
            } 
        } 
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) min((((_Bool) max((12LL), (1LL)))), (((((/* implicit */_Bool) ((short) 3890980773029507350ULL))) || (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) > (-33LL))))))))));
    }
}
