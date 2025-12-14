/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79222
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
    var_19 = ((/* implicit */unsigned short) max((((((/* implicit */int) var_16)) ^ (((/* implicit */int) (unsigned short)22681)))), (((/* implicit */int) ((unsigned short) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_1)))))));
    var_20 &= ((/* implicit */unsigned short) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_1] = ((/* implicit */short) ((unsigned short) var_8));
                var_21 = ((/* implicit */_Bool) max((((var_1) * (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 2]))))), (((/* implicit */unsigned int) ((signed char) (!(((/* implicit */_Bool) var_5))))))));
                var_22 &= ((/* implicit */unsigned int) var_14);
                arr_8 [i_0] |= ((unsigned short) arr_2 [i_0]);
                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0 + 3])) * (((/* implicit */int) arr_6 [i_0 - 2]))))) ? (((/* implicit */int) arr_1 [i_1])) : (max((((/* implicit */int) max((arr_5 [i_0 - 1] [i_1] [i_1]), (((/* implicit */unsigned short) (unsigned char)0))))), (((((/* implicit */_Bool) (unsigned short)42855)) ? (((/* implicit */int) (short)-17156)) : (((/* implicit */int) var_17))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        for (int i_3 = 2; i_3 < 19; i_3 += 1) 
        {
            {
                var_24 = ((/* implicit */_Bool) ((min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_12 [i_2] [i_2] [i_2])) : (((/* implicit */int) (short)-17156)))), (max((((/* implicit */int) (unsigned short)65534)), (arr_11 [(unsigned short)14]))))) << (((unsigned int) ((((/* implicit */int) (unsigned char)21)) <= (((/* implicit */int) var_14)))))));
                arr_15 [i_2] [i_2] = ((/* implicit */unsigned char) max(((~(((/* implicit */int) arr_14 [i_2])))), (((((/* implicit */int) arr_14 [i_2])) | (((/* implicit */int) arr_14 [i_2]))))));
                arr_16 [i_2] = ((/* implicit */_Bool) (unsigned short)13);
                arr_17 [i_2] [i_2] = ((/* implicit */unsigned char) ((min((((/* implicit */int) var_6)), (((((/* implicit */int) var_3)) / (((/* implicit */int) arr_13 [6U] [i_3])))))) * (23)));
                var_25 ^= ((_Bool) (~(((/* implicit */int) (unsigned short)0))));
            }
        } 
    } 
}
