/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91976
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) max((((/* implicit */long long int) max(((unsigned char)143), (((/* implicit */unsigned char) (_Bool)0))))), (max((var_18), (max((var_13), (((/* implicit */long long int) (signed char)-60))))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) max((min((((/* implicit */long long int) var_3)), (var_13))), (((/* implicit */long long int) var_10))));
                        var_22 = ((/* implicit */unsigned char) min((min((var_11), (((/* implicit */short) var_8)))), (var_0)));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_4 = 1; i_4 < 9; i_4 += 2) 
                        {
                            arr_14 [8LL] [i_3] [i_1] [8LL] |= var_7;
                            arr_15 [i_0] [i_1] [i_0] [i_3] [i_0] = ((/* implicit */short) var_6);
                            arr_16 [i_0] = ((/* implicit */unsigned int) var_17);
                            arr_17 [i_0] = ((/* implicit */unsigned char) var_14);
                            arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_4);
                        }
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */_Bool) var_19);
        arr_19 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) min((var_2), (((/* implicit */unsigned int) var_0))))), (max((var_12), (((/* implicit */long long int) var_9))))));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_27 [i_0] [(_Bool)1] [i_6] = ((/* implicit */_Bool) max((min((var_13), (((/* implicit */long long int) var_14)))), (((/* implicit */long long int) var_5))));
                    arr_28 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_18);
                    arr_29 [4U] [i_0] [i_6] [i_5] = ((/* implicit */_Bool) var_1);
                }
            } 
        } 
    }
    for (short i_7 = 0; i_7 < 19; i_7 += 3) 
    {
        var_24 = ((/* implicit */unsigned int) max((min((var_13), (var_18))), (((/* implicit */long long int) max((((/* implicit */short) var_5)), (var_0))))));
        arr_33 [i_7] = max((((/* implicit */unsigned int) max((var_6), (var_1)))), (max((max((((/* implicit */unsigned int) var_6)), (var_2))), (((/* implicit */unsigned int) var_15)))));
        arr_34 [i_7] = ((/* implicit */_Bool) min((min((2780792086U), (((/* implicit */unsigned int) (signed char)77)))), (((/* implicit */unsigned int) min((var_16), (var_6))))));
        arr_35 [i_7] |= ((/* implicit */_Bool) max((((/* implicit */long long int) max((var_4), (var_16)))), (max((min((var_18), (var_19))), (var_13)))));
    }
    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) max((var_18), (((/* implicit */long long int) var_14)))))));
    var_26 = ((/* implicit */signed char) max((((/* implicit */unsigned char) var_8)), (var_5)));
}
