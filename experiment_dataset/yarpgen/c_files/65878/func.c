/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65878
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-23)) ? (7614215794833920103LL) : (((/* implicit */long long int) 343625058))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (max((7614215794833920103LL), (((/* implicit */long long int) (unsigned short)14814))))));
                arr_5 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 - 1]))))), (min((((/* implicit */int) max((arr_3 [i_0]), (((/* implicit */unsigned char) var_7))))), (((int) arr_2 [i_1]))))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) arr_3 [i_0])), (var_11)))) ? (((long long int) (unsigned char)3)) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)0))))))))));
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((signed char) min((var_0), (arr_1 [i_1 + 2] [9]))));
                    /* LoopSeq 4 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) max((((/* implicit */int) arr_7 [i_3])), ((-(((((/* implicit */_Bool) var_13)) ? (469254551) : (((/* implicit */int) (signed char)0)))))))))));
                        var_22 = ((/* implicit */long long int) max((var_22), ((~(var_13)))));
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) min((max((((/* implicit */int) var_9)), (1641200134))), (((/* implicit */int) min(((signed char)1), ((signed char)-1)))))))));
                        arr_12 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (signed char)126)) == (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [3U])) >= (343625056))))))) | (((/* implicit */int) min((var_16), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_3]))))))))));
                        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) - (-3501801281058993854LL))))));
                    }
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 1; i_5 < 19; i_5 += 2) 
                        {
                            arr_20 [i_4] [i_1] [i_2] [i_4] [i_0] [i_0] [9ULL] = ((/* implicit */signed char) (unsigned char)210);
                            var_25 = ((/* implicit */unsigned char) 2320507280156936644LL);
                            arr_21 [i_5] [i_0] [(signed char)1] [i_0] [i_0] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (unsigned char)242))))));
                        }
                        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) arr_14 [i_0] [i_1 + 1] [i_1] [i_0] [i_1] [i_1 - 1]))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        var_27 *= ((/* implicit */short) (unsigned short)58982);
                        arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)41171)) ^ (((/* implicit */int) (signed char)-121))));
                        var_28 = ((/* implicit */int) ((short) (-9223372036854775807LL - 1LL)));
                        arr_26 [i_6] [i_0] [i_2] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(9223372036854775807LL)))) ? (arr_10 [i_0] [i_1] [i_0] [i_1] [(signed char)11] [i_1]) : (((/* implicit */int) var_2))));
                    }
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        var_29 &= var_6;
                        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) arr_27 [i_7] [i_2] [i_1] [i_0]))));
                        arr_29 [i_7] [i_7] [i_0] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_0] [i_7 - 1])) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) (signed char)1))))) + (arr_0 [i_0] [i_2])))) ? (((/* implicit */int) ((((((/* implicit */_Bool) 3474650379U)) ? (10183113145279701287ULL) : (((/* implicit */unsigned long long int) 343625073)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_2] [i_1])))))) : (max((-1859882319), (((/* implicit */int) (unsigned char)48))))));
                    }
                }
                for (signed char i_8 = 3; i_8 < 19; i_8 += 1) 
                {
                    arr_33 [i_0] [18U] [18U] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) ((long long int) arr_11 [i_8] [i_0]))) ? (((/* implicit */unsigned long long int) (-(1859882319)))) : (((((/* implicit */_Bool) 427584260U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (2047ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(var_1))))))))));
                    var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) min((-3501801281058993854LL), (((/* implicit */long long int) ((int) -1859882312))))))));
                    arr_34 [i_0] [i_1] [(signed char)10] &= min((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */long long int) -1859882316))))) && (((/* implicit */_Bool) arr_32 [i_1] [i_1 - 1] [i_1] [i_1 + 2]))))), (max(((+(((/* implicit */int) (signed char)1)))), ((-(469254551))))));
                    var_32 = ((/* implicit */unsigned char) arr_32 [i_0] [i_0] [i_1] [i_1]);
                    arr_35 [i_0] [i_0] [(short)7] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) min((var_16), (var_12))))))));
                }
                var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((arr_28 [i_1] [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1]), (((/* implicit */long long int) var_12))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [i_1]))) / (arr_0 [i_1] [i_1]))) : (min((-7614215794833920103LL), (((/* implicit */long long int) (signed char)24)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_14)), (2147483647)))) ? (((2147483647) - (((/* implicit */int) (unsigned char)116)))) : (min((var_18), (((/* implicit */int) (signed char)127))))))))))));
            }
        } 
    } 
    var_34 = var_18;
}
