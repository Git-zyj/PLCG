/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83869
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
    var_14 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_10))) ? (((/* implicit */int) var_0)) : (min((var_2), (((/* implicit */int) var_11))))))), (max((((/* implicit */unsigned long long int) var_6)), (max((var_9), (((/* implicit */unsigned long long int) var_13))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((short) ((signed char) arr_7 [i_1 - 2] [i_1 - 2] [i_1 - 3] [i_1 + 3]))))));
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((max((var_4), (((/* implicit */unsigned int) arr_5 [i_2] [i_1])))) > (arr_8 [i_0] [i_0])));
                    var_16 = ((/* implicit */unsigned long long int) ((short) max((arr_2 [i_0]), (arr_2 [i_0]))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_3 = 3; i_3 < 12; i_3 += 1) 
    {
        for (signed char i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            for (unsigned int i_5 = 0; i_5 < 16; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_21 [i_3] [i_5] [i_5] [i_6] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (max((((/* implicit */int) (_Bool)1)), (1318288309)))))) ? (((/* implicit */int) max((arr_18 [i_3 + 3] [(_Bool)1] [i_3 + 3] [i_3 + 3] [i_3 - 2]), (arr_18 [i_3 + 1] [i_3 + 3] [i_3 + 4] [i_3 + 3] [i_3 + 3])))) : (min((((/* implicit */int) (_Bool)1)), (max((1567912542), (((/* implicit */int) (signed char)118))))))));
                                arr_22 [i_3 - 3] [i_3 - 3] [i_5] [i_5] [i_5] = ((/* implicit */short) min((min((arr_18 [i_3 + 4] [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_3 + 2]), (((/* implicit */unsigned short) (signed char)95)))), (((/* implicit */unsigned short) ((_Bool) ((signed char) (unsigned short)65535))))));
                            }
                        } 
                    } 
                    arr_23 [i_3] [i_5] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_8))))))), (((((/* implicit */_Bool) ((unsigned short) var_4))) ? (((((/* implicit */_Bool) (unsigned short)51250)) ? (((/* implicit */unsigned long long int) 3829966906U)) : (2439858044008657954ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_13 [i_3] [(short)8] [i_5]), (((/* implicit */unsigned short) arr_1 [i_3]))))))))));
                    var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_2 [i_3]), (arr_2 [i_3])))) ? (((/* implicit */int) max((((/* implicit */short) var_10)), (max(((short)-24585), (((/* implicit */short) (signed char)126))))))) : (max((((/* implicit */int) (signed char)-45)), ((-(((/* implicit */int) (unsigned char)2))))))));
                }
            } 
        } 
    } 
}
