/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73230
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
    var_12 += (unsigned short)42652;
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_13 *= ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned short)18212)), (((((((/* implicit */int) arr_5 [i_0 + 1])) * (((/* implicit */int) (unsigned short)2840)))) | (((/* implicit */int) ((((/* implicit */int) (unsigned short)8)) < (((/* implicit */int) var_8)))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_14 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((arr_9 [i_1] [(unsigned short)11] [(unsigned short)11]), ((unsigned short)1286)))) ? (((/* implicit */int) ((unsigned short) (unsigned short)60704))) : (((/* implicit */int) (unsigned short)45031)))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [(unsigned short)3] [i_1] [(unsigned short)3] [(unsigned short)3])))))));
                            arr_13 [i_3] = ((/* implicit */unsigned short) (((-(((/* implicit */int) (unsigned short)0)))) | (((/* implicit */int) (unsigned short)127))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        for (unsigned short i_5 = 3; i_5 < 11; i_5 += 1) 
        {
            {
                arr_21 [i_4] [i_5] [(unsigned short)11] = ((unsigned short) ((unsigned short) ((((/* implicit */int) (unsigned short)22883)) & (((/* implicit */int) (unsigned short)26242)))));
                var_15 = ((/* implicit */unsigned short) min((var_15), ((unsigned short)34389)));
            }
        } 
    } 
}
