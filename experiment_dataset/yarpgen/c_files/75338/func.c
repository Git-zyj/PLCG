/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75338
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
    var_10 = ((/* implicit */_Bool) (-(var_1)));
    var_11 ^= ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (signed char)40)) : (((/* implicit */int) (short)-11))));
    var_12 = ((/* implicit */unsigned long long int) var_2);
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)24007)) ? (var_3) : (var_0))) & ((-(((/* implicit */int) (signed char)-53))))))) ? (((/* implicit */int) ((((/* implicit */int) ((short) 364113966U))) <= (((((/* implicit */_Bool) var_4)) ? (536869888) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */int) var_7))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = arr_1 [i_0] [i_0];
        /* LoopNest 3 */
        for (long long int i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                for (long long int i_3 = 2; i_3 < 15; i_3 += 2) 
                {
                    {
                        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) 1749316096U)) ? (13913968774604212452ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_3 + 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) arr_0 [i_0] [i_3 + 2])) / (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2] [i_3] [i_2 + 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) : (((((/* implicit */_Bool) arr_9 [i_3] [i_1 - 1] [i_3] [i_0] [i_3])) ? (((/* implicit */int) ((unsigned short) var_7))) : (((arr_0 [i_0] [i_1]) ? (var_5) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))));
                        var_15 = ((/* implicit */unsigned long long int) arr_6 [i_2] [i_2] [i_2] [i_2]);
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((var_0), (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))))))))));
        var_17 = ((/* implicit */unsigned short) var_7);
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
    {
        arr_15 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_14 [i_4])));
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)78)) : (((/* implicit */int) (_Bool)1))));
        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_4]))));
        arr_16 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-55)) < (((/* implicit */int) (_Bool)1))));
    }
    for (unsigned long long int i_5 = 2; i_5 < 22; i_5 += 1) 
    {
        var_20 = ((/* implicit */int) max((var_20), (((int) (-(((/* implicit */int) var_4)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_6 = 3; i_6 < 22; i_6 += 4) 
        {
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 481277476U)) ? ((((_Bool)1) ? (17454747090944LL) : (((/* implicit */long long int) 481277455U)))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            arr_23 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (1060844486) : (((/* implicit */int) ((signed char) 14680064LL)))));
        }
    }
}
