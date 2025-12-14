/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93445
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((-1390416275) | (((/* implicit */int) (unsigned short)36552)))) - (((((arr_0 [i_0]) && (((/* implicit */_Bool) (short)-29056)))) ? ((-(((/* implicit */int) (unsigned char)112)))) : ((+(((/* implicit */int) arr_2 [i_0]))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */signed char) ((arr_4 [i_0] [i_1] [i_2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                    arr_9 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */short) arr_5 [i_0]);
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0])) * ((~(((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_0 [i_0]))))))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 1; i_3 < 9; i_3 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)14872)))))));
                        /* LoopSeq 4 */
                        for (unsigned short i_7 = 0; i_7 < 12; i_7 += 4) 
                        {
                            var_12 += ((/* implicit */_Bool) var_8);
                            var_13 = ((/* implicit */_Bool) min((var_13), ((!(((/* implicit */_Bool) 1058284738))))));
                            arr_24 [i_3] [i_4] [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) -630500940)) / (arr_19 [i_4] [i_4])))) ? ((-(arr_11 [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 0U))))));
                            var_14 = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)14671))));
                            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_3)) * (13872572941472889894ULL)))) ? (4294967282U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_3 + 3] [i_3 + 3] [i_3 + 1] [i_3 + 3]))))))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_16 += ((/* implicit */unsigned char) arr_23 [i_4] [i_3 + 1]);
                            arr_27 [i_3 + 2] [i_4] [i_3 + 2] [i_8] [i_8] = ((/* implicit */_Bool) arr_4 [i_3] [i_8] [i_3]);
                            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_25 [i_3] [i_4] [i_4] [i_6] [i_8] [i_6] [i_8]))))) ? ((-(var_4))) : (((/* implicit */unsigned int) -1184659439)))))));
                        }
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_9 - 1] [i_5] [i_5] [(_Bool)1] [i_3] [i_6]))) * (arr_18 [i_9 - 1] [i_4] [i_5] [i_6] [i_4] [i_9]))))));
                            arr_31 [i_9] [i_4] [i_4] [i_6] [i_9] = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 5U)))))) * (arr_21 [i_9 - 1] [i_9 - 1] [i_9] [i_9 - 1] [i_3 + 3]));
                            arr_32 [i_9] [i_9] [i_5] [i_9] [i_3] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_30 [i_4] [i_3] [i_4] [i_4] [i_3] [i_3 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_9]))) : (13872572941472889880ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3 + 3])))));
                        }
                        for (long long int i_10 = 3; i_10 < 11; i_10 += 3) 
                        {
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (14ULL) : (((/* implicit */unsigned long long int) arr_7 [i_3 + 2]))));
                            var_20 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_28 [i_3 - 1])) + (((/* implicit */int) arr_28 [i_3 + 1]))));
                            var_21 = ((/* implicit */int) max((var_21), (((((/* implicit */int) ((((/* implicit */_Bool) 3623576630431639579ULL)) || (((/* implicit */_Bool) (signed char)-29))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_6] [i_5] [i_4] [i_3])))))))));
                        }
                    }
                } 
            } 
            arr_35 [i_3] &= ((/* implicit */short) (-(((/* implicit */int) arr_25 [i_3 - 1] [i_3 - 1] [i_3 + 2] [i_3] [i_3 - 1] [i_3] [i_3 - 1]))));
            arr_36 [i_3] = ((/* implicit */unsigned int) (((~(var_3))) < (arr_26 [(unsigned short)2] [i_4] [i_3] [i_4] [i_4])));
        }
        arr_37 [i_3] |= ((/* implicit */unsigned int) arr_19 [i_3] [i_3]);
        arr_38 [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_3 - 1] [i_3] [i_3 + 2] [i_3 + 2] [i_3 - 1] [i_3])) ? (((/* implicit */int) arr_30 [i_3] [i_3] [i_3 - 1] [i_3 + 2] [i_3 + 2] [i_3])) : (((/* implicit */int) arr_13 [i_3 + 2] [(unsigned char)1] [i_3]))));
        /* LoopSeq 1 */
        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
        {
            var_22 = arr_30 [i_3] [i_11 + 1] [i_3 + 2] [i_11 + 1] [i_3] [i_3 + 1];
            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (((_Bool)1) ? (arr_40 [i_11 + 1] [i_11]) : (arr_40 [i_11 + 1] [i_11 + 1]))))));
            /* LoopNest 2 */
            for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 2) 
            {
                for (unsigned short i_13 = 2; i_13 < 11; i_13 += 2) 
                {
                    {
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) arr_13 [11LL] [i_12] [i_11]))));
                        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) arr_0 [i_13 - 2]))));
                        var_26 *= ((/* implicit */long long int) arr_25 [i_3] [(unsigned short)11] [(unsigned short)11] [(unsigned short)11] [i_13] [i_13] [i_13 - 2]);
                    }
                } 
            } 
        }
        var_27 = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
    }
    var_28 = ((/* implicit */long long int) var_7);
}
