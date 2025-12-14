/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8029
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
    var_16 *= ((/* implicit */unsigned int) var_0);
    var_17 *= ((/* implicit */signed char) ((((/* implicit */long long int) 4294967295U)) / (-2100127806182750102LL)));
    var_18 *= ((/* implicit */_Bool) (+(-2100127806182750102LL)));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_19 -= ((_Bool) min((((/* implicit */int) ((((/* implicit */int) (unsigned short)26491)) != (((/* implicit */int) var_10))))), (((((/* implicit */int) (short)-1649)) * (((/* implicit */int) (unsigned short)18794))))));
                    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((long long int) ((unsigned int) (short)1649))))));
                    var_21 = ((((((/* implicit */_Bool) var_5)) ? (arr_4 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) != (min((((/* implicit */long long int) arr_1 [i_0])), (arr_4 [i_0]))));
                    arr_6 [i_0 + 1] [i_1 + 2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) min((arr_2 [i_0 + 2] [i_0] [i_0 - 1]), (arr_2 [i_0 - 1] [i_0] [i_0 + 4]))))) & ((((!(var_12))) ? (((((/* implicit */long long int) 2147483628)) % (-5041087008495295874LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0 + 4])))))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_22 -= ((/* implicit */signed char) max((((/* implicit */unsigned int) (signed char)63)), (17U)));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
                        {
                            {
                                arr_17 [(_Bool)1] [i_1] [i_1] [i_1 - 1] [i_0] = ((/* implicit */_Bool) min((min((1019257289278053661LL), (((/* implicit */long long int) 4284409466U)))), (((/* implicit */long long int) arr_16 [i_0] [(signed char)10] [i_1 + 4] [i_3] [i_3] [i_4] [(signed char)11]))));
                                var_23 += ((/* implicit */long long int) min((((/* implicit */int) ((short) max((var_11), (((/* implicit */signed char) (_Bool)1)))))), (min(((-(((/* implicit */int) var_5)))), (max((((/* implicit */int) (unsigned short)46742)), (2147483628)))))));
                                var_24 = ((/* implicit */int) ((((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0])))) >= (((/* implicit */int) ((unsigned short) arr_13 [i_0 + 4] [i_4] [i_3] [i_4])))));
                                var_25 = ((/* implicit */unsigned short) ((long long int) max((((/* implicit */unsigned short) ((arr_11 [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_1 + 4]) && (((/* implicit */_Bool) var_9))))), (arr_1 [i_0]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 9; i_6 += 4) 
                    {
                        for (signed char i_7 = 1; i_7 < 10; i_7 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (+(((int) (_Bool)0))))), (min((min((((/* implicit */long long int) (_Bool)1)), (5998040706213910213LL))), (((/* implicit */long long int) max((var_12), (arr_21 [i_0] [i_1] [i_1 - 2] [i_1 - 2] [i_1 - 2]))))))));
                                var_27 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) -2147483629)))))));
                                var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_20 [i_0 + 3] [i_0] [i_0] [i_0 + 4] [i_0 - 1] [i_0])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) min((arr_3 [(short)8] [i_3]), ((signed char)-96))))))) ? (min((((/* implicit */int) (!(var_12)))), (arr_12 [(signed char)2]))) : (((/* implicit */int) var_7)))))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) max((-5041087008495295874LL), (((/* implicit */long long int) (unsigned short)6097)))))));
                }
                for (long long int i_8 = 4; i_8 < 10; i_8 += 3) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_9 = 0; i_9 < 12; i_9 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (short i_10 = 3; i_10 < 8; i_10 += 1) 
                        {
                            var_30 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) (((-(((var_8) - (((/* implicit */long long int) ((/* implicit */int) var_10))))))) / (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
                            var_32 = ((/* implicit */int) ((((/* implicit */_Bool) max(((((_Bool)1) ? (((/* implicit */long long int) 1579658885U)) : (5998040706213910213LL))), (((/* implicit */long long int) (signed char)-58))))) ? (((min((((/* implicit */long long int) var_15)), (arr_18 [i_0] [i_0]))) + (((/* implicit */long long int) arr_27 [i_8 - 4] [i_1 - 2] [i_8 - 4] [i_8 - 4])))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) min((((/* implicit */unsigned short) var_14)), (arr_32 [i_0] [i_0] [i_0] [i_0]))))))));
                            var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))))))));
                        }
                        for (int i_11 = 2; i_11 < 9; i_11 += 1) 
                        {
                            arr_35 [i_0] [i_0] [i_0 + 4] [i_0] [i_0] = ((unsigned int) (-(((/* implicit */int) arr_31 [i_8] [i_8] [i_8] [i_8 - 1] [i_0] [i_8]))));
                            arr_36 [i_11 + 1] [i_0] [i_9] [8U] [i_0] [i_0] = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_2))))));
                        }
                        arr_37 [i_0] [i_0 + 2] [i_0] [0] [i_0] [i_0] = ((/* implicit */_Bool) (+(((4284409466U) - (((/* implicit */unsigned int) ((/* implicit */int) min((var_9), ((unsigned short)44269)))))))));
                        var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) (~(((((/* implicit */_Bool) (unsigned short)42360)) ? (0U) : (4294967295U))))))));
                        var_35 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)122)) ^ (((/* implicit */int) (_Bool)1))));
                        var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) ((signed char) (unsigned short)1020)))));
                    }
                    for (signed char i_12 = 0; i_12 < 12; i_12 += 3) /* same iter space */
                    {
                        arr_41 [i_0] = arr_0 [i_1] [i_0];
                        var_37 = ((/* implicit */long long int) ((2100127806182750102LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27620)))));
                        var_38 -= var_2;
                        arr_42 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_22 [i_0 + 4] [i_1 + 1] [i_12]);
                    }
                    var_39 = ((/* implicit */_Bool) (~((+(arr_4 [i_0])))));
                    arr_43 [i_8] [i_0] [i_0] [i_0 + 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-9))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (_Bool)1)))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)-91))) % ((-(arr_18 [i_0] [i_1 + 3])))))));
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                    {
                        for (unsigned int i_14 = 0; i_14 < 12; i_14 += 4) 
                        {
                            {
                                arr_48 [i_0 + 2] [i_0] = (-(min((arr_47 [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_13 + 1] [i_13] [i_13 + 1]), (((/* implicit */long long int) var_10)))));
                                var_40 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) var_2))))) & (min((-6718817950095380913LL), (var_8)))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_5)) >> (((-6718817950095380913LL) * (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))))))));
                                var_41 &= ((/* implicit */_Bool) max((((/* implicit */long long int) (+(1707709293)))), (min((((((/* implicit */_Bool) (signed char)58)) ? (((/* implicit */long long int) -52501158)) : (var_13))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)-28)))))))));
                                var_42 |= ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_3)), (arr_27 [i_1 + 3] [i_8 + 1] [3U] [i_1 + 3]))))));
                            }
                        } 
                    } 
                    var_43 = (-(((/* implicit */int) var_7)));
                }
                for (signed char i_15 = 0; i_15 < 12; i_15 += 2) 
                {
                    arr_51 [i_15] [(signed char)8] [i_15] |= ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_32 [i_0] [i_1] [i_1] [i_15])) || (((/* implicit */_Bool) var_7))))))));
                    arr_52 [2] [i_0] [i_0] [i_15] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_3))));
                    /* LoopSeq 1 */
                    for (int i_16 = 0; i_16 < 12; i_16 += 4) 
                    {
                        var_44 |= ((/* implicit */_Bool) min((((/* implicit */long long int) ((signed char) var_13))), ((+(max((((/* implicit */long long int) 480833646)), (4764896530321874676LL)))))));
                        var_45 *= ((/* implicit */unsigned short) var_2);
                        arr_56 [i_0 + 3] [11LL] [i_0] [i_16] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (-(var_15)))) ? (((/* implicit */int) ((signed char) var_1))) : (((/* implicit */int) arr_46 [i_0])))));
                        var_46 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) 52501161)), (23324712641951934LL)))) ? ((+(((/* implicit */int) var_2)))) : (((((/* implicit */int) var_4)) | (2147352576)))))) ? (((/* implicit */int) ((signed char) min((((/* implicit */long long int) arr_38 [i_0 + 1] [i_0 + 2] [i_0 - 1] [10LL] [11U] [i_0 + 2])), (arr_15 [i_0] [i_1] [i_15] [i_16] [(signed char)0]))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_15]))) < (min((((/* implicit */unsigned int) var_1)), (arr_53 [i_1] [i_1 + 1] [i_15] [i_16] [i_1 + 3]))))))));
                    }
                }
                var_47 = ((/* implicit */unsigned short) max((var_47), (((/* implicit */unsigned short) (+(((/* implicit */int) min((arr_25 [i_0 + 2] [i_1 + 2] [i_1 - 2]), (arr_25 [i_0 + 3] [i_1 + 2] [i_1 + 4])))))))));
                var_48 = ((/* implicit */signed char) (+((-((-(7332608697085012104LL)))))));
                var_49 = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) (_Bool)1)), (4144601439533244145LL))), (((/* implicit */long long int) ((var_15) >> (((((/* implicit */int) var_2)) - (73))))))));
            }
        } 
    } 
}
