/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56366
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
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) var_3))));
    var_21 = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 770733585397942320LL)) || (((/* implicit */_Bool) -1)))))) + (var_10));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                var_22 -= ((/* implicit */unsigned int) ((_Bool) max((0U), (((/* implicit */unsigned int) (short)428)))));
                var_23 = ((/* implicit */long long int) ((((((/* implicit */int) arr_4 [i_0] [i_1 + 2] [i_0])) * (((/* implicit */int) var_9)))) == ((-(((/* implicit */int) (unsigned char)28))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (long long int i_2 = 3; i_2 < 21; i_2 += 1) 
    {
        var_24 = ((/* implicit */short) ((unsigned int) (+(((/* implicit */int) arr_6 [i_2] [i_2 - 3])))));
        var_25 += ((/* implicit */long long int) (+(((((/* implicit */int) (!(arr_6 [i_2] [i_2])))) * (((/* implicit */int) arr_7 [i_2 - 2] [i_2 - 2]))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_26 = ((/* implicit */_Bool) arr_2 [i_3]);
        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (~(var_16))))));
        arr_11 [i_3] [i_3] = ((((/* implicit */_Bool) (short)-12822)) ? (min((-6741087997723518030LL), (-2101465281977881145LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)9154)) ? (((/* implicit */int) (short)428)) : (((/* implicit */int) (short)-32752))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_5 = 2; i_5 < 11; i_5 += 1) 
        {
            for (int i_6 = 1; i_6 < 14; i_6 += 1) 
            {
                {
                    var_28 = ((/* implicit */_Bool) (~(min(((~(((/* implicit */int) (short)-26241)))), (((/* implicit */int) var_4))))));
                    var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) (((~(((arr_5 [i_6]) ? (((/* implicit */unsigned int) -1)) : (4218673889U))))) % (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (short)-26241)))))))));
                    arr_18 [i_4] [i_4] = ((/* implicit */unsigned int) ((var_8) ? (((((/* implicit */_Bool) ((var_14) + (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4])))))) ? (((/* implicit */long long int) ((arr_13 [i_4]) ? (((/* implicit */int) arr_5 [i_4])) : (((/* implicit */int) arr_14 [6LL] [4U]))))) : (((((/* implicit */_Bool) 2101465281977881158LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (0LL))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
        var_30 = ((/* implicit */short) ((((/* implicit */int) (short)-11972)) & (((/* implicit */int) (_Bool)1))));
    }
    var_31 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) 4U)) * (-1LL)))))))));
}
