/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89712
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2030261098U)) && (((/* implicit */_Bool) (unsigned short)12920))));
                    var_20 = ((/* implicit */unsigned long long int) ((long long int) ((unsigned char) (signed char)38)));
                    arr_11 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)57344))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned char) var_4)), (var_14)));
    /* LoopNest 3 */
    for (signed char i_3 = 1; i_3 < 13; i_3 += 1) 
    {
        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            for (signed char i_5 = 0; i_5 < 14; i_5 += 3) 
            {
                {
                    arr_21 [i_3] = ((/* implicit */signed char) 2030261110U);
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) (unsigned short)52627)) : (((/* implicit */int) (signed char)-27))));
                }
            } 
        } 
    } 
}
