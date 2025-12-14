/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92916
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
    for (signed char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_1]);
                arr_8 [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 962545260)) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 + 3]))) * (((/* implicit */unsigned int) ((-2054301138) / (((/* implicit */int) (unsigned short)23645)))))));
                arr_9 [(unsigned short)2] |= ((/* implicit */long long int) arr_5 [i_0 - 1] [i_1] [i_1]);
                var_11 = ((unsigned short) (+(((/* implicit */int) ((signed char) arr_0 [i_0 + 1])))));
                var_12 &= ((/* implicit */unsigned long long int) (-((-(arr_1 [i_0 + 1])))));
            }
        } 
    } 
    var_13 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_7))) ? (var_5) : (((/* implicit */unsigned long long int) ((unsigned int) var_5)))))) && (((/* implicit */_Bool) ((signed char) ((long long int) var_7))))));
    var_14 *= ((/* implicit */signed char) var_3);
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 4) 
        {
            {
                arr_15 [i_2 + 3] [i_2 + 2] = (-((+(var_4))));
                /* LoopNest 2 */
                for (signed char i_4 = 4; i_4 < 12; i_4 += 3) 
                {
                    for (int i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        {
                            arr_21 [i_2 + 2] [i_3 + 2] [i_5] [i_5] [i_3 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) min((1125899772624896ULL), (((/* implicit */unsigned long long int) min((arr_0 [i_3 + 2]), (var_10))))))) ? (((arr_14 [i_4 - 2] [i_5]) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)31)))))) : ((+(18445618173936926720ULL)))));
                            var_15 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_4 - 4] [i_5])) ? (((/* implicit */int) arr_11 [i_2 + 3] [i_4 + 1])) : (((/* implicit */int) arr_10 [i_3 - 2] [i_5]))))) + (((((/* implicit */_Bool) ((arr_12 [i_5]) / (((/* implicit */long long int) var_6))))) ? (arr_5 [i_4 + 1] [i_4 - 2] [i_4 - 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_6 = 0; i_6 < 19; i_6 += 4) 
    {
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 2) 
            {
                {
                    arr_32 [i_7 - 1] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_26 [i_7 - 1]))))) * (((((/* implicit */_Bool) 2557156662886505129LL)) ? (((/* implicit */unsigned long long int) arr_30 [i_6])) : (arr_23 [i_7 - 1] [i_7 - 1]))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(2147483647)))) ? (((3252275312149557958LL) / (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_6] [i_7 - 1]))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-19))))))));
                    arr_33 [i_6] [i_6] [i_7 - 1] [i_8] = ((var_5) / (((unsigned long long int) ((904839359) / (((/* implicit */int) arr_27 [i_6]))))));
                }
            } 
        } 
    } 
}
