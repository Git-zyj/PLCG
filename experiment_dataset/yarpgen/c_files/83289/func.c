/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83289
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (13434400014225354345ULL)))) ? ((~(var_17))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((143833713099145216ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [(unsigned short)0])))))))));
        var_19 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    for (long long int i_4 = 2; i_4 < 18; i_4 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) arr_4 [i_3] [i_3]);
                            var_21 ^= ((/* implicit */short) (unsigned short)16092);
                        }
                    } 
                } 
            } 
            arr_12 [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) (((_Bool)1) ? (((arr_9 [i_0]) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 2]))));
        }
        arr_13 [(short)6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0 - 2]))) : (((((/* implicit */_Bool) (unsigned short)7374)) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_4 [i_0] [(_Bool)1]))))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        arr_16 [i_5] [i_5] = ((/* implicit */unsigned long long int) (-(2240366035486945181LL)));
        var_22 *= min((((/* implicit */unsigned long long int) (short)-16417)), (((((/* implicit */_Bool) ((long long int) var_17))) ? (277070984427798851ULL) : (((/* implicit */unsigned long long int) arr_7 [(short)15] [i_5])))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_6]))) : (var_16)))) ? (((/* implicit */int) arr_18 [i_6] [i_6])) : ((-(((/* implicit */int) arr_18 [(_Bool)1] [i_6]))))))) ? (((/* implicit */int) arr_19 [i_6] [i_6])) : ((((+(((/* implicit */int) arr_17 [i_6])))) * ((+(((/* implicit */int) arr_18 [i_6] [i_6]))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 1) 
        {
            for (long long int i_8 = 0; i_8 < 25; i_8 += 1) 
            {
                for (long long int i_9 = 0; i_9 < 25; i_9 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_10 = 0; i_10 < 25; i_10 += 2) 
                        {
                            var_24 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10))) * (277070984427798864ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                            var_25 &= 3183421272577765908ULL;
                            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) arr_28 [i_10] [(short)12] [(short)12] [i_6] [i_9])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_16)) == (var_4)))) : (((/* implicit */int) arr_20 [i_10] [i_10] [i_6])))))));
                            var_27 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) > (var_0)));
                        }
                        var_28 = ((/* implicit */long long int) (short)-14198);
                        var_29 = ((/* implicit */short) (+((+((+(((/* implicit */int) (short)16223))))))));
                        /* LoopSeq 2 */
                        for (long long int i_11 = 2; i_11 < 24; i_11 += 1) /* same iter space */
                        {
                            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) var_8))));
                            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_28 [i_11 + 1] [5LL] [i_11 + 1] [i_9] [i_9])))))));
                            var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [(short)23] [i_6] [23LL] [23LL] [i_6] [i_6])) ? (((((/* implicit */int) arr_30 [i_8] [i_11 - 1] [i_7] [i_9] [(_Bool)1])) ^ (((/* implicit */int) arr_30 [i_11] [i_9] [i_8] [(unsigned short)20] [(unsigned short)20])))) : (((/* implicit */int) max(((short)10397), (arr_26 [i_11 - 2] [i_11 + 1] [i_11 - 1] [i_8]))))));
                            arr_36 [i_6] [i_7] [i_6] [(short)23] [i_9] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_11 - 2] [i_6] [i_11 + 1])) ? (((/* implicit */int) ((((/* implicit */int) arr_28 [i_7] [i_7] [(short)6] [i_7] [i_7])) > (((/* implicit */int) var_6))))) : (((/* implicit */int) arr_29 [i_11 + 1] [i_6] [i_11 - 1] [i_11] [i_11 + 1] [i_11]))))) ? (((/* implicit */int) var_3)) : (((var_3) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_27 [i_6] [i_7] [i_8] [i_9] [i_6] [i_11 + 1]))))));
                        }
                        /* vectorizable */
                        for (long long int i_12 = 2; i_12 < 24; i_12 += 1) /* same iter space */
                        {
                            var_33 = ((/* implicit */_Bool) arr_38 [i_6] [4LL] [4LL]);
                            var_34 = ((/* implicit */long long int) ((unsigned long long int) arr_32 [i_12 - 1] [i_9] [i_6]));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (long long int i_14 = 0; i_14 < 25; i_14 += 2) 
            {
                {
                    var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) arr_31 [i_6] [i_14] [i_13] [i_6]))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_15 = 0; i_15 < 25; i_15 += 1) 
                    {
                        var_36 = ((/* implicit */long long int) var_1);
                        var_37 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_14] [i_15])) ? (arr_23 [i_6] [i_14]) : (arr_23 [i_14] [i_14])))) ? (max((((/* implicit */long long int) arr_26 [i_15] [i_15] [i_15] [i_15])), (arr_23 [i_15] [i_14]))) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [(unsigned short)2] [4ULL] [(unsigned short)2] [(short)4])))));
                        var_38 -= ((/* implicit */short) ((((/* implicit */long long int) (+(((/* implicit */int) var_6))))) ^ (min((((/* implicit */long long int) (short)15)), (arr_33 [i_14] [i_14] [(short)4] [6LL] [i_6])))));
                    }
                }
            } 
        } 
        var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~((-(((/* implicit */int) var_5))))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) min((((/* implicit */short) arr_27 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])), (arr_21 [i_6] [i_6] [i_6]))))));
    }
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
    {
        arr_49 [(short)24] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_16] [i_16] [(short)24] [i_16]))) : (((((/* implicit */_Bool) arr_34 [i_16] [i_16] [i_16] [(short)22] [i_16])) ? (((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) arr_18 [i_16] [(unsigned short)6])) : (((/* implicit */int) arr_44 [(short)22] [i_16] [i_16]))))) : (arr_48 [18LL])))));
        arr_50 [i_16] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-10375))))) * (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15))) : (4821740244120367118ULL)))))) ? (((/* implicit */int) ((short) max((18169673089281752742ULL), (((/* implicit */unsigned long long int) var_12)))))) : (((/* implicit */int) arr_34 [i_16] [i_16] [i_16] [0LL] [i_16]))));
    }
    var_40 = ((/* implicit */_Bool) var_9);
    var_41 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)22461)) ? (277070984427798840ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
    var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -5491188073748991314LL)) + (var_1)))) ? (((((/* implicit */_Bool) (short)31691)) ? (var_17) : ((~(var_17))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
}
