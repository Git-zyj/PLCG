/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98521
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
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */short) var_1)), (arr_1 [i_0]))))));
        var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)192)))), (((/* implicit */int) arr_0 [i_0 + 3] [i_0])))) >> (max((((/* implicit */int) ((short) arr_0 [i_0] [i_0]))), (((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) var_9)))))))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 23; i_3 += 3) 
                {
                    {
                        var_12 = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((((/* implicit */short) var_3)), ((short)-25978)))) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) (short)24551)))) < (((/* implicit */int) ((_Bool) ((arr_3 [i_1] [i_1]) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_1])))))))));
                        var_13 = ((/* implicit */unsigned char) var_10);
                        var_14 = min((min((((/* implicit */short) arr_6 [i_1])), (arr_7 [i_1] [i_1] [i_2] [i_0 - 2]))), ((short)32647));
                        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((~(((/* implicit */int) var_2))))))) ? (min((((/* implicit */unsigned long long int) (short)-31398)), (min((var_5), (((/* implicit */unsigned long long int) arr_5 [i_1] [i_0 + 2] [i_2])))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */int) var_2)) / (((/* implicit */int) var_6)))), (((/* implicit */int) arr_3 [i_1] [i_1])))))));
                    }
                } 
            } 
        } 
    }
    for (short i_4 = 1; i_4 < 20; i_4 += 3) 
    {
        var_16 = ((/* implicit */_Bool) min(((-(((/* implicit */int) var_6)))), (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (min((var_2), (((/* implicit */short) var_6)))))))));
        arr_14 [i_4] = (~(4186112ULL));
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (short i_6 = 0; i_6 < 22; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 1; i_7 < 20; i_7 += 1) 
                {
                    {
                        arr_25 [19ULL] [i_7] [i_6] [i_7] = ((/* implicit */signed char) arr_8 [i_7]);
                        arr_26 [i_7] [i_7] [i_7] [i_7 - 1] = ((/* implicit */short) min((((((/* implicit */_Bool) (short)25977)) ? (((/* implicit */int) min((arr_23 [(short)17] [i_7]), (((/* implicit */short) var_9))))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_20 [i_4 - 1] [i_5] [i_6])), (var_0)))))), (((/* implicit */int) min((((/* implicit */unsigned char) (!(var_4)))), (arr_11 [i_5] [i_6]))))));
                    }
                } 
            } 
        } 
        arr_27 [(unsigned short)21] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [(_Bool)1]))));
    }
    /* LoopSeq 2 */
    for (short i_8 = 0; i_8 < 20; i_8 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
        {
            arr_32 [i_8] = ((/* implicit */short) (+(((/* implicit */int) ((short) var_6)))));
            var_17 = ((/* implicit */short) 1214189623559931160ULL);
            arr_33 [i_8] [i_9] = var_4;
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_11 = 3; i_11 < 19; i_11 += 3) 
            {
                for (short i_12 = 0; i_12 < 20; i_12 += 4) 
                {
                    {
                        var_18 = ((/* implicit */signed char) (-((((_Bool)1) ? (((/* implicit */int) min(((unsigned short)64265), (((/* implicit */unsigned short) var_7))))) : (((/* implicit */int) arr_7 [i_11] [i_8] [i_11] [i_11 - 3]))))));
                        var_19 = ((/* implicit */short) min((min((min((var_5), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) arr_40 [i_8] [i_10] [i_11] [i_12] [i_12])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) || ((!(((/* implicit */_Bool) var_7)))))))));
                    }
                } 
            } 
            arr_41 [i_8] [i_10] = ((/* implicit */unsigned short) var_6);
            var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_38 [i_8] [8ULL] [i_10] [(_Bool)1]))) ? (((/* implicit */int) ((var_5) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) : (((/* implicit */int) var_1))));
            /* LoopSeq 1 */
            for (signed char i_13 = 2; i_13 < 19; i_13 += 3) 
            {
                arr_45 [i_8] [i_8] = ((/* implicit */unsigned char) (-(((((/* implicit */int) var_9)) / (((/* implicit */int) arr_1 [i_8]))))));
                /* LoopNest 2 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (short i_15 = 4; i_15 < 19; i_15 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) arr_9 [i_15] [i_15 + 1] [(signed char)16] [i_15 - 1] [i_15 + 1] [i_8]))))));
                            var_22 = ((/* implicit */unsigned long long int) var_1);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_16 = 0; i_16 < 20; i_16 += 4) 
                {
                    arr_54 [i_8] [i_8] [(short)8] [i_8] [i_8] [i_8] = ((/* implicit */short) var_8);
                    /* LoopSeq 2 */
                    for (short i_17 = 0; i_17 < 20; i_17 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */int) var_0)) > (((/* implicit */int) (short)-4730)))))));
                        var_24 &= ((arr_48 [i_16] [i_10] [i_10] [i_10]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) (_Bool)1)))))) : (var_8));
                        var_25 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_46 [i_13] [i_8] [i_8] [i_13 + 1]))));
                    }
                    for (unsigned char i_18 = 0; i_18 < 20; i_18 += 3) 
                    {
                        arr_59 [(short)8] [i_8] [i_13] = ((/* implicit */unsigned long long int) arr_57 [i_8] [i_10] [i_8] [i_16] [i_18]);
                        arr_60 [i_8] [i_8] [i_13] [(short)2] [i_16] |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))));
                        arr_61 [i_16] |= ((/* implicit */unsigned short) (~(var_5)));
                    }
                    arr_62 [(short)13] [(short)13] [i_13] [i_13] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_11 [i_8] [i_13])) : ((~(((/* implicit */int) var_6))))));
                }
            }
            arr_63 [i_8] = ((/* implicit */unsigned short) (short)7946);
        }
        /* vectorizable */
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (-(((/* implicit */int) var_3)))))));
            var_27 = ((/* implicit */short) max((var_27), (arr_1 [i_8])));
            var_28 = ((short) var_8);
            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) (-(((/* implicit */int) var_2)))))));
            arr_66 [i_8] = ((/* implicit */short) (+((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_8] [i_19] [i_8]))) : (1214189623559931160ULL)))));
        }
        var_30 = ((/* implicit */unsigned short) var_10);
        var_31 |= ((/* implicit */unsigned short) var_4);
    }
    for (unsigned long long int i_20 = 0; i_20 < 12; i_20 += 2) 
    {
        var_32 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_64 [i_20]))));
        arr_70 [i_20] = ((unsigned char) var_1);
        var_33 = var_2;
    }
    /* LoopNest 3 */
    for (short i_21 = 0; i_21 < 23; i_21 += 1) 
    {
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
        {
            for (short i_23 = 1; i_23 < 21; i_23 += 1) 
            {
                {
                    var_34 = ((/* implicit */unsigned char) (short)-15652);
                    /* LoopSeq 1 */
                    for (short i_24 = 0; i_24 < 23; i_24 += 3) 
                    {
                        arr_80 [i_21] [i_23] [20ULL] = ((/* implicit */short) (!(((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) (short)-5509))))))));
                        var_35 = ((/* implicit */short) max((var_35), (arr_8 [(_Bool)1])));
                        /* LoopSeq 1 */
                        for (short i_25 = 1; i_25 < 19; i_25 += 4) 
                        {
                            var_36 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_75 [i_23 + 2] [i_24] [i_25 + 1])) ? (((/* implicit */int) (short)25977)) : ((+(((/* implicit */int) arr_77 [i_23] [i_22] [i_23] [i_23]))))))) ? (((/* implicit */int) min((arr_73 [i_23 + 2]), (((/* implicit */unsigned short) var_6))))) : ((~(((/* implicit */int) var_7))))));
                            arr_84 [i_23] [i_22] [i_23] [i_24] [i_25] = ((/* implicit */short) (+((~((~(((/* implicit */int) (short)15969))))))));
                        }
                        arr_85 [(unsigned short)19] [i_23] [i_22] [i_24] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (min((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) arr_9 [i_21] [(signed char)15] [i_23] [i_24] [i_22] [i_23])))))))));
                    }
                    arr_86 [(signed char)10] [i_22] [(signed char)10] [(short)16] &= ((/* implicit */unsigned char) var_8);
                }
            } 
        } 
    } 
}
