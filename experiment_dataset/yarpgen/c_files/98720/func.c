/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98720
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
    var_19 = ((/* implicit */unsigned short) var_13);
    var_20 = ((/* implicit */unsigned short) (+(var_15)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((var_4) ? ((+((-(var_0))))) : (((/* implicit */int) var_8))));
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 14; i_2 += 1) 
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) var_8);
                    arr_9 [i_0] [i_0] [i_0] [i_0] = min((((((/* implicit */_Bool) min(((unsigned short)1844), ((unsigned short)50706)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)127)) != (var_2)))) : ((-(((/* implicit */int) arr_3 [i_0])))))), (((var_0) - (max((((/* implicit */int) arr_4 [i_1])), (var_0))))));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_3 = 2; i_3 < 16; i_3 += 3) 
    {
        for (int i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_21 &= ((((/* implicit */_Bool) ((signed char) ((((/* implicit */long long int) var_11)) + (arr_12 [i_3] [12]))))) ? (((/* implicit */int) ((short) arr_15 [i_3 + 3]))) : (((/* implicit */int) ((signed char) (+(((/* implicit */int) arr_16 [i_3] [i_3] [i_5])))))));
                    var_22 = ((/* implicit */_Bool) var_0);
                    var_23 |= ((/* implicit */unsigned short) ((_Bool) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (2062585568U)))));
                }
            } 
        } 
    } 
}
