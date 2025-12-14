/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77718
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
    var_17 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 4294967295U)) ? (4294967293U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)86))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)71)) == (((/* implicit */int) (unsigned char)79)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) (-(((/* implicit */int) var_0))))) : (min((var_11), (((/* implicit */long long int) var_12)))))))));
    var_18 = (!(((/* implicit */_Bool) var_12)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -88617030)) ? (((/* implicit */int) (unsigned char)93)) : (((/* implicit */int) (unsigned char)170))));
                arr_5 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_1] [i_0] [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)88))))) : ((+(((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_1 + 2] [i_1] [i_0])) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)85)))))))) : (arr_0 [(signed char)5] [i_1])));
                var_20 -= ((/* implicit */signed char) (((((((_Bool)1) ? (4398046507008ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)88))))) | (((/* implicit */unsigned long long int) (~(arr_3 [i_0])))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)110)) ? (arr_3 [(short)16]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [(_Bool)1]))) : (((((/* implicit */_Bool) arr_3 [(signed char)16])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_3 [i_1]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            {
                arr_11 [i_2] [i_2] = ((/* implicit */long long int) var_5);
                arr_12 [i_2] [i_2] = ((/* implicit */signed char) max((((((/* implicit */int) (signed char)63)) != (((/* implicit */int) (unsigned char)86)))), ((!(((/* implicit */_Bool) (+(var_11))))))));
            }
        } 
    } 
}
