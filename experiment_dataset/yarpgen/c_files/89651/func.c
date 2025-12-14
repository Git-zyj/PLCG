/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89651
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
    var_14 = ((/* implicit */_Bool) var_5);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) -1309800498)) && (((/* implicit */_Bool) ((2137927080U) + (((unsigned int) (unsigned char)74)))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (int i_4 = 2; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) min((((((/* implicit */_Bool) 54647475U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)1428))) : ((((_Bool)1) ? (461683834U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)56))))))), (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_13)))))))));
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_4] [i_2] = ((/* implicit */unsigned char) ((signed char) var_4));
                                arr_15 [i_0] [i_2] [i_4 - 2] = ((/* implicit */short) var_0);
                                arr_16 [i_0] [i_1] [i_1] [i_1] [i_2] [i_1] = ((/* implicit */signed char) var_9);
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned int) min((((/* implicit */int) var_13)), (((((/* implicit */_Bool) (unsigned char)106)) ? (((/* implicit */int) (unsigned char)143)) : (((/* implicit */int) var_12))))))) - (((unsigned int) var_8))));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        {
                            arr_23 [i_5] [i_5] [(_Bool)1] = ((/* implicit */_Bool) min((max((((/* implicit */unsigned int) var_7)), (max((((/* implicit */unsigned int) (_Bool)1)), (2897504974U))))), (((/* implicit */unsigned int) var_9))));
                            arr_24 [i_0] [i_1] [i_1] [i_5] [i_6] [i_6] = ((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1)))) - (var_9)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) var_4);
}
