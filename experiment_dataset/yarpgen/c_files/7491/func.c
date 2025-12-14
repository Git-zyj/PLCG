/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7491
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_11 = ((/* implicit */short) var_9);
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    {
                        var_12 += ((/* implicit */long long int) ((((/* implicit */_Bool) 3623101167U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)14))) : (3623101189U)));
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) 0U);
                        var_13 += ((/* implicit */unsigned long long int) min((max((2182240320U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2168213996520458922LL)) ? (((/* implicit */int) (unsigned char)18)) : (-1687787152))))));
                        arr_12 [i_0] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */int) (unsigned char)14)) >> (((((/* implicit */int) var_4)) - (7)))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) /* same iter space */
    {
        arr_15 [i_4] = ((/* implicit */short) (((_Bool)0) ? (((/* implicit */int) (short)-30321)) : (((/* implicit */int) (unsigned char)232))));
        arr_16 [20] [i_4] |= ((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) (_Bool)1))));
        arr_17 [i_4] = ((/* implicit */signed char) 671866151U);
        /* LoopNest 2 */
        for (unsigned char i_5 = 2; i_5 < 22; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_23 [i_4] [i_4] [i_6] = ((/* implicit */int) (short)-19809);
                    arr_24 [i_4] [i_6] [i_4] = ((((/* implicit */_Bool) -8458961714913426871LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_7));
                }
            } 
        } 
        var_14 = ((/* implicit */short) (-(((((/* implicit */int) var_10)) | (((/* implicit */int) var_9))))));
    }
    for (unsigned short i_7 = 0; i_7 < 23; i_7 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned long long int) (~(-7757833295560981010LL)));
        arr_27 [i_7] = ((/* implicit */long long int) var_10);
    }
    var_16 = ((/* implicit */long long int) ((short) var_3));
}
