/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81626
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */short) arr_4 [i_1]);
                var_18 = ((/* implicit */unsigned long long int) arr_1 [i_1 + 1] [i_1]);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((short) 8796093022207LL));
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((7752277479995182612ULL), (((/* implicit */unsigned long long int) (unsigned short)65535))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_4)) : (var_15)))))) ? ((+((~(var_1))))) : (var_11)));
    /* LoopNest 3 */
    for (long long int i_2 = 2; i_2 < 19; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) var_2);
                    arr_13 [i_2] [i_3] [i_2 - 1] [i_2] = ((/* implicit */signed char) min((((((_Bool) arr_6 [i_2])) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_2))) : (((/* implicit */long long int) ((arr_10 [i_2] [i_2] [i_4]) & (-1639131965)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) (unsigned short)62675)))) : (((/* implicit */int) arr_7 [i_2 + 1] [i_2 - 2])))))));
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((-1), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)255)), (var_4)))) : (((((/* implicit */_Bool) min((arr_9 [i_2]), (((/* implicit */unsigned long long int) arr_7 [i_2 + 2] [4]))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9))) : (arr_9 [i_3]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_2] [i_3] [i_4])) ? (((/* implicit */long long int) arr_6 [i_2])) : (arr_5 [(unsigned char)3]))))))));
                }
            } 
        } 
    } 
}
