/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82625
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
    var_18 = ((/* implicit */long long int) var_8);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_1] [i_0] = ((/* implicit */int) ((short) ((_Bool) ((((/* implicit */_Bool) (short)32761)) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) (short)32766))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned short i_3 = 2; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) (-(min((((long long int) (short)-32760)), (((/* implicit */long long int) ((-5214741924448067445LL) == (arr_8 [i_3 + 1] [i_2] [i_1] [(_Bool)1]))))))));
                            var_20 = ((/* implicit */long long int) max((var_20), (arr_8 [i_0] [(unsigned short)1] [i_0] [i_0])));
                            var_21 = ((/* implicit */int) var_5);
                            arr_11 [i_0] [i_1] [i_2 - 1] [i_3] = ((/* implicit */_Bool) ((signed char) (_Bool)1));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */int) min((((long long int) (!(((/* implicit */_Bool) var_3))))), (((((/* implicit */_Bool) var_2)) ? ((~(var_1))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) > (((/* implicit */int) (short)-32763))))))))));
    /* LoopNest 3 */
    for (unsigned char i_4 = 1; i_4 < 19; i_4 += 2) 
    {
        for (signed char i_5 = 2; i_5 < 19; i_5 += 1) 
        {
            for (long long int i_6 = 3; i_6 < 19; i_6 += 1) 
            {
                {
                    var_23 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_5 - 2] [i_5 - 1]))))) ? (min((arr_18 [i_5 - 2] [i_5 - 1] [i_5 + 1]), (((/* implicit */long long int) (signed char)77)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_5 - 2] [i_5 - 1] [i_5 + 1])))))));
                    arr_19 [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32761)) ? (arr_12 [i_4 - 1] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (max((var_13), (((/* implicit */long long int) (signed char)-78)))) : (((/* implicit */long long int) ((/* implicit */int) var_4))))));
                    var_24 &= ((/* implicit */unsigned char) 356283298);
                }
            } 
        } 
    } 
}
