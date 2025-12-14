/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73969
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            var_19 *= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)47))));
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_1])) ^ (((/* implicit */int) arr_5 [i_1]))));
            arr_7 [i_0] [i_0] [i_0] = (-(((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))));
        }
        for (int i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            arr_11 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)28)) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2] [i_2] [i_2]))) % (var_0))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_15)) % (((/* implicit */int) (short)6457)))))))) ? ((+(((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2])) ? (3956128545695653270ULL) : (arr_1 [i_2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(signed char)9] [i_0] [i_0])))));
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                for (signed char i_4 = 3; i_4 < 22; i_4 += 2) 
                {
                    {
                        arr_18 [i_0] [i_3] [i_0] = ((/* implicit */short) (((_Bool)1) ? ((-(((/* implicit */int) arr_17 [i_0] [i_2] [i_3] [i_3] [i_3] [i_4 - 2])))) : (((((/* implicit */_Bool) (((_Bool)1) ? (arr_10 [i_0] [(signed char)14]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) min((arr_13 [i_0] [i_3] [i_3] [(signed char)19]), (var_15)))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (8191)))))));
                        var_20 = ((((/* implicit */_Bool) (~(1088152170)))) ? (((/* implicit */int) max((arr_5 [i_4 - 1]), (arr_5 [i_4 - 1])))) : (max((((((/* implicit */_Bool) (signed char)102)) ? (((/* implicit */int) arr_3 [i_2] [i_2] [10LL])) : (((/* implicit */int) arr_13 [i_0] [i_3] [i_0] [i_4 - 1])))), (((/* implicit */int) arr_13 [i_3] [i_3] [i_4 - 2] [i_3])))));
                    }
                } 
            } 
        }
        for (unsigned int i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_6 = 1; i_6 < 22; i_6 += 2) 
            {
                for (signed char i_7 = 2; i_7 < 20; i_7 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (int i_8 = 0; i_8 < 23; i_8 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 11301502355584528435ULL)) ? ((((((_Bool)1) ? (((/* implicit */int) (short)-23040)) : (8182))) % (((/* implicit */int) arr_25 [i_0] [9U] [9U] [i_7 - 2] [9U])))) : (((/* implicit */int) arr_9 [i_0] [i_6] [i_7])))))));
                            var_22 = ((/* implicit */int) (_Bool)1);
                            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)20716)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_5] [i_5] [i_6] [(signed char)10])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((arr_1 [i_6 + 1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_7] [7ULL] [i_6] [i_5] [i_8])))))))) ? (((/* implicit */int) arr_9 [i_6 - 1] [i_6 - 1] [i_6 + 1])) : ((-(((((/* implicit */_Bool) arr_8 [i_7] [i_8])) ? (((/* implicit */int) (unsigned short)6663)) : (((/* implicit */int) var_17)))))))))));
                            arr_29 [i_6] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (max((-8204), (((/* implicit */int) (signed char)-79)))) : (((/* implicit */int) ((signed char) var_4))))) % ((+(((/* implicit */int) arr_25 [i_0] [i_5] [i_6 + 1] [i_7] [i_8]))))));
                        }
                        for (int i_9 = 0; i_9 < 23; i_9 += 4) 
                        {
                            var_24 += ((/* implicit */unsigned int) var_14);
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((long long int) ((((min((((/* implicit */long long int) var_0)), (arr_14 [i_0] [i_0] [i_0]))) + (9223372036854775807LL))) << ((((~(arr_14 [i_0] [i_0] [i_0]))) - (1219062009292445175LL)))))))));
                            var_26 |= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) max((((/* implicit */long long int) var_15)), (var_1)))) ? ((-(-273582664))) : (((/* implicit */int) var_5))))));
                        }
                        for (int i_10 = 0; i_10 < 23; i_10 += 2) 
                        {
                            arr_35 [11ULL] [i_6] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_21 [i_5])), ((~(((unsigned long long int) arr_22 [i_6] [i_7] [i_6] [i_6]))))));
                            arr_36 [i_0] [i_0] [i_0] [i_7] [i_6] [i_5] = ((/* implicit */signed char) ((2574261756U) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        }
                        var_27 = ((/* implicit */_Bool) ((min((((/* implicit */int) arr_24 [(signed char)10] [i_5] [i_5])), (-71996655))) % (((/* implicit */int) var_18))));
                        arr_37 [i_0] [i_6] [(signed char)17] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-72))))) ? (((((/* implicit */_Bool) arr_5 [i_6 + 1])) ? (((/* implicit */int) arr_5 [i_6 + 1])) : (((/* implicit */int) arr_5 [i_6 + 1])))) : ((~(33554431)))));
                        arr_38 [i_6] [i_5] [i_6] [i_7 - 2] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) arr_12 [i_6 + 1] [i_6] [i_7 + 2] [i_7 - 1])) || (((/* implicit */_Bool) arr_0 [i_7 + 2])))));
                    }
                } 
            } 
            var_28 = ((/* implicit */_Bool) arr_0 [i_0]);
            arr_39 [i_0] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_1 [i_5])))) ? (((/* implicit */int) ((signed char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-48)))))) : (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned short)30649)))))));
        }
        for (long long int i_11 = 0; i_11 < 23; i_11 += 1) 
        {
            arr_42 [i_0] |= ((short) ((((/* implicit */_Bool) -4959756673707533625LL)) ? (((/* implicit */int) (unsigned char)183)) : (((((/* implicit */int) var_4)) | (71996654)))));
            var_29 = ((/* implicit */long long int) var_17);
        }
        var_30 *= ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) ((unsigned char) (signed char)-24))) ? ((~(((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [2U])))))));
    }
    var_31 |= ((/* implicit */signed char) var_11);
}
