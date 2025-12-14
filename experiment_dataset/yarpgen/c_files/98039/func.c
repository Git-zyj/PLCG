/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98039
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 19; i_2 += 1) 
            {
                {
                    var_17 &= ((/* implicit */unsigned long long int) 2240967839803694024LL);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) ((((int) arr_10 [i_0] [i_2 + 2] [i_2 + 3] [i_4] [i_1 - 3] [i_2 + 1])) * (((/* implicit */int) ((_Bool) var_11)))));
                                var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) var_6)))))))));
                                arr_17 [(unsigned short)9] [i_1] [i_1] = ((/* implicit */long long int) arr_10 [i_4] [i_1] [i_1] [(short)8] [i_1] [12LL]);
                                arr_18 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) var_10))));
                            }
                        } 
                    } 
                    var_20 += ((/* implicit */unsigned int) min((var_14), (var_16)));
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_22 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) -324577050588987104LL);
                        arr_23 [i_0] [i_1 - 2] [i_2] [i_5] = ((/* implicit */int) max((2240967839803694024LL), (((/* implicit */long long int) min((-2021958982), ((-2147483647 - 1)))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) >= (min((-3775216289975743273LL), (((/* implicit */long long int) (short)0))))))))))));
                        arr_26 [i_0] [i_6] [i_2] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_6] [i_1 + 1] [i_1] [i_1]))) / (arr_4 [i_2 - 2] [i_2 - 1] [i_2 - 2])));
                        var_22 = (~(((/* implicit */int) var_10)));
                        arr_27 [(short)7] [i_6] [i_6] [i_0] = ((/* implicit */_Bool) max((((int) 35184372088831LL)), (max(((+(-43086383))), (((/* implicit */int) arr_13 [i_0] [20] [i_2]))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (int i_7 = 0; i_7 < 20; i_7 += 2) 
    {
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_2)))))));
        arr_31 [i_7] = ((/* implicit */long long int) max(((unsigned char)15), ((unsigned char)68)));
    }
    /* vectorizable */
    for (signed char i_8 = 2; i_8 < 9; i_8 += 1) 
    {
        var_24 += ((/* implicit */int) ((unsigned int) (short)-1));
        var_25 = ((/* implicit */int) ((arr_0 [i_8]) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
        var_26 = ((/* implicit */int) var_7);
        arr_34 [i_8] = ((/* implicit */signed char) 1476838410);
        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1927691582732815354LL)) ? (arr_24 [i_8] [20] [(short)12]) : (((/* implicit */int) (unsigned short)44373))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_6 [i_8] [(unsigned char)14] [i_8])))) : (12495309663281339330ULL)));
    }
    for (unsigned char i_9 = 0; i_9 < 24; i_9 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_10 = 0; i_10 < 24; i_10 += 1) 
        {
            for (unsigned int i_11 = 0; i_11 < 24; i_11 += 1) 
            {
                for (unsigned char i_12 = 0; i_12 < 24; i_12 += 1) 
                {
                    {
                        var_28 &= ((/* implicit */long long int) arr_36 [i_9] [i_9]);
                        arr_46 [i_9] [i_9] [(unsigned char)19] [i_9] = ((/* implicit */unsigned char) ((int) var_15));
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */unsigned char) ((long long int) (unsigned char)116));
        var_30 = ((/* implicit */int) max((var_30), ((-(((/* implicit */int) ((((/* implicit */int) arr_35 [i_9] [(unsigned short)22])) != (((/* implicit */int) (unsigned char)85)))))))));
    }
}
