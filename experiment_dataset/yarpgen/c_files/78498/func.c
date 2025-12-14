/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78498
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
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (-(min((-8895971425578858764LL), (((/* implicit */long long int) arr_5 [i_0 + 1] [(_Bool)1] [i_2 + 4]))))));
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) min((var_5), (var_8)));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_14 [i_1] [i_1] [i_0] [i_0] [i_0] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_5)))) ? (((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_3)))) + (arr_12 [i_0 - 1]))) : (((/* implicit */long long int) min((((((/* implicit */int) var_4)) + (((/* implicit */int) var_1)))), (((/* implicit */int) var_13)))))));
                                arr_15 [(unsigned short)2] [i_4] [6LL] [i_0] [9U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))))), (((((/* implicit */_Bool) 4294967281U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (2859963967399773041ULL)))))) ? (min((0ULL), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((long long int) arr_2 [i_0])))));
                                arr_16 [i_4] [i_3] [i_0] [i_1] [i_0 - 1] = ((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((max((-8944173940513570120LL), (var_11))) > (((/* implicit */long long int) ((/* implicit */int) var_9))))))) < (max((((/* implicit */unsigned long long int) max((var_4), (((/* implicit */unsigned short) (_Bool)0))))), (964739521683921491ULL)))));
    var_16 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) 618788892))))), ((-(var_7)))));
}
