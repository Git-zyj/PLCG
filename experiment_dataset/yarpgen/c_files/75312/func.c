/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75312
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
    var_19 = ((/* implicit */unsigned int) var_8);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                for (signed char i_3 = 3; i_3 < 9; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_2 - 1] [i_3 - 3] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2 + 1]))));
                        arr_12 [i_3] = ((/* implicit */short) max(((~(((/* implicit */int) ((unsigned short) (_Bool)1))))), ((-(((/* implicit */int) arr_3 [i_3 + 1] [i_3]))))));
                        arr_13 [i_0] [i_3] [i_2] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)44)))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */long long int) ((((/* implicit */int) min((arr_2 [i_0] [(_Bool)1]), (arr_2 [0ULL] [i_0])))) / ((((_Bool)1) ? (((/* implicit */int) arr_2 [i_0] [0ULL])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))));
    }
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_12)) + (2147483647))) >> (((((/* implicit */int) var_6)) - (1435)))))) ? (var_5) : (((/* implicit */long long int) ((((/* implicit */int) var_14)) | (((/* implicit */int) max((((/* implicit */short) var_15)), ((short)-8603)))))))));
}
