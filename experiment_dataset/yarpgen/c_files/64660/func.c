/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64660
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)7498))) != (-3242006029308880180LL)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_1] &= ((/* implicit */long long int) (-(arr_3 [i_0] [i_1])));
                    var_17 = ((/* implicit */unsigned int) ((5952907196199622267ULL) == (884198337754066075ULL)));
                    arr_8 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) arr_6 [i_0]);
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_4 [i_0] [i_0]))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        var_18 = ((/* implicit */_Bool) arr_15 [i_0] [i_3]);
                        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) arr_15 [i_0] [i_0]))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        arr_19 [i_0] [i_3] [i_4] [i_6] = ((/* implicit */long long int) arr_10 [i_0] [i_4]);
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (+(3507892887U))))));
                    }
                    var_21 &= ((/* implicit */unsigned char) arr_1 [i_0]);
                    arr_20 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_10 [i_0] [i_3]);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        arr_23 [i_0] [i_3] [i_4] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(arr_3 [i_3] [i_0]))))));
                        arr_24 [i_7] [i_0] [i_0] [i_0] = 787074438U;
                        arr_25 [i_0] [i_4] [i_4] = ((/* implicit */short) (~((~(144115185928372224LL)))));
                        arr_26 [i_4] [i_0] [i_4] [i_4] = ((/* implicit */unsigned int) arr_1 [i_0]);
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 1) /* same iter space */
                    {
                        arr_29 [i_4] [i_4] [i_4] [i_0] = ((/* implicit */unsigned short) arr_10 [i_0] [i_3]);
                        var_23 ^= ((/* implicit */unsigned int) arr_15 [i_4] [i_8]);
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) -575416865))));
                        var_25 = arr_14 [i_0] [i_0];
                        arr_30 [i_0] [i_0] [i_4] [i_8] = ((/* implicit */unsigned char) arr_14 [i_0] [i_3]);
                    }
                    for (unsigned char i_9 = 0; i_9 < 24; i_9 += 3) 
                    {
                        var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_12 [i_0] [i_3] [i_0])) <= (((/* implicit */int) arr_10 [i_0] [i_3])))))) / (arr_28 [i_9])));
                        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (((!(arr_32 [i_4] [i_0] [i_4] [i_3] [i_3]))) && (((/* implicit */_Bool) arr_4 [i_0] [i_4])))))));
                        var_28 = ((/* implicit */unsigned short) (+(arr_5 [i_9] [i_9] [i_9])));
                        arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_14 [i_0] [i_0]))));
                        var_29 ^= ((/* implicit */_Bool) arr_22 [i_3] [i_3] [i_9] [i_9]);
                    }
                    var_30 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_31 [i_0] [i_0] [i_4]) >> (((((/* implicit */int) arr_17 [i_4] [i_4] [i_3] [i_3] [i_0] [i_0])) - (8854)))))) && (((/* implicit */_Bool) arr_18 [i_4] [i_4] [i_0] [i_0] [i_0] [i_0]))));
                }
            } 
        } 
        arr_34 [i_0] = ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 1) 
    {
        var_31 -= ((((825192948U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7212))))) / (arr_3 [8LL] [8LL]));
        var_32 = ((/* implicit */int) arr_3 [i_10] [i_10]);
    }
    var_33 = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_15))));
}
