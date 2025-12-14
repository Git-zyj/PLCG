/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56768
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
    var_13 = ((/* implicit */unsigned char) var_7);
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */short) ((((/* implicit */long long int) ((arr_2 [i_0]) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0]))))) - ((-(max((((/* implicit */long long int) arr_3 [i_0] [i_0])), (-4853968373032623303LL)))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (long long int i_2 = 3; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_11 [i_0] [i_2] [i_2] [i_0] = ((((/* implicit */_Bool) (+(var_12)))) ? ((+(((long long int) var_7)))) : (((/* implicit */long long int) (+((+(arr_1 [i_2])))))));
                    var_15 = ((((/* implicit */_Bool) max(((-(((/* implicit */int) (unsigned char)253)))), (((/* implicit */int) (unsigned char)253))))) ? (((/* implicit */long long int) max((((/* implicit */int) max((var_7), (arr_10 [i_0] [i_0])))), (max((var_9), (((/* implicit */int) (unsigned char)246))))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_8 [i_0] [i_0] [1LL])), (var_12)))) ? (((long long int) var_11)) : (((var_12) ^ (7708329511310823710LL))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_17 [i_3] [i_2] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0] [(short)0] [i_0])) * (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) -5127785264334551218LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_12)))))));
                                arr_18 [i_0] [i_1 - 1] [(_Bool)1] [i_3] [i_2] = ((/* implicit */short) -5127785264334551228LL);
                            }
                        } 
                    } 
                    arr_19 [8] [i_2] = ((/* implicit */int) max((((((/* implicit */_Bool) ((var_10) / (((/* implicit */long long int) -885068716))))) ? ((-(var_11))) : (max((5468599928080136574LL), (var_6))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (7708329511310823703LL) : (-5127785264334551218LL)))) ? (((/* implicit */int) (short)4956)) : (((((/* implicit */_Bool) (unsigned char)0)) ? (var_3) : (((/* implicit */int) var_7)))))))));
                }
            } 
        } 
        arr_20 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) ? (((long long int) arr_9 [(short)2] [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) -7708329511310823696LL)) ? ((((_Bool)1) ? (804503210460722389LL) : (-3135204030211125813LL))) : (((((/* implicit */_Bool) arr_14 [i_0] [(short)2] [i_0] [i_0] [i_0] [i_0])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
    }
    for (int i_5 = 1; i_5 < 16; i_5 += 3) 
    {
        var_16 = ((/* implicit */unsigned char) var_1);
        /* LoopNest 3 */
        for (unsigned char i_6 = 2; i_6 < 18; i_6 += 3) 
        {
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                for (short i_8 = 1; i_8 < 17; i_8 += 2) 
                {
                    {
                        var_17 -= ((/* implicit */long long int) (!(var_7)));
                        arr_34 [i_5] [i_6] [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) max(((unsigned char)253), ((unsigned char)174))))) ? (((((/* implicit */_Bool) arr_33 [i_5 + 1] [i_8])) ? (arr_33 [i_5 + 1] [i_8]) : (var_11))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                        arr_35 [i_7] [i_7] [i_7] [i_7] = ((((((((/* implicit */int) arr_32 [i_5 + 3] [i_6] [i_7] [i_8 + 1])) | (((/* implicit */int) arr_29 [i_5] [12LL] [i_7] [i_7])))) ^ (max((42527994), (((/* implicit */int) (_Bool)1)))))) < ((((_Bool)1) ? (var_8) : (((/* implicit */int) var_4)))));
                    }
                } 
            } 
        } 
        arr_36 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((7049189993407866091LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (max((-100395956796739159LL), (((/* implicit */long long int) (unsigned char)0))))))) ? (((/* implicit */int) (((((_Bool)1) ? (7406732492875359164LL) : (((/* implicit */long long int) -368455060)))) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) : ((((!(((/* implicit */_Bool) var_6)))) ? (((((/* implicit */_Bool) -30)) ? (((/* implicit */int) (short)-9833)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
    }
    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
    {
        var_18 = ((/* implicit */long long int) max((var_18), (((((/* implicit */_Bool) max((max((7708329511310823714LL), (14LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1)))))))) ? (var_10) : (((/* implicit */long long int) max((((/* implicit */int) (unsigned char)255)), (max((((/* implicit */int) var_7)), (var_3))))))))));
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) 96LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (3633647455587948681LL)));
    }
    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_11 = 2; i_11 < 21; i_11 += 1) 
        {
            for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
            {
                {
                    var_20 |= ((/* implicit */long long int) (((((-(var_9))) + (((/* implicit */int) arr_39 [i_10])))) / ((+(((/* implicit */int) arr_39 [i_10 - 1]))))));
                    var_21 = (-(-7708329511310823713LL));
                    var_22 = ((/* implicit */int) (unsigned char)13);
                    arr_47 [i_11] [13LL] [i_11] = ((/* implicit */_Bool) -1596778643);
                    /* LoopSeq 2 */
                    for (int i_13 = 4; i_13 < 22; i_13 += 4) 
                    {
                        var_23 = max((((/* implicit */long long int) max(((+(((/* implicit */int) arr_46 [i_13])))), (((((/* implicit */_Bool) arr_41 [i_10])) ? (((/* implicit */int) (short)25919)) : (((/* implicit */int) var_4))))))), (max((-3633647455587948682LL), (((/* implicit */long long int) max(((_Bool)0), (var_7)))))));
                        var_24 ^= ((/* implicit */int) ((((((/* implicit */_Bool) var_3)) || (arr_44 [i_10 - 1] [i_13] [i_12 + 1]))) ? (((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((long long int) arr_39 [i_10])) : (((var_1) ? (arr_42 [i_10] [i_10] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) (short)25919))))))) : (max((-5127785264334551216LL), (max(((-9223372036854775807LL - 1LL)), (3354671500070977358LL)))))));
                    }
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        var_25 = ((/* implicit */short) max(((+((-(var_8))))), (max((((((/* implicit */int) var_1)) * (((/* implicit */int) arr_39 [i_10])))), ((+(((/* implicit */int) arr_52 [i_11] [i_11]))))))));
                        arr_53 [i_11] [i_10 - 1] [i_12] [i_10 - 1] = ((/* implicit */_Bool) (~(((long long int) arr_39 [i_10]))));
                    }
                }
            } 
        } 
        var_26 = ((/* implicit */long long int) var_4);
        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (~(((long long int) (_Bool)0)))))));
        var_28 = ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (var_6) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 368455060)) ? (((/* implicit */long long int) var_3)) : (2LL)))) ? (((arr_51 [(unsigned char)14] [(unsigned char)14] [i_10] [(_Bool)1] [(unsigned char)14] [i_10]) ? (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_10 - 1] [22LL] [i_10]))) : (arr_40 [i_10] [i_10]))) : (max((5127785264334551224LL), (941132434888512742LL))))));
    }
}
