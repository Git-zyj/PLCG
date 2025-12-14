/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67597
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        arr_2 [(_Bool)1] = var_11;
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) var_11);
        var_20 = ((/* implicit */signed char) ((long long int) (+(((/* implicit */int) (signed char)79)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) min((min((((((/* implicit */_Bool) (unsigned char)71)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-27252))) : (arr_1 [i_1]))), (((/* implicit */unsigned int) (signed char)-106)))), (((/* implicit */unsigned int) ((short) ((2783141834U) << (((-1LL) + (7LL)))))))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                {
                    var_22 = ((/* implicit */long long int) ((unsigned int) (unsigned char)66));
                    arr_12 [i_1] [8U] [i_1] = ((/* implicit */_Bool) max((939524096), ((-(arr_6 [i_1])))));
                    arr_13 [9] [i_1] [i_3] = ((/* implicit */int) ((unsigned int) ((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-119)))) & ((~(((/* implicit */int) (unsigned char)184)))))));
                    arr_14 [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (signed char)119)), (((arr_11 [i_1] [i_1]) ^ (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)76)))))))));
                }
            } 
        } 
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_23 = ((/* implicit */unsigned char) var_8);
        var_24 = ((/* implicit */_Bool) max((((/* implicit */int) ((short) (signed char)-103))), (((((/* implicit */_Bool) 2783141827U)) ? (((/* implicit */int) (unsigned char)184)) : (((/* implicit */int) (signed char)81))))));
        arr_17 [2ULL] [2ULL] |= ((/* implicit */_Bool) (short)32766);
    }
    var_25 = ((/* implicit */short) var_17);
    var_26 = (unsigned char)24;
    var_27 = ((signed char) (~(((var_8) ? (var_19) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
}
