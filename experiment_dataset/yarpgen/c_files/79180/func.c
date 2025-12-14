/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79180
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
    var_10 &= var_8;
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_11 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) ((signed char) var_5))))));
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 24; i_1 += 2) 
    {
        var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9)))))));
        arr_5 [i_1] [i_1 + 1] = (-(var_4));
    }
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) (unsigned short)0);
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 2; i_3 < 17; i_3 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 18; i_4 += 2) 
            {
                for (unsigned char i_5 = 2; i_5 < 16; i_5 += 3) 
                {
                    {
                        var_14 = ((/* implicit */unsigned long long int) var_9);
                        arr_16 [i_2] [i_2] [(_Bool)1] [(unsigned char)8] [i_2] = ((/* implicit */short) 1348986783);
                    }
                } 
            } 
            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) 4467570830351532032ULL))));
            arr_17 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) (!((!(((/* implicit */_Bool) var_7)))))))));
            /* LoopSeq 4 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                arr_20 [i_3] |= ((/* implicit */short) (~(((/* implicit */int) ((4294967294U) >= (((/* implicit */unsigned int) -702540048)))))));
                var_16 = 4294967294U;
                arr_21 [i_2] = ((/* implicit */unsigned char) var_0);
                var_17 = ((/* implicit */unsigned char) var_2);
                arr_22 [i_2] [i_3 - 1] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)24)) * (((/* implicit */int) (unsigned short)24))));
            }
            for (unsigned short i_7 = 0; i_7 < 18; i_7 += 3) 
            {
                arr_25 [i_2] [i_2] [(unsigned char)2] = ((/* implicit */int) ((unsigned short) var_1));
                arr_26 [i_3] [i_3] |= ((((var_8) ^ (var_7))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) -8LL)))));
                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) var_5))));
            }
            for (unsigned short i_8 = 0; i_8 < 18; i_8 += 1) /* same iter space */
            {
                arr_30 [i_3] [i_3] [i_3] [i_3] |= ((/* implicit */unsigned char) ((22U) / (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_9))))));
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 18; i_9 += 1) 
                {
                    for (unsigned short i_10 = 0; i_10 < 18; i_10 += 2) 
                    {
                        {
                            arr_35 [i_2] [i_2] [i_8] [i_9] [i_10] = ((/* implicit */unsigned int) var_5);
                            arr_36 [i_2] [i_2] [i_8] [i_10] [i_9] [i_10] [i_10] &= ((/* implicit */int) ((long long int) (_Bool)1));
                            arr_37 [i_2] [i_2] [i_8] = ((/* implicit */short) ((int) (+(var_2))));
                        }
                    } 
                } 
                arr_38 [(unsigned char)0] [i_3] |= ((/* implicit */short) var_4);
                arr_39 [i_3] |= ((/* implicit */unsigned int) (unsigned char)180);
            }
            /* vectorizable */
            for (unsigned short i_11 = 0; i_11 < 18; i_11 += 1) /* same iter space */
            {
                arr_42 [(unsigned char)8] [i_3] [i_2] = (~(((/* implicit */int) var_5)));
                arr_43 [i_2] [i_2] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (short)32767))));
            }
        }
        for (unsigned long long int i_12 = 2; i_12 < 17; i_12 += 4) /* same iter space */
        {
            arr_46 [i_2] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-31))));
            arr_47 [i_2] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)2476)) % (((/* implicit */int) (_Bool)1))));
            arr_48 [i_2] [15U] [i_2] = ((/* implicit */_Bool) var_8);
            arr_49 [i_12] [i_12] [i_12] |= ((/* implicit */short) (unsigned short)65506);
        }
        arr_50 [16] |= ((((((/* implicit */long long int) var_9)) | (var_4))) != (((/* implicit */long long int) var_3)));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)63037)) + (((/* implicit */int) var_6))));
    }
    var_20 = ((/* implicit */unsigned short) (~(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (signed char)56))))));
    var_21 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))));
}
