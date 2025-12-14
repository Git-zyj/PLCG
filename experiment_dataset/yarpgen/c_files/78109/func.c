/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78109
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
    var_17 = ((/* implicit */signed char) 32704);
    var_18 = ((/* implicit */long long int) var_0);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (int i_4 = 3; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_19 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min(((signed char)111), ((signed char)-1)))) ? (((((/* implicit */_Bool) (unsigned short)4932)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)165)))) : (arr_6 [i_0 - 2] [i_0 + 1] [i_2])))));
                                arr_14 [i_2] [i_3] [i_2] [i_1] [14ULL] [14ULL] = (!(((/* implicit */_Bool) ((long long int) arr_1 [i_0 - 1] [i_0 - 1]))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] = arr_11 [(signed char)4] [(_Bool)1] [i_1] [i_1];
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 1; i_5 < 10; i_5 += 4) 
    {
        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 4; i_7 < 10; i_7 += 3) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_26 [i_5 + 1] [9LL] [2LL] [(unsigned char)0] = ((/* implicit */signed char) arr_2 [i_5] [i_7 + 2]);
                            arr_27 [i_5] [7LL] [(_Bool)1] [i_5] = var_10;
                            arr_28 [i_5] [i_6] [i_6] [i_7 + 2] [i_8] [i_5] = var_9;
                        }
                    } 
                } 
                var_20 = ((/* implicit */long long int) (-(((((((/* implicit */_Bool) arr_6 [i_6] [i_6] [(_Bool)1])) ? (arr_13 [i_5]) : (((/* implicit */int) arr_24 [i_5] [i_6])))) & (((((/* implicit */int) var_5)) / (((/* implicit */int) arr_4 [i_5]))))))));
            }
        } 
    } 
}
