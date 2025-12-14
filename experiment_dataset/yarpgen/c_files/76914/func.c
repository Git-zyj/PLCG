/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76914
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) (~(((/* implicit */int) var_12))))), (max((((/* implicit */unsigned int) (_Bool)1)), (arr_7 [i_0] [i_1] [i_2] [3ULL]))))), (((((/* implicit */_Bool) (-(16846537361222293061ULL)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) : (arr_7 [i_0] [i_1] [i_2] [i_3])))));
                                arr_13 [(short)11] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_0 [i_0] [i_0])))) * (((((/* implicit */int) var_0)) / (((/* implicit */int) arr_2 [i_0]))))))) * (max((var_11), (11459529702013459528ULL)))));
                                arr_14 [i_4] [i_3] [(short)4] [(unsigned short)0] [(unsigned short)0] [i_0] = ((/* implicit */unsigned char) arr_5 [i_4] [i_1] [i_2] [i_2]);
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */signed char) ((((/* implicit */int) (((-(((/* implicit */int) (signed char)53)))) > (((/* implicit */int) (signed char)6))))) % (((((((((/* implicit */int) (signed char)-38)) ^ (((/* implicit */int) (short)18064)))) + (2147483647))) << (((((int) 663790358)) - (663790358)))))));
            }
        } 
    } 
    var_16 = min((((((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned short)65535)))) ? (min((var_10), (((/* implicit */unsigned long long int) (_Bool)0)))) : ((((_Bool)1) ? (var_10) : (var_11))))), ((+(((((/* implicit */_Bool) 360623915)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
    var_17 = ((/* implicit */signed char) ((((/* implicit */int) ((short) ((int) (signed char)38)))) >> (((max((var_2), (((/* implicit */long long int) var_12)))) - (1001480585622395846LL)))));
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_3))));
}
