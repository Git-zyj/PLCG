/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65704
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
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) arr_6 [i_2] [i_1] [i_0] [i_0]);
                    var_11 |= ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [i_2 + 1])) ? (arr_4 [i_2] [i_0 + 1]) : (arr_7 [i_0 + 1] [i_2 + 3]))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        for (int i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            {
                var_12 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_2), (arr_13 [i_3] [i_3] [i_3])))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) 144115170895986688LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (536870911LL)))))) ? (var_3) : (var_3));
                arr_15 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) arr_4 [i_3] [i_3]);
                var_13 = ((/* implicit */short) (+(min(((~((-2147483647 - 1)))), (((/* implicit */int) min((var_4), (((/* implicit */unsigned short) (signed char)(-127 - 1))))))))));
                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)118)) ? (arr_11 [i_3] [i_4]) : (arr_11 [i_3] [i_3])))) ? ((+(arr_11 [i_4] [i_3]))) : (max((arr_11 [i_3] [i_4]), (arr_11 [i_4] [i_4]))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        for (int i_6 = 2; i_6 < 19; i_6 += 4) 
        {
            for (short i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                {
                    arr_23 [i_5] [i_5] = ((/* implicit */short) arr_22 [i_6 - 2] [i_6 - 2] [i_5]);
                    var_15 = ((/* implicit */short) ((long long int) (-(((/* implicit */int) arr_1 [i_5 - 1])))));
                    var_16 = ((/* implicit */signed char) var_0);
                    arr_24 [i_6] [i_6] [i_6 - 2] = ((/* implicit */unsigned int) arr_1 [i_6]);
                }
            } 
        } 
    } 
    var_17 = ((short) var_1);
}
