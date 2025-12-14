/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94902
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
    var_13 = ((/* implicit */unsigned int) var_6);
    var_14 = ((/* implicit */signed char) min((var_8), ((-(max((((/* implicit */unsigned long long int) var_2)), (14236047660465273310ULL)))))));
    var_15 = ((/* implicit */short) (~(((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((+(((/* implicit */int) arr_2 [i_1]))))))) ? (((/* implicit */int) arr_1 [i_0])) : ((-(((/* implicit */int) arr_1 [i_1 - 1]))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 18; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_9 [i_1] [i_2] [i_1] [i_2] [i_2] [(signed char)14] = max((var_2), (((/* implicit */unsigned char) ((signed char) (-(var_8))))));
                            arr_10 [i_1] [(unsigned short)17] [i_1] = ((/* implicit */unsigned int) (-(((int) arr_5 [(signed char)12] [(signed char)12] [i_2]))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_4 = 0; i_4 < 22; i_4 += 3) 
    {
        for (int i_5 = 3; i_5 < 21; i_5 += 4) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_5 - 1] [i_5 - 3] [i_5 - 2] [i_6])))))));
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? ((+((+(((/* implicit */int) (signed char)112)))))) : (((int) arr_13 [i_5 - 3] [i_5 - 3]))));
                }
            } 
        } 
    } 
}
