/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82459
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (~(8352904310137080575ULL));
        var_20 = ((/* implicit */int) 15386162823908787459ULL);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 3) 
                {
                    {
                        arr_13 [i_3 - 2] [i_2] [i_3 + 1] [4] [i_3 + 1] = var_1;
                        arr_14 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4095)) ? (var_18) : (var_18)));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) /* same iter space */
    {
        var_21 = (+(8352904310137080584ULL));
        var_22 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_4] [i_4])) && (((/* implicit */_Bool) 0))))) & (((/* implicit */int) ((((/* implicit */unsigned long long int) 524287)) <= (18199876991814392568ULL))))));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */int) min((var_23), ((-(1428406214)))));
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_8 = 2; i_8 < 16; i_8 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 3) /* same iter space */
                        {
                            var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_8 + 1] [i_8]))));
                            var_25 = ((/* implicit */int) (!((!(((/* implicit */_Bool) 5543389060944942167ULL))))));
                            arr_30 [i_5] [i_6] [i_7] [6] [i_5] [i_6] = arr_11 [i_5] [i_5] [i_6] [i_7] [i_8] [i_9];
                            var_26 = ((/* implicit */int) 246867081895159047ULL);
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 3) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1318835689)) && (((/* implicit */_Bool) 10093839763572471041ULL))));
                            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) (-(1073725440)))) ? (((/* implicit */unsigned long long int) -930740882)) : (18199876991814392558ULL)));
                        }
                        arr_33 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */int) (~(((unsigned long long int) var_0))));
                        var_29 = ((unsigned long long int) 930740884);
                        var_30 = ((/* implicit */unsigned long long int) (+(-113385160)));
                        var_31 = 24ULL;
                    }
                    for (unsigned long long int i_11 = 1; i_11 < 15; i_11 += 3) /* same iter space */
                    {
                        var_32 ^= ((/* implicit */int) (~(((((/* implicit */_Bool) 8352904310137080575ULL)) ? (9368088448693414198ULL) : (11939110290871034083ULL)))));
                        var_33 = ((/* implicit */int) (-(((unsigned long long int) 18446744073709551615ULL))));
                        var_34 &= (+(246867081895159052ULL));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_12 = 4; i_12 < 16; i_12 += 2) 
                        {
                            var_35 = arr_29 [i_5] [i_5] [i_5] [i_5] [i_5];
                            var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18199876991814392571ULL)) || (((/* implicit */_Bool) (-(-1))))));
                            var_37 = ((((/* implicit */int) ((((/* implicit */_Bool) 9557385623974893477ULL)) || (((/* implicit */_Bool) 18199876991814392568ULL))))) * (-1052421541));
                        }
                        var_38 = (((-(12903355012764609457ULL))) << (((13043532844521109695ULL) - (13043532844521109693ULL))));
                    }
                    for (unsigned long long int i_13 = 1; i_13 < 15; i_13 += 3) /* same iter space */
                    {
                        var_39 = ((/* implicit */unsigned long long int) var_12);
                        /* LoopSeq 2 */
                        for (int i_14 = 0; i_14 < 17; i_14 += 2) 
                        {
                            arr_46 [i_5] [i_14] [13ULL] [i_13] [i_13] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) (+(1)))) && (((/* implicit */_Bool) var_5))));
                            var_40 = 10038723414832717917ULL;
                            var_41 = ((/* implicit */int) (!(((/* implicit */_Bool) 2147483647ULL))));
                        }
                        for (unsigned long long int i_15 = 4; i_15 < 16; i_15 += 4) 
                        {
                            arr_49 [14ULL] [14ULL] = ((/* implicit */unsigned long long int) arr_21 [i_5] [i_5] [i_15]);
                            var_42 = ((int) var_8);
                            var_43 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 16013831660059920516ULL))));
                        }
                        /* LoopSeq 3 */
                        for (int i_16 = 0; i_16 < 17; i_16 += 2) /* same iter space */
                        {
                            var_44 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 835516587)) ? (5403211229188441920ULL) : (((/* implicit */unsigned long long int) arr_32 [i_16] [i_13] [i_13] [i_7] [13ULL] [i_5] [i_5]))))) ? (8388604) : (((int) 511937124)));
                            var_45 = ((/* implicit */int) (!(((9073812471848245503ULL) != (((/* implicit */unsigned long long int) 1792764978))))));
                            arr_53 [11] = var_4;
                            arr_54 [i_5] [i_6] [i_5] [i_13] [i_16] [i_5] = ((/* implicit */int) ((((/* implicit */unsigned long long int) -1)) ^ (var_11)));
                            var_46 = ((((((/* implicit */_Bool) arr_21 [i_6 - 1] [i_13] [i_16])) ? (((/* implicit */unsigned long long int) 62914560)) : (16370751479639409486ULL))) | (((/* implicit */unsigned long long int) 1)));
                        }
                        for (int i_17 = 0; i_17 < 17; i_17 += 2) /* same iter space */
                        {
                            var_47 = ((/* implicit */unsigned long long int) min((var_47), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -375427155)) ? (((((/* implicit */_Bool) -1094821039)) ? (var_0) : (-1))) : (((((/* implicit */_Bool) 17411402343778637348ULL)) ? (1255360835) : (-694042588))))))));
                            var_48 = ((/* implicit */int) ((arr_29 [0ULL] [i_6 - 1] [0ULL] [i_13] [i_13]) | (((/* implicit */unsigned long long int) 569707421))));
                        }
                        for (unsigned long long int i_18 = 0; i_18 < 17; i_18 += 3) 
                        {
                            arr_62 [i_5] [i_5] |= ((int) ((-113385160) / (-113385167)));
                            var_49 += ((int) 0ULL);
                            arr_63 [i_5] [i_6 - 1] [i_7] [i_13 - 1] [i_18] = (((~(11537451177815329056ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((4ULL) >= (((/* implicit */unsigned long long int) -1398747119)))))));
                            var_50 = (~(((((/* implicit */_Bool) 1719663146)) ? (-1) : (8191))));
                        }
                        var_51 = var_4;
                        var_52 = (~(17462769669332041110ULL));
                    }
                    var_53 += ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(arr_17 [i_5] [16ULL])))) & (14220563737061758742ULL)));
                    var_54 = ((/* implicit */int) 8066063693911348318ULL);
                    var_55 = ((int) ((17053731204282622366ULL) * (var_15)));
                }
            } 
        } 
        var_56 = ((/* implicit */unsigned long long int) max((var_56), (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
    }
    var_57 = ((/* implicit */unsigned long long int) ((((unsigned long long int) (~(-1)))) != (((max((9320950985565891475ULL), (((/* implicit */unsigned long long int) 784507069)))) - (((/* implicit */unsigned long long int) 0))))));
    var_58 = ((/* implicit */int) ((((/* implicit */_Bool) var_16)) ? (var_17) : (var_17)));
}
