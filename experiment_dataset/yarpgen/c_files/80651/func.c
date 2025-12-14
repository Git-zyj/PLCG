/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80651
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] = arr_0 [i_0];
        var_12 = ((/* implicit */long long int) ((int) arr_0 [i_0]));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_13 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4072660018386735889ULL)) ? (((/* implicit */unsigned long long int) arr_4 [i_1])) : (arr_3 [10ULL]))))));
        /* LoopSeq 4 */
        for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            var_14 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)27204)), (arr_5 [i_2])))) ? (-8182389097769523679LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1])) || (((/* implicit */_Bool) -3847493753445903396LL))))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 2) 
            {
                arr_9 [i_2] [i_2] [i_2] [i_2] &= ((/* implicit */unsigned char) (+(((/* implicit */int) ((arr_3 [i_2]) > (arr_3 [i_2]))))));
                var_15 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_6), (-4)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)115)) : (((/* implicit */int) (unsigned char)3)))) : (((/* implicit */int) ((((/* implicit */int) arr_7 [i_3 + 1] [i_3 + 3] [i_3 + 3])) <= (((/* implicit */int) arr_8 [i_3 - 1] [i_3 - 1] [i_2])))))));
                arr_10 [i_1] [i_2] [i_3] = var_0;
                arr_11 [i_3] [i_1] [i_1] = (short)32767;
            }
            for (short i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                arr_14 [i_1] [i_4] |= ((((/* implicit */_Bool) var_10)) ? (8000834818791565995ULL) : (((((/* implicit */_Bool) arr_8 [i_4] [i_2] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (8000834818791565972ULL))));
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    for (long long int i_6 = 2; i_6 < 19; i_6 += 1) 
                    {
                        {
                            arr_21 [i_1] [i_1] [i_1] [i_2] [i_4] [i_1] [i_6 - 1] = ((/* implicit */_Bool) arr_17 [i_6 + 1] [i_6 - 1] [i_6] [i_6 - 1] [i_6] [i_6] [i_6]);
                            var_16 = -3725789723395665087LL;
                            var_17 *= ((/* implicit */unsigned char) -3725789723395665087LL);
                            var_18 = ((/* implicit */unsigned char) ((10445909254917985620ULL) + (((/* implicit */unsigned long long int) max((((arr_6 [i_5]) ? (((/* implicit */long long int) arr_18 [i_1] [i_2] [i_4] [i_5] [i_6 - 2])) : (3725789723395665086LL))), (((/* implicit */long long int) arr_20 [i_1] [i_1] [i_4] [i_5] [i_4] [i_6 - 2] [i_1])))))));
                        }
                    } 
                } 
            }
            arr_22 [i_1] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [i_2] [15ULL])) ? (((/* implicit */int) arr_20 [i_1] [i_2] [i_2] [i_2] [(unsigned char)8] [i_2] [i_2])) : (((/* implicit */int) arr_20 [i_1] [i_2] [i_2] [i_1] [(short)14] [i_1] [i_1]))))) ? (((arr_7 [i_1] [i_2] [i_2]) ? (((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_15 [i_1])) : (var_9)))));
        }
        for (unsigned char i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((-1212183395045591330LL), (((((/* implicit */_Bool) -4552904788687401754LL)) ? (var_10) : (-8388228909363243239LL)))))) ? (max((16315747717389346348ULL), (((14811182864063588625ULL) * (2433319274104049363ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7272)))));
            var_20 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_0))) | (arr_16 [i_1] [i_7] [i_1] [i_1])));
        }
        /* vectorizable */
        for (long long int i_8 = 0; i_8 < 20; i_8 += 4) 
        {
            arr_27 [i_1] [i_8] [i_8] |= ((/* implicit */_Bool) ((long long int) -5181528879518228800LL));
            /* LoopNest 3 */
            for (short i_9 = 0; i_9 < 20; i_9 += 2) 
            {
                for (unsigned char i_10 = 0; i_10 < 20; i_10 += 2) 
                {
                    for (int i_11 = 0; i_11 < 20; i_11 += 4) 
                    {
                        {
                            arr_36 [i_1] [i_9] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) 905754868316947221LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_29 [i_1] [i_8] [i_10])));
                            var_21 -= ((/* implicit */long long int) (short)-1778);
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_22 = ((/* implicit */_Bool) (+(var_8)));
            arr_40 [i_1] [i_1] = ((/* implicit */short) max((((((/* implicit */int) var_1)) & (((/* implicit */int) (short)7271)))), (((/* implicit */int) ((var_4) <= (((/* implicit */unsigned long long int) -709229520)))))));
            arr_41 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_2);
            /* LoopNest 2 */
            for (short i_13 = 1; i_13 < 19; i_13 += 1) 
            {
                for (long long int i_14 = 0; i_14 < 20; i_14 += 2) 
                {
                    {
                        arr_47 [i_1] = var_6;
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (0ULL) : (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_3)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_1] [i_1] [i_1] [i_1])) ? (-4) : (((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-7272))) : (arr_44 [i_13 + 1])))));
                        var_24 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_1] [i_14] [i_13] [i_14] [i_14] [i_13 + 1] [i_13 + 1]))) == (4289715918280474848ULL)))), (((((/* implicit */long long int) ((/* implicit */int) (short)7271))) | (arr_38 [i_14])))));
                    }
                } 
            } 
            arr_48 [i_1] [6LL] &= ((/* implicit */short) ((((/* implicit */int) arr_46 [0] [0])) | ((+(((/* implicit */int) min(((short)-7272), (var_7))))))));
        }
        arr_49 [i_1] = ((/* implicit */long long int) var_1);
        /* LoopNest 2 */
        for (unsigned long long int i_15 = 1; i_15 < 17; i_15 += 1) 
        {
            for (long long int i_16 = 0; i_16 < 20; i_16 += 1) 
            {
                {
                    var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */unsigned long long int) var_6)) ^ (0ULL))) : (((((/* implicit */_Bool) arr_52 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_1]))) : (arr_24 [i_16]))))))));
                    var_26 = ((/* implicit */long long int) var_4);
                    var_27 = ((/* implicit */unsigned char) (short)-7272);
                    var_28 = ((/* implicit */long long int) var_3);
                    var_29 += ((/* implicit */long long int) max((max((var_7), (((/* implicit */short) (_Bool)1)))), (max((((/* implicit */short) arr_34 [i_1] [i_1] [i_16] [i_1] [(unsigned char)6])), ((short)7272)))));
                }
            } 
        } 
    }
    for (long long int i_17 = 3; i_17 < 17; i_17 += 2) 
    {
        var_30 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3558833989064394642LL)) ? (((14479521209729459244ULL) * (arr_24 [i_17 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [i_17 - 2])))))) ? (((((/* implicit */_Bool) ((long long int) arr_57 [i_17 - 1] [(_Bool)1] [i_17] [i_17 - 1]))) ? (((2778320507887607575LL) / (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_51 [i_17 - 2] [i_17 + 1] [i_17 - 1]), (arr_51 [i_17 - 3] [i_17 - 2] [i_17])))))));
        /* LoopSeq 1 */
        for (int i_18 = 0; i_18 < 18; i_18 += 3) 
        {
            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_2))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) == (arr_29 [i_17] [i_18] [i_17 - 2]))))) : (var_4)));
            /* LoopSeq 3 */
            for (long long int i_19 = 0; i_19 < 18; i_19 += 2) 
            {
                var_32 += ((/* implicit */short) 9288969821722613108ULL);
                /* LoopSeq 3 */
                for (unsigned char i_20 = 0; i_20 < 18; i_20 += 3) 
                {
                    var_33 = ((/* implicit */int) ((_Bool) arr_16 [i_17] [i_18] [i_19] [i_17]));
                    arr_68 [i_17] [i_17] [i_17] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_1)), (((min((((/* implicit */unsigned long long int) (short)-7271)), (var_4))) * (((/* implicit */unsigned long long int) (+(-2502033802122705942LL))))))));
                    arr_69 [i_17] [i_17 - 3] [i_17 - 1] [i_17] [i_17] [i_17] = ((/* implicit */int) max((16315747717389346348ULL), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_9)), (-1438386575159760250LL)))) : (var_4)))));
                    arr_70 [i_17] = ((/* implicit */int) (short)-16696);
                }
                /* vectorizable */
                for (unsigned char i_21 = 0; i_21 < 18; i_21 += 2) 
                {
                    arr_73 [i_17] = ((/* implicit */long long int) ((((((/* implicit */_Bool) -503324320)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_6 [i_18])))) == (((/* implicit */int) arr_15 [i_17 - 1]))));
                    arr_74 [i_21] [i_17] [i_17] [i_17] = ((/* implicit */long long int) (short)-7269);
                }
                for (unsigned long long int i_22 = 0; i_22 < 18; i_22 += 4) 
                {
                    var_34 ^= ((/* implicit */long long int) (_Bool)0);
                    arr_78 [i_17] = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)0))))), (8000834818791565972ULL))), (((/* implicit */unsigned long long int) max((709229519), (((/* implicit */int) var_2)))))));
                    arr_79 [i_17] = ((/* implicit */_Bool) ((((-1438386575159760250LL) >= (((/* implicit */long long int) ((/* implicit */int) var_11))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (16315747717389346348ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_17] [i_18] [11LL] [i_22])))))) ? (-1055206510) : (2021920282)))));
                }
                var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -1957445625502432272LL)), (arr_58 [i_17 - 2] [i_17 - 3])))) ? (((((_Bool) 11902050455549910576ULL)) ? (((((/* implicit */_Bool) (short)-20262)) ? (((/* implicit */unsigned long long int) var_9)) : (16315747717389346348ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) - (((/* implicit */int) (_Bool)0))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_52 [i_17])) <= (((/* implicit */int) arr_19 [i_17] [i_17] [i_17] [i_17] [i_17 - 1] [i_17]))))) - (var_9))))));
            }
            /* vectorizable */
            for (short i_23 = 0; i_23 < 18; i_23 += 4) 
            {
                /* LoopSeq 1 */
                for (int i_24 = 0; i_24 < 18; i_24 += 2) 
                {
                    var_36 = ((/* implicit */short) ((unsigned char) arr_65 [i_17] [(_Bool)1] [i_17 + 1]));
                    var_37 *= ((/* implicit */int) arr_34 [12LL] [i_17 - 1] [i_18] [i_23] [i_23]);
                    arr_86 [i_17] [i_24] &= ((/* implicit */short) 8394005744601929159LL);
                }
                var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1073741824)) ? (((8720843565185309439ULL) | (((/* implicit */unsigned long long int) -691603558)))) : (((/* implicit */unsigned long long int) -3957316776562465638LL))));
            }
            /* vectorizable */
            for (unsigned long long int i_25 = 0; i_25 < 18; i_25 += 3) 
            {
                var_39 = ((/* implicit */short) ((((/* implicit */_Bool) arr_33 [i_17] [i_18] [i_17] [i_17])) ? (((/* implicit */int) arr_20 [i_17] [i_18] [i_17 - 3] [i_17] [i_17 - 1] [i_18] [i_25])) : (-709229520)));
                var_40 = ((/* implicit */int) ((((/* implicit */_Bool) 691603557)) || ((!(((/* implicit */_Bool) 1438386575159760250LL))))));
                var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-1438386575159760250LL))) : (((((/* implicit */_Bool) arr_88 [i_17] [i_18] [i_25])) ? (((/* implicit */long long int) ((/* implicit */int) (short)7271))) : (arr_38 [i_17])))));
                arr_89 [4LL] [i_18] [i_18] [i_25] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_55 [(_Bool)1])) ? (15871406360077671513ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [(unsigned char)12])))));
            }
            var_42 *= ((/* implicit */_Bool) var_8);
            arr_90 [i_17] [i_18] = ((((/* implicit */unsigned long long int) (~(min((var_10), (((/* implicit */long long int) (_Bool)1))))))) % (max((arr_25 [i_17 + 1]), (((/* implicit */unsigned long long int) (_Bool)1)))));
            var_43 &= ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)65)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)189)))))) : (((arr_3 [(unsigned char)2]) - (var_4))))) >= (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) && (var_3)))), (min((((/* implicit */long long int) 709229519)), (var_8))))))));
        }
    }
    var_44 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (((+(8720843565185309439ULL))) == (max((((/* implicit */unsigned long long int) -709229519)), (8720843565185309439ULL)))))) : (((/* implicit */int) var_0))));
    var_45 *= ((/* implicit */unsigned long long int) var_5);
    /* LoopSeq 2 */
    for (short i_26 = 0; i_26 < 19; i_26 += 1) 
    {
        arr_94 [i_26] [i_26] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) -1438386575159760250LL))))) : (((/* implicit */int) arr_26 [i_26] [i_26] [i_26])))));
        var_46 ^= ((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_16 [(_Bool)1] [i_26] [i_26] [(_Bool)1]))))), (max((9461883180658915252ULL), (((/* implicit */unsigned long long int) -5491268350342843498LL)))))) << (((/* implicit */int) (unsigned char)30)));
        var_47 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_26] [i_26] [i_26] [i_26] [i_26] [i_26] [i_26])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_31 [i_26] [i_26] [i_26] [i_26]))))) ? (max((((/* implicit */unsigned long long int) var_7)), (10662082354707183599ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)53)))));
    }
    for (long long int i_27 = 4; i_27 < 18; i_27 += 2) 
    {
        arr_99 [i_27] = ((/* implicit */unsigned char) max((min((min((((/* implicit */unsigned long long int) (unsigned char)159)), (15008201171362018406ULL))), (((/* implicit */unsigned long long int) arr_51 [i_27] [i_27 + 1] [i_27])))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((var_4) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))))));
        var_48 = ((/* implicit */long long int) (-(((arr_46 [i_27] [i_27]) ? (766222971) : (((((/* implicit */_Bool) (short)25658)) ? (691603557) : (((/* implicit */int) var_11))))))));
    }
    var_49 = ((/* implicit */long long int) (+(((/* implicit */int) var_3))));
}
