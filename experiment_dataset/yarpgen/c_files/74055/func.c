/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74055
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_4 [(unsigned char)10] |= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (2454710042U)));
        var_20 -= ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) ((((/* implicit */int) (signed char)-55)) + (((/* implicit */int) ((signed char) var_10))))))));
        var_21 += ((/* implicit */signed char) arr_1 [i_0]);
    }
    for (short i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) % (((min((arr_6 [i_1] [i_1]), ((_Bool)1))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))) : (max((var_16), (((/* implicit */unsigned int) var_0))))))));
        var_22 ^= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)65531)) >= (((/* implicit */int) (signed char)-55))))) <= (((/* implicit */int) (unsigned char)255))));
        var_23 = ((/* implicit */int) arr_6 [i_1] [i_1]);
        var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((unsigned long long int) arr_6 [i_1] [i_1])))))));
        var_25 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)45399)), (var_8)))) ? (((/* implicit */int) (unsigned short)65531)) : (((/* implicit */int) (unsigned short)20137)))) ^ ((~(-1652978778)))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_3 = 3; i_3 < 12; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_15 [i_2] [i_3] [(unsigned short)8] [i_4] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_3 [i_3 - 1] [i_2])) : ((~(((/* implicit */int) arr_1 [i_2]))))));
                    arr_16 [i_2] [i_3] [i_2] [i_3] = ((/* implicit */short) (~(((/* implicit */int) arr_11 [i_3 + 2] [i_3 - 2]))));
                }
            } 
        } 
        var_26 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_3)) <= (arr_12 [(_Bool)1])));
        arr_17 [i_2] [i_2] = ((/* implicit */unsigned short) ((unsigned char) ((arr_12 [i_2]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2] [i_2]))))));
        var_27 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((16515072) >= (1652978778)))) : (((/* implicit */int) var_1))));
    }
    var_28 *= ((/* implicit */unsigned char) var_8);
}
