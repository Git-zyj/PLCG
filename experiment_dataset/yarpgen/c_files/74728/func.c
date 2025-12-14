/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74728
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
    var_10 = ((/* implicit */unsigned int) var_7);
    /* LoopSeq 4 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned short) 0ULL);
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_0 [i_0 - 2]))) ? (((((/* implicit */unsigned long long int) arr_0 [i_0 + 1])) - (281474976710655ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
        var_13 -= ((/* implicit */short) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)63))))) && (((/* implicit */_Bool) arr_1 [i_0 - 2])))) && (((/* implicit */_Bool) var_3))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 4; i_2 < 9; i_2 += 3) 
            {
                {
                    var_14 |= ((/* implicit */unsigned int) var_2);
                    arr_8 [i_2] [i_2] [i_2] [i_2 - 2] = ((/* implicit */int) arr_3 [i_0] [i_2]);
                }
            } 
        } 
    }
    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned long long int) 0U);
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (-(((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))) * (4294967278U)));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                {
                    arr_19 [i_4] [i_4] [i_6 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) > (((/* implicit */int) arr_18 [i_4] [i_6 + 1] [i_6]))));
                    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) -12LL))));
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 16; i_8 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_25 [i_7] [i_6 + 1]))));
                                var_18 = ((/* implicit */int) ((((/* implicit */int) (unsigned char)162)) > (((/* implicit */int) (unsigned short)33751))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_4])) == (((/* implicit */int) arr_9 [i_4]))));
        arr_26 [i_4] [i_4] = ((/* implicit */unsigned char) arr_24 [(short)9] [i_4]);
        arr_27 [i_4] = ((/* implicit */unsigned char) (-(3447548566U)));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_4))));
        arr_31 [i_9] [i_9] = ((/* implicit */int) min((min((arr_21 [i_9] [(short)9] [i_9] [i_9]), (arr_21 [i_9] [i_9] [i_9] [i_9]))), (((/* implicit */short) arr_16 [i_9]))));
        /* LoopNest 3 */
        for (short i_10 = 0; i_10 < 14; i_10 += 2) 
        {
            for (unsigned short i_11 = 0; i_11 < 14; i_11 += 1) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_36 [i_9] [i_9] [i_9] [(_Bool)0] [(_Bool)0])))) * (((((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_9] [i_10]))))) + (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127)))))))));
                        arr_40 [(unsigned short)8] [i_9] [(signed char)2] = ((/* implicit */int) (signed char)-127);
                    }
                } 
            } 
        } 
    }
}
