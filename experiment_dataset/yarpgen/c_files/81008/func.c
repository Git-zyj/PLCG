/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81008
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
    var_10 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_3)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_3))))), (arr_2 [i_0] [i_0])))), (var_2)));
                    /* LoopSeq 1 */
                    for (short i_3 = 3; i_3 < 21; i_3 += 3) 
                    {
                        var_12 = ((/* implicit */unsigned short) var_9);
                        arr_9 [(_Bool)1] [(_Bool)1] [i_2] [i_3 - 1] [(signed char)4] [i_1] |= ((/* implicit */short) var_7);
                        var_13 = arr_4 [i_0] [i_1];
                    }
                    arr_10 [i_1] = ((/* implicit */int) max((((/* implicit */short) var_9)), (var_8)));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
    {
        for (unsigned char i_5 = 3; i_5 < 20; i_5 += 3) 
        {
            for (int i_6 = 2; i_6 < 21; i_6 += 3) 
            {
                {
                    arr_18 [i_4] [i_5 - 1] [i_5] [i_6] = ((/* implicit */_Bool) ((unsigned long long int) max((var_6), (((/* implicit */unsigned int) max((((/* implicit */int) arr_0 [i_6])), (arr_16 [i_4] [i_5] [i_6 - 2])))))));
                    var_14 = arr_2 [(_Bool)1] [i_5];
                }
            } 
        } 
    } 
}
