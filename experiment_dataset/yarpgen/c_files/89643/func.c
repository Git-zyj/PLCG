/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89643
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
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-1))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_6)) : (var_5)))))))) : (var_12)));
    var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((long long int) var_11)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */int) (signed char)-1);
                var_15 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) : (var_3))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) arr_1 [i_0])))))));
                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(-526099457)))) ? (((unsigned int) (+(((/* implicit */int) arr_0 [(unsigned char)6] [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)0)))))))))));
                var_17 = max((var_7), (((/* implicit */unsigned int) (+(arr_4 [i_1] [i_0] [i_0])))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) var_8);
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) ((min(((~(((/* implicit */int) (signed char)1)))), (((/* implicit */int) ((((/* implicit */int) arr_8 [i_2])) != (((/* implicit */int) (signed char)0))))))) ^ (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) + (var_4))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [i_3] [i_2]))))))))));
                /* LoopNest 3 */
                for (short i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 16; i_6 += 2) 
                        {
                            {
                                arr_20 [i_2] [i_3] [i_3] [i_5] [i_5] [i_5] [7LL] = ((/* implicit */unsigned int) ((arr_11 [i_5] [i_4] [(unsigned char)6]) >= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_6 + 1])))));
                                var_20 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) max(((+(var_8))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_1)) >= (var_3))))))) : (var_3)));
                                var_21 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned long long int) 4064766736U)) : ((+(18428729675200069632ULL)))));
                                var_22 = ((/* implicit */unsigned int) var_0);
                                var_23 = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_18 [i_4] [i_6 - 1] [i_6] [i_6 - 2] [i_6] [i_6 - 2])))) << (((min((((/* implicit */unsigned int) arr_18 [i_6] [i_6 - 2] [i_6 - 1] [i_6] [i_6] [i_6])), (var_7))) - (21811U)))));
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_2] [i_3]))))) ? ((~(max((arr_11 [i_3] [i_2] [i_2]), (((/* implicit */long long int) var_10)))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_11))))));
            }
        } 
    } 
}
