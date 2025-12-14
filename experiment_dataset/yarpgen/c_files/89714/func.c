/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89714
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */int) ((signed char) arr_6 [i_2] [i_1] [i_2]));
                    arr_11 [i_0] [i_1] = ((/* implicit */int) max((((/* implicit */long long int) var_15)), (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) + ((+(-7514372301825855617LL)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_16 [i_3] = ((/* implicit */int) arr_7 [i_1] [i_1] [i_1] [(_Bool)1]);
                                var_17 = ((/* implicit */signed char) (+(-1)));
                                var_18 = ((/* implicit */int) var_6);
                                var_19 = ((/* implicit */short) min((((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [0] [0] [i_4])), (((((/* implicit */_Bool) -917204871)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1971969867329794800LL))))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (arr_13 [i_0] [i_1] [i_4] [i_1] [i_4]) : (((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) (signed char)127);
    /* LoopNest 2 */
    for (signed char i_5 = 3; i_5 < 21; i_5 += 4) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned short) (((~(((((/* implicit */_Bool) var_3)) ? (4019857216807647206ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) != (((/* implicit */unsigned long long int) ((int) arr_19 [i_5 + 1])))));
                arr_23 [i_5] [i_6] = ((/* implicit */unsigned short) var_10);
            }
        } 
    } 
}
