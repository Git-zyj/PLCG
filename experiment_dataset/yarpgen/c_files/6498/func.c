/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6498
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
    var_20 += ((/* implicit */unsigned char) var_1);
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */_Bool) ((signed char) var_14));
                var_22 = ((/* implicit */signed char) (~(((((arr_5 [i_0 - 1]) == (((/* implicit */int) var_14)))) ? (((((/* implicit */int) (unsigned char)143)) | (arr_5 [i_1]))) : ((~(((/* implicit */int) var_3))))))));
                arr_7 [i_1] [i_1] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (-(-951515243)))) ? (var_8) : (((/* implicit */long long int) arr_4 [i_1 - 2] [i_1 - 2] [i_1]))))));
            }
        } 
    } 
    var_23 += ((/* implicit */int) ((((/* implicit */int) ((short) var_19))) <= ((((-(((/* implicit */int) var_19)))) % (var_4)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_2 = 1; i_2 < 18; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                {
                    var_24 *= ((/* implicit */unsigned int) ((short) var_3));
                    arr_18 [i_2] [(_Bool)1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_2])) ? ((~(arr_12 [3U] [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            for (short i_6 = 0; i_6 < 19; i_6 += 1) 
            {
                {
                    var_25 = ((/* implicit */signed char) var_10);
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-28757)) ? (arr_17 [i_2]) : (arr_17 [i_2])));
                }
            } 
        } 
        var_27 = ((/* implicit */long long int) (short)-13929);
        arr_25 [i_2 - 1] [i_2] = ((/* implicit */unsigned char) ((arr_14 [i_2] [i_2 - 1] [i_2]) >> (((arr_12 [i_2] [i_2 - 1]) + (6510065300729203532LL)))));
    }
}
