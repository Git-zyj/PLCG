/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67199
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
    var_11 ^= ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_7 [(unsigned short)11] [i_0] [(unsigned short)11] [i_0] = ((/* implicit */signed char) (((~(9877302766660603902ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)-13), (arr_0 [i_1 + 1])))))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((var_4), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_4 [i_1 - 2] [i_2 + 2])))));
                    var_12 ^= ((/* implicit */unsigned long long int) (+(min((arr_4 [i_0] [i_1 - 2]), (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) << (((var_8) - (7954883582392854147ULL))))))))));
                    arr_9 [i_0] = ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) + (var_4)))) ? (max((9877302766660603925ULL), (8569441307048947716ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 + 3])))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
    {
        for (unsigned long long int i_4 = 2; i_4 < 24; i_4 += 3) 
        {
            {
                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) (+(((unsigned long long int) (signed char)7)))))));
                arr_16 [i_3] [(signed char)3] [i_4 + 1] = ((/* implicit */unsigned short) (-(min(((-(var_8))), (((/* implicit */unsigned long long int) ((unsigned short) (signed char)3)))))));
                arr_17 [i_3] = (signed char)5;
                var_14 ^= ((unsigned long long int) ((unsigned long long int) arr_11 [i_4 - 1] [(signed char)4]));
                arr_18 [(unsigned short)3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_4 + 1] [i_4 + 1]))))) ? (((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */int) var_0)) : ((~(-1976153731))))) : (((/* implicit */int) min((min((((/* implicit */unsigned short) (signed char)9)), (var_9))), (((/* implicit */unsigned short) arr_12 [i_4 - 2] [i_4])))))));
            }
        } 
    } 
}
