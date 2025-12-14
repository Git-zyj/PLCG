/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86409
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
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) arr_1 [i_0] [(_Bool)1])) == (var_16))))) <= ((((_Bool)0) ? (((/* implicit */unsigned int) arr_1 [i_0] [i_0])) : (var_1)))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    var_17 -= ((/* implicit */_Bool) ((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (((var_9) ? (((/* implicit */unsigned int) var_3)) : (var_1)))));
                    arr_8 [(_Bool)1] [i_0] = ((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_2 + 1] [i_2])) ? (var_16) : (arr_4 [i_0] [i_2 + 1] [i_2]))) : (((/* implicit */long long int) max((arr_1 [i_0] [i_2 - 1]), (((/* implicit */int) var_6)))))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) > (var_1))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 1; i_3 < 9; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                {
                    arr_16 [i_0] [i_0] [6ULL] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) arr_0 [i_0])), (arr_15 [i_0] [i_3 - 1] [i_3 + 3] [i_3 + 3]))), (((/* implicit */long long int) var_5))))) ? (((/* implicit */int) min((arr_13 [i_0]), (((_Bool) 4162291719U))))) : ((~((~(((/* implicit */int) var_8))))))));
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_11 [i_4] [i_3 + 2] [i_3 + 1]) ? (arr_4 [i_4] [i_3 + 3] [(_Bool)1]) : (arr_4 [i_4] [i_3 - 1] [4])))) ? ((+(((/* implicit */int) arr_10 [i_3 + 2] [i_3 + 2] [i_3 - 1])))) : (arr_6 [i_4] [i_3 + 1] [i_3 + 2] [i_3 + 2]))))));
                    arr_17 [i_4] [(_Bool)1] [i_0] = (-(((((/* implicit */_Bool) var_10)) ? (var_1) : (var_1))));
                }
            } 
        } 
        var_19 = ((/* implicit */_Bool) -6530456154074865831LL);
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_20 = ((/* implicit */_Bool) max((var_20), ((!(((/* implicit */_Bool) arr_20 [i_5]))))));
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_29 [i_7] = ((((/* implicit */_Bool) (short)5336)) ? (2147483629) : (((/* implicit */int) (short)5325)));
                    arr_30 [i_6] [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */long long int) var_3)) != (((((/* implicit */_Bool) (short)5336)) ? (var_16) : (arr_28 [i_5] [i_6] [i_6] [i_6])))));
                }
            } 
        } 
        arr_31 [i_5] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32755)) ? (((/* implicit */int) (_Bool)0)) : (349880020)))));
    }
    for (unsigned long long int i_8 = 1; i_8 < 23; i_8 += 4) 
    {
        arr_35 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)143)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-5326)) ? (-349880028) : (((((/* implicit */_Bool) (short)13098)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (short)-5336))))))) : (5932107187595637028LL)));
        arr_36 [i_8] = max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_32 [i_8]))))), (((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned int) arr_32 [i_8]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) * (1025265846U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)6))))))));
    }
    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
    {
        arr_40 [i_9 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_9 + 1]))) : (((long long int) var_3))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [i_9])) ? (((/* implicit */int) arr_18 [i_9] [i_9 + 1])) : (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) (~(var_14)))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_37 [i_9 + 1]))) : (41948526063135348LL)))));
        var_21 &= ((/* implicit */short) min(((-(((((/* implicit */_Bool) var_11)) ? (arr_27 [i_9 + 1]) : (arr_27 [i_9 + 1]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_9 + 1])) ? (((((/* implicit */_Bool) -1266265510958231753LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-29451)))) : (arr_39 [i_9 + 1] [i_9]))))));
        arr_41 [i_9 + 1] = ((/* implicit */unsigned int) ((short) (((!(((/* implicit */_Bool) arr_24 [i_9] [i_9] [8LL])))) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_34 [i_9]))))) : ((~(var_12))))));
    }
    /* LoopSeq 3 */
    for (long long int i_10 = 2; i_10 < 9; i_10 += 2) 
    {
        arr_45 [i_10 - 1] [i_10 - 1] = ((/* implicit */_Bool) (((((~(1008))) + (2147483647))) << (((((/* implicit */_Bool) arr_12 [i_10 - 2])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_12 [i_10 + 2]))))));
        var_22 *= ((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) (unsigned char)69)) : (-730643492)));
        var_23 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_34 [i_10 - 2])) ? (((/* implicit */int) arr_34 [i_10 - 1])) : (((/* implicit */int) arr_34 [i_10 - 2]))))));
        arr_46 [(_Bool)1] = ((/* implicit */_Bool) ((((arr_44 [i_10]) ? (((/* implicit */int) arr_44 [i_10])) : (var_3))) << (((/* implicit */int) arr_44 [i_10 + 1]))));
        var_24 -= ((/* implicit */_Bool) var_4);
    }
    for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 1) 
    {
        var_25 = min((var_9), ((_Bool)0));
        var_26 = ((/* implicit */_Bool) ((unsigned int) ((unsigned int) ((((/* implicit */_Bool) arr_33 [(unsigned char)9])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967295U)))));
    }
    for (long long int i_12 = 0; i_12 < 24; i_12 += 1) 
    {
        var_27 ^= ((((/* implicit */_Bool) (short)32101)) ? (((int) (_Bool)0)) : (((/* implicit */int) (!(((/* implicit */_Bool) 3224957965U))))));
        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) (short)-5326))));
        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 8403745951152952579LL)) ? (2147475456LL) : (-10LL)))))));
    }
    /* LoopNest 2 */
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        for (short i_14 = 0; i_14 < 18; i_14 += 1) 
        {
            {
                arr_57 [i_13] = ((/* implicit */long long int) var_11);
                arr_58 [i_13] = ((/* implicit */long long int) (+(((arr_53 [i_13] [i_14]) ? (arr_51 [i_13] [i_14]) : (((/* implicit */int) arr_52 [i_13] [i_13]))))));
                var_30 = ((/* implicit */int) var_1);
                var_31 &= ((/* implicit */unsigned long long int) arr_50 [i_13] [i_14]);
            }
        } 
    } 
}
