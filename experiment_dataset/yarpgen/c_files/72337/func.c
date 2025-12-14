/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72337
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
    var_18 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) 1365790122))) ? (((/* implicit */int) ((var_9) >= (((/* implicit */int) ((short) var_0)))))) : (((/* implicit */int) ((var_0) < (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_13) : (((/* implicit */int) var_10))))))))));
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (unsigned char)255))));
    var_20 = ((/* implicit */_Bool) (short)-17517);
    var_21 = ((/* implicit */int) ((unsigned char) ((((/* implicit */int) ((unsigned char) var_10))) + (((/* implicit */int) var_15)))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned char i_3 = 2; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_22 = (((-(((((/* implicit */_Bool) 14617405089189561779ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)4822)))))));
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((int) arr_2 [i_2 + 1] [i_3])) : (((/* implicit */int) arr_4 [i_0] [i_3]))))) ? (((arr_9 [i_3] [i_3 + 1] [i_3 - 2] [i_3 + 2] [i_3]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_2 - 1]))))) : ((-(arr_3 [i_0 + 1] [i_1 - 1] [i_2 + 1])))));
                            arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -1365790122)), (arr_3 [i_3] [i_1] [i_2])))) ? (((/* implicit */unsigned long long int) arr_1 [i_0 + 1])) : (((14617405089189561803ULL) + (arr_9 [i_0] [i_1] [i_1 - 2] [i_2 - 2] [i_1 - 2]))))), (min((((/* implicit */unsigned long long int) 1550774726U)), (min((((/* implicit */unsigned long long int) 1365790122)), (14617405089189561773ULL)))))));
                        }
                    } 
                } 
                arr_12 [i_0] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)65535)) << (((2263045092346033613ULL) - (2263045092346033608ULL)))));
            }
        } 
    } 
}
