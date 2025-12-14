/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8569
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
    var_17 = ((/* implicit */unsigned short) -1LL);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)-28))))) ? ((~(arr_1 [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)40)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-28))) : (var_1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : (((/* implicit */int) arr_0 [i_0])))))));
        var_19 = ((/* implicit */short) 32256U);
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 12; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */long long int) (+(((((/* implicit */int) var_5)) ^ (((/* implicit */int) (signed char)25))))))) % (((((/* implicit */_Bool) ((3563517897355364252LL) % (-2337895255322059398LL)))) ? (((((/* implicit */_Bool) var_9)) ? (3563517897355364252LL) : (-2337895255322059417LL))) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1)))))))));
                    var_21 = ((/* implicit */long long int) arr_2 [i_1 - 1] [i_0]);
                }
            } 
        } 
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (!(arr_7 [i_3]))))));
        var_23 ^= ((/* implicit */long long int) (((!(((/* implicit */_Bool) (-(((/* implicit */int) (short)30171))))))) || ((((_Bool)1) || (((/* implicit */_Bool) arr_6 [(short)14]))))));
    }
    for (short i_4 = 1; i_4 < 8; i_4 += 3) 
    {
        var_24 = ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((((((/* implicit */_Bool) (unsigned short)46891)) ? (((/* implicit */unsigned long long int) -1686859060)) : (var_1))) >> (((/* implicit */int) arr_7 [i_4])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_4 - 1] [i_4] [i_4 + 2]))));
        arr_11 [i_4 + 2] = ((/* implicit */int) (-((-(arr_5 [i_4 - 1] [i_4 + 1])))));
    }
    var_25 = ((((/* implicit */_Bool) (-(var_3)))) ? (((/* implicit */long long int) (~(641358969)))) : (((137170518016LL) % (((/* implicit */long long int) ((/* implicit */int) (short)-30172))))));
}
