/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80377
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */int) var_2)) > (((/* implicit */int) var_4))))), (var_6)))) << (((((/* implicit */int) var_7)) - (98)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_7 [17LL] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)463), (((/* implicit */unsigned short) var_8))))) ? (arr_0 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27921)))))) || (((((/* implicit */int) ((((/* implicit */int) (short)6179)) == (((/* implicit */int) var_8))))) != (((/* implicit */int) ((arr_0 [i_0]) <= (arr_0 [i_0]))))))));
                arr_8 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((int) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)454)) % (((/* implicit */int) (unsigned short)47373))))), (arr_5 [i_0]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                arr_15 [i_3] = (((-(((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))))))) != (((((/* implicit */int) min(((unsigned short)463), (((/* implicit */unsigned short) (short)-10095))))) - (((int) var_7)))));
                arr_16 [i_3] [5ULL] = ((/* implicit */_Bool) ((((/* implicit */int) min((arr_4 [i_2 + 1] [i_2 + 1]), (((/* implicit */short) (unsigned char)175))))) % (((/* implicit */int) var_8))));
                arr_17 [i_2 + 1] [i_2 + 1] [(short)6] = ((/* implicit */_Bool) (unsigned short)33908);
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) var_2);
}
