/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70841
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
    var_14 = ((/* implicit */int) ((short) min((((/* implicit */int) ((1384723983U) < (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))), ((-(var_10))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) var_6);
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (unsigned int i_3 = 1; i_3 < 9; i_3 += 2) 
                {
                    {
                        arr_15 [i_3] [i_0] [i_0] [(short)4] = ((/* implicit */unsigned char) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_3 - 1]))) - (549755813887ULL)))));
                        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_8 [i_0] [i_1] [i_2]))) ? (arr_0 [i_0 - 1] [i_2]) : (((/* implicit */unsigned long long int) ((long long int) var_9))))))));
                        var_16 = ((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0 - 1])) + (((/* implicit */int) arr_1 [i_0 - 1]))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_4 = 1; i_4 < 8; i_4 += 2) 
        {
            for (int i_5 = 1; i_5 < 9; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 2) 
                {
                    {
                        var_17 = ((unsigned char) arr_22 [i_6] [i_5] [i_4] [i_0]);
                        var_18 = ((/* implicit */long long int) (-(var_11)));
                    }
                } 
            } 
        } 
    }
    var_19 &= ((/* implicit */unsigned int) ((((((/* implicit */int) var_12)) % (((/* implicit */int) var_12)))) == (((/* implicit */int) var_12))));
}
