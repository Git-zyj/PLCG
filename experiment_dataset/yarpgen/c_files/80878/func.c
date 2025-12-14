/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80878
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
    /* LoopSeq 3 */
    for (short i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            arr_4 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((13597596766445906829ULL) ^ (((/* implicit */unsigned long long int) -778790182549967782LL)))))));
            arr_5 [i_0] [(unsigned short)10] [i_1] = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [6LL]);
        }
        for (unsigned char i_2 = 1; i_2 < 17; i_2 += 3) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                arr_12 [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3] [i_2] [i_2 - 1]))) & (((((/* implicit */_Bool) (unsigned short)61440)) ? (((/* implicit */unsigned long long int) -3974844846302373344LL)) : (var_6)))));
                var_12 = ((/* implicit */short) ((((((/* implicit */_Bool) -778790182549967807LL)) ? (14917980031187121848ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) < (var_6)));
                var_13 = ((/* implicit */short) (unsigned char)153);
                arr_13 [i_3] = ((/* implicit */short) arr_1 [i_0]);
                arr_14 [18U] [(short)14] [i_3] [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_14 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)61452)) != (((/* implicit */int) (unsigned short)61440)))))));
                arr_18 [i_0] [i_0] [i_4] [i_4] = ((/* implicit */unsigned short) var_8);
                var_15 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [i_0] [i_0 - 1] [i_0])) : (((/* implicit */int) arr_2 [8ULL] [i_0 + 1] [i_0]))))));
            }
            var_16 = ((/* implicit */int) ((((/* implicit */_Bool) -7179156764127905774LL)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)63)))))) : (-5752531241865995645LL)));
            var_17 = ((/* implicit */long long int) ((min((min((var_6), (var_3))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (5752531241865995644LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))) << ((((-(((((/* implicit */_Bool) (unsigned short)4096)) ? (arr_16 [(unsigned short)7] [i_2] [i_2] [i_2]) : (31ULL))))) - (5118237860925472061ULL)))));
        }
        /* LoopNest 2 */
        for (short i_5 = 1; i_5 < 17; i_5 += 4) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_25 [i_5] = ((/* implicit */unsigned long long int) (-(4158371847U)));
                    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)153)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_5 + 1] [i_5 + 2] [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_17 [i_5 + 3] [i_5 + 3] [i_5 + 3] [i_0 + 3])) : (arr_22 [i_5 + 1] [i_5])))) : (((((/* implicit */_Bool) (unsigned short)50616)) ? (7892474335859666622ULL) : (((/* implicit */unsigned long long int) -4513979110927877213LL)))))))));
                }
            } 
        } 
        var_19 = ((/* implicit */short) max((((long long int) 778790182549967781LL)), (max((min((((/* implicit */long long int) 136595449U)), (5752531241865995644LL))), (((/* implicit */long long int) arr_20 [i_0] [i_0 + 1]))))));
        arr_26 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min(((unsigned short)13608), (((/* implicit */unsigned short) arr_20 [i_0 + 1] [i_0 + 4])))))));
        arr_27 [(unsigned short)16] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_23 [i_0])) ^ (((/* implicit */int) (unsigned short)65516)))), (((arr_2 [i_0] [i_0 + 1] [i_0]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_23 [i_0]))))))) ? ((-(((((/* implicit */_Bool) 5752531241865995644LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65507))) : (12682509119058283962ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)103)) ? (((/* implicit */int) (unsigned short)27860)) : (((/* implicit */int) (unsigned short)4097)))))));
    }
    for (unsigned short i_7 = 2; i_7 < 15; i_7 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_8 = 1; i_8 < 15; i_8 += 4) 
        {
            var_20 = ((/* implicit */unsigned short) arr_0 [i_7] [i_7]);
            var_21 = ((/* implicit */_Bool) ((-2042511885644040055LL) ^ (((/* implicit */long long int) 136595449U))));
            arr_34 [i_7] [i_8] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)58400)) ? (((/* implicit */int) arr_10 [i_8 + 1] [i_8])) : (((/* implicit */int) arr_10 [i_8 + 1] [i_8]))))), (((((/* implicit */_Bool) 2906763282U)) ? (min((((/* implicit */unsigned long long int) (short)-1)), (4187055054998653898ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16384))))))))));
            arr_35 [i_7] = 4236492425U;
        }
        /* LoopNest 2 */
        for (unsigned short i_9 = 0; i_9 < 16; i_9 += 1) 
        {
            for (short i_10 = 0; i_10 < 16; i_10 += 2) 
            {
                {
                    var_22 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_7 - 2]))) : (var_7)))) ? (((/* implicit */int) ((short) 14259689018710897712ULL))) : ((-(((/* implicit */int) arr_37 [i_7 - 1]))))));
                    var_23 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? ((-((-(1008806316530991104LL))))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)59467)), ((-(2976948348U))))))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) arr_37 [i_7 + 1])))), (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)252)))))) != (var_1)))));
    }
    for (unsigned char i_11 = 0; i_11 < 23; i_11 += 2) 
    {
        arr_42 [i_11] = ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) (_Bool)1))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) | (max((arr_40 [i_11] [i_11]), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65512))) | (-2042511885644040081LL)))))));
        arr_43 [i_11] = ((/* implicit */long long int) min(((-(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))), (((/* implicit */int) ((((/* implicit */_Bool) 2042511885644040090LL)) && (((/* implicit */_Bool) (short)-21878)))))));
        var_25 &= ((/* implicit */unsigned long long int) max(((-((-(((/* implicit */int) (short)-10030)))))), ((-(((/* implicit */int) (unsigned short)0))))));
        var_26 = ((/* implicit */unsigned short) min((var_26), (((unsigned short) min((4236492425U), (((/* implicit */unsigned int) arr_41 [i_11] [i_11])))))));
        var_27 = ((/* implicit */int) max((var_27), (max((max(((-(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) arr_41 [i_11] [i_11])))), (((/* implicit */int) ((min((((/* implicit */long long int) var_11)), (18013848753668096LL))) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9781744901916254647ULL)))))))))))));
    }
    var_28 += ((/* implicit */short) max((1917963178), (((/* implicit */int) (unsigned short)31680))));
}
