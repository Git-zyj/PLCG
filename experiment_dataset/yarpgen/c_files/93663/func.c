/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93663
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
    for (int i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((((/* implicit */int) var_14)) / (((/* implicit */int) var_18)))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))))) == (var_9)));
                var_20 ^= ((/* implicit */long long int) (-(((/* implicit */int) ((signed char) arr_0 [i_0 - 4] [i_1])))));
                /* LoopSeq 4 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_21 = (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (0ULL))))))));
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((2157704535964655464LL) != (-1497750774045483167LL))) ? (((/* implicit */unsigned long long int) ((arr_0 [i_0 - 1] [i_1]) / (arr_0 [i_0 - 4] [i_1])))) : (max((arr_7 [i_0 - 3] [i_3] [i_2] [i_3] [i_1] [i_2]), (((/* implicit */unsigned long long int) var_6)))))))));
                    }
                    arr_9 [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((arr_0 [i_0] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)2))))))));
                }
                for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0 - 4] [i_0 + 1] [i_1] [i_4])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_5 [i_4] [i_1] [i_0 - 4] [i_0 - 4])))));
                    arr_14 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-7318))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)151)) >= (((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        for (int i_7 = 1; i_7 < 10; i_7 += 2) 
                        {
                            {
                                var_25 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-109)) / (((/* implicit */int) (signed char)118))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (((/* implicit */int) ((signed char) arr_10 [i_7] [i_7 + 1] [i_7])))))) ? (((/* implicit */long long int) max((((/* implicit */int) ((_Bool) var_2))), ((-(-639944103)))))) : (((((/* implicit */_Bool) ((unsigned int) arr_12 [i_0] [i_1] [i_0]))) ? (arr_11 [i_0] [i_0] [i_0] [i_7 + 1]) : (min((3904680814126109445LL), (((/* implicit */long long int) (short)7318))))))));
                                var_26 ^= ((/* implicit */unsigned long long int) (unsigned char)19);
                                var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_0] [i_6] [i_0] [i_0]))))) : (8388576LL)))))));
                                var_28 = ((/* implicit */signed char) var_1);
                            }
                        } 
                    } 
                }
                for (long long int i_8 = 0; i_8 < 12; i_8 += 2) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (long long int i_10 = 2; i_10 < 9; i_10 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */int) 9223372036854775807LL);
                                arr_31 [i_0 + 1] [i_1] [i_8] [i_9] [i_10 + 1] = (!(((/* implicit */_Bool) arr_7 [i_9] [i_0 + 1] [i_10 + 2] [i_9] [i_9] [i_1])));
                                var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min(((-(3326300167475827399LL))), (((/* implicit */long long int) (-(arr_0 [7ULL] [i_8]))))))))))));
                                var_31 = ((/* implicit */unsigned long long int) (short)7318);
                                arr_32 [i_8] [i_1] [i_8] [i_9] [i_10] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_24 [i_0] [i_1] [i_8] [i_10 - 2] [i_10 + 1] [i_9]))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)6))) : (arr_11 [i_10] [i_9] [i_1] [i_0 - 1]));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        for (unsigned int i_12 = 1; i_12 < 10; i_12 += 3) 
                        {
                            {
                                var_32 = ((/* implicit */_Bool) min((3649341536661770550ULL), (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (signed char)-43)))))))));
                                var_33 ^= ((/* implicit */unsigned long long int) ((long long int) var_17));
                                arr_38 [i_0] [i_0 - 4] [i_0] [i_0 - 4] [i_8] [i_0 - 4] [i_11] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_16))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_34 = ((/* implicit */_Bool) var_17);
    /* LoopNest 3 */
    for (short i_13 = 0; i_13 < 22; i_13 += 1) 
    {
        for (long long int i_14 = 3; i_14 < 20; i_14 += 4) 
        {
            for (long long int i_15 = 2; i_15 < 18; i_15 += 4) 
            {
                {
                    var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) var_3))));
                    var_36 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)0))));
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 3; i_16 < 19; i_16 += 4) 
                    {
                        for (int i_17 = 4; i_17 < 21; i_17 += 2) 
                        {
                            {
                                arr_52 [i_13] [i_13] [i_13] = ((/* implicit */unsigned short) var_5);
                                var_37 = ((/* implicit */unsigned long long int) var_4);
                                var_38 -= ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */long long int) arr_47 [i_14 - 3] [i_15 + 3] [i_16 + 1] [i_17 - 1])) > (((var_7) ? (((/* implicit */long long int) var_6)) : (arr_44 [i_14 + 1] [i_14 + 1] [i_13])))))) : (((((/* implicit */_Bool) ((short) var_12))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_13] [i_16] [i_14 + 2] [i_17]))))) : (min((var_4), (((/* implicit */int) var_14))))))));
                                var_39 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)88))));
                                var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_51 [i_13]))))) : (((((/* implicit */_Bool) min(((signed char)73), (arr_43 [i_17 - 2] [i_15] [i_13])))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_40 [i_13] [i_13])), (arr_45 [i_13] [i_14 - 3] [i_15 - 1] [i_16])))) : (((((/* implicit */_Bool) arr_41 [8ULL] [i_14] [i_13])) ? (((/* implicit */int) arr_51 [i_13])) : (((/* implicit */int) (short)-1))))))));
                            }
                        } 
                    } 
                    var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((signed char) var_0))) : (max((arr_46 [17LL] [i_14] [i_15 + 3] [i_14 + 2]), (arr_46 [i_13] [i_14] [i_15 - 1] [i_14 + 2]))))))));
                }
            } 
        } 
    } 
    var_42 = ((/* implicit */signed char) var_4);
}
