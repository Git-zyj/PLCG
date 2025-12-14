/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64808
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) <= (max((((((/* implicit */_Bool) var_13)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned int) (unsigned char)12))))));
    var_17 = ((/* implicit */unsigned int) (signed char)-95);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_1] [10U] [i_3] [4U] [i_0] = ((/* implicit */unsigned char) arr_3 [i_3]);
                            arr_12 [i_0] [i_0] [i_0] [i_0] [(unsigned char)14] = ((/* implicit */_Bool) (+(0U)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 4; i_4 < 13; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_17 [i_1] [i_1] [i_1] [2LL] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-95)) && (arr_14 [i_0] [i_1] [i_1] [i_5])));
                            arr_18 [2U] [i_4 + 3] [i_0] [i_0] = ((/* implicit */unsigned char) (~((~((~(((/* implicit */int) (_Bool)1))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) (signed char)-79);
}
