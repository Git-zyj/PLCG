/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75352
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
    var_19 = ((/* implicit */long long int) var_16);
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)32))) - (13965596804826611316ULL)))))) ? (((((/* implicit */_Bool) (unsigned short)9)) ? ((-(((/* implicit */int) (unsigned short)9)))) : (((/* implicit */int) arr_2 [i_0] [i_0])))) : (((/* implicit */int) ((arr_0 [i_0]) < (((/* implicit */int) var_4))))))))));
        var_21 += ((((/* implicit */_Bool) (unsigned short)65527)) ? (9424115579595016800ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_8), (((/* implicit */signed char) arr_2 [i_0] [i_0])))))));
        arr_4 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) ((arr_0 [(signed char)10]) >= (((/* implicit */int) var_2)))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 8; i_1 += 3) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) (-(var_1)));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 2; i_2 < 6; i_2 += 3) 
        {
            for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) ((9424115579595016800ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)93)))));
                    var_23 = ((/* implicit */signed char) ((arr_2 [i_2 + 2] [i_2 + 2]) ? ((-(var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))));
                }
            } 
        } 
        arr_13 [i_1] = ((/* implicit */unsigned short) ((((arr_3 [18LL]) >= (((/* implicit */long long int) ((/* implicit */int) var_2))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11))));
        arr_14 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_1])) ? (((/* implicit */int) arr_10 [i_1] [i_1])) : (((/* implicit */int) arr_10 [i_1] [i_1]))));
    }
    for (long long int i_4 = 0; i_4 < 23; i_4 += 4) 
    {
        arr_17 [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) var_11)) / ((-((-(arr_15 [i_4] [i_4])))))));
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 3; i_5 < 21; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 4) 
            {
                for (signed char i_7 = 4; i_7 < 21; i_7 += 1) 
                {
                    {
                        arr_29 [(unsigned short)20] [i_5] [i_5] [i_5] [i_7] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_26 [11LL]), (((/* implicit */long long int) max((var_17), ((signed char)95))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((9022628494114534815ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-93))))))) - (12037608941197535257ULL))) : (min(((~(var_0))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)-8192)), (9223372036854775807LL))))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (signed char i_8 = 0; i_8 < 23; i_8 += 1) 
                        {
                            var_24 ^= ((/* implicit */unsigned short) var_0);
                            arr_32 [i_4] [i_5] [i_5] [(_Bool)1] = ((/* implicit */int) var_6);
                            arr_33 [i_5] [i_6] [i_7] [i_6] [i_6] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_4] [i_5 + 1])) ? (arr_15 [i_4] [i_5 - 3]) : (arr_15 [14ULL] [i_5 - 1])));
                        }
                        for (int i_9 = 0; i_9 < 23; i_9 += 1) 
                        {
                            var_25 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_4)), ((-(9022628494114534797ULL)))));
                            var_26 = ((/* implicit */int) max((var_26), (((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) (unsigned short)46313)))) + (((/* implicit */int) ((signed char) arr_34 [i_6] [i_6] [i_7 - 4] [i_7 - 2] [i_9] [i_9] [(unsigned short)18])))))));
                            var_27 = ((/* implicit */long long int) (~(arr_35 [i_6])));
                            arr_38 [i_4] [i_5] = ((/* implicit */int) var_15);
                        }
                        for (int i_10 = 2; i_10 < 21; i_10 += 3) 
                        {
                            arr_41 [i_4] [i_4] [i_4] [i_5] = ((/* implicit */int) arr_35 [i_5]);
                            var_28 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)53))) : (8725724278030336ULL))) & (((/* implicit */unsigned long long int) max((((/* implicit */int) var_9)), (min((((/* implicit */int) arr_31 [i_4] [i_5] [i_5] [i_7] [i_5])), (arr_15 [i_4] [i_4]))))))));
                            arr_42 [i_7] [i_5] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) var_3)) - (((/* implicit */int) ((_Bool) var_12)))))) < (((long long int) ((long long int) var_16)))));
                            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)8)) != (((/* implicit */int) (signed char)40))))) : (194660978))))));
                        }
                        for (long long int i_11 = 0; i_11 < 23; i_11 += 3) 
                        {
                            var_30 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (min((((/* implicit */unsigned long long int) (-(-694979083466821803LL)))), (((((/* implicit */_Bool) -2462965874186690488LL)) ? (9022628494114534841ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)46))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(var_16))) < (max((arr_34 [i_4] [i_4] [i_6] [i_6] [i_11] [i_5] [i_6]), (((/* implicit */unsigned long long int) (signed char)-54))))))))));
                            arr_45 [i_4] [i_5] [i_6] [i_5] [i_4] [14LL] = ((((((/* implicit */_Bool) 12037608941197535257ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)61))) : (arr_22 [i_5 - 1] [i_7 - 1] [i_5]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)119))));
                            arr_46 [i_6] &= (-(((((/* implicit */_Bool) (~(-201837752)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_1)))) : (min((-3647975263970538216LL), (7755423017613960918LL))))));
                            var_31 = arr_26 [1ULL];
                        }
                    }
                } 
            } 
        } 
        var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((signed char) 6087790843305473903LL)))));
        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_4] [i_4] [i_4]))) : (var_1)))) ? (((/* implicit */int) ((signed char) var_15))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (var_11))))))) > (-9223372036854775807LL))))));
        var_34 = ((/* implicit */short) min((((/* implicit */long long int) (signed char)127)), ((+(((((/* implicit */_Bool) arr_36 [i_4] [14LL] [14LL])) ? (arr_26 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)51)))))))));
    }
    /* vectorizable */
    for (signed char i_12 = 0; i_12 < 25; i_12 += 2) 
    {
        var_35 ^= ((/* implicit */long long int) (+(((/* implicit */int) arr_47 [i_12] [i_12]))));
        arr_50 [i_12] = ((/* implicit */signed char) (-(((/* implicit */int) arr_48 [i_12]))));
        var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) ((long long int) arr_47 [i_12] [i_12])))));
        var_37 *= ((/* implicit */unsigned long long int) arr_48 [i_12]);
        var_38 += ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))));
    }
}
