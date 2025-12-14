/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99667
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
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    var_10 = ((/* implicit */short) var_0);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_9)) : (arr_6 [i_0] [i_1] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((int) 2266503451208023413LL))) : (((unsigned long long int) var_5))))));
                                var_12 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+((+(arr_12 [i_0 - 1] [i_1])))))), (((((57077265901931863ULL) * (((/* implicit */unsigned long long int) -3602927141062213783LL)))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) / (((/* implicit */int) var_6)))))))));
                                var_13 = arr_6 [i_0 - 2] [i_1] [i_1] [i_0];
                                var_14 = ((/* implicit */short) ((arr_1 [i_4]) / (((long long int) max((arr_3 [i_0]), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_2] [i_0])))))));
                            }
                        } 
                    } 
                }
                var_15 = ((/* implicit */_Bool) ((short) ((unsigned long long int) -5306766581156856896LL)));
                var_16 = ((((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (-1133322101)))) - (((((/* implicit */_Bool) var_3)) ? (max((var_0), (((/* implicit */long long int) arr_10 [i_0] [i_0] [i_1] [i_1] [i_0])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1] [i_0] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_2))))))));
                arr_13 [i_0] [i_1] [i_0] = ((/* implicit */long long int) var_5);
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 4; i_5 < 9; i_5 += 3) 
    {
        for (long long int i_6 = 0; i_6 < 10; i_6 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_7 = 1; i_7 < 9; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */int) (-(min((((((/* implicit */_Bool) 800666010724048891ULL)) ? (var_0) : (((/* implicit */long long int) var_9)))), ((-(var_1)))))));
                            var_18 = ((/* implicit */_Bool) arr_11 [i_5] [i_6] [i_5] [i_8] [i_8] [i_6] [i_6]);
                            var_19 = ((/* implicit */long long int) var_8);
                            var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(min((var_0), (((/* implicit */long long int) var_6)))))))));
                            arr_28 [i_6] [i_7] [i_6] [i_6] = ((/* implicit */unsigned long long int) var_6);
                        }
                    } 
                } 
                var_21 = ((((max((8707813197097880144LL), (arr_23 [i_5] [i_5]))) | (((((/* implicit */_Bool) -7124717463654227843LL)) ? (-1385408847044819013LL) : (((/* implicit */long long int) 951528936)))))) + (((((/* implicit */long long int) ((/* implicit */int) var_4))) * (((((/* implicit */long long int) ((/* implicit */int) var_5))) * (var_0))))));
            }
        } 
    } 
}
