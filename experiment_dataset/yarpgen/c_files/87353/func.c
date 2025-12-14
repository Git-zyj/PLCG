/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87353
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (var_13) : (((((/* implicit */_Bool) ((var_1) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((unsigned long long int) var_11)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 4; i_2 < 20; i_2 += 2) 
                {
                    var_19 = ((/* implicit */int) ((((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-1))))) && (((/* implicit */_Bool) (-(var_12)))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) arr_3 [i_2 - 3])), (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (_Bool)1)) : (arr_5 [i_2 - 1] [i_1])))))) : ((+(arr_0 [i_2 - 4] [i_1])))));
                    arr_8 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */signed char) (_Bool)1);
                }
                for (int i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        for (signed char i_5 = 1; i_5 < 21; i_5 += 3) 
                        {
                            {
                                arr_18 [i_4] [i_4] [i_3] [i_4] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((2531621979861047630ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) && (((/* implicit */_Bool) ((2147483647) - (2147483647))))));
                                arr_19 [i_0] [i_4] [i_1] [i_3] [i_4] [i_5] = ((/* implicit */signed char) ((_Bool) (((+(13178938763941541469ULL))) < (((/* implicit */unsigned long long int) var_0)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 3; i_6 < 21; i_6 += 1) 
                    {
                        for (int i_7 = 4; i_7 < 21; i_7 += 2) 
                        {
                            {
                                arr_24 [i_0] [i_1] [i_3] [i_6] [i_7] = ((/* implicit */long long int) ((arr_23 [i_0] [i_0] [i_3] [i_6] [i_7]) << (((((min((-2147483647), (((/* implicit */int) (_Bool)1)))) - (-2147483638))) + (24)))));
                                arr_25 [i_0] [i_0] [i_0] [(signed char)10] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (3898549310U) : (((/* implicit */unsigned int) -1450092011))))) ? (((arr_23 [i_0] [i_6 - 2] [i_6 - 2] [i_0] [i_7]) | (arr_23 [i_3] [i_6 - 1] [i_6] [i_7 - 1] [i_7]))) : ((~(arr_23 [8ULL] [i_6 - 3] [i_7 - 3] [i_7 - 3] [i_7 - 3])))));
                            }
                        } 
                    } 
                }
                var_20 = ((((/* implicit */int) min((var_9), ((!(((/* implicit */_Bool) 200920154U))))))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_2 [i_0])) : (arr_10 [i_0])))) ? (((int) var_17)) : (((/* implicit */int) var_10)))) + (1054217047))));
                var_21 -= ((/* implicit */int) ((((/* implicit */_Bool) ((var_6) - (var_3)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) -2147483647))) ? (3898549310U) : (((/* implicit */unsigned int) -269326320)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_14)), (((((/* implicit */_Bool) var_17)) ? (3898549334U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
}
