/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85998
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
    var_19 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (+(((((/* implicit */_Bool) -8921398407393085188LL)) ? (4294967295U) : (((/* implicit */unsigned int) -1))))))), (((long long int) var_14))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (-(((/* implicit */int) ((short) arr_3 [i_1 - 1]))))))));
                var_21 = ((/* implicit */long long int) (unsigned char)255);
            }
        } 
    } 
    var_22 -= ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) ((short) 286518924))) ? ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)10))) : (7853672858364473661LL))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)242)), (var_3))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            {
                var_23 = min(((+(((((/* implicit */long long int) ((/* implicit */int) var_5))) / ((-9223372036854775807LL - 1LL)))))), (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)16))) : (var_10))) * (((/* implicit */long long int) (-(((/* implicit */int) var_13))))))));
                var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_5 [i_3] [(short)6] [0LL]))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    var_25 = ((/* implicit */int) (!((!(((/* implicit */_Bool) -678545509416855007LL))))));
                    arr_14 [i_2] [i_3] = ((/* implicit */unsigned long long int) arr_1 [(_Bool)1]);
                }
            }
        } 
    } 
}
