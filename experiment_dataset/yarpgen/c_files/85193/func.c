/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85193
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
    var_15 = ((/* implicit */_Bool) ((((long long int) (_Bool)0)) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    var_16 = ((long long int) var_14);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_4 [23LL] = ((/* implicit */long long int) arr_2 [i_0] [i_0]);
        arr_5 [i_0] = ((/* implicit */long long int) ((arr_2 [i_0] [i_0]) ? (((((/* implicit */_Bool) ((long long int) arr_0 [i_0]))) ? (((arr_2 [i_0] [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)0)))) : (((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))) : ((+(((/* implicit */int) min((arr_3 [i_0] [i_0]), (arr_0 [i_0]))))))));
    }
    for (long long int i_1 = 1; i_1 < 19; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 3; i_2 < 19; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))) + (4513077665075220771LL))))));
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            var_18 &= (((_Bool)1) || (((/* implicit */_Bool) ((max(((_Bool)1), ((_Bool)1))) ? (((/* implicit */int) (_Bool)1)) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))))));
                            arr_20 [i_5] [i_4] [(_Bool)1] [i_1] [i_1] &= ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) arr_17 [i_1] [i_1] [i_4 + 1] [(_Bool)1] [(_Bool)1])))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_19 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_14 [i_1 + 1] [i_2 - 3] [i_1] [i_4 + 1])))) ? (((((/* implicit */_Bool) -4677380810364262790LL)) ? (572845196362897063LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_14 [i_1 + 1] [i_2 - 3] [i_1] [i_4 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_14 [i_1 + 1] [i_2 - 3] [i_1] [i_4 + 1])))));
                            var_20 = (_Bool)1;
                        }
                        for (long long int i_7 = 0; i_7 < 20; i_7 += 4) 
                        {
                            var_21 = ((/* implicit */_Bool) (~(min((((7468134696504742062LL) & (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))))), (((((/* implicit */_Bool) 1498171354444511609LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_4] [i_4] [i_3] [i_2] [i_1 + 1] [i_1]))) : (arr_19 [i_1] [i_2] [i_2] [i_7])))))));
                            var_22 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_26 [(_Bool)1] [i_1 + 1] [i_3] [i_4] [(_Bool)1] [i_2 - 2])) | (((/* implicit */int) arr_26 [i_3] [i_1 - 1] [i_1 - 1] [i_4] [i_2] [i_2 - 1]))))) ? (((arr_26 [i_1] [i_1 + 1] [i_3] [(_Bool)1] [i_1 + 1] [i_2 - 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [11LL] [i_1 + 1] [i_3] [i_4 + 1] [i_7] [i_2 + 1]))) : (-7468134696504742044LL))) : (((long long int) arr_26 [i_1] [i_1 - 1] [i_1] [i_4 + 1] [i_7] [i_2 - 1])));
                            var_23 = ((((/* implicit */_Bool) (+(arr_6 [i_7])))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((((_Bool) arr_3 [i_2] [i_7])) ? (max((arr_8 [i_1] [i_1] [i_1]), (((/* implicit */long long int) arr_9 [i_3])))) : (min((-7147267394698466549LL), (((/* implicit */long long int) arr_2 [i_1] [i_2])))))));
                        }
                        var_24 = ((/* implicit */long long int) arr_13 [i_1] [i_1] [i_1] [i_4] [i_4 + 1]);
                    }
                }
            } 
        } 
        var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7468134696504742067LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-6411895645995798209LL)))) ? ((~(-1537718429205923755LL))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) -7468134696504742063LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_12 [i_1]))))), (((arr_21 [i_1] [i_1 + 1] [i_1 - 1] [i_1] [i_1 + 1] [(_Bool)1]) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-6926309299516555086LL))))));
        /* LoopNest 2 */
        for (long long int i_8 = 2; i_8 < 18; i_8 += 4) 
        {
            for (long long int i_9 = 2; i_9 < 17; i_9 += 2) 
            {
                {
                    var_26 = ((/* implicit */long long int) (+((((((_Bool)0) ? (((/* implicit */int) arr_16 [i_9] [i_8 - 1] [i_8 - 1] [(_Bool)1])) : (((/* implicit */int) (_Bool)1)))) >> (((/* implicit */int) arr_31 [i_1 - 1] [i_1 - 1] [i_1]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_10 = 1; i_10 < 19; i_10 += 2) 
                    {
                        var_27 &= ((/* implicit */_Bool) ((arr_28 [i_9]) ? (((/* implicit */int) arr_28 [i_9])) : (((/* implicit */int) arr_16 [17LL] [i_1] [i_1 + 1] [i_1 - 1]))));
                        var_28 = ((/* implicit */_Bool) ((((-1537718429205923751LL) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)1))));
                    }
                }
            } 
        } 
    }
    for (long long int i_11 = 1; i_11 < 16; i_11 += 2) 
    {
        arr_40 [i_11] = ((/* implicit */long long int) arr_0 [i_11]);
        arr_41 [i_11] = min((((((/* implicit */_Bool) arr_36 [i_11] [(_Bool)1] [i_11 - 1] [i_11 + 2] [(_Bool)1])) ? (arr_19 [i_11 - 1] [i_11] [i_11] [14LL]) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))))), (arr_14 [i_11 + 2] [i_11 + 2] [i_11] [i_11 + 1]));
        /* LoopNest 2 */
        for (long long int i_12 = 1; i_12 < 17; i_12 += 3) 
        {
            for (long long int i_13 = 0; i_13 < 18; i_13 += 1) 
            {
                {
                    var_29 = ((/* implicit */long long int) (_Bool)1);
                    /* LoopSeq 1 */
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        var_30 = ((/* implicit */long long int) min((var_30), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 6926309299516555085LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (7517214164951573787LL) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_11])))))));
                        var_31 &= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (1537718429205923779LL)));
                        var_32 = arr_6 [i_14 - 1];
                        var_33 = ((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */int) arr_30 [i_11] [i_11])) : (((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) ((_Bool) arr_30 [i_11] [i_11])))));
                        arr_50 [i_11] [i_12] = max((max((((/* implicit */long long int) (_Bool)1)), (var_7))), (((((/* implicit */_Bool) arr_10 [i_11 + 2] [i_14 - 1] [i_12 + 1] [i_11 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_25 [i_12] [i_11])))) : (((((/* implicit */_Bool) 5588417894359247801LL)) ? (21550719032815092LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                    }
                    var_34 -= ((/* implicit */long long int) ((_Bool) arr_36 [(_Bool)1] [i_12] [i_12 - 1] [i_12] [i_12 - 1]));
                    var_35 -= ((/* implicit */_Bool) ((min(((((_Bool)1) ? (9007061815787520LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */long long int) arr_7 [i_11 - 1])))) << (((((long long int) arr_44 [6LL] [(_Bool)1] [i_11])) - (130812363430000916LL)))));
                }
            } 
        } 
        arr_51 [i_11] = ((/* implicit */_Bool) max((max((7076862799107084210LL), (((/* implicit */long long int) arr_46 [i_11] [i_11] [i_11] [i_11 + 2])))), (min((18014381329612800LL), (arr_8 [i_11 + 2] [i_11 + 2] [i_11])))));
    }
}
